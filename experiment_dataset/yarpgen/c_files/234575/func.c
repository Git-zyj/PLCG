/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234575
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
    var_18 = max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)110)))) - (((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */unsigned long long int) -3706804770480160568LL)))))), (((unsigned long long int) min((((/* implicit */unsigned int) (short)4429)), (2572323456U)))));
    var_19 = ((/* implicit */long long int) (_Bool)0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) (~(((/* implicit */int) min((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_1]))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 4; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4451)) ? (((/* implicit */int) (unsigned char)218)) : (arr_6 [i_0] [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)102)) >= (((/* implicit */int) arr_7 [i_4 - 1] [i_4] [8U] [i_2] [i_0] [i_0])))))) : ((~(var_14))))));
                                var_22 *= ((/* implicit */long long int) ((((((/* implicit */int) arr_11 [(unsigned char)9] [i_1] [i_2] [i_3] [i_1])) > (((/* implicit */int) (((-9223372036854775807LL - 1LL)) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4420)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_9 [i_0] [i_3] [i_4 - 1])), (var_12)))) ? (((unsigned long long int) var_3)) : ((~(18446744073709551613ULL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_8)), (min((((/* implicit */long long int) var_17)), (((var_4) | (((/* implicit */long long int) 3767005632U))))))));
}
