/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201097
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_0] [i_0] [8] = ((/* implicit */signed char) max((((/* implicit */long long int) ((unsigned int) var_1))), (arr_2 [i_0] [3LL] [i_2])));
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_16))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */long long int) -1)) : (-4763360347401874836LL)))) ? ((-(var_10))) : (var_10)))), (max((-4763360347401874819LL), (((/* implicit */long long int) (signed char)-117))))));
                                arr_13 [10U] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */short) arr_0 [i_2] [i_4]);
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 20LL)) ? (var_12) : (((/* implicit */long long int) var_3))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_2 [i_2] [i_1] [i_0])) : (15ULL))) : (((/* implicit */unsigned long long int) ((4763360347401874830LL) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2])))))))) % (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2] [i_2]))))), ((+(arr_0 [i_0] [i_0]))))))));
                    var_19 = ((/* implicit */unsigned int) (((+(arr_2 [i_0] [i_1] [9LL]))) - (((/* implicit */long long int) (+(((((/* implicit */_Bool) 1675012647U)) ? (((/* implicit */unsigned int) arr_5 [i_0])) : (arr_0 [i_0] [i_0]))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) max((var_1), (((/* implicit */short) ((-4763360347401874830LL) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) -725279730)) >= (2619954669U))))))))));
    var_21 += ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (min((((/* implicit */unsigned int) var_10)), (var_6))))))));
}
