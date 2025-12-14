/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((((var_9 >> (var_11 - 2519166377747818302)))), (~var_12)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (min((((!((max(65511, 17)))))), ((-2509645424723217533 ? (arr_0 [i_0]) : (arr_0 [i_1])))));
                arr_5 [i_1] [i_0] = ((((min(((((arr_1 [i_0]) % (arr_2 [i_1] [i_1])))), (max(1369463942606638845, var_9))))) ? (arr_4 [i_0] [i_0] [i_0]) : (((0 + (((arr_3 [i_0]) ? var_12 : 17)))))));
            }
        }
    }
    var_15 = (((~((65535 ? -10 : 4294967280)))));
    #pragma endscop
}
