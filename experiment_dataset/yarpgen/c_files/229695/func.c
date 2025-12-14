/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229695
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
    var_14 = min((((unsigned int) ((short) var_3))), (((/* implicit */unsigned int) max((var_11), (((unsigned char) var_4))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */short) min((var_15), (((short) arr_0 [12ULL] [i_0]))));
        arr_3 [i_0] = ((/* implicit */long long int) ((arr_0 [9U] [9U]) - (((/* implicit */unsigned int) ((int) (short)16672)))));
        arr_4 [8U] = ((/* implicit */unsigned char) ((int) arr_1 [i_0] [i_0]));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)28)))))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            arr_10 [i_1] [i_2] [i_2] |= ((/* implicit */unsigned short) arr_9 [(short)4] [i_2]);
            /* LoopNest 3 */
            for (short i_3 = 3; i_3 < 14; i_3 += 2) 
            {
                for (unsigned int i_4 = 4; i_4 < 13; i_4 += 4) 
                {
                    for (unsigned char i_5 = 2; i_5 < 15; i_5 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */int) arr_1 [i_1] [i_4]);
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((short) arr_9 [i_1] [(short)0])))));
                            var_19 -= ((/* implicit */unsigned char) (signed char)-13);
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_13 [i_1] [i_2] [i_2] [i_5]))));
                            var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_4 - 2]))));
                        }
                    } 
                } 
            } 
        }
        arr_18 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
    }
}
