/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240010
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
    var_16 |= (((((-(4294967295U))) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) < (((/* implicit */unsigned int) ((((1197167599025341526ULL) < (((/* implicit */unsigned long long int) var_14)))) ? (((/* implicit */int) (!(var_13)))) : ((-(((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_17 = (((-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) | (((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
        var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((843477516) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (min(((+(((/* implicit */int) (short)-19842)))), (((/* implicit */int) (_Bool)1))))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_2 [i_0] [i_0])))))))));
        arr_3 [i_0] [(signed char)16] = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)46264)) ? (44624299U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0])))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)7)), (var_14))))))), (((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_2 [(short)2] [i_0])))) / (((/* implicit */int) arr_1 [i_0]))))));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_20 -= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11)))), ((~(((/* implicit */int) min((var_4), (((/* implicit */short) var_10)))))))));
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (-((+(900257008309992324ULL))))))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) != (44624299U)))) - ((((~(((/* implicit */int) var_0)))) | ((((_Bool)1) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) var_5))))))));
        var_23 = ((((/* implicit */int) (!(var_6)))) < (((var_8) / (((/* implicit */int) (short)4095)))));
        var_24 |= ((arr_4 [i_1]) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)55192)))))) | ((+(var_7)))))));
    }
    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (short)-26774))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            {
                var_26 &= ((/* implicit */int) (((((+(3367178167U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))))) / ((((!((_Bool)1))) ? (var_9) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_3] [i_3] [i_2])))))))));
                arr_11 [i_3] [i_3] [i_2] = ((/* implicit */signed char) (!(((((/* implicit */int) (signed char)89)) < (((/* implicit */int) var_13))))));
            }
        } 
    } 
}
