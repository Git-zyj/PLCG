/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45786
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
    var_16 = var_6;
    var_17 = ((/* implicit */long long int) ((4294967291U) * ((((!(((/* implicit */_Bool) 4294967272U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_5)))) : (min((13U), (4294967291U)))))));
    var_18 = ((((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_2)))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) | (((((/* implicit */_Bool) 65535LL)) ? (4U) : (4294967295U))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) (short)-18022)))))) | (4294967272U)))) ? (min((((unsigned long long int) (unsigned short)47096)), (((/* implicit */unsigned long long int) ((unsigned short) arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18440))) : (var_15))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (4294967291U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1])))))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (arr_4 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_0] [i_0]))))) < (((/* implicit */unsigned long long int) ((264710660U) / (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))) : (((/* implicit */int) arr_0 [i_0 - 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0 - 1])))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned char) arr_1 [i_0 - 1])))))));
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (~(((/* implicit */int) (unsigned short)18409)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
