/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30772
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
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) || (((/* implicit */_Bool) (+((~(var_8))))))));
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((long long int) var_2)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_3)), (var_9))))));
                                arr_13 [i_0] [(unsigned short)10] [i_2] [10U] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0 + 2] [i_0])) : (((/* implicit */int) (short)-15252))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) ? (((arr_4 [i_0 - 1] [i_1]) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_1])) : (((/* implicit */int) arr_4 [i_0 - 1] [i_1])))) : ((+(var_4)))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */int) max((var_8), (((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0 - 1] [i_0])))))));
                }
                for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 4) 
                {
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (11472640554351602487ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_8 [i_1] [i_1] [i_5] [i_1])), (var_7)))) ? ((~(arr_3 [i_1] [i_1]))) : (((/* implicit */long long int) arr_6 [i_0 + 1]))))))))));
                    arr_16 [i_0] [i_0] [i_1] [i_0] = ((((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_5] [i_5 - 1] [i_5] [(unsigned short)13])) ? (((/* implicit */int) arr_11 [i_0 - 1] [i_1] [i_5 - 1] [i_1] [i_0])) : (((/* implicit */int) arr_11 [i_0 - 1] [i_1] [i_5 - 1] [(_Bool)1] [i_0])))) < ((-(var_4))));
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_2), (arr_2 [i_5] [i_1])))) ? (((/* implicit */int) ((unsigned short) var_1))) : (((/* implicit */int) arr_2 [(signed char)8] [i_1]))))) ? (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0 + 1] [i_0]))) + (arr_1 [1] [i_1]))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_5 - 1] [i_0 + 1])))))) : ((~(arr_3 [i_0 + 1] [i_0])))));
                }
                var_19 = ((/* implicit */signed char) ((unsigned long long int) ((var_5) ^ (((/* implicit */int) arr_11 [i_1] [i_1] [i_0 - 1] [i_0] [i_0 + 2])))));
                var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? ((+(((/* implicit */int) (!((_Bool)1)))))) : (((((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_0])) | (((/* implicit */int) ((((/* implicit */int) arr_2 [(_Bool)1] [i_1])) > (((/* implicit */int) arr_8 [i_1] [(signed char)2] [i_0 + 1] [i_1])))))))));
            }
        } 
    } 
    var_21 = min(((+(var_1))), (((/* implicit */long long int) var_6)));
    var_22 = ((/* implicit */_Bool) -1LL);
}
