/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max((max(38612, (min(var_3, var_3)))), 40511);

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (!var_6);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    var_17 = ((((min((((4095 ? var_2 : -4119))), ((var_10 ? 4095 : 8717581281796519952))))) ? (162 + 111) : (((((4095 << (4294967295 - 4294967279))) >= var_14)))));
                    var_18 = (((((1 ? (-4096 % 26) : (min(-32743, 1800047837))))) && (((70 ? 4104 : 1)))));
                    var_19 = (((((max((min(-17194, var_13)), (30547 == 20308))))) > ((((var_4 << (var_4 - 5391795621161307025))) - (((32744 << (var_7 - 1834616016))))))));
                }
            }
        }
        var_20 = (min(var_20, 1));
    }
    var_21 |= var_3;
    var_22 = (((((var_3 ? var_3 : (min(1, 0))))) ? ((((32744 ? -4122 : 4294967293)) & (1 ^ 4294967289))) : 7));
    #pragma endscop
}
