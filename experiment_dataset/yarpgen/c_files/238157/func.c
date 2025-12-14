/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238157
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
    for (int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [(unsigned short)5] [i_0] = ((/* implicit */unsigned long long int) (~(var_6)));
                var_16 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (+(-1783858890)))) ? (((int) arr_2 [i_0] [i_1])) : ((+(41317226))))));
                var_17 ^= ((/* implicit */unsigned int) max((((984406148) >> (((-41317249) + (41317272))))), (((/* implicit */int) ((((/* implicit */_Bool) -133412969)) && (((/* implicit */_Bool) 25U)))))));
                var_18 = ((/* implicit */signed char) ((short) 715496726U));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    var_19 *= max((max((arr_3 [i_1] [0ULL]), (arr_3 [i_0 + 1] [(unsigned char)0]))), (((arr_3 [16] [16]) & (arr_3 [i_0 + 2] [16LL]))));
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((((/* implicit */int) ((short) ((unsigned long long int) arr_9 [i_0] [i_0 - 2] [4U] [6LL])))), (max((max((((/* implicit */int) (unsigned short)41127)), (-41317249))), (((/* implicit */int) max(((unsigned char)112), (((/* implicit */unsigned char) arr_9 [(unsigned short)8] [(unsigned short)8] [i_2] [14LL]))))))))))));
                    var_21 = ((/* implicit */int) ((((2716743890U) >> (((/* implicit */int) (_Bool)1)))) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_7 [i_2] [i_0] [i_2] [i_0 + 1]))))));
                }
                for (unsigned int i_3 = 3; i_3 < 15; i_3 += 4) 
                {
                    var_22 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))), (((unsigned int) arr_2 [i_3 + 1] [i_0 - 2]))));
                    var_23 += ((/* implicit */unsigned short) ((min(((~(arr_3 [(short)10] [8U]))), (var_9))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))));
    var_25 = ((/* implicit */unsigned long long int) var_7);
    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_11)))))))))));
}
