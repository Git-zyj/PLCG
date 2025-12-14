/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((((max(var_5, 65325))) * ((max((arr_3 [i_0] [i_1]), (arr_0 [i_0] [i_1])))))))));
                var_18 = (((((!(((var_2 ? 1819 : (arr_1 [i_0]))))))) > ((var_6 ^ (arr_0 [i_1] [i_0])))));
                var_19 = (((var_16 & 3173700919) || (-72 | -1924)));
                var_20 = 0;
            }
        }
    }

    for (int i_2 = 3; i_2 < 10;i_2 += 1)
    {
        var_21 ^= (max((min((((arr_8 [4] [i_2]) ? var_7 : var_5)), var_6)), ((max(-16074, (arr_5 [8]))))));
        var_22 = ((((max((1 ^ 53316), ((~(arr_2 [i_2] [i_2])))))) ? ((var_6 ? (arr_7 [i_2 - 3]) : (arr_7 [i_2 - 2]))) : (arr_7 [i_2])));
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_23 = (min(((var_13 >> (arr_10 [i_3]))), var_6));
        var_24 = (min(12228, (min((arr_10 [i_3]), (arr_9 [i_3] [i_3])))));
        var_25 = (!-183);

        for (int i_4 = 2; i_4 < 17;i_4 += 1)
        {
            var_26 ^= (max((((((arr_11 [i_3] [i_3] [i_4]) % var_0)))), ((var_7 ? (min(-725421624, 0)) : (((!(arr_11 [1] [i_4] [i_4 - 2]))))))));
            var_27 = (min(var_27, (((((min(1099983709, var_1))) < (arr_11 [i_3] [i_4] [i_4]))))));
            var_28 = (((arr_11 [5] [i_4] [i_4]) == (max((((var_14 >= (arr_11 [i_3] [i_3] [i_4])))), ((1426800044 ? var_5 : 148))))));
        }
    }
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        var_29 ^= -7410505146593245451;
        var_30 = ((((((654372149 ? 53316 : 1099983709))) / (arr_13 [i_5] [i_5]))));
    }
    var_31 = (max(var_31, var_1));
    #pragma endscop
}
