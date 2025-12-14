/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49366
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
    var_19 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 35933343)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)69))) : (var_15))))) ? (-35933344) : (((/* implicit */int) arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) -35933365)), (3182709002U))) - (((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [(unsigned short)14])) ^ (((/* implicit */int) var_8)))) + (((/* implicit */int) (unsigned short)43189)))))));
                    arr_8 [i_0] [i_1 + 2] |= ((/* implicit */unsigned short) var_0);
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) /* same iter space */
                    {
                        arr_12 [5U] [i_1] [i_2] [i_3] = ((/* implicit */int) (-(17969911097397501538ULL)));
                        var_22 += ((((/* implicit */_Bool) (short)32765)) ? (((/* implicit */int) max((arr_1 [i_1 + 4]), (arr_1 [i_1 + 4])))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_11))))) >= (((((/* implicit */int) (short)32765)) / (((/* implicit */int) (unsigned char)255))))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
                    {
                        arr_17 [i_4] [(unsigned char)18] [i_1] [9U] = ((/* implicit */int) var_6);
                        arr_18 [(short)11] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) min(((-(((/* implicit */int) var_11)))), (((/* implicit */int) arr_3 [i_2] [i_1]))))) + (((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1 - 1] [i_1])) ? (arr_9 [i_1] [i_1] [i_1 + 4] [i_1 + 4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)186)))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
                    {
                        var_23 -= ((/* implicit */unsigned short) ((arr_10 [i_1] [i_1 + 2] [i_1] [i_2]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1 + 2] [i_1 - 1] [i_1] [i_1])))));
                        arr_22 [i_0] [i_1] [i_2] [i_2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 3])) || (((/* implicit */_Bool) var_9))));
                    }
                    arr_23 [8] [i_1] [i_2] [(unsigned short)10] = ((/* implicit */int) arr_16 [8U] [i_1] [i_2] [i_2]);
                }
            } 
        } 
    }
}
