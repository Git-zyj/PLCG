/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50229
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
    var_11 = ((/* implicit */short) (-(1045095818U)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_0 [i_0])), (max((arr_8 [i_2] [i_1] [i_0]), (arr_8 [i_0] [i_2 - 1] [i_2])))));
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        var_13 = arr_6 [i_0];
                        arr_12 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */int) ((unsigned char) arr_5 [i_2 + 2] [i_2 - 1]))), ((+(((/* implicit */int) ((arr_11 [i_2] [i_1] [i_2] [i_2]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 22; i_4 += 3) 
                    {
                        var_14 ^= (+(((/* implicit */int) arr_3 [i_2 + 3] [i_4 + 2])));
                        arr_15 [i_0] [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                    }
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_0]))));
                        arr_19 [i_0] [i_2] = ((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */unsigned long long int) arr_9 [i_2] [i_1])), (((3881138480496449563ULL) - (((/* implicit */unsigned long long int) arr_17 [i_5] [i_2] [i_2 - 1] [i_1] [i_2] [i_0])))))) : (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0])));
                        arr_20 [i_2] [i_2] [i_2 + 2] [i_5] = ((/* implicit */unsigned long long int) ((((var_4) + (2147483647))) << (((((var_4) + (194171606))) - (20)))));
                    }
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)8926))))) > (((((/* implicit */_Bool) arr_6 [i_0])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_13 [i_0] [i_1] [i_1] [i_2 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) && (arr_16 [i_1] [i_1]))))))))))));
                }
            } 
        } 
    } 
}
