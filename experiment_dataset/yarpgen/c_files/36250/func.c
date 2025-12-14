/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36250
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned char)96)) - (78))))))) : (((/* implicit */int) var_4))));
    var_15 |= ((/* implicit */unsigned long long int) var_3);
    var_16 = ((/* implicit */short) ((((/* implicit */long long int) ((min((((/* implicit */unsigned int) (_Bool)1)), (20U))) + (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) == (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (3502889860548312765LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (4294967274U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-26391))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_17 = ((((30U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) | (((((/* implicit */_Bool) 3402843561U)) ? (892123746U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-13))))));
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) max((((signed char) (short)26415)), (((/* implicit */signed char) (_Bool)0)))))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_5 [(unsigned char)3] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) arr_5 [i_0] [i_1] [i_2] [i_4])) : (68719476735LL))) + (9223372036854775807LL))) << ((((((+(arr_5 [i_4] [i_3] [(short)1] [i_0]))) + (1869013377))) - (51)))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) 3U))));
                /* LoopNest 3 */
                for (signed char i_5 = 3; i_5 < 11; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 2; i_7 < 11; i_7 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) ((int) (_Bool)1));
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((1930825123727592088ULL) >> (((((((/* implicit */int) arr_8 [i_0] [i_1])) << (((/* implicit */int) (_Bool)1)))) - (280))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))) : (892123736U)))))))));
                                var_22 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_23 [i_7] [i_7 + 3] [i_7] [i_7] [(_Bool)1])) ? (((/* implicit */unsigned int) arr_23 [i_7 + 1] [i_7 + 1] [i_7] [i_7] [(unsigned short)6])) : (11U))));
                                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3020204464U)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */int) min(((unsigned short)20003), (((/* implicit */unsigned short) arr_19 [i_0] [i_1] [2U] [i_6] [i_0]))))) : ((+(((/* implicit */int) (signed char)14)))))))));
                                var_24 = ((/* implicit */signed char) 15265909373443870001ULL);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) var_10);
}
