/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190979
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) 2113727726U))));
                var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((2181239582U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1])))))) / (((max((((/* implicit */unsigned long long int) var_4)), (var_11))) * (((/* implicit */unsigned long long int) (+(6300695145651175138LL))))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */long long int) (((+(min((((/* implicit */unsigned int) (unsigned short)41092)), (2181239577U))))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3])))));
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((2181239568U) > (((/* implicit */unsigned int) arr_6 [i_0])))) ? (arr_6 [i_2]) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_3])), (arr_7 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_2] [5LL] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1] [2ULL] [i_3])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) : (arr_6 [i_0])))) : ((-(2472827832U)))))));
                    }
                    arr_9 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) arr_4 [i_0] [1LL] [i_0]);
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_17 = ((/* implicit */unsigned long long int) var_9);
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((1822139444U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_4])))))) >> (((((((/* implicit */_Bool) 13835058055282163712ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))) - (11359)))))) | (9869889083912118557ULL)));
                }
                var_19 = ((/* implicit */signed char) arr_12 [i_0] [i_1]);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-82)))) | (((/* implicit */int) var_6)))) >= (((/* implicit */int) ((((/* implicit */int) var_2)) > (((var_2) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)0)))))))));
    var_21 = ((/* implicit */unsigned long long int) (-(((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (2113727726U))) - (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) >> (((((/* implicit */int) var_7)) - (23503))))))))));
}
