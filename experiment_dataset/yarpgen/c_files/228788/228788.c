/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (var_2 && var_2)));
    var_13 = var_4;
    var_14 = (var_8 == var_10);
    var_15 ^= var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((((min((arr_4 [i_0] [i_1]), var_3))) ? ((((arr_5 [i_1] [i_0] [i_0]) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_5 [i_1] [1] [i_1])))) : (arr_3 [i_1])));
                arr_7 [i_0] [i_1] = ((!(!var_4)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_16 = (max(var_16, (arr_1 [i_0])));
                            var_17 = ((((((var_5 ^ (arr_9 [i_0] [i_1] [i_0] [i_0])))) | (max(var_3, (arr_8 [i_1] [i_1] [i_2]))))) >> ((((1781814711695075259 << (((max(1766510379, -1766510375)) - 1766510333)))) - 11092014038492643273)));
                            var_18 = (arr_11 [i_2] [i_1] [i_3 + 2] [i_2]);
                            var_19 = (min(var_19, (arr_10 [i_0] [i_0] [i_3])));
                            arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] = ((!((((((arr_2 [i_0]) * var_10)) | ((((arr_8 [i_1] [i_1] [i_1]) & var_0))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_20 [i_0] [i_1] = arr_14 [i_0] [i_1] [i_4];
                            var_20 = (((max((arr_2 [i_0]), (arr_2 [i_5]))) > ((((!(arr_2 [i_5])))))));
                        }
                    }
                }
                var_21 += ((-1766510376 != (arr_4 [i_0] [i_1])));
            }
        }
    }
    #pragma endscop
}
