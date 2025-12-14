/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37220
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1]))))), ((~(arr_1 [i_2] [i_0]))))))));
                    arr_8 [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0] [i_0])), (var_19)));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                {
                    var_21 = (+(((/* implicit */int) (!((_Bool)1)))));
                    arr_17 [i_3] [i_4] [i_5] [(signed char)6] = ((/* implicit */unsigned int) arr_12 [i_3] [(unsigned char)10]);
                    var_22 = (!(((/* implicit */_Bool) var_18)));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) min((var_6), (((/* implicit */unsigned short) ((var_14) || (var_13))))))) << (((/* implicit */int) var_13))));
    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) < (min((((/* implicit */long long int) 3136989157U)), (var_8)))))) : (((/* implicit */int) ((unsigned char) ((short) var_19))))));
}
