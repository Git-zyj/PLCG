/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37744
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((short) (+(((/* implicit */int) arr_3 [i_1 - 2] [i_1] [i_1])))));
                var_19 *= ((/* implicit */short) (~(arr_0 [i_1 - 1])));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */short) arr_11 [2LL] [i_1 - 2] [i_2] [i_3] [i_3] [i_3] [i_3 + 1]);
                                arr_14 [i_0] [i_0] [i_0] = (signed char)127;
                                arr_15 [i_0] [i_0] [10ULL] [(unsigned short)15] [i_4] [i_3] = max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_9 [i_0])), (var_14)))) ? (((((/* implicit */int) arr_11 [i_4] [i_4] [0LL] [i_2] [i_2] [0LL] [i_0])) % (((/* implicit */int) arr_9 [i_0])))) : (((/* implicit */int) arr_7 [i_0] [i_3 - 1] [i_3 + 2] [i_3 + 2] [i_3 - 2])))), (min((((/* implicit */int) arr_3 [i_3 + 1] [i_3] [i_1 - 2])), (min((((/* implicit */int) var_0)), (360933104))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1]))) < (((unsigned long long int) arr_2 [i_1 - 1] [i_1 + 1]))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (short)24231)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)(-127 - 1)))))));
            }
        } 
    } 
    var_20 *= ((/* implicit */short) (+(((/* implicit */int) var_4))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) -1143867625678778449LL)) ? (2234331221U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)97)))));
}
