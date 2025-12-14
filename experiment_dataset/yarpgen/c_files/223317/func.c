/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223317
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
    var_11 = ((/* implicit */unsigned char) ((unsigned long long int) var_7));
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) min(((signed char)-83), (var_5))))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */signed char) (~(((/* implicit */int) min((((/* implicit */short) (unsigned char)224)), ((short)-17742))))));
                        arr_11 [i_1 + 1] [i_2] [i_2] = ((/* implicit */unsigned long long int) (short)-13090);
                        arr_12 [i_2] [5LL] [i_2] [i_3 - 1] = ((/* implicit */long long int) min((min((arr_4 [i_2]), (arr_4 [i_2]))), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)17741)))))));
                        arr_13 [i_0] [i_0] [i_2] = ((/* implicit */short) max((((/* implicit */long long int) max((((/* implicit */short) (unsigned char)182)), (min((var_0), (var_0)))))), (min((((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (4593671619917905920LL))), (((/* implicit */long long int) (unsigned char)194))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_4 = 2; i_4 < 9; i_4 += 2) 
                    {
                        arr_17 [i_0 + 1] [i_2] [i_0 + 4] [i_0 + 4] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */int) arr_6 [i_2] [(unsigned char)11] [i_2 + 2])) : (((/* implicit */int) var_9))))) : (((-8LL) - (((/* implicit */long long int) ((/* implicit */int) (short)17741)))))));
                        var_14 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)0))));
                    }
                    arr_18 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10)))), (((/* implicit */int) min((var_0), (var_0))))))) + (-4593671619917905913LL)));
                    arr_19 [i_2] = ((/* implicit */signed char) arr_15 [i_2] [i_1 + 1] [i_2 + 1] [i_2] [i_2 + 1]);
                }
            } 
        } 
    } 
    var_15 = var_0;
}
