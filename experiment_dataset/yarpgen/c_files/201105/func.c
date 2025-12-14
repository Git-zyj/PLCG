/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201105
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
    var_13 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */int) var_7)))) - (min((((/* implicit */int) var_0)), (var_8)))))), (((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)54253), (((/* implicit */unsigned short) var_7)))))) / (((unsigned int) var_9))))));
    var_14 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_0)) <= (var_5)))) + (min((((/* implicit */int) (unsigned short)48382)), (var_9)))))), (var_4)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_1] [(unsigned char)4] = ((/* implicit */unsigned long long int) -447459334);
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54257)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) min((arr_1 [i_0]), ((_Bool)1)))) : (((/* implicit */int) arr_1 [(unsigned char)21]))))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */int) 4265199094U);
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_2 + 2]) + (arr_0 [i_2 + 1])))) ? ((~(arr_0 [i_2 - 1]))) : (arr_0 [i_2 + 1])));
                                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_0] [i_2] [i_2 - 1] [i_4 + 4]))))) ? (((((((/* implicit */_Bool) (unsigned short)54251)) && (((/* implicit */_Bool) (unsigned short)18857)))) ? (((/* implicit */unsigned int) min((var_8), (((/* implicit */int) (short)1536))))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [5ULL] [(_Bool)1] [(_Bool)1]))) : (2096640U))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) (_Bool)1))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (-816782611)))) + (((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))), (((/* implicit */unsigned long long int) 1303772352U))));
}
