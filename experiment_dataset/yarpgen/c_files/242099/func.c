/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242099
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
    var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */int) var_2)) > (var_13)))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_11)), (var_12)))))) * (((/* implicit */int) var_11))));
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_13) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) (signed char)120)) ? (var_13) : (((/* implicit */int) (unsigned short)19498)))) : (((/* implicit */int) ((1346900784) != (((/* implicit */int) (unsigned char)255)))))))) ? (var_4) : (var_13));
    var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 3; i_2 < 15; i_2 += 4) 
                {
                    var_18 = ((/* implicit */unsigned int) (unsigned char)85);
                    arr_7 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1873385600943793626LL))));
                    var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -709196294)) ? (-406497923) : (-1)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (+(6226226849900955080LL))))));
                                var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                                var_22 *= ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_2 - 2]))) - (((((/* implicit */_Bool) (signed char)-84)) ? (2798927635U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))));
                                arr_13 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))) || (((arr_2 [i_3]) || (((/* implicit */_Bool) var_14))))));
                                var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0 + 2])) ? (((/* implicit */int) var_11)) : (arr_11 [i_0 - 1] [i_0 - 1] [i_3] [i_0] [i_0] [i_0 + 2])));
                            }
                        } 
                    } 
                }
                arr_14 [i_0 + 2] = ((/* implicit */unsigned short) var_4);
            }
        } 
    } 
}
