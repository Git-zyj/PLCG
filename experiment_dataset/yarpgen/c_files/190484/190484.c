/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((~-68) == ((205 ? 4 : var_10)))) ? ((-(!0))) : (((((0 ? var_0 : 2))) ? 1398994406 : 17823))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (((((126 ? (max(-1279609933, 0)) : -19538))) ? 127 : ((((var_9 | var_6) || 2)))));
        var_12 = (!255);
        var_13 *= ((!((min(((18 ? 123 : 3)), (-56 && 161))))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                var_14 = (min(var_14, 118));
                arr_8 [i_0] [i_1 + 1] [11] [i_2] = (((((-70 ? -119 : 234))) ? (!8) : 152));
            }
            var_15 = (225 != -1);
        }
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            arr_12 [i_0] [7] [8] = (((((min(16, 213))) && 9223372036854775795)) ? var_4 : 0);
            var_16 = ((69 ? (1 | 1) : -7294814892820010128));
            var_17 = ((!(((~7376420594033926439) >= -32761))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_18 *= (!0);
            var_19 = (((((-1078394314 ? -26 : -4286780447922745982))) ? ((-2144260866 ? 0 : -604567125)) : (var_0 || 206)));
        }
        var_20 = 1553724978;
    }
    #pragma endscop
}
