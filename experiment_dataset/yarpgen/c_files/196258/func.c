/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196258
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 1; i_2 < 7; i_2 += 1) 
                {
                    arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-26020))) : (3262873929U)));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 4; i_3 < 7; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((var_11) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)204))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))) : (((((/* implicit */_Bool) (unsigned char)48)) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_0]))) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)229))))))))));
                        arr_11 [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((unsigned char) ((arr_5 [i_1] [4ULL]) << (((arr_2 [i_0] [i_1] [i_2]) + (6860587476693010451LL))))))), (((unsigned int) ((((/* implicit */long long int) arr_3 [i_1] [i_2 - 1] [i_1])) > (-3315348526062239994LL))))))) : (((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((unsigned char) ((arr_5 [i_1] [4ULL]) << (((((arr_2 [i_0] [i_1] [i_2]) - (6860587476693010451LL))) + (3161311076759036527LL))))))), (((unsigned int) ((((/* implicit */long long int) arr_3 [i_1] [i_2 - 1] [i_1])) > (-3315348526062239994LL)))))));
                    }
                    for (short i_4 = 2; i_4 < 9; i_4 += 4) 
                    {
                        arr_14 [4U] [i_0] [i_1] [i_1] [(unsigned short)3] [i_1] = ((/* implicit */unsigned int) ((signed char) ((3315348526062239993LL) / (3315348526062240001LL))));
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)222)), (var_1)))) ? (((((/* implicit */_Bool) arr_8 [0U] [i_4] [i_2 + 2] [i_4])) ? (3315348526062240012LL) : (((/* implicit */long long int) -689888091)))) : (((/* implicit */long long int) 794055045U)))) >= (((/* implicit */long long int) 689888091)))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1744268049)) ? (((/* implicit */int) (unsigned short)6490)) : (-132662514)))) ? (((174024205U) >> (((((/* implicit */int) arr_9 [i_0] [i_0] [i_1 + 1] [i_5])) + (119))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                        var_20 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((int) (short)-30609))) - (-3461412025458909067LL)))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_15 [8LL] [i_0] [i_1] [i_2 + 2] [i_5] [i_5])) : (1550719736))) : (((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (min((((/* implicit */int) arr_12 [(signed char)8] [i_2] [i_1] [(signed char)8])), (1550719747))) : (((/* implicit */int) ((unsigned char) 8190665025315375121LL)))))));
                    }
                }
                for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    arr_21 [i_1] [i_1] [(_Bool)0] = ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_7)), (var_15))))) / (var_1))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)18)) && (((/* implicit */_Bool) arr_12 [i_0] [i_1 + 1] [i_6] [i_1])))))));
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_1 [i_1 + 1]))));
                    arr_22 [i_1] [i_1] [i_6] = ((/* implicit */int) min((((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)0))))) ? (((/* implicit */long long int) var_3)) : (arr_4 [i_0] [i_1] [i_1 + 1] [i_6]))), (((/* implicit */long long int) ((arr_20 [i_0] [i_1 + 1]) ^ (((/* implicit */int) arr_15 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [(_Bool)1] [i_1 + 1])))))));
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_22 -= ((/* implicit */long long int) max(((-(((((/* implicit */int) arr_18 [(short)9] [i_1] [i_6])) + (((/* implicit */int) (unsigned char)255)))))), (((/* implicit */int) var_6))));
                        arr_26 [i_1] [i_1 + 1] [i_1] [i_6] [i_7 - 1] = ((/* implicit */unsigned char) ((unsigned int) arr_2 [i_1] [i_1] [i_1]));
                        arr_27 [i_0] [i_1] [i_6] [i_1] = ((/* implicit */unsigned long long int) var_3);
                        arr_28 [i_1] [i_7] [(_Bool)1] [i_7] = ((/* implicit */unsigned char) (_Bool)0);
                        arr_29 [i_1] [i_7] [i_6] [i_6] [(signed char)5] [i_1] = ((/* implicit */unsigned int) ((_Bool) ((short) 132662513)));
                    }
                }
                arr_30 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 132662513)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1 + 1]))))) : (((((/* implicit */_Bool) arr_0 [(signed char)1])) ? (-676058868) : (-581862833)))))) ? (((((long long int) arr_23 [i_1] [i_1] [i_1])) - (((/* implicit */long long int) ((arr_15 [i_0] [7] [i_0] [i_0] [i_1] [(_Bool)1]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_1 + 1]))))))) : (((/* implicit */long long int) ((/* implicit */int) (short)32767)))));
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) arr_5 [4] [i_1 + 1]))));
            }
        } 
    } 
    var_24 ^= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_18)))) && (((/* implicit */_Bool) ((-9223372036854775792LL) - (-2993108332307645405LL))))));
    var_25 = ((/* implicit */unsigned short) ((unsigned char) var_12));
}
