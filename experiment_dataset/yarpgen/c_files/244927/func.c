/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244927
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
    var_13 *= ((/* implicit */_Bool) var_1);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_14 = min((((/* implicit */unsigned int) ((unsigned char) min((((/* implicit */short) arr_2 [i_0] [i_1] [i_0])), (var_9))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (var_2)))) ? (((var_2) << (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_2] [i_0] [i_2])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)0))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        var_15 ^= ((/* implicit */unsigned int) (_Bool)1);
                        arr_10 [i_0] [i_0] [i_0] [i_2] [(_Bool)1] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) ((var_5) ? ((+(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))))), (var_2)));
                        arr_11 [i_3 + 3] [i_3] [i_3 + 3] [i_3] [i_0] [i_3 + 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) ^ (var_3)))) ? (min((((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_2])), (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)3729))) : (var_4)))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_0])))) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) max((var_0), (((/* implicit */unsigned char) var_5)))))))));
                        var_16 ^= ((/* implicit */short) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) min((((/* implicit */short) min((var_12), ((_Bool)1)))), (min((var_9), ((short)32765))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((_Bool) arr_14 [i_0] [i_0] [(unsigned char)4] [(short)1])))));
                                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) (short)11)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_9))))) ? ((((_Bool)1) ? (((/* implicit */int) (short)-32)) : (((/* implicit */int) (_Bool)1)))) : ((((_Bool)0) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)8)))) : (((/* implicit */int) min(((_Bool)1), ((_Bool)0)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 *= ((/* implicit */_Bool) min((min(((short)21935), ((short)-21940))), (max((((/* implicit */short) var_10)), (max(((short)6), (((/* implicit */short) (_Bool)1))))))));
    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? ((-(((/* implicit */int) var_12)))) : (((/* implicit */int) var_12)))) & (((min((var_12), ((_Bool)1))) ? (((/* implicit */int) min(((short)-1), ((short)8)))) : (((/* implicit */int) ((_Bool) var_7)))))));
}
