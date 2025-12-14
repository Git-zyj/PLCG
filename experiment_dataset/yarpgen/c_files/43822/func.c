/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43822
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
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_2])) : (var_5))) <= (((unsigned long long int) max((((/* implicit */long long int) arr_4 [i_0] [i_3])), (65535LL))))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = arr_3 [i_0 + 3] [i_1] [i_1];
                            var_19 |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_3 [i_0 + 4] [i_1] [i_2])) >= (((/* implicit */int) var_17)))) && (((/* implicit */_Bool) ((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))), (((((/* implicit */_Bool) max(((unsigned char)32), (((/* implicit */unsigned char) arr_7 [i_0]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)70))))) : (var_5)))));
                            var_20 = ((/* implicit */_Bool) arr_5 [i_0] [i_0]);
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)166)) ? (((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) (unsigned short)8610)) : (((/* implicit */int) (unsigned char)88)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)255))))))) ? (min((max((((/* implicit */unsigned long long int) (short)27192)), (var_5))), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) var_8))));
                var_22 = ((/* implicit */unsigned long long int) arr_0 [i_0 + 1]);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) (~(((long long int) min(((unsigned short)10), (((/* implicit */unsigned short) var_14)))))));
}
