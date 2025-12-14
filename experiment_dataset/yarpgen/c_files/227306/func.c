/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227306
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
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */signed char) arr_1 [i_0 - 1]);
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_6 [i_2] [(unsigned short)19] [i_0] [i_0 - 1] |= ((/* implicit */_Bool) ((unsigned short) (unsigned short)47723));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_13 [(signed char)18] [i_1] [i_2] [i_2] [i_2] [i_1] [i_0] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((((/* implicit */int) arr_5 [i_0] [i_0])) - (((/* implicit */int) (signed char)83)))))))));
                                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-11)))))));
                                var_18 = ((/* implicit */long long int) (~((+(((/* implicit */int) ((_Bool) arr_11 [i_3] [i_3])))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)119))) * (18446744073709551615ULL)));
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_9 [i_1] [i_1] [i_1]))));
                }
                for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    var_21 = (unsigned short)17813;
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        for (long long int i_8 = 0; i_8 < 21; i_8 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) min(((-(((/* implicit */int) arr_16 [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0 - 1])))), (((((/* implicit */int) (unsigned short)2717)) * (((/* implicit */int) (_Bool)0)))))))));
                                var_23 += ((/* implicit */long long int) (-(((/* implicit */int) arr_15 [i_0] [i_0] [i_8]))));
                                var_24 = ((/* implicit */long long int) arr_12 [i_0] [i_0 - 1]);
                            }
                        } 
                    } 
                }
                for (long long int i_9 = 0; i_9 < 21; i_9 += 3) 
                {
                    var_25 *= ((/* implicit */unsigned char) arr_18 [i_9] [i_1] [i_0] [i_0]);
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)17813)) - ((-(((/* implicit */int) arr_3 [i_0 + 1]))))));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        for (signed char i_11 = 0; i_11 < 21; i_11 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(max((6872111752156420500ULL), (((/* implicit */unsigned long long int) (_Bool)0))))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (9007199254740960LL)));
                                var_28 += ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) arr_27 [i_0 + 2])), (var_1))), (((0ULL) / (((/* implicit */unsigned long long int) 9223372036854775807LL))))));
                                var_29 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) arr_29 [i_0] [i_0] [i_0 - 1] [i_10 + 1]))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_30 [i_11] [i_10 + 1] [i_9] [i_1] [i_0]))));
                            }
                        } 
                    } 
                }
                arr_35 [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 16690103790828084470ULL)) ? (((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_14 [i_0 - 1] [i_0] [i_0] [i_1]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_20 [i_0] [i_0] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) max((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) (signed char)127))))) : (((/* implicit */int) (signed char)113)))) : (((/* implicit */int) (unsigned short)47723))));
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 21; i_12 += 1) 
                {
                    for (signed char i_13 = 0; i_13 < 21; i_13 += 1) 
                    {
                        {
                            var_30 = ((((/* implicit */_Bool) max((-2631762766502032774LL), (((/* implicit */long long int) (unsigned short)47723))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)2032)) + (((/* implicit */int) arr_14 [i_0] [14ULL] [i_0] [i_13]))))) : (max((((((/* implicit */_Bool) (unsigned short)17813)) ? (8323467362274141837LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37838))))), (((/* implicit */long long int) ((signed char) var_15))))));
                            var_31 = ((/* implicit */long long int) (-(min((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) - (((/* implicit */int) arr_21 [i_0] [i_13] [i_12] [i_1])))))))));
                            arr_40 [i_0 + 1] [i_13] [i_1] [i_12] [i_13] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)30336))));
                            arr_41 [i_0] [i_0] [i_0] [i_1] |= ((/* implicit */unsigned char) ((long long int) arr_15 [i_0 + 1] [(_Bool)1] [i_12]));
                        }
                    } 
                } 
            }
        } 
    } 
    var_32 |= (_Bool)1;
}
