/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243791
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
    var_13 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (var_0))))))), (max((var_4), (((/* implicit */unsigned int) var_3))))));
    var_14 = min((((/* implicit */int) var_3)), (((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) min(((unsigned short)255), ((unsigned short)65280)))))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) (((!(((/* implicit */_Bool) var_0)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65280)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))))) >> (((var_0) - (14415936985316722292ULL)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_3 = 4; i_3 < 14; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_0] [i_2] [i_2]);
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [(unsigned short)3] [i_0] [i_0]))))) >> (((((var_1) & (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) - (10366U))))))));
                        arr_12 [i_0] [i_0] [i_0] [i_3 - 4] = (unsigned short)258;
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        arr_15 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned short)255)))), ((-((-(((/* implicit */int) (unsigned short)254))))))));
                        arr_16 [i_0] [i_0] [i_0] [5] [i_0] [i_4] |= (~(((((/* implicit */int) arr_5 [i_0] [i_1])) >> (((arr_14 [i_1]) + (9159222070442725167LL))))));
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((_Bool) (~(min((var_6), (((/* implicit */unsigned int) arr_7 [2ULL]))))))))));
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_13 [i_0] [i_1] [(unsigned char)9] [i_0])))) ? (((/* implicit */int) arr_8 [i_4] [i_2] [i_1] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_12)), (arr_6 [4U] [i_2] [4U])))))))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_20 [i_5] [i_5] [i_2] [i_1] [i_5] [i_0] = ((/* implicit */unsigned short) var_7);
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((short) arr_2 [i_2])))));
                    }
                    arr_21 [(_Bool)1] [i_1] [i_2] = ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)258))))), (var_0)))));
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (unsigned short)65280))));
                    arr_22 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned short)258)) ? (((/* implicit */int) (unsigned short)65276)) : (((/* implicit */int) (unsigned short)256))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((min(((unsigned short)65294), ((unsigned short)65275))), (max((((/* implicit */unsigned short) var_5)), (var_8)))))))))));
}
