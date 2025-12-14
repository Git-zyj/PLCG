/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225311
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
    for (unsigned int i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            {
                var_13 *= ((/* implicit */unsigned char) (+(min((((((/* implicit */_Bool) 4294967274U)) ? (17285060806524638432ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) var_2))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 23; i_3 += 3) 
                    {
                        var_14 ^= ((/* implicit */long long int) (unsigned char)136);
                        var_15 += ((/* implicit */_Bool) (unsigned char)134);
                        var_16 = ((/* implicit */unsigned int) arr_6 [i_2] [i_2] [i_2] [i_2]);
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 2; i_4 < 23; i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_2] [(unsigned short)22] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)96)) ? (7U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-9351)))));
                            var_17 = ((/* implicit */signed char) ((int) (unsigned char)122));
                        }
                        for (unsigned short i_5 = 2; i_5 < 23; i_5 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)27319)) ? (3758096384U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)120))))))));
                            var_19 = ((/* implicit */unsigned long long int) ((unsigned int) arr_12 [i_1 - 1]));
                        }
                    }
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (49441328U)))) && (((/* implicit */_Bool) ((unsigned char) var_6))));
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)136)) ? (arr_11 [(signed char)10] [i_2] [i_2] [i_2] [i_1 - 3] [i_0 - 1]) : (arr_11 [i_6] [i_2] [i_2] [i_2] [i_1 + 2] [i_0 - 4])));
                    }
                    var_22 |= (((!(((/* implicit */_Bool) arr_3 [i_0])))) ? (((/* implicit */unsigned int) ((int) max(((unsigned short)9980), (((/* implicit */unsigned short) (unsigned char)119)))))) : (max((1839414595U), (((/* implicit */unsigned int) (short)-9322)))));
                }
                var_23 = ((/* implicit */short) min((min((((/* implicit */unsigned int) arr_2 [i_0] [i_1 - 3] [i_0 - 3])), (1064689092U))), (max((((((/* implicit */_Bool) var_8)) ? (var_8) : (var_2))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)122)))))))));
                var_24 = arr_9 [i_0] [i_0] [i_0 + 1] [i_0];
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_7 = 1; i_7 < 24; i_7 += 1) 
    {
        for (int i_8 = 4; i_8 < 22; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 1; i_11 < 22; i_11 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) min((var_25), (((((/* implicit */_Bool) ((((/* implicit */_Bool) min((7U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((int) arr_32 [i_7 + 1] [i_8]))) : (((unsigned long long int) 9223372036854775780LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)124))) : (((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_4)), ((unsigned short)9980))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) ^ (4294967255U)))))))));
                                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */int) var_1)) + (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (short)-9354))))) ? ((-(((((/* implicit */_Bool) var_9)) ? (1636373352U) : (4294967291U))))) : (((/* implicit */unsigned int) ((arr_32 [i_8 - 4] [i_10]) ? (((/* implicit */int) arr_32 [i_8 - 1] [i_9])) : (((/* implicit */int) var_6)))))));
                                arr_33 [i_8] [i_10] [i_9] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_19 [i_7]), (((/* implicit */unsigned int) arr_26 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_11 + 3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_7] [i_9] [i_7 - 1] [i_11 + 3]))) : (((unsigned long long int) arr_19 [i_7]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 3) 
                    {
                        for (unsigned int i_13 = 2; i_13 < 22; i_13 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */int) 4294967291U);
                                var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2658593944U)) ? (((((/* implicit */_Bool) arr_19 [i_7 - 1])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_32 [i_7] [i_12])))) : (((/* implicit */int) var_10))));
                            }
                        } 
                    } 
                    arr_39 [i_7] [i_7] [i_8] = ((((/* implicit */_Bool) arr_24 [i_9] [i_8] [i_8] [i_7])) ? (((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)0)), (var_6)))) ? ((-(arr_34 [i_7] [i_7] [i_7 + 1] [i_7 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_8] [i_8]))))) : (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_36 [i_7 + 1] [i_8] [i_9] [i_7 - 1])) : (((/* implicit */int) (short)-9353)))))));
                    var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (arr_34 [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1])))) ? (arr_31 [i_9] [i_9] [i_8] [i_7 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)55555)) && (((/* implicit */_Bool) 2658593944U)))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_24 [i_7] [i_8] [24U] [i_9]))))))))));
                }
            } 
        } 
    } 
    var_30 = ((short) var_4);
}
