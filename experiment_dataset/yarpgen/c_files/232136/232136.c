/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((((var_10 && var_10) && 15)))) > (var_5 & 14599351875679824455)));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 -= (((arr_2 [i_0]) <= (arr_0 [i_0])));
        var_17 -= ((min((arr_0 [1]), ((min(var_11, (arr_0 [i_0])))))));
        var_18 *= (min(var_6, ((((arr_1 [i_0]) <= ((var_13 ? 3256704763 : 65032)))))));
        arr_3 [i_0] [i_0] = (min((((arr_0 [i_0]) & var_3)), (((!(-127 - 1))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_19 = (64628 % 133659979);
        var_20 = var_9;
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_21 = var_6;
        var_22 = (arr_9 [3]);
        arr_10 [i_2] [i_2] = (min((arr_6 [i_2]), (((arr_6 [i_2]) ? (arr_8 [i_2]) : (arr_6 [i_2])))));
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_2] [i_4] [i_2] = (((((min((arr_8 [17]), var_2))) ? ((-(arr_12 [i_2] [i_2] [i_2]))) : (((-(-127 - 1)))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_23 *= (~-34);
                                var_24 = ((!(((~((var_14 / (-127 - 1))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 ^= var_5;
    #pragma endscop
}
