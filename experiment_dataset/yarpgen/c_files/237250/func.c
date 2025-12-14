/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237250
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */signed char) ((unsigned int) arr_1 [i_0 + 1]));
            var_20 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [(_Bool)1])) && (((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 2]))));
        }
        for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 2) 
        {
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_2 - 2])) ? (((/* implicit */int) arr_8 [i_2] [i_2] [i_2 - 2])) : (((/* implicit */int) arr_8 [i_2] [i_2] [i_2 + 2])))))));
            var_22 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (var_17) : (((/* implicit */int) arr_4 [i_2] [i_0 + 1]))))));
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_2 + 2])) ? ((-(arr_2 [i_0] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))))));
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_0 [i_0 + 1])));
        }
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            for (int i_4 = 1; i_4 < 19; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_6 = 1; i_6 < 19; i_6 += 3) 
                        {
                            var_24 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_0)))) ? (((((/* implicit */_Bool) var_14)) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (var_13) : (((/* implicit */int) arr_4 [i_4] [i_5])))))));
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_5] [i_4 + 1])) ? (((/* implicit */unsigned long long int) ((var_11) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))) : (((arr_15 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4] [i_3] [i_0]))) : (arr_3 [i_0])))));
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_6] [i_6] [i_6 + 1] [i_6 + 1] [i_6] [i_6] [i_5])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) < (arr_0 [i_3])))) : (((((/* implicit */_Bool) arr_4 [i_5] [i_6 - 1])) ? (arr_13 [15U] [i_3] [i_0 + 1]) : (((/* implicit */int) arr_7 [i_5] [i_0]))))));
                            arr_20 [i_3] |= ((/* implicit */unsigned char) arr_3 [i_3]);
                            var_27 *= ((/* implicit */signed char) (~((~(((/* implicit */int) var_14))))));
                        }
                        var_28 = ((/* implicit */int) arr_12 [i_0] [i_3] [i_0]);
                        var_29 ^= ((/* implicit */signed char) arr_13 [i_0] [(short)4] [i_4 + 1]);
                        arr_21 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            arr_26 [i_0] [i_3] [i_4] [i_4] [i_4] [i_5] [i_0] = ((/* implicit */_Bool) (~(var_17)));
                            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 + 1] [i_4 + 1])) ? (arr_9 [i_0] [i_3]) : (((((/* implicit */_Bool) var_10)) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_3] [i_0] [i_7] [i_0])))))));
                            var_31 = (+(((/* implicit */int) arr_15 [i_0] [i_0] [i_0 - 1] [i_4 + 1])));
                            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_0] [i_0 + 1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_4 - 1] [i_5] [i_0 + 1] [i_0 - 1] [i_4])) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))));
                            arr_27 [i_0] [i_3] [i_4 - 1] [i_5] [i_7] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_5])) : (((/* implicit */int) var_15))))));
                        }
                    }
                } 
            } 
        } 
        arr_28 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (var_6)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_24 [i_0] [19] [19] [i_0 + 1] [i_0 + 1])) : (arr_19 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1]))))));
        arr_29 [i_0] = ((/* implicit */_Bool) arr_7 [10] [10]);
    }
    var_33 ^= ((/* implicit */signed char) var_13);
    var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (-(var_13))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))) : (max((((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))), (max((((/* implicit */unsigned int) var_10)), (var_19))))))))));
}
