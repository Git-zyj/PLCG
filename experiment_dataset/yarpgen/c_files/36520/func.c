/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36520
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
    var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9176305507401555695LL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 6118748115268855573LL)) ? (100647780U) : (4030637683U))))))), (min((((/* implicit */unsigned long long int) -6543506612228366930LL)), (10745729150252665764ULL)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned int i_4 = 1; i_4 < 22; i_4 += 2) 
                            {
                                arr_11 [i_4 - 1] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) var_4);
                                var_15 = ((/* implicit */long long int) ((signed char) var_3));
                                arr_12 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-126))))) ? (((((/* implicit */_Bool) (signed char)7)) ? (10745729150252665764ULL) : (((/* implicit */unsigned long long int) 4194319526U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9176305507401555711LL)) ? (2227388213U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)241))))))));
                                var_16 = (((_Bool)1) ? (125249775424525127LL) : (0LL));
                                var_17 = ((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0 + 2] [i_0 + 2])) >= (11308435794787545515ULL));
                            }
                            for (long long int i_5 = 0; i_5 < 25; i_5 += 2) 
                            {
                                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((long long int) 10745729150252665764ULL))), ((-(10745729150252665764ULL))))))));
                                var_19 = ((/* implicit */unsigned short) ((unsigned int) ((((_Bool) 1136717526U)) ? (((((/* implicit */_Bool) arr_16 [i_2] [(unsigned short)17] [(signed char)5] [i_1 - 2] [i_2])) ? (((/* implicit */long long int) arr_0 [i_3])) : (var_10))) : (((/* implicit */long long int) var_7)))));
                                var_20 = ((/* implicit */unsigned int) min((var_20), ((-((~(((unsigned int) 100647779U))))))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(-8305514950753909085LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << ((((~(2067579069U))) - (2227388226U)))))) : (((((/* implicit */_Bool) 946533214825162128LL)) ? (673937678U) : (2067579067U)))));
                            }
                            for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
                            {
                                arr_19 [i_2] [i_3] = (~(min((((/* implicit */long long int) (signed char)-94)), (3409073413473338935LL))));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) var_2)) : (-7658121578474670001LL)))) ? ((((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)154))) : (2227388214U)))) : (arr_5 [i_0] [i_2]))) : (((/* implicit */long long int) (-(5U))))));
                                var_23 = ((/* implicit */_Bool) min((((/* implicit */long long int) min((((var_12) ? (arr_0 [i_0]) : (var_7))), (((/* implicit */unsigned int) var_9))))), (min((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)15080)) : (((/* implicit */int) (_Bool)0))))), (arr_1 [i_0 + 2])))));
                                var_24 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (_Bool)1))))));
                            }
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((signed char) var_2)))));
                        }
                    } 
                } 
                arr_20 [i_1 + 1] = ((/* implicit */_Bool) ((long long int) (-((-(((/* implicit */int) (_Bool)1)))))));
                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) arr_0 [i_0]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
    {
        for (long long int i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            {
                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) (signed char)-3))))) ? (((/* implicit */int) ((signed char) var_6))) : (((/* implicit */int) arr_16 [i_7] [i_7] [i_8] [i_8] [6U]))))), (min((((/* implicit */unsigned long long int) (-(5855028699585716722LL)))), (((unsigned long long int) (_Bool)1)))))))));
                var_28 *= ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (+(var_2)))) ? (((((/* implicit */_Bool) arr_14 [i_8] [i_8] [i_8] [i_8] [i_8] [i_7] [i_7])) ? (2067579081U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_16 [16U] [(unsigned short)10] [20U] [i_7] [2U]), (var_0))))))));
            }
        } 
    } 
}
