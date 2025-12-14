/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226710
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(((/* implicit */int) arr_1 [i_0] [i_1])))), (((/* implicit */int) arr_2 [i_1 - 2]))))) ? (((arr_3 [i_1] [i_1]) ? (((/* implicit */int) arr_4 [i_0] [i_1 + 1])) : (((/* implicit */int) arr_4 [i_0 + 3] [i_1])))) : ((+(((/* implicit */int) arr_1 [i_0] [i_0]))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) var_10))))));
                arr_8 [i_1] = ((/* implicit */long long int) (-((-(((/* implicit */int) (_Bool)1))))));
                arr_9 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) (!(arr_3 [i_1] [i_1 - 2]))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) (~((-(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL))))))))));
                                arr_21 [i_0] [i_1] [i_2] [i_2] [i_1] [i_4] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_4 [i_1 - 2] [i_2]))))) : ((+(arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0]))))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_15 [i_3])), (var_8))))))));
                            }
                        } 
                    } 
                    arr_22 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) var_6);
                    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_2] [i_0] [i_2] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-94)))))))));
                    var_15 += ((/* implicit */signed char) ((((/* implicit */_Bool) (short)8)) ? (((/* implicit */int) (short)28338)) : ((-(((/* implicit */int) (unsigned short)0))))));
                }
                for (signed char i_5 = 2; i_5 < 19; i_5 += 4) 
                {
                    var_16 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_0 + 1] [i_5] [i_5 + 1] [i_5 + 2])))))));
                    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_5] [i_1 + 1] [i_1 + 1] [i_5])) ? (arr_19 [i_5] [i_5] [i_1 + 1] [i_5]) : (arr_19 [i_5] [i_1] [i_1 - 2] [i_5])))) ? ((+(((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) (_Bool)1)) : (7))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)148))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))));
}
