/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_16 = (262143 & 1220830961);
                                var_17 = (arr_9 [i_4] [i_1] [i_2] [i_1] [i_0]);
                            }
                        }
                    }
                    arr_14 [i_1] [i_1] = -11019;
                }
                var_18 = (arr_3 [i_1]);
                var_19 = ((-3252794074 ? 4294967295 : (255 * 1)));
            }
        }
    }
    var_20 = -326555338;
    var_21 = (((14711223711635789595 ^ 8251) ? 32512 : ((((max(var_6, var_15))) ? (max(3448144830, var_2)) : (((7 ? 65519 : 16383)))))));
    var_22 = (max(var_22, ((min(((1 ? var_3 : ((-7726 ? var_7 : var_3)))), ((((min(0, 49221))) ? var_9 : var_5)))))));
    #pragma endscop
}
