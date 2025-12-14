/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190252
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
    var_10 = ((/* implicit */long long int) (+(18446744073709551615ULL)));
    var_11 = ((/* implicit */unsigned int) var_5);
    var_12 = ((/* implicit */long long int) var_9);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [16] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((278801850U) > (278801850U))), (((((/* implicit */unsigned long long int) 7881299347898368LL)) <= (arr_0 [i_0])))))) - (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [15ULL] [3U])) : (var_6))), (((/* implicit */int) arr_1 [i_0]))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_0])) & (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)14009)), (var_7)))) ? ((+(((/* implicit */int) (short)-13994)))) : (((/* implicit */int) ((11582236345232942028ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        arr_14 [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_4)), (arr_12 [i_1] [i_0] [i_1] [i_2] [i_1] [i_3])))), (max((((4294967295U) + (arr_5 [i_1] [i_2] [i_3]))), (((/* implicit */unsigned int) (short)-6212))))));
                        arr_15 [i_1] [i_1] = ((/* implicit */signed char) min(((short)-14009), ((short)32767)));
                    }
                } 
            } 
        }
        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            var_14 -= ((/* implicit */long long int) max((((unsigned long long int) arr_9 [i_0] [i_4] [i_0] [i_4])), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)14003)) == (((/* implicit */int) ((-1694823616676927812LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9922)))))))))));
            var_15 ^= min((379273610U), (((arr_19 [i_0] [i_4]) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))));
            var_16 ^= ((/* implicit */unsigned int) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-14009)) ? (var_3) : (((/* implicit */int) (short)14009))))), (-735076887712633522LL))), (((/* implicit */long long int) (+((-(((/* implicit */int) (short)-14010)))))))));
        }
    }
    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        var_17 -= ((/* implicit */unsigned char) arr_12 [10U] [i_5] [i_5] [i_5] [i_5] [i_5]);
        arr_24 [i_5] = ((/* implicit */unsigned short) min((var_8), (((/* implicit */unsigned long long int) (short)13994))));
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            for (short i_7 = 1; i_7 < 13; i_7 += 3) 
            {
                {
                    var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) -1774080203)) ? (((/* implicit */unsigned long long int) var_9)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (arr_0 [i_7 - 1])))));
                    /* LoopSeq 4 */
                    for (int i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned int) arr_29 [1ULL] [i_6] [i_5] [i_5] [i_5]);
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1774080203)) ? (1774080218) : (((/* implicit */int) (short)24576))))) ? (6230188326160377549LL) : (((/* implicit */long long int) 2404345414U))));
                        var_21 *= (+(((((/* implicit */unsigned int) ((/* implicit */int) max((arr_30 [(unsigned short)10] [i_6] [i_6] [i_7 - 1] [i_8]), (((/* implicit */short) arr_1 [i_5])))))) + (((unsigned int) arr_29 [i_6] [i_6] [i_8] [12] [i_8])))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 14; i_9 += 4) /* same iter space */
                    {
                        var_22 -= ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_12 [i_9] [i_9] [(signed char)10] [i_9] [i_7 + 1] [0LL])) ^ (((/* implicit */int) arr_27 [i_6] [i_7 - 1] [i_6] [(unsigned char)11]))))));
                        arr_34 [i_5] [i_6] [(unsigned char)0] = ((/* implicit */short) ((((((/* implicit */long long int) max((-1186331106), (var_3)))) | (max((arr_20 [i_5] [i_5]), (arr_20 [i_5] [i_6]))))) + (((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */unsigned int) var_4)), (arr_13 [i_9] [i_7] [i_9] [i_9]))) >= (arr_8 [i_5] [i_9])))))));
                        var_23 ^= ((/* implicit */short) (+(var_8)));
                    }
                    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 4) /* same iter space */
                    {
                        arr_37 [i_5] [i_6] [8LL] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(-6230188326160377546LL)))), (max((((((/* implicit */unsigned long long int) var_6)) & (arr_7 [i_6] [i_6] [i_10]))), (((/* implicit */unsigned long long int) arr_5 [i_5] [i_6] [(unsigned short)11]))))));
                        var_24 -= ((/* implicit */_Bool) max((((/* implicit */short) (_Bool)0)), ((short)-13994)));
                    }
                    for (unsigned int i_11 = 0; i_11 < 14; i_11 += 4) /* same iter space */
                    {
                        var_25 ^= ((/* implicit */unsigned short) 6230188326160377560LL);
                        arr_42 [i_5] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_40 [(unsigned char)5] [i_6] [i_11] [i_7 - 1])) ? (((((/* implicit */_Bool) 14030557649679629600ULL)) ? (-7881299347898361LL) : (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) -2147483635))))));
                    }
                    var_26 -= (+(((/* implicit */int) (!(((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (short)11448))))))));
                }
            } 
        } 
        var_27 -= ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((long long int) var_6))) ? (((((/* implicit */_Bool) 4973833932888943906ULL)) ? (278801855U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5] [(unsigned char)3] [i_5]))))) : (((/* implicit */unsigned int) (-(479403314))))))));
    }
    for (short i_12 = 0; i_12 < 14; i_12 += 3) 
    {
        var_28 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((((/* implicit */int) (short)32767)) ^ (var_0))) + (2147483647))) << (((/* implicit */int) max((((/* implicit */short) (unsigned char)0)), ((short)(-32767 - 1)))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((unsigned short) max((1774080218), (((/* implicit */int) var_2))))))));
        var_29 = ((/* implicit */_Bool) var_1);
    }
}
