/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232425
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2 + 2] [i_1])), (arr_2 [(unsigned short)16] [(unsigned short)16] [i_1]))) ^ (((/* implicit */unsigned long long int) arr_4 [i_2 - 3]))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))));
                    arr_7 [i_0] = ((/* implicit */unsigned long long int) (-(1202498704U)));
                    var_17 = ((/* implicit */long long int) ((arr_5 [i_2] [i_2] [i_2 - 2] [i_2 - 1]) <= (arr_5 [i_2] [i_2] [i_2 - 4] [i_2 - 4])));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */int) max((((((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))) + (min((1202498704U), (((/* implicit */unsigned int) 2147483637)))))), (((/* implicit */unsigned int) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_1]))))));
                                var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_5)), (max((max((var_14), (((/* implicit */long long int) arr_10 [i_0] [i_1] [i_2] [(_Bool)1] [0U])))), (((/* implicit */long long int) (-(arr_4 [5]))))))));
                                var_20 *= ((/* implicit */unsigned char) min((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) ^ (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 3092468598U)) == (arr_2 [i_0] [i_0] [i_0])))))), (((/* implicit */unsigned long long int) ((arr_9 [i_1] [i_2] [i_3] [i_4]) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_3] [i_4 + 2])) : (((/* implicit */int) arr_9 [i_0] [i_2 - 2] [i_3] [i_3])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) 7769392645703927665ULL);
}
