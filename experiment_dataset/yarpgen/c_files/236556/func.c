/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236556
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
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_0 - 1] = ((/* implicit */short) (+(((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) ^ (max((var_13), (((/* implicit */long long int) arr_0 [i_1]))))))));
                arr_6 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-32250)) + (((/* implicit */int) (short)-32240)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    var_19 = ((/* implicit */int) (short)32252);
                    var_20 *= ((/* implicit */_Bool) (~(((/* implicit */int) (short)32239))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    arr_13 [i_0] [i_0 - 2] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0 - 2] [i_0 - 2])) ? (var_2) : (arr_9 [i_0 + 1] [i_0 - 2])));
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) arr_4 [i_0 - 2]))));
                    var_22 = ((/* implicit */_Bool) ((short) arr_3 [i_3]));
                    var_23 = ((/* implicit */unsigned short) ((((int) arr_7 [i_0] [i_0 - 2])) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))));
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [11U])) ? (((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_3] [i_1])) : (var_15)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32252))) : (((((/* implicit */long long int) var_3)) + (arr_9 [i_0] [i_0])))));
                }
            }
        } 
    } 
    var_25 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_14) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_12)))))))));
    var_26 += ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) var_1)) / (((/* implicit */int) var_17)))), (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) (short)-32249)))))))) ? (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (short)-32256)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)-32250))))))) : ((+(((unsigned int) var_6))))));
    var_27 = ((/* implicit */unsigned int) (!((!(var_12)))));
    var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_7))));
}
