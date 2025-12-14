/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_10);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_20 ^= (arr_3 [1] [i_1 - 2] [i_0 - 4]);
                var_21 *= (~134217727);
                var_22 = ((((((4160749593 ? -122 : 51))) ? (((var_0 ? 0 : 1023))) : (arr_0 [i_0] [i_1 + 1]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] = ((!(64512 && 1023)));
                            var_23 = 134217676;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            {
                var_24 = (4160749619 % 1);
                var_25 = ((~((134217714 ? 204 : 1))));
                arr_17 [i_4] = (min(((4036801670832528932 + (arr_13 [i_4] [i_4]))), var_3));
            }
        }
    }
    #pragma endscop
}
