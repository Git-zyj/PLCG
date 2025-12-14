/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4060
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_6 [i_2] [i_1] [i_2 - 2] = (-(7100921251031027418ULL));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (unsigned char)107))) <= (((((/* implicit */int) arr_5 [i_0] [i_2 + 1] [i_4])) >> (((-2098718903) + (2098718921)))))));
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) min((((/* implicit */long long int) -2098718903)), (-1871785523309235131LL))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2098718903)) ? (((/* implicit */long long int) 2002505975U)) : (-917263621903957577LL)))), ((~(arr_8 [i_1] [i_2 - 1] [i_2 - 1] [i_2 + 3])))));
                    var_23 += ((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_5 [i_2 + 2] [i_2 + 2] [i_2 - 1])), (10256480335159975420ULL))) << (((((((/* implicit */_Bool) arr_0 [(unsigned short)12])) ? ((-(((/* implicit */int) arr_5 [i_0] [i_1] [i_2 + 3])))) : ((~(((/* implicit */int) var_7)))))) + (7844)))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * ((~((~(3124365274U)))))));
}
