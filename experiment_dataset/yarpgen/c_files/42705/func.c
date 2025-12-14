/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42705
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
    var_17 = ((/* implicit */int) var_16);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)8)), (795555529U))))));
                var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((0ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) | (((arr_1 [i_0] [i_1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_2] = ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [(_Bool)1] [i_0])) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)5)), ((~(((/* implicit */int) (_Bool)1))))))) : (min((((/* implicit */unsigned long long int) ((int) arr_1 [(signed char)16] [12U]))), (arr_9 [i_3] [i_2] [i_0] [i_0]))));
                            var_20 = ((/* implicit */signed char) (unsigned char)5);
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (-(((/* implicit */int) min((((/* implicit */unsigned char) max((var_15), ((_Bool)1)))), ((unsigned char)111)))))))));
    var_22 = ((/* implicit */short) ((unsigned short) (!(((/* implicit */_Bool) (((_Bool)1) ? (2524983096U) : (1970244988U)))))));
    var_23 = ((/* implicit */_Bool) (-(min((((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)7))))))));
}
