/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 = ((+((-var_11 ? (!var_15) : ((var_5 << (281474976710655 - 281474976710639)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = ((var_17 ? var_0 : ((((min(var_18, -1))) ? (!6566116288428321212) : (((!(arr_4 [i_0]))))))));
                    var_21 += -6566116288428321213;
                }
            }
        }
        var_22 = ((((((~(((-1 + 2147483647) << (3584594367 - 3584594367))))) + 2147483647)) >> ((((var_1 << (((arr_1 [i_0] [i_0]) - 18294949265458973787)))) - 4065210))));
    }
    var_23 = -var_7;
    var_24 = (var_16 < (min(-9089687154797798465, var_10)));
    var_25 = ((((min((var_3 != var_7), (var_13 | var_13)))) || var_2));
    #pragma endscop
}
