/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39672
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
    var_15 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_6)), (var_3)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) max((var_13), (var_13)))))))));
    var_16 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) 383838402U)) & (var_12))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) | (((/* implicit */int) var_9))))), ((~(var_10)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    arr_9 [i_2] [i_0] [i_0] [i_2] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_7 [i_0 - 2] [i_1])))) + ((-(((/* implicit */int) var_5))))));
                    arr_10 [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) arr_5 [i_0 - 1])), (arr_0 [i_0 + 1]))), (((arr_0 [i_0 - 3]) << (((((/* implicit */int) var_8)) - (219)))))));
                }
                var_17 = ((/* implicit */unsigned int) var_1);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) min((((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_3 [i_5] [i_3])) : (((/* implicit */int) arr_5 [i_3]))))), (max((var_7), (((/* implicit */unsigned long long int) arr_8 [i_3] [i_3] [i_5] [i_3]))))));
                    arr_17 [i_3] [i_5] [i_3] = ((/* implicit */unsigned int) ((unsigned char) (~(((/* implicit */int) arr_7 [i_5] [i_3])))));
                }
            } 
        } 
    } 
}
