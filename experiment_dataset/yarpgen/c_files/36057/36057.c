/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [0] = (min(((max((max((arr_0 [i_0] [i_0]), var_3)), ((min((arr_1 [i_0]), var_16)))))), (max(((min(var_12, 1))), (min(-11, 1059509219))))));
                arr_5 [i_0] [i_1] = (max(((max(((min(var_6, var_5))), (max(var_2, (arr_0 [i_0] [i_0 + 1])))))), (max(((max(var_8, (arr_0 [15] [i_1])))), (min((arr_2 [i_0]), (arr_1 [i_0])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                arr_10 [i_2] [i_3] = (max((max((max(var_8, (arr_7 [i_2] [i_2]))), ((min(11, var_0))))), ((max(1, 47848)))));
                arr_11 [i_2] [14] [i_2] = (min(((max((max(10, (arr_9 [i_2] [i_3]))), ((max(var_13, var_7)))))), (min(((min(62178, 15))), (max(6016493722202580450, -38))))));
                arr_12 [i_2] [i_3] [i_3] = (max(((min((min(1, var_12)), (max(-123, 1))))), (max(((min(59095, -60))), (max((arr_6 [i_2]), (arr_8 [i_2])))))));
            }
        }
    }
    var_18 &= (max((min(((min(var_7, var_7))), (min(0, 59072)))), (min((max(55141, var_1)), ((max(var_6, var_12)))))));
    var_19 = (min(((max(((min(6440, -76))), 1884181588))), (max((min(12976678177359859282, var_12)), ((min(6440, var_7)))))));
    #pragma endscop
}
