/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241734
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) max((288230374004228096LL), (((/* implicit */long long int) min((arr_3 [i_0 + 1]), (arr_3 [i_0]))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [23LL] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-288230374004228086LL), (((/* implicit */long long int) arr_9 [i_3 - 1] [12U] [12U] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1])) && (((((/* implicit */long long int) 3657763965U)) <= (-1LL))))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */unsigned long long int) 776798415612215199LL)) | (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))));
                            arr_12 [i_0] [i_3] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) 2287828610704211968ULL);
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) 288230374004228113LL)))) ? (288230374004228096LL) : (((/* implicit */long long int) var_7)))) <= (((/* implicit */long long int) (+(var_4)))))))));
}
