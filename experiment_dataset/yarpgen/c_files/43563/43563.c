/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= var_3;
    var_17 = ((~(min(4294967288, 10258246598974963648))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = ((7 / (((1 ? -72 : var_2)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_19 = ((-((12 ? -84 : 18446744073709551591))));
                            arr_9 [1] [i_0] [i_2] [i_3] = (max((((((17865662840950102578 + (arr_8 [i_0] [i_1] [10] [i_3] [i_1] [i_1 - 2]))) != (arr_4 [i_0] [i_0] [i_1 - 2])))), ((-var_11 ? (arr_3 [4] [12] [i_2 - 2]) : var_7))));
                            var_20 = (((arr_3 [i_2 - 2] [i_3] [i_2]) ? (arr_8 [i_0] [i_1] [i_2] [1] [i_0] [i_3]) : -26027));
                        }
                    }
                }
                var_21 = (((max(var_3, (arr_2 [i_0] [i_1 + 1])))) ? (-29432 - var_4) : ((25 ? (arr_4 [i_1 - 1] [i_0] [i_1]) : -var_6)));
            }
        }
    }
    var_22 = var_5;
    var_23 = var_4;
    #pragma endscop
}
