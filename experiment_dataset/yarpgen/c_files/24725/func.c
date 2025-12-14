/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24725
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((((/* implicit */long long int) ((((unsigned int) var_11)) << (((/* implicit */int) ((((/* implicit */int) var_5)) < (var_1))))))) != (var_11)))));
    var_15 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) min(((~(((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) (signed char)127)) - (((/* implicit */int) var_4)))))))));
                            var_17 = ((/* implicit */unsigned short) min((((unsigned char) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) -511230318))))), (((/* implicit */unsigned char) (_Bool)1))));
                            var_18 *= ((/* implicit */unsigned char) arr_6 [i_2] [(short)8] [i_3]);
                        }
                    } 
                } 
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)166)) - (((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned short) (short)23259)), (arr_7 [i_0 - 1] [i_0] [9ULL]))))))))));
                arr_12 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) max((var_5), (((/* implicit */unsigned char) arr_0 [i_0])))))))) && (min(((!(((/* implicit */_Bool) var_3)))), (((((/* implicit */int) var_0)) < (((/* implicit */int) var_4))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (var_12))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-3165440848250151162LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))))) : (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_12))))))));
}
