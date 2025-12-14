/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241802
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_17 &= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (((/* implicit */long long int) arr_1 [(signed char)2] [i_0 + 1])) : (549755813887LL))), (((((/* implicit */_Bool) arr_2 [(short)6] [i_0 + 1])) ? (((/* implicit */long long int) arr_1 [i_0] [i_0 + 1])) : (549755813887LL)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 += ((/* implicit */int) ((962072674304ULL) * (((/* implicit */unsigned long long int) ((3U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(short)6]))))))));
            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) 26U)) && (((/* implicit */_Bool) arr_3 [i_0 - 1] [10LL])))))));
            arr_6 [i_0] = ((/* implicit */signed char) 549755813876LL);
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((3434872135U) == (1757541040U)));
            arr_8 [i_0] [i_1] = ((((/* implicit */long long int) ((/* implicit */int) (signed char)74))) - (arr_3 [i_0] [i_0]));
        }
        for (long long int i_2 = 1; i_2 < 9; i_2 += 4) 
        {
            arr_11 [(_Bool)1] |= ((/* implicit */unsigned int) var_11);
            arr_12 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(-2326917372541743632LL)))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_0] [i_0 + 1] [i_0])))))));
            var_20 ^= ((/* implicit */long long int) (-((-(((962072674315ULL) | (18446743111636877284ULL)))))));
            arr_13 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */long long int) var_14)) + (549755813876LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)73))) : ((~(549755813891LL)))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((arr_9 [i_0] [0LL]) == (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0])) || (((/* implicit */_Bool) 4022742989795745100LL))))) | (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))))))))));
            arr_16 [2ULL] [i_3] &= ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 962072674332ULL)) || (((/* implicit */_Bool) (-(18014398508433408LL)))))))) | (var_14));
        }
    }
    for (unsigned int i_4 = 1; i_4 < 11; i_4 += 1) /* same iter space */
    {
        var_22 += ((/* implicit */unsigned char) ((int) ((long long int) 962072674332ULL)));
        var_23 = ((/* implicit */long long int) min((var_23), (((((/* implicit */long long int) 0U)) | (((((/* implicit */_Bool) 962072674315ULL)) ? (549755813893LL) : (4022742989795745103LL)))))));
        /* LoopSeq 4 */
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            arr_22 [i_5] [10ULL] [i_4] = ((((/* implicit */_Bool) max((18446743111636877284ULL), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)15)), (549755813874LL))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_5] [(unsigned short)11]))))), ((~(((/* implicit */int) var_6))))))) : (min((min((18446744073709551603ULL), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) (+(arr_14 [i_4] [i_5])))))));
            var_24 ^= ((/* implicit */unsigned char) 2537426271U);
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                arr_25 [i_6] [9LL] [i_5] [i_4] = ((/* implicit */int) 3067125674773391449LL);
                arr_26 [i_4 + 1] [(signed char)7] = ((/* implicit */unsigned char) min(((+(((((/* implicit */_Bool) arr_9 [i_4] [i_5])) ? (((/* implicit */unsigned int) arr_14 [i_4] [i_4])) : (var_13))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_5])) << (((((((/* implicit */int) ((short) 5673020900902290979LL))) + (14844))) - (29))))))));
                arr_27 [i_4] [i_4] [(signed char)11] = ((/* implicit */unsigned char) (_Bool)1);
                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) var_7))));
            }
        }
        /* vectorizable */
        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 3) 
        {
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_9 [i_4] [10])) <= ((-(4568410408880969769LL)))));
            /* LoopSeq 1 */
            for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                var_27 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)237))))) | ((+(var_10)))));
                var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (-(var_9))))));
            }
            var_29 += ((/* implicit */unsigned char) (((+(3824793099473049950LL))) > (((/* implicit */long long int) arr_1 [i_4] [i_4 + 1]))));
        }
        for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) -5673020900902290980LL))));
            arr_35 [i_4 - 1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1869))) & (min((8133787123712077242ULL), (((/* implicit */unsigned long long int) 4099421904U))))));
            var_31 &= ((/* implicit */_Bool) (+(((1757541024U) + (max((1757541057U), (((/* implicit */unsigned int) (unsigned char)116))))))));
        }
        for (signed char i_10 = 0; i_10 < 12; i_10 += 1) 
        {
            arr_39 [i_10] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)4))))) | (((((/* implicit */_Bool) arr_24 [i_4] [8ULL] [i_10] [i_10])) ? (min((arr_9 [i_4] [(signed char)4]), (((/* implicit */unsigned int) var_4)))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)241))) ^ (1393355239U)))))));
            arr_40 [i_10] [i_4] = ((/* implicit */unsigned long long int) (-(-549755813877LL)));
            var_32 = ((/* implicit */short) var_3);
        }
    }
    var_33 &= ((/* implicit */int) var_14);
}
