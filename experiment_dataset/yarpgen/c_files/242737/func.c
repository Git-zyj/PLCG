/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242737
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
    var_12 = var_11;
    var_13 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))) : ((+(var_10))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) ((2392489754U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        var_15 = (+(((((/* implicit */_Bool) arr_1 [(unsigned char)0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8)))));
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(1835292772U)))) ? (59145713126895715ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_6)))))))));
        var_17 = ((/* implicit */unsigned int) ((unsigned long long int) arr_3 [i_0]));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), ((((_Bool)1) ? (var_0) : (((((/* implicit */_Bool) var_7)) ? (var_0) : (arr_1 [i_0])))))));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) 1241088460);
        var_19 = ((/* implicit */int) arr_1 [i_1]);
    }
    for (short i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */short) ((signed char) ((long long int) ((((/* implicit */_Bool) var_2)) ? (2934235664U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((+(-1))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)155))))) ? (((/* implicit */int) var_4)) : (arr_8 [i_2] [i_2])))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            var_21 *= ((/* implicit */unsigned char) min(((+(((/* implicit */int) var_11)))), (min((((/* implicit */int) ((((/* implicit */int) var_8)) == (arr_8 [(short)14] [i_3])))), ((+(((/* implicit */int) var_3))))))));
            var_22 = ((/* implicit */long long int) (+(((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2]))) - (var_9))) >= (((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_3]))))))))));
        }
        arr_14 [i_2] = ((/* implicit */unsigned long long int) min((min(((-(arr_12 [(unsigned char)20] [(unsigned char)20]))), (((/* implicit */unsigned int) -990675322)))), (((/* implicit */unsigned int) (-((-(((/* implicit */int) (_Bool)1)))))))));
    }
}
