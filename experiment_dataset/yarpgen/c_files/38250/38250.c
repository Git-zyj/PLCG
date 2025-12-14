/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_13, (min((var_5 | var_1), var_17))));
    var_19 ^= var_6;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = var_2;
        var_21 = ((-22367 | ((((max(var_4, (arr_0 [i_0] [i_0])))) ? (var_2 % 25149) : ((var_15 ? var_8 : var_8))))));
        var_22 = (max(var_22, (((((-9223372036854775807 - 1) || ((max(var_14, 159)))))))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_23 = (arr_2 [i_0]);
            var_24 = var_10;
            var_25 = ((max((31 | 5378594294066449478), (((var_15 ? -14459 : var_15))))));
            var_26 += (max((((min(18446744073709551615, 536868864)) % 255)), ((((65472 | -17737) | ((120 ? 1 : (arr_3 [i_0] [i_0]))))))));
        }
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_27 = ((((((arr_6 [i_2]) % (arr_3 [i_2] [i_2]))) | ((min((arr_1 [i_2]), var_9))))));
        var_28 = ((min((arr_2 [i_2]), ((255 ? var_12 : var_17)))));
        arr_8 [i_2] = (max((((arr_7 [i_2] [12]) % (((arr_6 [i_2]) | (arr_2 [i_2]))))), ((min((max((arr_1 [i_2]), 129)), 0)))));

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            arr_11 [10] [i_2] [i_2] = (max((~-126), ((~(arr_4 [i_2] [i_3] [i_2])))));
            var_29 = (min(((max((arr_5 [i_3]), (arr_5 [i_2])))), ((11519288844818737243 ? (arr_10 [i_2]) : (arr_5 [i_3])))));
            var_30 = (max(var_30, (((+((max((arr_0 [i_2] [i_3]), (arr_10 [i_2])))))))));
        }
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        arr_14 [i_4] = (min(2143383629, (9223372036854775807 | var_10)));
        var_31 -= (((arr_13 [i_4] [i_4]) | (max(((max(29196, 0))), 65472))));
        var_32 = (max(var_32, 5693930603190593640));
        arr_15 [i_4] &= (min((arr_12 [i_4]), (arr_13 [i_4] [i_4])));
        var_33 |= ((((((~255) ? (((max((arr_13 [i_4] [i_4]), (arr_13 [i_4] [i_4]))))) : (arr_12 [i_4])))) ? ((1459313897 | ((213 ? (arr_12 [i_4]) : (arr_13 [i_4] [i_4]))))) : (((max((arr_13 [i_4] [i_4]), (arr_13 [i_4] [i_4])))))));
    }
    var_34 = (max(var_34, (!0)));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                var_35 = (!var_7);
                var_36 = (min(var_36, var_5));
            }
        }
    }
    #pragma endscop
}
