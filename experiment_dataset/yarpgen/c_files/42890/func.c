/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42890
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
    var_20 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_8)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */int) ((unsigned char) (!((!(((/* implicit */_Bool) 4193280)))))));
                    var_22 = ((/* implicit */signed char) arr_6 [i_1]);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_23 = min((((/* implicit */unsigned short) arr_7 [0ULL] [(unsigned short)12] [(unsigned char)7] [(unsigned short)12])), (max((var_16), (((/* implicit */unsigned short) arr_6 [i_0 - 1])))));
                                var_24 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 2743714920706954795ULL)))) || (((/* implicit */_Bool) max((15703029153002596821ULL), (((/* implicit */unsigned long long int) (signed char)127)))))));
                            }
                        } 
                    } 
                    arr_14 [i_2 - 2] [i_0 + 1] [i_0 + 1] = ((/* implicit */long long int) min((((/* implicit */short) (!(((/* implicit */_Bool) min(((short)24134), (arr_0 [i_0]))))))), (arr_2 [i_2] [i_0] [i_0])));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 15703029153002596821ULL))));
}
