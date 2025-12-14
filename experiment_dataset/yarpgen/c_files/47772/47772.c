/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((28697 && (((min(var_3, 8191))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_16 = (min((((255 ? 30 : 88))), (arr_1 [i_1])));
            arr_5 [i_1 + 1] [i_0] [i_0] = ((!((!(arr_2 [i_1] [i_1 + 1])))));
            var_17 -= ((((arr_0 [i_0] [i_1 + 3]) ? (max(230, 4344175726816797412)) : ((max((arr_1 [i_0]), 1920))))));
            var_18 ^= (((arr_0 [i_0] [i_1]) ? (arr_3 [i_0] [23] [11]) : ((((3348115334980174544 >= (max((arr_3 [i_1] [i_0] [i_0]), 133))))))));
        }

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_8 [i_0] [i_2] [i_2] = ((((4846938352986704576 ? (min(131008, (-9223372036854775807 - 1))) : (18446744073709551593 - -3527087470701216373)))) ? (arr_0 [i_0] [i_0]) : ((4611123068473966592 ? 16640386026111093852 : 4)));
            var_19 = 18446744073709551604;
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            var_20 = (max(var_20, (((~(((arr_7 [i_0] [i_3] [i_0]) | (arr_1 [i_0]))))))));
            var_21 -= (!5);
            var_22 += (((arr_0 [i_0] [i_3]) | (~23307)));
        }
    }
    #pragma endscop
}
