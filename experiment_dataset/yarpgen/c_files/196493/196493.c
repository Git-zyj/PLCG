/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_4 == (min(((1 ? -17 : 16777215)), ((max(var_15, var_15)))))));
    var_17 = (!var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((((((arr_4 [1]) << (((arr_3 [i_0] [i_0]) - 63596))))) ? ((~(arr_2 [i_0] [i_0]))) : ((((min(var_4, (arr_2 [i_0] [i_0])))) - (((var_14 >= (arr_2 [i_0] [i_0]))))))));
                var_18 = ((~((~(min(3764495283, var_0))))));
                var_19 = (max(((min((arr_1 [i_0] [4]), var_2))), ((942052291 ? 12159559363348774780 : 6287184710360776828))));
                var_20 ^= ((38 >= (arr_3 [i_0] [i_0])));
            }
        }
    }
    #pragma endscop
}
