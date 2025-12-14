/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53954
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_1]))))));
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */int) (~(459034735U)));
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((15122514395569774399ULL), (((/* implicit */unsigned long long int) (unsigned char)62)))), (((/* implicit */unsigned long long int) arr_4 [i_2]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_0] [i_0]))))) : (min((max((1754497973U), (((/* implicit */unsigned int) (short)32337)))), (((/* implicit */unsigned int) (signed char)52)))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 7; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) (+(38147713U)))) ? (4256819582U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7)))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_9 [i_4 - 1] [i_4 + 2] [i_4] [i_4 + 2] [i_4 - 1] [i_4 + 2]), (arr_9 [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 2] [i_4 + 1] [i_4 + 2])))) ? (((/* implicit */long long int) min((arr_9 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 2] [i_4 - 1] [i_4 + 1]), (arr_9 [i_4 + 2] [i_4 + 1] [i_4 + 1] [i_4] [i_4] [i_4])))) : (min((548780904033585060LL), (((/* implicit */long long int) 0U))))));
                                arr_14 [i_3] [i_3 + 1] [i_0] [i_3] [i_3] [i_0] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_4) ? (arr_0 [i_3 + 3]) : (arr_0 [i_3 + 2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? ((-(min((((/* implicit */unsigned int) var_13)), (2540469323U))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)62)) >> (((1763595055U) - (1763595050U))))))));
    var_19 = ((/* implicit */unsigned char) var_5);
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-111)) * (((/* implicit */int) (_Bool)1))));
    var_21 = ((var_2) << ((((~((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))))) + (221))));
}
