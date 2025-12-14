/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((1970324836974592 ? 16383 : 30720));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = (((((15 ? (arr_3 [i_1 + 1] [i_1 - 1]) : 8))) ? ((~((16383 % (arr_1 [10]))))) : (arr_1 [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] = 13784239172884619310;
                            var_18 = (((~-var_9) ? 4662504900824932306 : (var_13 || -1)));
                            var_19 = (!-119);
                        }
                    }
                }
            }
        }
    }
    var_20 = ((((((10682104517273357669 ? var_7 : 165)) ? var_12 : var_15))));
    var_21 = 13352;
    #pragma endscop
}
