/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222494
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1]))) - (11110652019187668535ULL))))))))))));
        var_13 = var_2;
    }
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 4; i_3 < 11; i_3 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_14 = ((/* implicit */signed char) (-(((((/* implicit */int) ((0ULL) == (((/* implicit */unsigned long long int) arr_7 [i_1]))))) - (((var_2) ? (((/* implicit */int) var_6)) : (arr_9 [i_1] [i_3])))))));
                        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_10 [i_2])))), (((((/* implicit */_Bool) arr_7 [i_1])) ? (6286907871012859837ULL) : (6286907871012859844ULL))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_2] [i_3 - 2] [i_3 - 3] [i_4])) ? (arr_14 [i_2] [i_3 - 2] [i_3 - 2] [i_4]) : (arr_14 [i_2] [i_3 - 4] [i_3 + 2] [i_4])))))))));
                        arr_15 [i_4] [i_2] [i_2] [i_1] &= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_11 [i_2])), ((unsigned short)10886)))) || (((/* implicit */_Bool) arr_14 [i_2] [10U] [i_3] [i_4])))))) + (min((((/* implicit */unsigned long long int) arr_5 [i_4])), (var_3))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) (((~(arr_12 [i_1] [i_2] [i_3 - 2]))) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        var_17 = ((/* implicit */_Bool) max(((signed char)82), ((signed char)105)));
                    }
                    arr_20 [i_1] = ((/* implicit */unsigned long long int) (signed char)-110);
                    var_18 = ((/* implicit */unsigned int) arr_17 [i_3 - 2] [i_3 - 4] [i_3 - 4]);
                    var_19 = ((/* implicit */unsigned int) var_4);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_8))))), (var_8)))));
    var_21 = ((/* implicit */signed char) (~(var_8)));
}
