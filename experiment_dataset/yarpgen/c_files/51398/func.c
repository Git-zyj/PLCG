/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51398
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
    var_12 ^= ((/* implicit */unsigned short) var_4);
    var_13 &= ((/* implicit */int) var_4);
    var_14 = ((/* implicit */long long int) var_10);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    for (int i_3 = 4; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-1))));
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_9 [i_0] [i_1] [i_0] [i_0 - 2])))) & (arr_9 [i_0] [i_0] [i_0] [i_0 - 2]))))));
                            /* LoopSeq 3 */
                            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                            {
                                arr_17 [i_0] [i_0] [i_1] = ((/* implicit */int) var_2);
                                arr_18 [i_0] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */int) (+((~(((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_0])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
                            }
                            for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                            {
                                var_17 = ((/* implicit */unsigned short) ((short) min((((/* implicit */unsigned long long int) var_7)), (arr_7 [i_0] [i_1] [i_1 + 3]))));
                                var_18 = ((/* implicit */unsigned int) arr_13 [i_1] [i_1] [i_1] [i_1]);
                                var_19 *= ((/* implicit */unsigned short) arr_2 [i_0 - 1]);
                                var_20 = ((/* implicit */unsigned short) max(((+(max((31U), (arr_11 [i_3] [i_5]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1 + 3] [i_1])) ? (((/* implicit */int) (unsigned short)58227)) : ((-(((/* implicit */int) (short)-1)))))))));
                                var_21 = ((/* implicit */long long int) (unsigned short)7308);
                            }
                            for (int i_6 = 0; i_6 < 14; i_6 += 4) 
                            {
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_0] [10U] [(signed char)0] [i_6]))))), (var_7))))));
                                var_23 = ((/* implicit */short) (~(((((/* implicit */int) var_4)) & (((/* implicit */int) arr_10 [i_0 - 1] [i_1 + 2] [i_3 - 3] [i_1]))))));
                                arr_25 [i_1] [i_1] [i_2] [(short)8] [i_6] = ((min(((+(((/* implicit */int) var_6)))), (((/* implicit */int) arr_3 [i_1] [i_6])))) ^ (((/* implicit */int) ((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)12626))) : (31U))) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                            }
                        }
                    } 
                } 
                arr_26 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_0)) > (arr_0 [i_0] [i_0]))) ? (((/* implicit */int) ((((/* implicit */int) (short)-1)) < (((/* implicit */int) (short)-24))))) : (((/* implicit */int) ((((/* implicit */long long int) 268435455U)) == (-2932808857544914148LL))))))) ? (min((((/* implicit */int) ((short) arr_5 [i_1]))), ((+(((/* implicit */int) (short)-2)))))) : (((/* implicit */int) (unsigned short)64714))));
                arr_27 [i_1] = ((/* implicit */short) (((-(var_5))) > (((/* implicit */long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) 4095U)))), (((-2932808857544914148LL) <= (arr_13 [i_1] [9ULL] [9ULL] [i_1])))))))));
                arr_28 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0 - 1] [i_0 + 1] [i_1 - 1] [(signed char)1] [i_1])))))) | (max((arr_19 [i_0 - 1] [i_0 + 1] [i_1 - 1] [i_1] [i_1]), (((/* implicit */long long int) (unsigned char)168))))));
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (((+(((/* implicit */int) (_Bool)1)))) + (arr_6 [i_0] [i_0] [i_0]))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) var_0);
}
