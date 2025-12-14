/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (((max(18446744073709551598, (17293822569102704640 / 21))) * 0));

            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                var_12 = (min(var_12, (((-((-((-2552241619793845112 ? 4294967295 : 3324532052)))))))));
                var_13 = ((((((4256630044 ? -30 : (arr_7 [i_0]))))) ? (((arr_4 [7] [5]) * ((59919 ? 18446744073709551585 : 21)))) : (((max(3623510839, 202))))));
            }
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                arr_11 [i_0] [i_1] [i_0] = ((((max(-3469, -31))) + (-883111122 + -418760930)));
                var_14 = (max(var_14, (((((((min(-9223372036854775806, 1))) ? (max(3, 444027392)) : ((((arr_6 [3] [i_1] [2] [10]) / 6))))) << 0)))));
                var_15 = (((max((!-3680), ((20 ? -7 : 990358959)))) << (((((1 | (arr_6 [i_0] [i_0] [i_0] [i_3])))) + 1010848434))));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                arr_16 [i_0] = (((((20 ? 18446744073709551595 : 332650671))) ? (!49804) : ((((arr_12 [i_1] [i_1] [i_1] [i_1]) && -5029)))));
                var_16 = -1;
                var_17 &= (((arr_10 [i_4]) >= (3445 != -883111122)));
            }
            var_18 = ((((+(((arr_6 [i_0] [i_1] [i_1] [i_1]) / 2089351330368465957)))) == (!32)));
        }
        var_19 = (min(var_19, -7));
        arr_17 [i_0] = ((~(~-3469)));
    }
    var_20 = ((((var_3 | 0) ? 990358959 : (-990358940 > 11511332469612846098))));
    #pragma endscop
}
