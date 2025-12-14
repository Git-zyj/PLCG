/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213884
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_0 [i_1] [i_0]) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_2 [i_1])))) + (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (unsigned short)32767)) : (((/* implicit */int) (unsigned short)36529))))))) ? (((/* implicit */int) ((_Bool) arr_1 [i_0]))) : (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_3] [17U] [17U] [i_3] [i_3] = ((/* implicit */signed char) 3633110694U);
                            var_12 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40368)) ? ((+((+(arr_3 [i_2] [i_2]))))) : (((arr_1 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3] [i_3]))) : (arr_7 [i_0] [i_2])))));
                            arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) (+(2147918146U)));
                            arr_13 [i_0] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)38929)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_3])) : (((/* implicit */int) arr_1 [i_1]))))) : (((arr_10 [i_0] [i_0] [i_2] [i_2]) ? (arr_3 [i_3] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))))) ? (((((/* implicit */_Bool) max((arr_3 [17U] [(_Bool)1]), (((/* implicit */unsigned long long int) arr_2 [i_0]))))) ? (arr_3 [i_2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-15))))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [(signed char)17] [i_0] [10U] [i_0])) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)26607)), (3473779452U)))) : (var_5)))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) (unsigned short)511))))) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_0)))), (((/* implicit */int) max((arr_5 [i_0] [8U] [i_0]), (((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) var_0)))))))));
                arr_14 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */int) ((signed char) 6286102278293854876ULL))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [16ULL])) : (((/* implicit */int) (unsigned short)38929))))))), (((arr_6 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0] [i_0]), (arr_1 [i_0])))))))));
            }
        } 
    } 
    var_14 = ((unsigned short) var_7);
    var_15 = ((unsigned long long int) min((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) % (var_5)))));
}
