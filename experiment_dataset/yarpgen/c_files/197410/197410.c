/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= ((-1889205878 ? -12037 : 69));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_1] [i_1 + 1] [i_1] = min((((3271 ? -1889205880 : (min(1783567144, 23021))))), ((1 ? ((1287567731 ? 5882033882227216067 : 5764180329753976270)) : (1287567713 || -99))));
                            arr_12 [i_3] [i_3] = -12;
                        }
                    }
                }
                var_15 = ((((min(5764180329753976270, 1615066879))) ? (min(798338985426056069, -1889205881)) : (((3 ? 3007399564 : 273294351)))));
                arr_13 [i_0] [i_0] [i_1] = ((((min(-20656, 1))) - (((((-5 ? 4883016747867107330 : -5))) ? 39088 : 0))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 8;i_5 += 1)
                    {
                        {
                            arr_20 [i_0] [i_5] [i_5] = (((((0 ? 1 : 233))) ? (((31 ? -1889205888 : 124))) : ((3195703700 ? -1437717437 : 7149860042909992298))));
                            var_16 = ((-124 ? 1 : ((3292285873 ? 1 : 73))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
