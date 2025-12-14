/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229210
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
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (~((((_Bool)1) ? (max((5089874173971793020LL), (((/* implicit */long long int) (unsigned short)65535)))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)16894))))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (((~(var_5))) > (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_3] [i_2 - 1] [i_1 + 1])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned short)10] [(unsigned short)10]))) : (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_5 [i_0] [i_0] [(unsigned short)0]), (arr_1 [2] [2])))))))))))));
                            arr_11 [i_0] [i_0] [i_0] [i_3] [i_0] [i_3] = min((((arr_9 [i_0] [i_2] [i_0]) / (arr_9 [i_0] [i_1 + 1] [i_0]))), (((/* implicit */unsigned long long int) -7949714707123513423LL)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        {
                            arr_18 [i_0] [(unsigned short)6] = ((/* implicit */unsigned int) (-((~((~(arr_9 [i_0] [i_1] [i_0])))))));
                            var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_8 [i_1 - 1] [i_1 - 1] [i_1 + 1])), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_10) : (((/* implicit */unsigned int) var_11)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_7))));
}
