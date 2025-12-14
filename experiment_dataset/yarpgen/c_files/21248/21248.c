/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_13;
    var_17 = 17;
    var_18 = 19;

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                var_19 |= (((0 > 58712) ? 18446744073709551602 : (((58712 ? (arr_8 [i_2 - 1] [i_2 - 2] [i_2 + 1]) : 0)))));
                arr_9 [i_1] [i_1] [i_1] [i_1] = 8;
                arr_10 [i_2] [i_0] [i_0] |= ((+(min((((2047 ? (arr_3 [i_0]) : 235))), (420062950 | 13493259725874787931)))));
                var_20 = (max(var_20, ((min((((-2150146807190732427 + 9223372036854775807) << ((((1858901074 ? 58011 : -1)) - 58011)))), ((0 - (arr_4 [i_0]))))))));
            }
            var_21 = (arr_7 [i_0] [i_1] [i_0]);
            var_22 = (3527506509944493666 ? ((min(0, ((min(0, 1)))))) : (arr_5 [i_1]));
        }
        var_23 += ((10587848945578145374 ? -24622 : (arr_3 [i_0])));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = ((2047 & (((((arr_1 [i_3]) ? 1188885406 : -1567330995557467644)) - 1))));
        var_24 = (max(var_24, (((((arr_11 [i_3]) % 58712))))));
    }

    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    arr_22 [i_4] = 0;
                    var_25 = (max(var_25, ((((min((arr_1 [i_4]), (arr_1 [i_6]))) ? ((15225688946182446935 ? 1262561496 : 92)) : (-1306349123 > 124))))));
                    var_26 = ((~(42778 || 3983440562)));
                    arr_23 [i_4] [i_5] [i_5] [i_5] = -9223372036854775787;
                }
            }
        }
        var_27 ^= 1;
        arr_24 [4] [i_4] &= 1740968465;
    }
    #pragma endscop
}
