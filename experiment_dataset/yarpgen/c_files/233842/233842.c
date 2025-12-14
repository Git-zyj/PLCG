/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            arr_8 [i_0] [i_0] [i_0] = 5627558902561076853;

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                arr_11 [i_0] [i_1 - 1] [i_1] = (((var_14 ? var_15 : -939137296726341771)));
                var_19 = ((-939137296726341771 ? ((1560789482094351315 ? 33488896 : 4261478400)) : (!var_6)));
            }
            var_20 = var_13;
            var_21 = ((var_1 ? (((-9126034063422909861 + 9223372036854775807) >> (var_2 - 7182))) : (!var_17)));
            var_22 = (0 / ((4261478400 ? 25723 : var_6)));
        }
        arr_12 [i_0] = 25723;

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_15 [i_0] [i_0] [i_3] = ((8190 ? (((((4294967295 ? 2199023255552 : var_10))))) : ((10837670462073874361 ? 2147483647 : ((10037666833650382664 ? 17009 : 4261478399))))));
            arr_16 [i_0] [i_3] = 192578116;
            var_23 = (((((16125481160635535124 ? (46 && var_2) : -112))) ^ var_11));
            arr_17 [i_0] [i_3] = 27937;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_24 &= 8409077240059168951;
            arr_20 [i_0] [i_0] = (((-25724 ? 2275702305224294501 : var_0)));
            var_25 = ((!(var_1 && var_17)));
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 24;i_5 += 1)
        {
            arr_23 [i_0] [i_5 - 1] = (((-3092 ? var_1 : -104)));
            var_26 = -7327754454175861458;
            var_27 -= ((209 ? (~11483980158735943139) : ((-696188792 ? 10037666833650382671 : 3758096384))));
            arr_24 [i_0] = 65;
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        var_28 = (25742 % 1);
        var_29 = 255;
    }
    var_30 += ((+(((8409077240059168951 <= var_18) ? ((8409077240059168951 ? 18446744073709551615 : 1)) : 75))));
    var_31 |= 69;
    #pragma endscop
}
