/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204118
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
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_12)) : (min((((/* implicit */unsigned long long int) (unsigned char)255)), (11950758402547381622ULL))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    var_17 = ((/* implicit */_Bool) max(((-(((/* implicit */int) (unsigned short)31472)))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_2))))))))));
                    var_18 *= ((/* implicit */unsigned char) (~(((((/* implicit */int) var_14)) * (((/* implicit */int) arr_1 [i_2]))))));
                }
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) % (((/* implicit */int) var_15))));
                arr_6 [i_1] [i_0] = ((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned short)31472)))) + (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))));
                var_20 = ((/* implicit */_Bool) max((var_20), (arr_1 [i_0])));
                /* LoopNest 3 */
                for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    for (short i_4 = 1; i_4 < 12; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 2; i_5 < 13; i_5 += 3) 
                        {
                            {
                                arr_16 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(896ULL)))) ? (min((var_0), (((/* implicit */unsigned long long int) arr_15 [i_0] [i_4 - 1] [i_0] [i_4] [i_5 - 1] [i_5 + 1] [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)67)), (var_15)))))));
                                var_21 = ((/* implicit */signed char) (unsigned char)255);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
