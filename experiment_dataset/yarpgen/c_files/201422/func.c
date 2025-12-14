/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201422
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
    var_16 = ((/* implicit */int) var_5);
    var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 4077814927U)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-3)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_12 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */int) ((((((/* implicit */int) arr_5 [i_4] [i_4 + 1] [i_4] [i_4])) >= (((/* implicit */int) var_7)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_4 + 3] [i_3 - 1])) ? (((/* implicit */int) arr_8 [i_3 - 1] [i_3 - 2] [i_3 - 2] [i_3])) : (((/* implicit */int) arr_8 [i_3 - 1] [i_3 + 2] [i_3 + 2] [(unsigned short)1]))))) : (((((unsigned int) (signed char)-43)) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) arr_1 [i_1]))))))))));
                                arr_13 [i_4 + 2] [i_3] [i_3] [i_2] [i_1] [(unsigned char)4] = ((/* implicit */int) ((long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0] [i_2] [i_3] [i_4 + 1])) & (((/* implicit */int) var_11))))) & (((((/* implicit */_Bool) 342025520U)) ? (((/* implicit */unsigned int) 1192649021)) : (arr_6 [i_1] [(unsigned char)8] [i_1]))))));
                            }
                        } 
                    } 
                    arr_14 [(unsigned char)12] [(unsigned char)12] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_2])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) (!(((var_1) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)90)))))))));
}
