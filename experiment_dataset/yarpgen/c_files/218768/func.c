/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218768
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_0)) | (((/* implicit */int) var_17))))))) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_15) > (((/* implicit */int) var_1))))))));
    var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_14)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10085)))))))) < (((unsigned long long int) (~(((/* implicit */int) var_11)))))));
    var_20 ^= ((/* implicit */unsigned char) var_3);
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)127)) ? (((((/* implicit */_Bool) (unsigned short)25011)) ? (((/* implicit */int) (unsigned short)25001)) : (((/* implicit */int) (unsigned short)25011)))) : (-1608107372))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */int) var_10);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) arr_7 [i_0] [i_0 + 2] [i_3 + 1]);
                            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((((arr_9 [(unsigned char)6] [i_0] [i_0]) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1)))))))));
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3 + 1] [8U] [i_0 + 1])) ? (((/* implicit */unsigned long long int) min((arr_7 [i_3 + 1] [i_2] [i_0 - 1]), (arr_7 [i_3 + 1] [i_1] [i_0 - 2])))) : ((+(0ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
