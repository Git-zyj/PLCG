/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196213
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
    var_20 = ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 4; i_2 < 15; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */int) max((min((2578092538712773063ULL), ((-(arr_7 [i_0] [i_1] [i_2 + 1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_5 [(unsigned short)10])) != (((/* implicit */int) var_1))))) >= (max((((/* implicit */int) var_14)), (-938534166))))))));
                            arr_8 [i_1] = ((/* implicit */int) 17713513702283516610ULL);
                            var_22 = ((/* implicit */unsigned int) max((arr_3 [i_1]), (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (arr_3 [i_1])))));
                        }
                    } 
                } 
                arr_9 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (short)32767))))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1] [i_0])) ? (((733230371426035021ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */unsigned long long int) (unsigned char)221)), (arr_3 [i_1]))))) : (max(((~(var_3))), (min((17713513702283516610ULL), (((/* implicit */unsigned long long int) (unsigned short)47202))))))));
            }
        } 
    } 
}
