/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199385
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
    var_15 = ((/* implicit */unsigned int) var_1);
    var_16 *= ((/* implicit */unsigned int) (-(var_9)));
    var_17 = ((/* implicit */short) (~(((/* implicit */int) var_11))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (((-(((/* implicit */int) var_1)))) | (((/* implicit */int) (_Bool)0))))) % (min((((unsigned int) var_6)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) 2147483647)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_1 [i_0 + 2])), (max((((unsigned long long int) arr_1 [16U])), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_1 [i_0])), (arr_6 [i_0] [i_0]))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (_Bool)1))));
                        var_21 -= ((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2]);
                    }
                    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        var_22 = ((/* implicit */int) ((min((arr_8 [i_0]), (arr_8 [i_0]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)0), ((_Bool)1)))))));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 2; i_5 < 24; i_5 += 1) 
                        {
                            arr_17 [i_0 + 2] [i_1] [i_1] [i_0] [i_5 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) (-(((4294967295U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))))))) : (var_8)));
                            var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_4] [i_0])) ? (13827856565240074364ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_2] [22LL] [i_2])))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_16 [i_5] [i_0] [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_16 [i_0 + 2] [i_1] [i_2] [i_0 + 2] [i_5])) : (((/* implicit */int) var_7)))))))));
                        }
                    }
                    arr_18 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_2] [i_2] [i_2])) - (((((/* implicit */int) arr_16 [i_0 + 2] [i_0 + 1] [i_2] [i_2] [i_2])) >> (((((/* implicit */int) arr_16 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_1] [i_1])) - (20648)))))));
                }
            } 
        } 
    } 
}
