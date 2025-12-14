/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217973
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
    var_18 = ((/* implicit */unsigned short) ((unsigned int) var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_19 ^= ((/* implicit */_Bool) (-(((((/* implicit */int) var_2)) / (((/* implicit */int) arr_8 [i_1 + 1] [i_1 - 1]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) arr_4 [i_1] [i_2] [i_3]))));
                        var_21 = ((/* implicit */unsigned char) (+(((arr_0 [i_1 - 2]) - (arr_0 [i_1 - 1])))));
                        var_22 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_3 + 2] [i_3 - 1] [(signed char)6]))))) && (((/* implicit */_Bool) arr_4 [i_3 - 1] [i_3 - 1] [i_3]))));
                        var_23 = ((/* implicit */int) var_17);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 1; i_4 < 21; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_1] [i_2] [i_4 + 1] [i_4] [i_0])) ? (((arr_14 [i_0] [i_1 + 1] [i_2] [i_4] [i_2] [i_2] [(short)18]) * (var_14))) : ((~(arr_14 [i_1 + 1] [i_1 + 1] [i_2] [i_4 - 1] [i_5] [(unsigned char)19] [i_0])))));
                                arr_15 [(signed char)12] [i_4] [i_2] [i_4] [14ULL] = ((/* implicit */signed char) var_12);
                                var_25 = ((/* implicit */short) var_8);
                                var_26 = ((/* implicit */unsigned char) max((var_26), (var_9)));
                            }
                        } 
                    } 
                    arr_16 [5] [i_1] [i_2] = ((/* implicit */long long int) ((unsigned short) (-(var_11))));
                }
            } 
        } 
    } 
    var_27 *= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((unsigned char) var_17))) ? (var_14) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))))));
    var_28 += ((/* implicit */signed char) var_16);
}
