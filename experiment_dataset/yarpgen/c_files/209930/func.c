/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209930
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
    var_14 ^= ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 883493369U)) | (var_10)))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((unsigned int) min((((/* implicit */unsigned int) var_2)), (var_9)))));
    var_15 |= ((/* implicit */unsigned int) var_5);
    var_16 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551606ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 606270235)))))) : (0LL)))) ? (((/* implicit */long long int) min((1675800987U), (((/* implicit */unsigned int) 606270229))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)37))) + (0LL)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 -= (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_0 [i_1])) : (var_4)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 1; i_3 < 8; i_3 += 4) /* same iter space */
                    {
                        var_18 -= ((/* implicit */_Bool) ((unsigned short) arr_12 [i_0] [i_0] [i_0] [i_1]));
                        arr_13 [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) arr_8 [i_0] [i_2] [i_3]))));
                    }
                    for (unsigned int i_4 = 1; i_4 < 8; i_4 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 3; i_5 < 10; i_5 += 2) 
                        {
                            var_19 ^= ((/* implicit */signed char) var_1);
                            arr_20 [i_0] [2U] [i_4] [i_5] = ((var_13) + (((/* implicit */long long int) ((unsigned int) var_3))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((1152921504606846975LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)184))))))));
                            arr_24 [i_6] [i_1] [i_1] [i_4] [7LL] = ((/* implicit */signed char) (~(((arr_16 [i_4] [i_4 + 4] [i_4 + 4] [i_4 + 3]) ^ (arr_16 [i_4 - 1] [i_4 + 4] [i_4] [i_4 + 3])))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
                        {
                            var_21 = ((/* implicit */short) max((arr_26 [i_0] [i_0] [i_2] [(unsigned char)11] [i_7]), (((/* implicit */int) var_1))));
                            var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_11)) ? (1378870580U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26003)))))))), (4106011253914285320LL)));
                        }
                        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_10 [i_4])) ? ((+(arr_5 [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (arr_27 [i_4] [i_8] [i_1] [i_4] [i_4] [i_4 + 4]) : (((/* implicit */int) (signed char)-103)))))))));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_4] [6ULL] [6ULL] [(short)5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64910))) != (var_3))))) : (((var_3) | (((/* implicit */unsigned long long int) var_13))))))));
                            arr_30 [i_0] [i_1] [i_2 - 1] [i_4] [i_8] = ((/* implicit */unsigned short) (short)-32763);
                        }
                    }
                    var_25 -= min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))))), (((unsigned char) arr_17 [i_0] [(unsigned char)0])));
                }
            } 
        } 
    } 
    var_26 += ((/* implicit */signed char) (+(var_0)));
}
