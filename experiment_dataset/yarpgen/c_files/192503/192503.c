/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] = (max((max((max(-3169326324157721348, var_15)), ((min((arr_0 [i_0] [i_1]), (arr_2 [i_1] [i_1] [i_1])))))), (max(((max(var_4, 65510))), (max(var_12, 8384810410529726333))))));
                arr_5 [i_0] [i_0] [i_0] = (min(65510, 28));
            }
        }
    }
    var_18 = (max((min((min(var_14, 65511)), ((max(var_8, var_9))))), ((max(((min(var_3, var_0))), (min(13, var_9)))))));
    var_19 = (min((max(-14336, 14416824932341440924)), (max(((max(var_3, var_0))), (max(1239112385, 14416824932341440923))))));
    var_20 -= (min((max((min(var_14, 4324996335585397507)), ((min(var_1, 1))))), (max(((min(var_17, (-32767 - 1)))), (max(14121747738124154109, var_0))))));
    #pragma endscop
}
