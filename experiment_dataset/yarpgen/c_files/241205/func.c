/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241205
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
    var_19 = ((/* implicit */signed char) max((((/* implicit */long long int) var_2)), ((-(var_18)))));
    var_20 = ((/* implicit */unsigned int) (!(var_2)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    var_21 = max((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1]))) >= (var_5)))), (min((((/* implicit */short) var_10)), (arr_8 [(_Bool)1] [i_1] [i_0] [i_0]))));
                    arr_9 [(_Bool)1] [(_Bool)1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (arr_5 [i_2] [i_2 + 1])))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_10))))) : (((long long int) arr_6 [i_0] [i_1] [i_2]))));
                }
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (-((((!(((/* implicit */_Bool) -1667814514)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -5793617417831591653LL))))) : (((/* implicit */int) (_Bool)1)))))))));
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((unsigned char) (!(arr_2 [8] [i_1])))))));
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) min((((((/* implicit */int) (short)14844)) / (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_13)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        for (int i_5 = 1; i_5 < 16; i_5 += 3) 
                        {
                            {
                                var_25 &= ((/* implicit */_Bool) max((((/* implicit */long long int) 3904242116U)), (((((/* implicit */_Bool) 12401185726980651501ULL)) ? (3942535633433759604LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                                arr_17 [(short)5] [i_1] [i_3] [i_3] [i_5] [i_5] = ((/* implicit */signed char) var_16);
                                var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_11 [i_5 + 2] [i_5] [i_5] [i_5 + 1])))))));
                            }
                        } 
                    } 
                    var_27 |= ((/* implicit */signed char) (-(min((((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) var_3)))), (((/* implicit */int) ((5117428020964869846LL) != (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
                }
                var_28 = ((/* implicit */int) min((var_28), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11))))));
                var_29 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))))) * (max(((-(var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_0])) ^ (((/* implicit */int) var_13)))))))));
            }
        } 
    } 
}
