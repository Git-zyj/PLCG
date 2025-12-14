/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((max((max(9815482134059906051, 23371)), (min(1, 9815482134059906050)))), (max((min(8631261939649645571, var_7)), (max(8631261939649645566, -2286))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = (min((min((min(-1, 18446744073709551600)), ((max(-14, (arr_0 [i_1])))))), (min(((max(104, -31))), (min(9815482134059906050, 8631261939649645566))))));
                var_19 = (max((max((min(18, 9815482134059906050)), ((max(15, 2080374784))))), ((min((max((arr_5 [i_1]), var_0)), ((min(var_8, (arr_4 [i_0] [i_1] [i_0])))))))));
            }
        }
    }
    #pragma endscop
}
