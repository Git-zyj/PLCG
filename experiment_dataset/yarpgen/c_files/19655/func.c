/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19655
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
    var_17 = ((/* implicit */short) max((((((/* implicit */_Bool) ((short) var_1))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) | (1388347736U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (var_10))))))), (((/* implicit */unsigned int) ((var_14) / ((+(((/* implicit */int) var_0)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) var_16);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((2880519957U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [(unsigned char)2]))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */int) (unsigned char)167);
                                var_21 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_5)) <= (((/* implicit */int) (_Bool)1)))) ? ((~(((/* implicit */int) (unsigned char)178)))) : (((/* implicit */int) ((_Bool) arr_10 [i_0] [i_1] [i_1] [i_4])))));
                            }
                        } 
                    } 
                }
                var_22 += ((/* implicit */_Bool) min((((arr_12 [i_0] [i_0] [i_0] [(unsigned short)8] [i_1]) << (((/* implicit */int) ((((/* implicit */int) arr_10 [i_1] [i_0] [i_1] [i_0])) != (((/* implicit */int) (unsigned char)61))))))), (((/* implicit */unsigned int) ((((((/* implicit */int) var_0)) * (((/* implicit */int) arr_4 [i_1] [(signed char)12])))) * ((+(((/* implicit */int) arr_2 [i_0])))))))));
            }
        } 
    } 
    var_23 = var_2;
    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_10))));
    var_25 = min((((/* implicit */unsigned char) var_1)), (min(((unsigned char)207), (var_15))));
}
