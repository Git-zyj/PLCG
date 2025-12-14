/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218374
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
    var_15 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((((/* implicit */_Bool) (short)31710)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [i_0 - 2])))) : (((((/* implicit */int) arr_0 [i_0 - 2])) * (((/* implicit */int) arr_1 [i_0 + 2]))))));
        var_17 = ((/* implicit */short) max((var_17), (var_13)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            arr_4 [i_0] = ((/* implicit */signed char) (unsigned short)31041);
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) && ((_Bool)1)));
            var_19 = ((/* implicit */_Bool) -1249174674);
            /* LoopNest 2 */
            for (unsigned char i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)4)) * (3)));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_3] [i_2 + 2] [i_2] [i_2 - 1])) ? (-5715289015514296235LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)114)))));
                    }
                } 
            } 
        }
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)211)), (arr_8 [i_0 + 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) 218259960U)) || (((/* implicit */_Bool) 4294967273U))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0 + 2])) && (((/* implicit */_Bool) 1776456955))))))))));
    }
    for (long long int i_4 = 1; i_4 < 14; i_4 += 2) 
    {
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(1903964715)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)107))))) : (((((/* implicit */_Bool) (unsigned char)236)) ? (458128004U) : (1531379004U))))))));
        arr_13 [i_4] = ((/* implicit */unsigned long long int) max((min((arr_12 [i_4 + 1] [i_4]), (var_14))), (min((arr_12 [i_4 + 1] [i_4 + 1]), (((/* implicit */long long int) (_Bool)1))))));
        var_24 = ((/* implicit */unsigned int) arr_11 [i_4] [i_4]);
    }
}
