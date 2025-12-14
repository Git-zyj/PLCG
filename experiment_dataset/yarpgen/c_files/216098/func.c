/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216098
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
    var_13 += ((/* implicit */short) (+(9223372036854775797LL)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_14 = ((((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_13 [(short)0] [i_1 - 3] [i_1 - 1] [i_1] [i_1 - 2] [i_3 - 1])))) < (((arr_13 [i_0] [i_0] [i_1 + 1] [i_1] [i_1 - 1] [i_3 - 1]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_13 [i_1 - 1] [i_1 - 3] [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_3 - 1])))));
                                var_15 = ((/* implicit */unsigned long long int) var_2);
                                var_16 = ((/* implicit */short) (((!(((/* implicit */_Bool) (signed char)123)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [13U] [i_1] [i_1] [(_Bool)1])))))) : (((unsigned int) var_2))));
                                var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((short) 3752440194352933251LL)), (((/* implicit */short) (!(((/* implicit */_Bool) (signed char)120))))))))));
                            }
                        } 
                    } 
                } 
                var_18 -= (+(((/* implicit */int) ((((((((/* implicit */int) (short)-32765)) + (2147483647))) << (((((/* implicit */int) var_11)) - (170))))) > ((+(((/* implicit */int) var_11))))))));
                var_19 = var_2;
                var_20 += ((/* implicit */unsigned short) var_8);
            }
        } 
    } 
    var_21 &= ((/* implicit */_Bool) var_9);
    var_22 = ((/* implicit */_Bool) 3U);
    var_23 ^= ((/* implicit */signed char) (short)1125);
}
