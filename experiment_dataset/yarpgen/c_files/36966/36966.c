/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((max((min(19371, 255)), (-494214338 < 19357))))));
                var_16 = (min(((max(-23600, 20788))), (max((max(20777, 0)), 396318594))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_17 = (max(((19377 | (max(20788, 28)))), (((min(18446744073709551615, 2200861333068144503)) & (max(0, 13181861851720374889))))));
                                var_18 = ((!(((-(32752 + 3898648701))))));
                            }
                        }
                    }
                }
                arr_15 [i_0 - 1] = (~4);
            }
        }
    }
    var_19 += ((min((max(-494214338, 255)), (1 <= 512))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_20 = (max(((max(2147483647, 2200861333068144510))), 0));
                var_21 = ((min(8388520467369047592, 12291160757607695991)));
            }
        }
    }
    #pragma endscop
}
