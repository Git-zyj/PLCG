/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_11 = (min(2859910722, 32762));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_12 -= 2676656149;
                            var_13 |= ((max((2859910747 - 1435056558), 2910808500)) >> (min((1 >= 43098), ((-9 ? 2859910747 : 2)))));
                        }
                    }
                }
                var_14 = (max(var_14, ((((((min((-1481217300717744926 - 1), ((max(209499479, 64))))) + 9223372036854775807)) >> -22487)))));
                var_15 = (((max(6535835803442647994, -563637958961922396)) >= (((1 ? 32764 : (-2147483647 - 1))))));
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_16 -= (max((-1481217300717744925 - 5109), 1));
                                var_17 -= ((((min((max(1435056573, 12092432860969067557)), (-9223372036854775807 - 1)))) ? (((709590982 >= 12684) ? ((2859910743 ? 8 : 1435056562)) : 1)) : ((((max(-655698495, -741387546)))))));
                                var_18 -= (min((max(9223372036854775807, (-853152913 + 1))), (max(((max(1, -86))), (-228381086838296155 + -1975327558)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (max(var_19, (min(((((min(25246, 0))) ? (max(4225173348, 1435056545)) : (((max(41901, 7117)))))), (35206 >= 2859910743)))));
    #pragma endscop
}
