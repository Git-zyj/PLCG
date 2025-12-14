/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222722
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
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_3)))) : (0ULL))) >= (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_0 [i_0 - 1])), (((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)160))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned char i_3 = 3; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_3 - 3])) ? (4848101883570294471ULL) : (arr_7 [i_0] [i_3 + 1] [i_1] [i_1] [i_0] [i_0]))), (((/* implicit */unsigned long long int) (+(arr_9 [i_1] [i_1] [i_1] [i_1]))))))) && (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_1 [i_1]))))))));
                            arr_10 [i_3 - 3] [i_2] [i_0] [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)68)) ^ (((/* implicit */int) arr_1 [i_2])))) << (((((((/* implicit */_Bool) ((arr_7 [i_0 + 1] [i_0 + 2] [i_2] [i_2] [i_3] [i_3 + 2]) ^ (((/* implicit */unsigned long long int) arr_6 [i_0] [i_2] [i_0]))))) ? (((4848101883570294469ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_3] [i_2] [i_0] [i_1]))))) : (min((13598642190139257132ULL), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0 - 2] [(short)2] [(short)2] [i_0])))))) - (64ULL)))));
                            arr_11 [i_0 + 2] [i_1] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */long long int) ((arr_5 [i_0 + 2] [i_2] [i_3 + 3]) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)105))) <= (arr_5 [i_0 + 2] [i_1] [i_3 + 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) (~(var_2)));
}
