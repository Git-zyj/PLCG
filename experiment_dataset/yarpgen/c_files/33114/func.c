/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33114
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
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_4))) >> (((var_5) - (7566280727608931964LL)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)94))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)30))) : (var_13))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_15 |= ((/* implicit */int) arr_3 [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_16 *= (-(((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((arr_7 [i_0] [i_1] [i_3] [i_0]) >= (((/* implicit */int) (unsigned short)18783))))))));
                                var_17 = ((/* implicit */int) (unsigned short)36119);
                            }
                        } 
                    } 
                    arr_13 [i_1] = ((/* implicit */unsigned int) (_Bool)0);
                    /* LoopSeq 3 */
                    for (short i_5 = 1; i_5 < 10; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) var_8)) : (var_11)))) : (arr_12 [i_5] [i_0] [(signed char)3] [i_0] [i_0] [i_0])))) ? (max(((~(4325271410699200771ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) 2250491099920385762ULL)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (var_10)))) : (arr_16 [i_0] [i_1] [i_1] [i_5 + 1] [i_5 + 1] [i_5 + 1])))));
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            arr_20 [7ULL] [i_1] [i_1] [i_1] [3U] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_5 + 1] [i_1])) ? (((/* implicit */unsigned long long int) var_13)) : (arr_4 [i_5 - 1] [i_1])))) ? (11465876971111746107ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31080)))));
                            arr_21 [i_0] [i_0] [i_1] [i_2] [i_5] [i_1] [i_6] = ((/* implicit */_Bool) 1178619092U);
                        }
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) && (((/* implicit */_Bool) arr_8 [i_0] [i_0])))))));
                    }
                    for (int i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (int i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) 18446744073709551598ULL))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)127), (((/* implicit */unsigned char) (_Bool)1)))))) < (10889799115564905739ULL)));
                        }
                        for (int i_9 = 0; i_9 < 11; i_9 += 2) /* same iter space */
                        {
                            arr_28 [i_0] [(unsigned char)6] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])), (((unsigned long long int) ((((/* implicit */int) (signed char)69)) >> (((((/* implicit */int) (unsigned char)127)) - (106))))))));
                            arr_29 [i_1] [i_1] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) ((min((arr_8 [i_1] [i_0]), (var_5))) | (((arr_8 [i_1] [i_1]) ^ (arr_8 [i_2] [i_1])))));
                            arr_30 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (short)-32745);
                            arr_31 [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (-((+(((/* implicit */int) arr_14 [i_9] [i_2] [i_1] [i_0])))))))));
                        }
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (((((_Bool)1) ? (((long long int) (unsigned char)252)) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_7 [i_0] [i_1] [5ULL] [(_Bool)1])), (820549640U)))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)32744), (((/* implicit */short) arr_14 [i_0] [i_1] [i_2] [i_7])))))) : (((var_10) & (((/* implicit */long long int) var_2)))))))))));
                        arr_32 [i_0] [i_0] [i_1] [i_1] [(signed char)8] = ((/* implicit */int) arr_17 [(unsigned short)2] [i_0] [i_1] [i_1] [i_7]);
                    }
                    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((arr_12 [(signed char)5] [i_1] [i_1] [i_1] [i_0] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_10] [i_1] [i_1] [i_1] [i_0]))))) << ((((+(1178619079U))) - (1178619067U))))))));
                        arr_35 [i_2] [5ULL] [i_1] [i_2] = ((/* implicit */_Bool) var_5);
                    }
                    var_24 = 9223372036854775807LL;
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_11 = 4; i_11 < 18; i_11 += 3) 
    {
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (+(((int) ((((/* implicit */_Bool) (signed char)94)) ? (14U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [2])))))))))));
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_38 [i_11 - 2] [i_11 + 2]) << (((/* implicit */int) (_Bool)1))))))))));
    }
    var_27 = ((/* implicit */_Bool) (-(var_1)));
}
