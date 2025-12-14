/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202876
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
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) min((((((/* implicit */_Bool) (unsigned short)46652)) ? (1748491781) : (((/* implicit */int) (short)-32760)))), (var_11))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_13 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (-(arr_3 [i_3])));
                                var_15 &= 222061743;
                                arr_14 [i_4 - 1] [i_4 - 1] [i_2] [i_3] [i_4] [i_0] [i_4] = ((/* implicit */long long int) min((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)15))))), (min(((short)32759), (arr_0 [i_4 + 3] [i_2])))));
                                var_16 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_1 [i_0] [i_1])), ((-(arr_4 [i_3] [i_3] [i_3])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((((/* implicit */int) var_7)) + ((+(((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))));
}
