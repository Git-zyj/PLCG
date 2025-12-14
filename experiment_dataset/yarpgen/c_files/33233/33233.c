/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (min(((18443635523944678166 & (((262143 ? var_9 : var_17))))), ((min((arr_0 [i_0]), ((var_0 >> (var_13 - 34380))))))));
        arr_3 [i_0] = (min(((min((-127 * 23358), var_5))), (((((2406167402 ? 2936739692 : var_11))) ? -var_4 : (min(1797119688990067385, 18443635523944678166))))));
        var_19 -= ((var_1 ? ((((arr_0 [10]) + ((var_17 ? 15 : 1888799893))))) : (max(var_7, (arr_0 [6])))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            arr_8 [5] [i_0] [i_0] = var_7;
            arr_9 [i_0] [i_1] = (max((((((1888799911 ? 4294967295 : 2))) & 16651748900351299055)), (((var_11 >= 8388607) ? 1 : -17696306318013859872))));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            arr_13 [i_0] [i_0] = 4194288;
            var_20 *= (((((18446744073709551615 > 65499) ? 17420 : ((-117 ? 4010842175 : 2406167402)))) == (((((1 ? var_10 : 1797119688990067385))) ? (((arr_4 [i_0] [10] [i_2]) ? 4294967295 : 1888799893)) : -32767))));
            var_21 = ((((((var_17 >> (var_8 - 161111218125880092)))) ? ((var_16 ? -66 : 25084)) : var_5)));
        }
    }
    #pragma endscop
}
