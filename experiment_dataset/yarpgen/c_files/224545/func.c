/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224545
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
    var_14 = ((/* implicit */long long int) -1856784504);
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((unsigned long long int) (~(max((-3817004654272978570LL), (((/* implicit */long long int) var_1)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 - 1] [i_1 - 1]))) / (arr_2 [i_2 - 1] [i_1 - 1]))))))));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (+(16777208))))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) (short)2455)) - (((/* implicit */int) arr_1 [i_0])))))), (arr_2 [i_0] [(signed char)14])));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_15 [3ULL] [i_1] [i_2] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3817004654272978562LL)) && (((/* implicit */_Bool) 1672826025U))));
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -3817004654272978572LL)))))) > (arr_6 [i_0] [i_1] [i_3 - 3] [i_0]))))) : (min((arr_7 [i_1 - 1]), (((/* implicit */long long int) ((arr_13 [17LL] [i_3] [12ULL] [7U] [i_0]) & (3176510365U)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) min((var_19), ((-(var_3)))));
}
