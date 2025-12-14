/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19876
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
    for (unsigned long long int i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_4 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2094745177)) ? (2ULL) : (((/* implicit */unsigned long long int) 1211067940))));
                                arr_16 [i_0 + 2] [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_8 [i_1] [i_1] [i_0]);
                                var_14 = ((/* implicit */int) min((var_14), (-976681872)));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */signed char) ((_Bool) min((((/* implicit */long long int) ((-1211067954) != (-320077102)))), (7056584830260406672LL))));
                    var_16 *= ((/* implicit */_Bool) (+(arr_6 [i_0] [i_2])));
                    arr_17 [i_0] [i_1] = ((/* implicit */unsigned long long int) max((((short) max((var_9), ((short)12709)))), (((/* implicit */short) ((_Bool) max((arr_14 [i_0 - 2] [i_0] [i_1] [i_0] [i_1] [i_2]), (-7056584830260406679LL)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) 1080863910568919040LL);
}
