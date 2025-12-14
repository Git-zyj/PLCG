/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((((((arr_2 [i_0]) ? var_4 : (arr_2 [i_0])))) ? (arr_2 [i_1]) : (arr_2 [i_0])));
                var_20 = (max(65535, 16308));
                arr_6 [i_1] = (((max(3316940921, (arr_3 [i_0]))) ^ (((((arr_1 [i_0]) || -var_5))))));
                arr_7 [i_0] [i_1] [i_0] = (((((251 - 9223372036854775807) ? var_4 : (((var_16 <= (arr_3 [i_1])))))) - ((~((-(arr_1 [19])))))));
            }
        }
    }
    var_21 = (~316284534);
    var_22 = var_3;
    #pragma endscop
}
