/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235194
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
    var_18 = (unsigned char)0;
    var_19 = ((short) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            {
                var_20 += ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) var_13)))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned char)43), (arr_4 [i_0] [i_1 - 4] [(unsigned char)0])))) ? (((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) (short)32758)), (2147483648U))))) : ((+(((/* implicit */int) (short)-16384)))))))));
                    var_22 = var_2;
                    arr_7 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) arr_4 [i_2 + 1] [(short)5] [i_2 + 1]))))) ? (((/* implicit */int) min((arr_4 [i_2 - 1] [i_1 - 1] [i_1 - 1]), (arr_4 [i_2 + 1] [i_1 + 2] [i_2 + 1])))) : (min((((/* implicit */int) min((var_7), (((/* implicit */short) arr_1 [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_2])) ? (((/* implicit */int) (short)-16364)) : (((/* implicit */int) arr_5 [i_0] [i_2] [i_2]))))))));
                    var_23 = (-(min((((/* implicit */unsigned int) min((arr_1 [(unsigned char)14] [i_0]), ((unsigned char)135)))), ((+(0U))))));
                }
                for (unsigned char i_3 = 1; i_3 < 20; i_3 += 4) 
                {
                    arr_10 [i_0] [i_0] = (unsigned char)85;
                    var_24 += ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 2141575161U)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_2 [i_3 - 1])))), (((/* implicit */int) var_10))));
                }
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_6 [i_1 - 4] [i_1 - 2] [i_1])) ? (arr_6 [i_1 - 3] [6U] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-16365)))))))));
                    var_26 = ((/* implicit */unsigned int) var_6);
                }
            }
        } 
    } 
    var_27 = var_12;
}
