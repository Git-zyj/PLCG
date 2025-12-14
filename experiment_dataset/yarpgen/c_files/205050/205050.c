/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = max(58549, (~13232195075930075445));
    var_13 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = 4808;
                var_15 = 23910;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] = ((~(((10775 >= ((62066 + (arr_0 [i_0] [i_2]))))))));
                            var_16 = (255 != 53643);
                        }
                    }
                }
                arr_12 [i_0] [i_1] = arr_7 [i_1] [i_0] [i_0];
            }
        }
    }
    #pragma endscop
}
