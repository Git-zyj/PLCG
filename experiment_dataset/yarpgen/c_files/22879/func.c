/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22879
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((((/* implicit */int) var_17)) | (((/* implicit */int) (_Bool)1)))) / (max((((/* implicit */int) var_17)), (var_5)))))) * (((var_8) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)40)) * (((/* implicit */int) (unsigned char)0))))) : (1106914016U)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    var_20 = ((/* implicit */signed char) min((((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1]))))) | (((/* implicit */int) ((short) (unsigned char)244))))), (((/* implicit */int) arr_1 [i_0] [i_0 + 1]))));
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (-(((/* implicit */int) ((2041476219) > (var_11)))))))));
                    var_22 = ((/* implicit */_Bool) var_11);
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-17991))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (unsigned char)61)))))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_0)))));
                }
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    var_24 |= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) >= (((/* implicit */int) var_6))));
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)255), (((/* implicit */unsigned char) var_17)))))))) : (((/* implicit */int) (signed char)127)))))));
                    var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1]))));
                }
                var_27 = ((/* implicit */long long int) min((min(((((_Bool)0) ? (((/* implicit */int) (short)32532)) : (((/* implicit */int) var_3)))), (((/* implicit */int) var_3)))), ((-(((/* implicit */int) var_14))))));
                var_28 += ((/* implicit */signed char) ((int) ((((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) -6577249805773664531LL)))) && (((/* implicit */_Bool) ((((/* implicit */int) (short)17990)) / (((/* implicit */int) (short)16320))))))));
                var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1680772357)), (1445465073197335482ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)240), (((/* implicit */unsigned char) var_8))))) && (((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) (unsigned char)217))))))) : (min((((/* implicit */int) arr_3 [i_1] [i_0 + 1])), (var_5)))));
            }
        } 
    } 
}
