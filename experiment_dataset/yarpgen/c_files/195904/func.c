/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195904
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
    var_14 = ((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11)))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_15 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2039073440U)));
        var_16 = ((/* implicit */_Bool) min((var_16), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) ((2255893856U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))))))));
    }
    for (int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_17 = ((/* implicit */signed char) ((short) arr_5 [(_Bool)1]));
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((signed char) var_2))), (((((/* implicit */unsigned long long int) arr_3 [i_1])) / (arr_4 [i_1] [(short)6])))));
        /* LoopNest 2 */
        for (signed char i_2 = 1; i_2 < 16; i_2 += 2) 
        {
            for (signed char i_3 = 2; i_3 < 15; i_3 += 4) 
            {
                {
                    arr_11 [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) arr_10 [i_2 - 1] [i_2 - 1] [i_1]);
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (((+(var_7))) | (((/* implicit */int) (!(((/* implicit */_Bool) min((2255893855U), (2255893869U))))))))))));
                    var_19 += ((/* implicit */short) (-(((/* implicit */int) var_8))));
                    arr_12 [i_1] [(short)11] [(signed char)15] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) 2039073462U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2]))) : ((-(2255893856U))))));
                }
            } 
        } 
        var_20 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1])))))) / ((+(arr_7 [i_1] [i_1]))));
    }
    var_21 |= ((/* implicit */int) (-((-(max((2576581790U), (2039073436U)))))));
}
