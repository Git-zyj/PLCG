/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204322
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_9 [i_0] [(unsigned short)2] &= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) max(((signed char)-79), ((signed char)-79)))) || (((/* implicit */_Bool) arr_4 [8LL])))))));
                        var_17 = ((/* implicit */int) (_Bool)0);
                    }
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) 2660891237U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [(unsigned short)19] [(signed char)10] [i_2] [i_1 + 1] [i_5] [(signed char)10] [i_0]))) : (1634076059U))))));
                            arr_17 [i_0] [i_0] [i_0] [i_4] [i_5] [i_1 + 1] [i_1 + 1] |= ((((/* implicit */_Bool) arr_7 [i_4] [i_4] [(unsigned short)16])) || (((/* implicit */_Bool) arr_7 [i_4] [i_1 - 1] [i_1 + 1])));
                            arr_18 [i_0] = ((/* implicit */long long int) arr_12 [i_5] [3] [i_0]);
                        }
                        for (long long int i_6 = 3; i_6 < 19; i_6 += 4) 
                        {
                            arr_21 [i_0] [i_0] = ((/* implicit */long long int) max((((arr_16 [i_6 - 3] [9U] [13U] [i_6 - 3] [i_6] [i_6 - 3] [i_6]) ? (arr_19 [i_6 - 2] [(_Bool)1] [i_6 + 1] [i_6 + 1] [i_6 - 2]) : (arr_19 [i_6 - 1] [i_6 - 2] [i_6 - 3] [i_6 + 1] [i_6 - 3]))), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-79)) & (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)78)) : (((/* implicit */int) arr_20 [i_6 + 1] [i_4] [i_1] [i_1])))) : (((/* implicit */int) arr_1 [i_1 - 1]))))));
                            arr_22 [2] [i_0] = ((/* implicit */long long int) ((unsigned int) ((_Bool) arr_16 [i_6 + 1] [i_6 - 1] [i_6 - 3] [i_6 + 1] [i_6 + 1] [(_Bool)1] [i_6 - 1])));
                        }
                        for (int i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            var_19 = ((/* implicit */signed char) arr_2 [i_2] [i_1] [i_0]);
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = min((((/* implicit */int) arr_1 [i_1 - 1])), ((-(var_6))));
                            arr_27 [i_0] [i_1] [i_2] [i_0] [i_7] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((1634076058U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [13U] [(unsigned short)10] [i_2] [i_4])) ? (((/* implicit */int) (signed char)2)) : (arr_19 [i_0] [i_7] [i_2] [i_4] [i_7]))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) min(((signed char)7), (var_10))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0]))) * (arr_4 [i_1 - 1])))));
                            var_20 -= ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (var_0)));
                        }
                        arr_28 [i_4] [i_4] [i_1 - 1] [i_4] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0])) < (((/* implicit */int) max((arr_16 [6U] [i_4] [i_2] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1]), ((_Bool)1))))));
                    }
                    var_21 = ((/* implicit */long long int) var_7);
                    arr_29 [i_2] [i_0] [i_2] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1420896461U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (1634076059U)))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_0]))))))), (max((((((/* implicit */_Bool) (unsigned short)42239)) || (var_4))), ((_Bool)1)))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)42239))));
    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (signed char)-61))));
    var_24 = ((/* implicit */unsigned short) ((unsigned int) var_12));
}
