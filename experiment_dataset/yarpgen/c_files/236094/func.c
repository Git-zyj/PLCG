/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236094
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            {
                arr_6 [i_0] [(short)18] [i_1 - 1] = ((/* implicit */unsigned int) ((unsigned long long int) (_Bool)1));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) (short)-18873);
                    arr_10 [i_0] [i_1 - 1] [i_0] = 13139080818353953036ULL;
                }
                for (unsigned long long int i_3 = 1; i_3 < 24; i_3 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(13021500692987435625ULL)))) ? (((/* implicit */unsigned long long int) 1543650274U)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) - (5425243380722115991ULL))))) * (((((/* implicit */_Bool) arr_4 [i_0])) ? (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (1403596751422042532ULL))) : (((/* implicit */unsigned long long int) (-(var_1))))))));
                    var_20 = (i_0 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)768)) >> (((((/* implicit */int) arr_8 [i_0] [i_3 - 1] [i_3])) - (27830)))))) ? (min((((/* implicit */unsigned long long int) var_12)), (2711928026506438688ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_0] [12ULL] [17U])) << (((((/* implicit */int) arr_8 [i_0] [i_3] [17ULL])) - (27826))))))))) : (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)768)) >> (((((((/* implicit */int) arr_8 [i_0] [i_3 - 1] [i_3])) - (27830))) + (58614)))))) ? (min((((/* implicit */unsigned long long int) var_12)), (2711928026506438688ULL))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_8 [i_0] [12ULL] [17U])) + (2147483647))) << (((((((((/* implicit */int) arr_8 [i_0] [i_3] [17ULL])) - (27826))) + (58629))) - (21)))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 23; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            {
                                arr_21 [i_0] [i_1] [i_3] [i_1] [i_5] [i_4] [(unsigned short)4] |= ((/* implicit */_Bool) arr_15 [i_5] [i_0] [i_0] [i_0] [i_0]);
                                var_21 = ((/* implicit */unsigned long long int) ((min((min((((/* implicit */unsigned int) (short)19287)), (var_9))), (((/* implicit */unsigned int) arr_1 [i_0])))) ^ (var_3)));
                            }
                        } 
                    } 
                    var_22 += ((/* implicit */_Bool) var_8);
                    arr_22 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (signed char)-30))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    for (int i_7 = 2; i_7 < 24; i_7 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */short) min((min((arr_17 [i_0] [i_7] [i_7 - 1] [(_Bool)1] [i_7 + 1] [i_0]), (5425243380722115979ULL))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [(_Bool)1] [i_7] [i_7 - 2] [i_7] [i_7 - 2] [i_7])))))));
                            arr_29 [i_0] [i_7] [(unsigned char)22] [i_7 - 2] &= ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) arr_11 [i_1] [i_7] [i_7 - 1] [i_7 - 2])), (268402688ULL)))));
                            var_24 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                            var_25 = ((/* implicit */short) ((unsigned int) min((((/* implicit */int) var_13)), (min((var_1), (((/* implicit */int) (_Bool)1)))))));
                            arr_30 [i_0] [i_6] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_14)) ? (var_8) : (((/* implicit */int) (short)18873))))))) ? (((((/* implicit */_Bool) var_15)) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (1403596751422042532ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)64768), (((/* implicit */unsigned short) (unsigned char)4))))))));
                        }
                    } 
                } 
                var_26 = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((13021500692987435625ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)4))))))) : (((((/* implicit */_Bool) (short)18873)) ? (arr_12 [(_Bool)1] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 1] [i_0]))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((9580419471070225562ULL), (((/* implicit */unsigned long long int) (short)-18874))))) ? (((/* implicit */int) (unsigned short)768)) : (((var_1) << (((var_1) - (1100924488)))))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)7)))))));
    var_28 = ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 1 */
    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 4) 
        {
            for (unsigned long long int i_10 = 1; i_10 < 18; i_10 += 2) 
            {
                {
                    arr_37 [i_8] [i_10 + 1] = ((/* implicit */unsigned short) (((+(var_14))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_8] [i_9] [(unsigned short)6] [12ULL] [i_10] [i_8])) ? (min((((/* implicit */unsigned int) (_Bool)1)), (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_8] [i_9] [i_10]))))))));
                    arr_38 [i_8] [i_8] [i_10 + 1] = ((min((arr_1 [i_8]), (arr_1 [i_8]))) ? (var_1) : (((/* implicit */int) (unsigned short)768)));
                    arr_39 [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_10] [i_9] [i_8] [18ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_8]))) : (arr_11 [(short)11] [i_8] [i_8] [i_8])))) != (var_15)))) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_31 [i_10 + 1] [i_8])) == (((((/* implicit */_Bool) var_3)) ? (5195674126681834979ULL) : (((/* implicit */unsigned long long int) arr_31 [i_9] [i_9])))))))));
                    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) arr_2 [16U] [i_9]))));
                }
            } 
        } 
        arr_40 [i_8] = (i_8 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_8] [i_8] [i_8])) << (((-1877282528514033971LL) + (1877282528514033981LL)))))) ? ((~(arr_15 [i_8] [(_Bool)1] [i_8] [(_Bool)1] [i_8]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)248)))))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [i_8] [i_8] [i_8])) + (2147483647))) << (((((-1877282528514033971LL) + (1877282528514033981LL))) - (10LL)))))) ? ((~(arr_15 [i_8] [(_Bool)1] [i_8] [(_Bool)1] [i_8]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)248))))))));
        var_30 = ((/* implicit */signed char) ((int) (short)18873));
    }
}
