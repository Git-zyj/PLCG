/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_11 = (max((max(6480901911374428209, 214)), ((max((arr_4 [i_0]), (((var_10 != (arr_6 [i_1])))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_12 = (max((((arr_8 [i_0] [i_1] [i_2 + 1] [i_1]) ? var_6 : var_5)), 62337));
                            var_13 = ((((var_5 ? ((-(arr_4 [i_2]))) : -var_0)) > (arr_8 [i_3] [i_3 + 1] [i_3 - 2] [i_2 + 1])));
                            arr_11 [i_0] [i_0] [i_1] [i_3 - 2] = (((~(((3226494934 == (arr_7 [i_2] [i_2])))))));
                            arr_12 [i_0] [14] [i_0] [i_0] = (((((~(((arr_5 [i_0]) + (arr_3 [i_0])))))) ? (arr_4 [i_2]) : ((((max(1068472362, 214))) ? 7279644030993800991 : (!805306368)))));
                        }
                    }
                }
                arr_13 [i_0] [i_0] [i_0] = ((~(arr_9 [i_1] [i_0] [i_0])));
                var_14 = (min(251, (arr_1 [i_1] [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                var_15 = (1 <= 12324);
                arr_20 [i_4 + 3] [i_4 + 3] [i_5] = min((arr_0 [i_4 + 2] [i_5]), (((min((arr_3 [i_4]), (-2147483647 - 1))))));
                var_16 = (~(max((((-2147483647 - 1) / (arr_19 [i_5] [i_5] [i_4]))), (arr_16 [i_4]))));
            }
        }
    }
    var_17 = (4 * var_5);
    #pragma endscop
}
