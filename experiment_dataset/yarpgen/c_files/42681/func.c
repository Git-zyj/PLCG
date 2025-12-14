/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42681
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
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) max((((((/* implicit */_Bool) 1767577843)) ? (((((/* implicit */_Bool) (short)-14168)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (short)-14168))))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)14166))))))), (var_9))))));
    var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)184)) % (457720750)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1 - 1] [i_2] [i_2] = ((/* implicit */long long int) var_7);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_17 |= ((((/* implicit */int) arr_2 [i_1] [i_2])) | (((/* implicit */int) (!(((/* implicit */_Bool) -47625727))))));
                                var_18 = ((/* implicit */_Bool) max((751784528U), (((/* implicit */unsigned int) (signed char)-42))));
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_0 [i_0] [i_1 - 1]), (arr_0 [i_0] [i_1 - 1]))))) : (((((/* implicit */_Bool) 1073739776)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1 - 1])))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) min((var_20), (min((((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) -1370233630)))))), ((~(((/* implicit */int) (unsigned char)169))))))));
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (~((((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) ((short) (short)14194))) : (((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) (signed char)32))))))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) (unsigned short)11634))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (((((/* implicit */unsigned long long int) arr_9 [i_0])) & (var_12))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (max((-457720750), (((/* implicit */int) (signed char)-33)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
    }
    for (unsigned long long int i_5 = 2; i_5 < 12; i_5 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_5] [i_5])), (var_4)))) ? ((~(((/* implicit */int) arr_17 [i_5] [i_5])))) : (((((/* implicit */_Bool) arr_5 [i_5 - 1] [10] [(unsigned short)5])) ? (457720750) : (var_5)))))), (((unsigned int) arr_2 [i_5 + 2] [i_5 + 2])))))));
        /* LoopSeq 2 */
        for (int i_6 = 4; i_6 < 12; i_6 += 1) 
        {
            arr_20 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_5 - 1] [i_5] [18U] [i_6] [i_6] [i_6])) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) -812500124)) ? (-457720750) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((var_3), (((/* implicit */short) (signed char)-54))))))) : (1073739776)));
            arr_21 [i_5] = ((/* implicit */unsigned long long int) (_Bool)1);
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) max((arr_5 [i_5] [i_5 + 1] [i_7 - 1]), (arr_5 [i_5] [i_5 + 1] [i_7 - 1])))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((signed char) var_4)))))) : ((+(max((var_9), (((/* implicit */long long int) var_11)))))))))));
            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) arr_10 [i_7 - 1] [(unsigned short)18] [i_7] [i_5]))));
        }
    }
}
