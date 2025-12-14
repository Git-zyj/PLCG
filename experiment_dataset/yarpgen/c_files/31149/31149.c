/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((63719 ? 0 : 14))) + (min(2329566533867891132, var_15)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_9 [i_0 - 1] [i_0] [i_1] [i_2] [i_2] [i_3] &= ((((((arr_0 [i_0 - 1]) & (arr_3 [i_0 + 1] [i_0 + 1] [i_2])))) || ((min(88, 14)))));
                        var_19 -= (!241);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_20 = (min(var_20, ((((arr_3 [i_0] [i_1] [i_2]) << (1239349760 - 1239349759))))));

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_21 = (min(var_21, (var_8 ^ -1181006767)));
                            var_22 = (55018 / 5);
                        }
                        var_23 ^= (((((arr_4 [i_1]) ? (arr_13 [6] [i_1] [i_1] [14] [i_2] [2]) : 127)) * (15 / 18267)));
                        var_24 = (((arr_12 [i_0 - 1] [9] [1] [i_0] [i_0 - 1]) | -1));
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_25 &= 699654630;
                        arr_17 [i_0] [i_0] [4] [1] = (((min(-4232174367249523834, -4165853501742122152)) | ((min((-718964615 | 699654623), -1181006791)))));
                    }
                    var_26 ^= ((((((((-114 | (arr_12 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 1])))) ? (((-(arr_15 [i_0] [8] [1] [13] [1] [i_0])))) : ((27066 ? 4270633583 : 240))))) || (~3968)));
                }
            }
        }
    }
    #pragma endscop
}
