/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47804
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
    var_17 -= ((/* implicit */short) max((((/* implicit */long long int) var_13)), (var_9)));
    var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)184))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_3 [(short)1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [i_0] [i_0]), (var_2))))) : (max((4162726619U), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) min((909464743U), (((/* implicit */unsigned int) (unsigned char)184))))), (((long long int) arr_0 [i_0] [i_0]))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) ? ((+(((/* implicit */int) max((arr_0 [i_0] [i_0]), (((/* implicit */short) var_2))))))) : (((/* implicit */int) ((short) (-(var_11)))))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) arr_8 [i_1] [(short)10] [i_1]);
                                arr_15 [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_1 [i_1 + 2] [i_3])) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_4])) ? (((/* implicit */long long int) arr_9 [i_1] [i_1] [i_2])) : (var_14))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [(short)5] [i_1] [i_2])) && (((/* implicit */_Bool) 620169878U))))))))));
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_1] = ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) 3385502527U)))));
                }
            } 
        } 
    }
    for (unsigned int i_5 = 1; i_5 < 17; i_5 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_10 [i_5 + 1] [i_5 - 1] [i_6] [i_5 + 1]) : (arr_10 [i_5] [i_5 - 1] [i_5 + 1] [i_6])))) ? (((/* implicit */long long int) max((arr_20 [i_6]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 494190330U)))))))) : (min((var_14), (((/* implicit */long long int) arr_21 [i_5 - 1] [i_5 + 1])))))))));
            var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)121))));
        }
        for (unsigned char i_7 = 1; i_7 < 16; i_7 += 3) 
        {
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_7] [(unsigned char)6])))))))) | (((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_7])) || (((/* implicit */_Bool) (unsigned char)166))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
            var_24 -= ((/* implicit */short) arr_10 [i_5] [i_7] [i_5] [i_5]);
        }
        arr_28 [i_5] = ((/* implicit */unsigned char) var_12);
    }
    var_25 *= ((/* implicit */short) (~(((/* implicit */int) var_15))));
}
