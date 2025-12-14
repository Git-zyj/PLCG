/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = (min((min((max(15634633891745438122, 0)), 3155546982)), ((min(1, (min(36704, -1240709931)))))));
                var_13 ^= (min((max(((min(-89, var_11))), (min(0, (arr_4 [i_0] [i_1] [i_1]))))), ((max(((min((arr_5 [1] [i_1]), (arr_5 [i_1] [i_1])))), (max(var_0, 0)))))));
                var_14 += (max((min((min(3947208231, (arr_4 [i_0] [i_0] [i_0]))), ((min(var_6, 1))))), ((min((max(var_8, (arr_2 [i_1]))), ((min(var_8, (arr_3 [i_0] [i_0])))))))));
                var_15 = (max(var_15, (max(((max((max(2765950847, var_2)), (min((-127 - 1), 2225726859))))), (min((min(7, var_3)), ((min(var_0, (arr_2 [i_1]))))))))));
            }
        }
    }
    var_16 = (min(((min(((max(var_8, var_7))), (min(var_6, 116))))), (max((min(var_10, var_10)), ((max(1006632960, var_6)))))));
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            {
                arr_10 [i_3] = (max((min((min((arr_8 [i_2] [i_2] [i_2]), var_6)), ((min(-13, 106))))), (min((min(var_2, var_7)), ((min(33521664, (arr_3 [i_2] [10]))))))));
                var_17 ^= (min((min((min(var_4, 1)), ((min(var_9, (arr_0 [i_3] [i_2])))))), (max((max((arr_4 [i_2] [i_2] [i_3]), (arr_4 [i_2] [i_3] [i_2 + 4]))), ((min((arr_5 [i_2] [i_3]), (arr_5 [i_2] [i_3 + 2]))))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_18 = (min(var_18, ((min((min(((min((arr_6 [i_2 + 3]), 0))), (max(var_3, var_4)))), (min((min((arr_3 [i_4] [i_3]), 7568646243886616237)), (min((arr_4 [i_2] [i_2] [i_2 + 1]), var_2)))))))));
                            arr_15 [i_2] [i_3] [i_4] [3] = (max((min(((min((arr_7 [i_2]), (arr_9 [i_3])))), (min(var_0, var_7)))), ((min(((max(123, 1))), (min((arr_9 [i_3]), -1464003990)))))));
                        }
                    }
                }
                var_19 = (min(((min((min(116, (arr_5 [i_2] [i_2]))), (min((arr_12 [i_3 + 2] [i_2] [i_2]), var_8))))), (min((min(var_8, 840025583)), (min(var_8, var_5))))));
            }
        }
    }
    var_20 = (min(((min(((min(var_1, var_11))), (min(var_5, var_5))))), (min((min(1365634697, var_0)), ((min(2928159419, -103)))))));
    #pragma endscop
}
