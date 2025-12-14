/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52476
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
    var_16 = ((/* implicit */long long int) ((max((((/* implicit */int) ((_Bool) 1442950278U))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))))) + (((/* implicit */int) var_10))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */int) ((arr_0 [i_0]) << ((((~(((/* implicit */int) (unsigned char)103)))) + (134)))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)153)) ? (arr_0 [i_0]) : (2852017017U))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0])))))) ? (((/* implicit */int) ((unsigned char) 2852017017U))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_0])), ((unsigned char)240))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 *= ((/* implicit */unsigned int) var_4);
                    var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (var_13) : (var_4))))), (((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_0] [i_1]), (((/* implicit */unsigned char) arr_10 [i_0])))))) : (min((((/* implicit */unsigned long long int) var_13)), (var_14)))))));
                }
            } 
        } 
    }
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) arr_11 [14] [6ULL]);
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned long long int) 2852017018U)), (((((/* implicit */_Bool) 6188159466605604190LL)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3]))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            arr_18 [i_4] [i_4 - 1] = ((/* implicit */int) arr_2 [(_Bool)1] [i_4]);
            arr_19 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((_Bool) (-(((/* implicit */int) arr_12 [i_3])))));
            var_21 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3] [i_4])) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) var_10))))) ? (((var_1) >> (((((/* implicit */int) arr_11 [i_3] [i_3])) - (30))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))));
            arr_20 [i_4] [i_4] = arr_5 [i_4] [i_3];
        }
        for (long long int i_5 = 3; i_5 < 17; i_5 += 4) 
        {
            arr_24 [10] [10] [i_5 - 3] = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) max((((/* implicit */short) (unsigned char)255)), ((short)32767)))), (((((/* implicit */_Bool) var_14)) ? (arr_8 [i_5] [i_3]) : (var_8))))) >> ((((~((~(arr_9 [18ULL] [18ULL]))))) - (2076286455)))));
            arr_25 [(unsigned char)0] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) var_0))))));
            var_22 = ((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned int) arr_3 [i_3]))));
            var_23 -= (((~(((((/* implicit */_Bool) arr_15 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) arr_5 [i_5] [i_5 + 1])) : (13247555563199085783ULL))))) >> ((((+((+(var_2))))) + (7262811731964079980LL))));
        }
    }
    for (short i_6 = 0; i_6 < 20; i_6 += 3) 
    {
        arr_30 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((arr_10 [i_6]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_1))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_15)))))))) ? ((-(((unsigned long long int) var_12)))) : (((((/* implicit */_Bool) max((arr_29 [i_6]), (((/* implicit */unsigned char) (_Bool)1))))) ? (((unsigned long long int) arr_28 [2LL] [i_6])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)153)))))));
        arr_31 [i_6] = ((/* implicit */int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_6] [i_6])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_6]))))) & (min((8783030157754971732LL), (((/* implicit */long long int) var_15)))))) << (((3456602085U) - (3456602055U)))));
    }
    var_24 = ((/* implicit */unsigned int) max((var_24), (((unsigned int) (~(((unsigned long long int) var_0)))))));
    var_25 = ((/* implicit */unsigned char) ((var_14) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
    var_26 ^= ((/* implicit */int) var_12);
}
