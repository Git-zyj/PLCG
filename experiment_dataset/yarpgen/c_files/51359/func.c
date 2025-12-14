/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51359
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
    var_20 += ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), (((((/* implicit */int) (short)-19818)) + (((/* implicit */int) (unsigned short)39293))))))) ? (((/* implicit */int) (unsigned short)49415)) : (((/* implicit */int) var_14))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned char) arr_6 [i_2 + 1] [i_0 + 3]))))) ? (((/* implicit */int) var_6)) : (min(((~(((/* implicit */int) (short)2673)))), (((/* implicit */int) min((var_5), (arr_4 [i_2])))))))))));
                    var_22 = ((/* implicit */_Bool) arr_0 [i_1]);
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) ((short) arr_5 [i_3] [i_1] [i_2] [i_3]))) / (((/* implicit */int) (unsigned char)4)))));
                        arr_10 [i_2] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)220)) ? (min((((((/* implicit */_Bool) (unsigned short)46195)) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) var_8)))), (((/* implicit */int) max((var_5), ((unsigned char)0)))))) : (((/* implicit */int) ((((/* implicit */int) ((arr_6 [i_0] [i_1]) || (arr_6 [i_1] [i_1])))) != (((int) var_14)))))));
                        arr_11 [(unsigned short)2] [i_1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) ((int) arr_2 [i_3]));
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2 - 1]))) <= (((2764602918U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 - 2] [i_0 + 3]))))))))));
                    }
                }
            } 
        } 
    } 
}
