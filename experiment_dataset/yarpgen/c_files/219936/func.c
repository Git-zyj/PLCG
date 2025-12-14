/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219936
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
    var_18 = ((/* implicit */signed char) ((var_14) == (((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_17)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12)))))))) != (((/* implicit */int) ((arr_0 [i_0] [i_0]) != (arr_0 [(unsigned short)7] [i_0]))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (signed char i_3 = 4; i_3 < 21; i_3 += 3) 
                {
                    for (short i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) min((var_12), (((/* implicit */short) arr_4 [i_3 - 4]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) (short)16217)) : (((/* implicit */int) (short)-16217))))) : (max((var_11), (((/* implicit */unsigned long long int) arr_11 [i_3] [(unsigned char)6] [i_0] [i_3])))))));
                            arr_16 [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_4] = max((max((max((var_15), (arr_1 [(short)11]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))))), (((/* implicit */unsigned long long int) ((arr_15 [i_3 - 2] [i_3] [i_3] [i_3 - 2] [i_2]) / (((/* implicit */long long int) var_1))))));
                            arr_17 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */signed char) var_6);
                        }
                    } 
                } 
            } 
            arr_18 [i_1] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) max(((unsigned short)60412), ((unsigned short)5110)))))));
            arr_19 [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_3 [i_0]) >> (((((unsigned long long int) var_1)) - (275281584ULL)))))) >= (((((/* implicit */_Bool) var_17)) ? ((-(var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_22 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_12 [i_0] [i_5] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) max((arr_12 [18] [i_0] [18] [i_5] [i_0]), (arr_12 [i_0] [i_5] [i_0] [i_5] [i_5])))) : (((((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_12 [i_5] [i_5] [i_0] [i_0] [i_0])) + (2102)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 3; i_6 < 20; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) (+(5801737351022629913ULL)));
                        arr_28 [i_7] [i_5] [i_7] [(signed char)9] = ((/* implicit */short) ((min((max((((/* implicit */long long int) arr_20 [14ULL] [14ULL])), (arr_10 [i_5] [i_5] [i_7] [i_7]))), (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))) | (((/* implicit */long long int) ((((/* implicit */int) ((var_7) <= (((/* implicit */int) var_9))))) * ((~(((/* implicit */int) var_9)))))))));
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)16204)) ? (990983910694603707LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)251)))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_27 [i_0] [i_0] [(unsigned short)10] [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_23 [i_7] [i_7]) : (((/* implicit */long long int) var_6))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_7])) << (((arr_10 [i_7] [i_7] [i_7] [i_0]) + (6760421282876625691LL)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) | (arr_2 [i_7])))))));
                        arr_29 [i_7] [i_7] [i_7] [i_0] = ((/* implicit */unsigned char) ((short) 14065424854512780923ULL));
                    }
                } 
            } 
        }
        arr_30 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : (arr_25 [i_0])))))))) | ((+(max((var_2), (((/* implicit */long long int) var_7))))))));
        /* LoopSeq 1 */
        for (short i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) * (((unsigned long long int) var_0))))) ? ((+(((/* implicit */int) arr_26 [i_8])))) : (((int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_0]))) : (var_15))))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                for (short i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    {
                        var_24 &= ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)60390)) || (((/* implicit */_Bool) (unsigned short)5123)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_0])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))) < ((-(((/* implicit */int) var_4)))));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_8])) << (((((/* implicit */int) var_8)) - (25928)))))) / (((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned int) arr_6 [i_8] [i_8] [i_10]))))) ? (max((((/* implicit */unsigned long long int) var_13)), (arr_39 [i_8]))) : (((var_11) >> (((var_15) - (966344485707031761ULL)))))))));
                        arr_41 [i_10] [i_8] [i_8] [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) && ((!(((/* implicit */_Bool) var_9)))))));
                        arr_42 [i_10] [i_8] [i_8] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) var_2)))) ? (((((((/* implicit */_Bool) var_14)) ? (var_15) : (var_0))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_8] [i_9] [10LL] [i_8] [i_8] [i_8])))))))) : (((/* implicit */unsigned long long int) ((arr_3 [i_9]) ^ (arr_3 [i_9]))))));
                        arr_43 [i_0] [i_8] [i_9] [i_10] = ((/* implicit */short) (~((~(((unsigned long long int) var_17))))));
                    }
                } 
            } 
            var_26 -= ((/* implicit */short) max(((((~(var_16))) <= (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_15))))), ((!(((/* implicit */_Bool) arr_36 [i_0]))))));
            var_27 = ((/* implicit */int) (+((-(arr_39 [i_8])))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 4) 
        {
            for (long long int i_12 = 0; i_12 < 22; i_12 += 3) 
            {
                {
                    arr_50 [i_0] [i_12] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((long long int) max((arr_35 [i_0] [i_11] [i_12]), (var_14))));
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 1) 
                    {
                        for (unsigned short i_14 = 4; i_14 < 18; i_14 += 3) 
                        {
                            {
                                var_28 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) -17430988468573721LL))));
                                var_29 ^= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_16))) ? (((((/* implicit */int) var_12)) / (((/* implicit */int) var_10)))) : (((/* implicit */int) max(((unsigned short)60412), (((/* implicit */unsigned short) (unsigned char)69)))))))), (((((((/* implicit */_Bool) var_0)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0]))) * (var_0)))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1916813913079657885ULL)) ? (1761698649) : (((((/* implicit */int) (unsigned char)250)) ^ (((/* implicit */int) (signed char)127))))));
                }
            } 
        } 
    }
}
