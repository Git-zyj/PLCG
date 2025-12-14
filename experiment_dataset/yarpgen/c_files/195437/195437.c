/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_11 = (arr_4 [i_1]);
                    var_12 = ((-(((((-142952235 ? 17733846270213820714 : 4294967295))) ? (arr_6 [14]) : (arr_2 [i_1])))));
                }
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [15] [i_1] [i_5] [i_5] = var_2;
                                arr_15 [i_0] [i_0] [i_1] [i_0] [i_0] = (min(-7644, var_4));
                            }
                        }
                    }
                    var_13 = (var_8 * 13644640147554675071);
                }
                var_14 = (max(var_1, (arr_8 [i_0] [i_0] [i_1])));
                arr_16 [i_0] [i_1] [10] = (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
        }
    }
    var_15 = (((max((max(var_10, 9206286893762302369)), ((min(210, var_3))))) << (((min(var_7, var_3)) - 1878282806))));
    var_16 = (((((var_7 ? var_6 : var_1))) ? (~var_0) : ((((((var_2 ? 2675358117 : 187))) || (var_2 < var_0))))));
    #pragma endscop
}
