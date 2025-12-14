/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220681
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
    var_10 = ((/* implicit */unsigned short) max((-6419379334854253409LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) 7698721317606229613ULL)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            arr_4 [i_1] [i_1] [17LL] = ((/* implicit */short) ((arr_0 [i_0]) ^ (((/* implicit */unsigned long long int) 6419379334854253429LL))));
            var_11 = ((/* implicit */unsigned char) ((short) arr_0 [i_0]));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                var_12 = ((int) var_3);
                var_13 = ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_1] [2]);
                /* LoopSeq 3 */
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) /* same iter space */
                {
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned short) ((arr_6 [i_0] [i_0] [i_0] [i_3]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)39)))));
                    var_14 |= (-(16ULL));
                    var_15 = ((/* implicit */int) min((var_15), (((int) arr_2 [i_3] [i_1] [i_1]))));
                }
                for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
                {
                    var_16 = ((/* implicit */short) -6419379334854253430LL);
                    var_17 += ((/* implicit */short) arr_5 [i_4] [i_1] [i_0]);
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (+(-8231792343086062191LL)))) ? (6419379334854253422LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
                }
                for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
                {
                    var_19 -= (!(((/* implicit */_Bool) var_3)));
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((int) ((short) (unsigned char)56))))));
                    var_21 = ((unsigned short) arr_5 [(unsigned short)13] [15ULL] [i_2]);
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((unsigned short) (unsigned short)1023))));
                }
                var_23 += ((/* implicit */unsigned char) (-(0LL)));
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 1) 
                {
                    var_24 = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_2] [i_6 + 1] [i_6]);
                    var_25 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1])) - (((/* implicit */int) (unsigned short)9)))));
                }
            }
            var_26 *= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)11655)) + ((+(((/* implicit */int) (_Bool)1))))));
        }
        /* LoopNest 3 */
        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            for (int i_8 = 0; i_8 < 19; i_8 += 1) 
            {
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((long long int) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (_Bool)1))))))));
                        /* LoopSeq 4 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_31 [(short)0] [i_8] = ((/* implicit */unsigned long long int) 1115445649U);
                            var_28 = ((/* implicit */long long int) max((var_28), ((~(((((/* implicit */_Bool) var_9)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 4) 
                        {
                            arr_34 [i_8] = (~(((/* implicit */int) (short)9813)));
                            arr_35 [6ULL] [(unsigned char)7] [i_8] = ((/* implicit */int) -1609608611638140305LL);
                            var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 19; i_12 += 2) 
                        {
                            var_30 &= ((/* implicit */signed char) (~((~(((/* implicit */int) (unsigned short)65006))))));
                            var_31 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) -1333818199)) ? (-2660678860444827618LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65047))))) <= (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_6 [i_12] [17ULL] [i_8] [i_9]))))))) : (min((((((/* implicit */_Bool) arr_11 [(_Bool)1] [8U] [i_9] [(short)16])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)9813)))), (((/* implicit */int) arr_30 [i_12] [i_12] [i_9] [i_9] [i_8] [i_7] [12U]))))));
                            var_32 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))))), (((1957347788917633779ULL) - (262143ULL)))));
                            arr_38 [i_0] [i_7] [i_8] [i_8] [i_12] = ((/* implicit */unsigned long long int) (~(-5933404779235496516LL)));
                        }
                        for (unsigned short i_13 = 0; i_13 < 19; i_13 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) arr_16 [i_9 - 1] [i_9 - 1] [i_9 - 1] [(short)11]))));
                            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_9 - 1])) || (((/* implicit */_Bool) 15))));
                        }
                        var_35 = 15;
                    }
                } 
            } 
        } 
    }
    var_36 &= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) -7124130008764032085LL))))));
    var_37 = ((/* implicit */long long int) ((int) var_5));
}
