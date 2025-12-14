/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203546
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
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_14))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_0] [(short)4] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned char)67), (((/* implicit */unsigned char) var_15))))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (arr_7 [i_2]))) : (((arr_7 [i_0]) | (((/* implicit */int) arr_3 [i_0] [i_1]))))));
                    var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)164))));
                    arr_10 [12ULL] [i_1] &= ((/* implicit */_Bool) (~(502997353U)));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_3 = 1; i_3 < 13; i_3 += 3) 
        {
            var_18 = ((/* implicit */signed char) ((_Bool) (unsigned char)31));
            var_19 *= (_Bool)0;
        }
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_11 [i_0])) : (((/* implicit */int) (_Bool)1))))) >= (min((var_10), (((/* implicit */unsigned long long int) 11))))))), (1271031386065314677ULL)))));
            arr_16 [i_0] [i_4] = ((/* implicit */signed char) (unsigned char)74);
        }
    }
    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        var_21 -= ((((/* implicit */unsigned int) ((/* implicit */int) ((1964101988) >= (((/* implicit */int) (short)17398)))))) - (594837789U));
        arr_20 [i_5] = ((/* implicit */signed char) max((min((min((((/* implicit */long long int) arr_7 [i_5])), (var_13))), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) ((arr_17 [i_5] [i_5]) && (((/* implicit */_Bool) var_13)))))));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((unsigned char) arr_8 [i_5] [i_5])))));
    }
    var_23 = ((/* implicit */unsigned int) var_14);
    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) var_14)))))))));
    var_25 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) var_12)))))) >= (min((var_10), (((/* implicit */unsigned long long int) 1964101997))))))), (var_7)));
}
