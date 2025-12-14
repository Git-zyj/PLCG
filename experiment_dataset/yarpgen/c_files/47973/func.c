/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47973
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))));
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0] [i_0]) : (var_2)))) ? (((((/* implicit */int) (unsigned char)66)) & (arr_1 [(_Bool)1]))) : (((((arr_0 [(short)17] [(short)17]) + (2147483647))) << (((var_1) - (4095044741U)))))))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) (unsigned short)45898);
                    var_16 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) arr_0 [i_0] [i_2])), (arr_8 [i_0] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_1 [i_1]) : (arr_1 [i_1]))))));
                    arr_9 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((unsigned short) (unsigned short)19860))) ? (((/* implicit */unsigned long long int) ((int) var_5))) : (((((/* implicit */_Bool) var_9)) ? (14095360063425415001ULL) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])))))), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_3 = 2; i_3 < 23; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                {
                    arr_14 [i_4] [(short)6] &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (var_4)))) || (((((/* implicit */_Bool) (unsigned short)3076)) || (((/* implicit */_Bool) var_10)))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_11 [i_0] [i_3 + 1] [i_3])), (arr_10 [i_0] [i_3 - 2] [i_3 + 1]))))));
                    arr_15 [i_0] [i_0] [(unsigned short)2] = ((/* implicit */signed char) (+(((var_2) / (((/* implicit */int) var_12))))));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) var_3))) & (((/* implicit */int) var_5))));
}
