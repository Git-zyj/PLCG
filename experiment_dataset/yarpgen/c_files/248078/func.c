/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248078
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_18 = arr_4 [i_0] [i_0] [i_0];
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [10LL])))))) ? (((/* implicit */int) ((unsigned char) 9850297445038724153ULL))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_10))))))));
                            arr_9 [i_3] [i_3] [10LL] [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63535))) > (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)125))))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (8596446628670827486ULL)))))));
                            var_20 ^= ((/* implicit */unsigned long long int) var_5);
                        }
                    } 
                } 
                arr_10 [i_0] [(signed char)14] = ((/* implicit */unsigned char) arr_7 [i_0] [i_1] [2ULL] [(signed char)14] [i_1]);
                var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)69)) ? ((+((-(((/* implicit */int) (_Bool)1)))))) : ((+(((/* implicit */int) arr_1 [i_1]))))));
            }
        } 
    } 
    var_22 ^= ((/* implicit */unsigned int) (short)-28638);
    var_23 = ((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)56)), (min((((long long int) var_13)), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)1982)))))))));
}
