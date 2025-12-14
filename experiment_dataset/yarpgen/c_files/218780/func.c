/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218780
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) max((((/* implicit */short) ((signed char) var_8))), (((short) 286291357)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 1; i_3 < 13; i_3 += 3) /* same iter space */
                    {
                        arr_9 [i_1] = ((/* implicit */unsigned int) (signed char)-89);
                        var_14 += ((/* implicit */long long int) ((unsigned short) var_12));
                        var_15 ^= ((/* implicit */short) ((unsigned int) (unsigned char)224));
                    }
                    for (unsigned char i_4 = 1; i_4 < 13; i_4 += 3) /* same iter space */
                    {
                        var_16 = ((/* implicit */signed char) var_6);
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            var_17 += ((/* implicit */int) max(((short)0), (((/* implicit */short) (unsigned char)43))));
                            var_18 = ((/* implicit */signed char) ((unsigned long long int) (~(((/* implicit */int) arr_5 [i_5] [i_4 + 1] [i_4] [i_4])))));
                            var_19 += ((/* implicit */unsigned char) max((((unsigned int) arr_5 [i_5] [i_4 + 1] [i_2] [i_2 + 3])), (min((((/* implicit */unsigned int) arr_5 [i_5] [i_4 + 4] [i_4] [i_2 + 3])), (var_7)))));
                            var_20 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_0 [i_5] [i_5])) ? (arr_0 [i_2 - 1] [i_2 + 2]) : (arr_0 [i_1] [i_5]))), (((((/* implicit */_Bool) arr_0 [i_5] [i_0])) ? (arr_0 [i_2 - 1] [i_4 - 1]) : (arr_0 [i_0] [i_2 - 2])))));
                        }
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (-((((~((-9223372036854775807LL - 1LL)))) - (max((((/* implicit */long long int) (signed char)87)), (9223372036854775806LL))))))))));
                        var_22 = ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) (signed char)92)))));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 1; i_6 < 13; i_6 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (((_Bool)1) && (((((/* implicit */_Bool) (unsigned char)49)) && (((/* implicit */_Bool) (unsigned char)27)))))))));
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_7])) ? (arr_6 [i_1] [i_2 + 2] [i_6 - 1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */long long int) var_10);
                            arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_16 [i_1] [i_8]))));
                        }
                        arr_22 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) ^ (((((/* implicit */_Bool) arr_11 [i_0] [i_6] [i_2] [i_6])) ? (1742073635658483868ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-104)))))));
                        var_26 = ((/* implicit */unsigned short) arr_3 [i_6] [i_1] [i_0]);
                    }
                    var_27 *= ((/* implicit */signed char) ((unsigned short) arr_19 [i_2 + 2] [i_2] [i_2] [i_2] [i_2] [i_2]));
                    var_28 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) -1762971940)) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))));
                    arr_23 [i_0] [i_1] [i_0] = ((/* implicit */short) ((1762971924) / (((/* implicit */int) (signed char)-127))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_9 = 4; i_9 < 16; i_9 += 3) /* same iter space */
                    {
                        var_29 |= ((/* implicit */int) (+(((13ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-78)))))));
                        var_30 = var_1;
                        arr_27 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_16 [i_1] [i_1])) : (((/* implicit */int) var_5)))))));
                    }
                    /* vectorizable */
                    for (long long int i_10 = 4; i_10 < 16; i_10 += 3) /* same iter space */
                    {
                        var_31 = ((/* implicit */long long int) (signed char)82);
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9320343774232806779ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-102))) : (1905174877333725769ULL)));
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 1; i_11 < 16; i_11 += 2) 
                        {
                            arr_34 [i_0] [i_1] [i_2] [i_0] [i_11] [i_11] = ((/* implicit */int) 16383U);
                            arr_35 [i_1] = ((/* implicit */int) 8777121048006627658ULL);
                        }
                    }
                    /* vectorizable */
                    for (long long int i_12 = 4; i_12 < 16; i_12 += 3) /* same iter space */
                    {
                        var_33 = ((/* implicit */int) (~(18014123631575040LL)));
                        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) arr_10 [i_0] [i_2] [i_12 + 1]))));
                        var_35 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8)))));
                        arr_38 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) var_4)) ? (4294950912U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))));
                        var_36 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_1] [i_2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_6))) | (var_6)));
                    }
                }
            } 
        } 
    } 
    var_37 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) (+(-1LL)))) || (var_1))))));
    var_38 = ((/* implicit */int) var_10);
    var_39 = ((/* implicit */unsigned short) ((min((((/* implicit */int) var_9)), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11)))))) * (((/* implicit */int) ((((/* implicit */int) max((var_12), (((/* implicit */unsigned char) (signed char)110))))) >= (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) (unsigned char)122))))))))));
}
