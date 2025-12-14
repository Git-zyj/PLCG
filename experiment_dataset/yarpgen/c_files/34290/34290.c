/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_20 = ((2631209825 > (26258 && 6058331586556973230)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_21 *= (((((-6058331586556973201 != (arr_5 [i_0] [i_4])))) > ((((arr_5 [i_0] [i_4]) >= (arr_5 [i_0] [i_1]))))));
                                var_22 = ((!((max(50, 10533)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_23 = (((arr_11 [i_5] [i_0] [i_0] [i_0] [i_0]) ? (6521455643733139761 / var_12) : (14 / 4084775940811596557)));
                                var_24 = (max(var_24, ((((((((-1876743946 ? -6058331586556973230 : var_16)) + 9223372036854775807)) << (-3341661916199304428 - 20)))))));
                                var_25 = var_17;
                                arr_19 [i_0] [i_0] = (((90 < 65535) ? -6058331586556973198 : (752752446656851602 + 1876743938)));
                            }
                        }
                    }
                }
                var_26 ^= (((~13004) | (2631209802 ^ -84)));
            }
        }
    }
    #pragma endscop
}
