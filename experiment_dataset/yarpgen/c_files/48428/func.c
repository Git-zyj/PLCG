/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48428
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
    var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) ((var_4) > (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned short) var_4);
                    var_11 += ((/* implicit */unsigned int) (-(((int) arr_9 [i_2 + 2] [i_1]))));
                    var_12 = ((/* implicit */unsigned int) min((((/* implicit */int) arr_8 [i_0 + 1] [i_1 + 1] [i_2 - 1])), ((-(((/* implicit */int) arr_8 [i_0 - 1] [i_1 + 2] [i_2 - 1]))))));
                }
            } 
        } 
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((unsigned int) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_7))))) | (((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))))))));
        arr_11 [i_0] [i_0] = ((/* implicit */int) arr_4 [i_0 - 1] [i_0] [i_0]);
        var_14 -= ((/* implicit */_Bool) var_7);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) arr_12 [i_3]);
        var_16 = ((/* implicit */unsigned short) min((var_6), (((/* implicit */unsigned long long int) arr_13 [i_3]))));
        var_17 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_12 [i_3])) | (((/* implicit */int) arr_12 [i_3])))) + (((/* implicit */int) var_7))));
        var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3]))) : (arr_13 [i_3]))) & (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_13 [i_3])), (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3]))) : (578592778U)))));
    }
}
