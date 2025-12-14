/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    var_15 = (((((60229 + ((var_5 ? var_4 : var_9))))) ? ((((min(3105989053, 15))) ? ((max((-32767 - 1), 73))) : var_12)) : ((((var_10 && var_11) < (var_2 || var_10))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 -= (((((-121 ^ (arr_0 [i_0])))) | ((~(17392994003426504580 | var_12)))));
        var_17 -= (((arr_1 [i_0]) - (var_4 && 538)));
        var_18 -= (((((((~32760) > ((var_9 ? var_10 : var_11)))))) ^ (max((arr_1 [i_0]), (arr_0 [i_0])))));
        var_19 = ((39 ^ (((((max((arr_0 [i_0]), (arr_0 [i_0]))) + 9223372036854775807)) << ((((((~(arr_2 [i_0] [i_0]))) + 18399)) - 63))))));
        var_20 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_21 = (((((var_8 ? (42297 ^ var_4) : var_10))) ? ((-(arr_1 [i_1]))) : (arr_5 [i_1] [i_1])));
        var_22 = (((((((var_0 - (arr_5 [i_1] [i_1]))) <= ((((arr_2 [i_1] [i_1]) ^ (arr_4 [i_1]))))))) - (arr_4 [i_1])));

        for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
        {
            arr_11 [i_2] = 0;
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_23 = (arr_5 [i_1] [i_1]);
                            var_24 += ((((((arr_12 [i_1] [i_2] [i_3]) ? (arr_13 [i_1] [i_3] [i_4] [i_5]) : (arr_4 [i_2])))) ? 32283 : (((~0) & 12352646211614013723))));
                        }
                    }
                }
            }
            var_25 += ((((min(0, 166))) ? ((32954 ? 1 : 65510)) : var_8));
            var_26 = (arr_0 [i_1]);
            var_27 &= ((((((arr_19 [i_1] [i_1] [i_2] [i_2] [i_2] [i_2] [i_2]) != ((var_0 ? 1 : var_0))))) <= var_0));
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
        {
            var_28 = (max(((min((arr_7 [i_6] [i_6]), (arr_7 [i_1] [i_6])))), (((arr_9 [i_1]) ? (arr_7 [i_1] [i_6]) : (arr_7 [i_1] [i_6])))));
            var_29 = 28672;
            var_30 = ((var_11 & (arr_17 [4] [6] [i_6] [5] [i_6] [i_6])));
        }
    }
    #pragma endscop
}
