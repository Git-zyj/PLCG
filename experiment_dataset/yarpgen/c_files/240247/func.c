/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240247
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
    var_18 = ((/* implicit */signed char) 11609824997392900239ULL);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (+(((/* implicit */int) (signed char)1)))))));
        arr_2 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        var_20 |= ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned char)146)) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))));
    }
    for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_21 += ((/* implicit */unsigned short) ((((arr_3 [i_1]) ^ (((/* implicit */int) (unsigned char)38)))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) arr_4 [i_1] [i_1]))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 2; i_2 < 6; i_2 += 2) 
        {
            for (unsigned char i_3 = 4; i_3 < 6; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 8; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 3; i_5 < 9; i_5 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) (-(127424689998630282LL)))) ^ (min((((/* implicit */unsigned long long int) arr_9 [8LL] [8LL] [(unsigned char)6])), (var_5)))))));
                                var_24 += ((/* implicit */_Bool) (((~(max((((/* implicit */unsigned long long int) 528482304U)), (arr_5 [0] [i_3]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) (unsigned char)198)) ^ (arr_11 [i_2] [i_1] [i_4 - 1]))) != (((/* implicit */int) var_3))))))));
                                arr_16 [i_4] = ((/* implicit */short) max((((((((/* implicit */unsigned long long int) 1885097388)) != (arr_5 [1ULL] [(unsigned short)0]))) || (((/* implicit */_Bool) var_11)))), ((!((!(((/* implicit */_Bool) arr_6 [i_2] [i_2 + 1] [i_2 + 2]))))))));
                                var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_14 [i_1] [i_2 + 4] [i_3 + 1] [i_4] [i_5 - 1] [i_5 - 1])))) >= (((((/* implicit */int) arr_14 [i_1] [(short)0] [i_1] [i_3] [9U] [i_5])) | (((/* implicit */int) arr_8 [i_2 + 1] [9ULL] [i_4 + 1]))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */long long int) (~(((((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) 14728143284203649135ULL)))) ? (((/* implicit */unsigned int) ((arr_0 [i_1]) ^ (((/* implicit */int) (_Bool)1))))) : ((-(arr_10 [i_1] [2LL] [i_3])))))));
                    var_27 = arr_3 [i_3];
                }
            } 
        } 
        var_28 |= ((/* implicit */unsigned char) arr_9 [i_1] [i_1] [i_1]);
    }
    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) 
    {
        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) min((arr_20 [i_6] [i_6]), (((/* implicit */unsigned long long int) var_11)))))));
        arr_21 [i_6] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)-30)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_6]))) : (6836919076316651389ULL)))));
    }
    for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
    {
        var_30 ^= ((/* implicit */unsigned char) (short)27524);
        /* LoopNest 3 */
        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            for (short i_9 = 2; i_9 < 23; i_9 += 1) 
            {
                for (short i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_11 = 1; i_11 < 23; i_11 += 4) 
                        {
                            arr_37 [i_7] [i_11] [i_8] [i_8] [i_8] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_9 + 1] [i_9] [3U] [i_11 - 1] [i_7])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) var_11))));
                            arr_38 [(unsigned char)10] [i_8] |= ((/* implicit */unsigned long long int) (-(var_10)));
                            var_32 = ((/* implicit */unsigned long long int) arr_27 [i_7]);
                            var_33 = ((/* implicit */_Bool) ((-9223372036854775804LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)253)))));
                        }
                        for (long long int i_12 = 2; i_12 < 23; i_12 += 4) 
                        {
                            arr_41 [i_10] [i_10] [i_7] [i_7] [i_12] [i_10] = ((/* implicit */unsigned long long int) (+(-1849769242)));
                            arr_42 [i_12] [i_8] [i_9] &= ((/* implicit */short) max((((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_14)))))), (((((/* implicit */_Bool) 8678575471454133157ULL)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_1))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4951))) ^ (9223372036854775790LL)))))));
                        }
                        /* vectorizable */
                        for (int i_13 = 2; i_13 < 23; i_13 += 2) 
                        {
                            var_34 *= ((/* implicit */unsigned int) (short)27011);
                            var_35 = ((/* implicit */long long int) ((6836919076316651373ULL) | (11596375986037424889ULL)));
                            var_36 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                        }
                        var_37 = ((/* implicit */unsigned int) (-(((((/* implicit */int) (short)-3230)) - ((-(((/* implicit */int) (unsigned char)162))))))));
                        var_38 &= ((/* implicit */int) max((((unsigned long long int) arr_40 [i_8] [i_9 - 2] [i_8])), (((/* implicit */unsigned long long int) ((short) arr_40 [i_8] [i_9 - 2] [i_8])))));
                    }
                } 
            } 
        } 
    }
}
