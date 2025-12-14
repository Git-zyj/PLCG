/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    var_18 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = ((((((arr_0 [12] [i_0 - 3]) <= (arr_0 [i_0 + 4] [i_0 + 4]))))) * (min(((22 ? var_6 : (arr_0 [i_0] [i_0]))), ((max(14, (arr_4 [i_1] [17] [i_1])))))));
                    var_20 = ((((((min(0, (arr_6 [12]))) % (arr_1 [i_2] [i_0])))) ? (((13502826672107460247 && (((68 << (((arr_2 [i_1]) - 51)))))))) : ((-27239 ? (!var_5) : 14609))));
                }
            }
        }
    }
    #pragma endscop
}
