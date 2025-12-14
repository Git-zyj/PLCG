/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29039
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
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_16)))) > (var_14)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_2] [i_0] [i_0] |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) var_8))), (((int) arr_2 [i_2]))))), (((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_0] [i_3]))))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))) : (var_2))) : (((unsigned long long int) arr_7 [i_0] [i_0] [i_2] [i_0]))))));
                            var_21 = ((/* implicit */int) (~((~(arr_10 [i_0] [i_1 - 1] [i_3 + 1] [i_3])))));
                            arr_13 [i_1] [i_2] = ((/* implicit */short) var_7);
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) arr_9 [i_3] [i_0] [i_0] [i_0]))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_3))));
                arr_14 [1] [i_0] [i_0] = ((/* implicit */short) 6716274527515384012ULL);
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) var_0);
    var_25 = ((/* implicit */unsigned char) var_13);
}
