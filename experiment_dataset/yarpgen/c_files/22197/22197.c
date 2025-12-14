/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (min((min(var_11, var_2)), 5135076132243270844));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] &= (((((~(arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 2])))) ? (((arr_3 [i_0 + 3] [i_0 + 3] [i_0 + 1]) & (arr_3 [i_0 + 2] [i_0 + 1] [i_0 + 2]))) : (arr_3 [i_0 + 2] [i_0 - 1] [i_0 + 3])));
                arr_6 [i_0] [i_1] = (max(((var_3 ? -23 : (5135076132243270843 ^ -3093128392218218426))), 5135076132243270855));
            }
        }
    }
    var_15 = var_7;
    var_16 &= (!var_8);
    #pragma endscop
}
