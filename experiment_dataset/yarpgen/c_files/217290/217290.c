/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (((((-((var_0 ? (arr_1 [i_0]) : 17811))))) ? (((arr_1 [i_0 - 1]) ? (0 * 914040559337110519) : 35184372088831)) : (var_5 < 18)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (max(1, 1112039958));
                    arr_10 [i_0] [i_1] [i_2 - 1] [i_0] = ((~55052) == -18184);
                }
            }
        }
        arr_11 [6] |= (((-2147483647 - 1) > ((((var_7 ? 2386 : (arr_4 [18] [i_0]))) + ((((arr_0 [i_0] [i_0]) ^ var_2)))))));
    }
    for (int i_3 = 2; i_3 < 16;i_3 += 1)
    {
        var_10 ^= (arr_1 [i_3]);
        var_11 |= (max((!4), ((914040559337110532 ? 6390993116239572802 : 3911378257708817379))));
        arr_14 [i_3] = ((~(max(var_4, (((arr_5 [i_3] [i_3]) ? 191 : 1117355976))))));

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_12 = (((((-(~var_5)))) ? (((-1659012637 ^ 120) ? ((4544980488874637034 >> (-5280966607972751422 + 5280966607972751425))) : (arr_16 [i_3 - 1]))) : (((var_3 ? -32760 : ((5314 ? (arr_7 [i_3] [i_3] [i_4]) : 18250)))))));
            var_13 |= (((max((arr_17 [16] [i_4] [i_3 - 2]), (arr_17 [i_4] [10] [i_3 - 2]))) ? ((max((arr_17 [i_3] [i_3] [i_4]), (arr_17 [i_3] [i_3 - 1] [i_4])))) : ((-2147483644 ? (arr_17 [i_4] [i_4] [i_3]) : (arr_17 [i_3] [i_3 - 2] [i_3 + 1])))));
            var_14 -= ((~((1 ? (arr_12 [i_3 - 1] [i_3 - 1]) : (arr_17 [i_3 - 1] [i_3 - 1] [i_3])))));
        }
    }
    var_15 = ((var_6 < (max(((var_5 ? 4103076507893836486 : 2)), (((1659012656 ? -32767 : 47305)))))));
    #pragma endscop
}
