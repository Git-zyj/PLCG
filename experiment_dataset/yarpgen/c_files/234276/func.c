/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234276
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) min(((~(arr_4 [i_0 + 1] [i_1] [7]))), (((/* implicit */unsigned long long int) ((arr_2 [i_0 - 2]) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) arr_1 [i_0 + 3] [i_0 + 3])))))));
            var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) min((min((6944419016096866126ULL), (((/* implicit */unsigned long long int) (unsigned short)51508)))), (((/* implicit */unsigned long long int) arr_1 [i_1] [i_0])))))));
            var_19 ^= ((arr_2 [10LL]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_2 [i_1]))))) : (((((/* implicit */_Bool) 3380330837U)) ? (721374993U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) : (-5944461238952502026LL));
        }
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
        {
            arr_8 [12LL] [i_2] [(unsigned short)14] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 914636458U)) || (((/* implicit */_Bool) var_11)))))) : (max((9004854821862744772ULL), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_2])))))));
            var_20 = ((/* implicit */unsigned short) min((((/* implicit */int) ((short) 914636461U))), (max(((~(((/* implicit */int) var_7)))), ((~(((/* implicit */int) (short)20760))))))));
            var_21 = ((/* implicit */unsigned long long int) (+(var_0)));
        }
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
        {
            arr_11 [i_0] [i_3] = ((/* implicit */int) var_3);
            arr_12 [0ULL] [i_3] = ((/* implicit */unsigned int) (((_Bool)1) ? ((~(((9889817767957394423ULL) >> (((((/* implicit */int) arr_3 [i_0] [(short)15])) - (36))))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 13005415783502761849ULL)))))) : ((-(arr_9 [i_3])))))));
            var_22 ^= ((/* implicit */unsigned char) (-(var_1)));
        }
        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
        {
            arr_16 [(short)16] [i_4] [i_4] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))));
            arr_17 [i_0] [i_0] [i_4] = ((/* implicit */short) ((signed char) (~(((/* implicit */int) (_Bool)1)))));
            var_23 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-4))));
            /* LoopSeq 2 */
            for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    for (unsigned int i_7 = 4; i_7 < 14; i_7 += 2) 
                    {
                        {
                            arr_26 [i_0] [4U] [i_5] [8ULL] = ((/* implicit */int) arr_10 [(unsigned char)11] [12LL] [i_5]);
                            var_24 = ((/* implicit */unsigned short) (+(min((((unsigned int) 1697701070U)), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_24 [i_6] [i_5] [i_0])) : (((/* implicit */int) (unsigned short)30746)))))))));
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((unsigned long long int) (unsigned short)65535)))));
                        }
                    } 
                } 
                var_26 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-3))));
            }
            /* vectorizable */
            for (long long int i_8 = 2; i_8 < 15; i_8 += 2) 
            {
                var_27 = ((/* implicit */unsigned short) arr_14 [(unsigned char)12]);
                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_8] [i_8 + 1] [i_8])) ? (arr_14 [i_8 - 2]) : (13551269343722344143ULL)));
                var_29 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((long long int) 3380330837U)) : (((/* implicit */long long int) arr_22 [i_8 + 2] [i_8] [i_8 - 1] [i_0 + 2] [i_0]))));
                var_30 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [(unsigned short)14] [i_4] [i_4] [i_4] [i_8])) * (((/* implicit */int) arr_0 [i_0 - 1]))));
            }
        }
        arr_30 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_12)) ? (max((2430112990U), (((/* implicit */unsigned int) (unsigned char)11)))) : (((/* implicit */unsigned int) max((253581531), (((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))))))) | (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-107)), (((unsigned short) (unsigned short)62999))))))));
    }
    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 3) 
    {
        arr_33 [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)30910)) < (((/* implicit */int) arr_32 [i_9]))));
        /* LoopNest 2 */
        for (unsigned char i_10 = 4; i_10 < 18; i_10 += 4) 
        {
            for (short i_11 = 0; i_11 < 21; i_11 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (var_12) : (((((/* implicit */int) (short)20760)) % (((/* implicit */int) var_15))))));
                        arr_43 [i_9] = ((/* implicit */_Bool) var_9);
                    }
                    for (unsigned short i_13 = 0; i_13 < 21; i_13 += 3) 
                    {
                        var_32 *= ((/* implicit */unsigned long long int) arr_39 [(_Bool)1] [(unsigned char)20]);
                        var_33 = ((/* implicit */unsigned long long int) (unsigned short)16356);
                    }
                    var_34 = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_40 [0ULL] [i_9] [i_10] [i_11])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_12)))) : ((~(arr_40 [i_9] [i_9] [20] [i_9])))));
                }
            } 
        } 
        var_35 += ((/* implicit */long long int) ((max((arr_34 [i_9]), (arr_34 [i_9]))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_34 [i_9]))))) : (((/* implicit */int) ((var_10) != (((/* implicit */long long int) ((/* implicit */int) (short)3221))))))));
        arr_47 [i_9] = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((/* implicit */int) arr_46 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))) / (var_14)))));
        var_36 = ((/* implicit */unsigned short) max((((long long int) arr_36 [i_9] [i_9])), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_44 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))))));
    }
    var_37 = ((/* implicit */unsigned char) min(((unsigned short)65524), (((/* implicit */unsigned short) var_7))));
}
