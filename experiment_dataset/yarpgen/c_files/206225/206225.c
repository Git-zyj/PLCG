/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_12 = (min(var_12, ((((min((((arr_3 [8] [i_1 - 2]) ? 11757930433697151507 : (arr_3 [i_0] [i_1]))), 6688813640012400103)) < ((((arr_3 [1] [4]) ? 3188115886 : 266338304))))))));
                var_13 = (max(var_13, (((65535 < ((((max(266338325, (arr_0 [i_0]))) > (((arr_1 [i_1]) ? 3196726158 : 31844))))))))));
                var_14 = (max(var_14, ((((arr_2 [0] [i_0] [i_0]) | -1886929554)))));
                arr_4 [i_1 - 2] = ((max(((4028628978 << (1921736661 - 1921736642))), (arr_2 [i_0] [i_1 - 1] [i_1 - 1]))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_15 = (min(var_15, ((((min(-1, 11757930433697151487))) ? (((max(-8256, -322)))) : (-31874 | var_8)))));
                            var_16 += (((((arr_10 [i_5 - 1] [i_5 - 1] [22] [i_5 - 1]) <= 266338334)) ? (arr_12 [0]) : -31858));
                        }
                    }
                }
                var_17 = (arr_5 [5]);
            }
        }
    }
    var_18 = var_2;
    #pragma endscop
}
