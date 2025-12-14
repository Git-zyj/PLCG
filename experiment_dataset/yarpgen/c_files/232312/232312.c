/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [i_0] [6] = ((arr_3 [i_0]) ? 1063962447 : ((-((-73 ? (arr_9 [i_0]) : 0)))));
                    var_15 = ((((~((var_2 ? 8748679295184389518 : 0)))) & (((((min(var_13, (arr_1 [i_0])))) ? -8748679295184389518 : var_1)))));
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    var_16 = (((~5631365551245338622) <= ((((1 * var_10) <= (((var_5 * (arr_7 [1] [i_0] [1] [2])))))))));
                    var_17 = ((-((min((!8191), (arr_8 [8] [i_3] [i_3] [1]))))));
                }
                var_18 = (min((((-8748679295184389519 >= (-2147483647 - 1)))), (var_11 % -5631365551245338624)));
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            arr_17 [i_0] [5] [i_1] [0] [i_4 + 1] [i_0] = ((var_11 ? (max(var_13, (max(var_2, -8748679295184389518)))) : ((min((((0 ? 24 : (arr_9 [i_0])))), 9223372036854775807)))));
                            var_19 = (((~12) ? (!var_5) : (~16158389929053951802)));
                        }
                    }
                }
            }
        }
    }
    var_20 = (max((((((0 >> (14989 - 14976)))) % (4294967295 & var_2))), (max((min(0, 8748679295184389518)), 1))));
    #pragma endscop
}
