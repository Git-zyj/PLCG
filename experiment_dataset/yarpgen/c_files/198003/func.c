/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198003
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
    for (short i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [10LL]) ? (((/* implicit */int) arr_3 [(short)18] [i_2 - 1])) : (((/* implicit */int) arr_1 [2ULL]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_1 [(short)16]), (arr_1 [20]))))) : (min((1616201728438934428LL), (((/* implicit */long long int) arr_3 [0ULL] [0ULL]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) (((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61835))) >= (18446744073709551615ULL)))))) / (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (arr_0 [i_0])))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((signed char) -691592981645718921LL)))))));
                                arr_13 [i_0] [i_0] = ((/* implicit */_Bool) (unsigned char)93);
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */long long int) arr_0 [i_2])) : ((+(min((((/* implicit */long long int) var_2)), (376138276840845994LL))))))))));
                                arr_14 [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 9551075429352678348ULL)) ? (var_14) : (arr_7 [i_2] [i_0] [i_0 - 2])))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((var_1), (((/* implicit */short) arr_9 [i_0 + 1] [i_2 - 1] [i_1] [i_3])))))));
                            }
                        } 
                    } 
                }
                for (int i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    var_19 ^= ((/* implicit */unsigned short) (unsigned char)81);
                    arr_19 [i_0] = ((/* implicit */unsigned char) var_6);
                    var_20 = ((/* implicit */unsigned short) max((max((arr_7 [i_0 + 1] [i_0] [i_5]), ((~(((/* implicit */int) arr_3 [i_0] [i_0])))))), (((int) var_12))));
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((unsigned short) min((((8895668644356873283ULL) + (((/* implicit */unsigned long long int) 0LL)))), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_3 [6ULL] [i_1])), (arr_7 [i_5] [(unsigned short)12] [i_0]))))))))));
                    var_22 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */int) (unsigned short)48587)) * (((/* implicit */int) var_15)))), (((((/* implicit */_Bool) (unsigned short)52511)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_1] [(short)8])))))))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    arr_24 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_12)))) ? (arr_5 [i_0] [i_1] [i_0]) : (((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_6] [i_1])) + (((/* implicit */int) var_6)))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        for (int i_8 = 3; i_8 < 18; i_8 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) ((var_9) <= (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_8 - 2] [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_0])))));
                                arr_30 [i_7] [i_6] [i_7] |= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) arr_21 [i_8] [i_1] [i_6])) / (arr_7 [i_0 - 1] [i_7] [i_6]))));
                                var_24 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_0 + 1] [i_8 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) % (((/* implicit */int) arr_9 [i_0 - 1] [i_1] [i_6] [i_8]))))) : (((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)186))) : (12441915681332528534ULL)))));
                            }
                        } 
                    } 
                }
                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((/* implicit */int) arr_23 [i_0] [(unsigned char)18] [i_1])), (arr_29 [i_0] [i_1] [i_1] [(unsigned short)2] [i_1] [i_1])))) ^ ((-9223372036854775807LL - 1LL)))))));
                arr_31 [i_0] [i_0] = ((/* implicit */unsigned short) 4674094712216053279LL);
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */long long int) min((3757157257U), (((/* implicit */unsigned int) var_12))))) * (min((((((/* implicit */_Bool) (unsigned char)152)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1))))), (((/* implicit */long long int) var_14)))))))));
}
