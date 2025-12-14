/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((-(min(-6378434283472927125, 0))))) ? (min((min(var_2, var_2)), ((max(0, 0))))) : var_2));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                var_11 = (min(var_11, (((255 | (arr_7 [i_0] [1]))))));
                var_12 ^= ((-7334079180559049475 ? -7334079180559049475 : (((255 ? 3104433443 : 7)))));
                var_13 = -30;
            }
            var_14 = var_8;
        }
        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            arr_13 [17] = (((((-(arr_9 [i_3 + 1] [i_0 + 1] [17]))) + 2147483647)) >> (((max((arr_9 [i_3 + 1] [i_0 - 2] [i_0]), (arr_9 [i_3 + 1] [i_0 - 1] [12]))) - 1609739346)));
            var_15 = -1;
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            arr_16 [i_4] = (max((((((-1208716716038202430 ? -7334079180559049475 : 16133366128994264877))) ? (arr_3 [i_0] [i_0] [16]) : (max(1808243205967425672, 1808243205967425672)))), ((min(1, (min(var_4, 32)))))));
            var_16 += ((((min(var_1, (arr_12 [i_0 - 1] [i_0 + 2])))) ? (max(1808243205967425672, -977627456)) : ((min((arr_12 [i_0 - 1] [i_0 + 1]), var_0)))));
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_17 = 4294967295;
            var_18 = 8751381076218960675;
            arr_20 [13] [13] = ((-(4502608602441440096 ^ 1)));
            var_19 = var_0;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {
                var_20 = (var_9 <= 0);
                arr_25 [i_0 - 2] = ((-(arr_14 [i_7 + 1] [i_7 - 1] [i_7 + 1])));
            }
            for (int i_8 = 2; i_8 < 18;i_8 += 1)
            {
                var_21 ^= (~(!-104));
                var_22 = (25052 + 1808243205967425672);
            }
            var_23 = -7747360330564248667;
            arr_29 [15] &= ((243 ? 1808243205967425663 : var_4));
            var_24 = (max(var_24, (((4294967295 ? var_6 : 1808243205967425663)))));
            var_25 = (arr_18 [0] [i_6] [i_6]);
        }
    }
    #pragma endscop
}
