/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193765
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
    var_13 = ((/* implicit */_Bool) min((var_13), (max(((((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (var_11))) >= (((/* implicit */int) var_1)))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = arr_0 [i_0 - 1] [i_0 - 1];
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 ^= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) | (((/* implicit */int) var_9)))))))) - (((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((((/* implicit */int) arr_6 [i_0 - 1] [i_1] [i_2] [(_Bool)1])) << (((var_5) - (918680034))))) : (-936686263)))));
                                arr_13 [i_0] [i_1 - 1] [i_2] [i_3] [i_4] = (((+(((((/* implicit */int) arr_3 [i_0])) / (((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 2] [i_2] [i_3] [i_0 - 1] [i_3])))))) | (((/* implicit */int) (_Bool)1)));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)255)) < ((((_Bool)1) ? (-991153836) : (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((_Bool) (unsigned char)0))) : (((/* implicit */int) var_10))));
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((+(var_7))), (var_0)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10))));
                    arr_14 [i_0 - 1] [i_2] [i_0 - 1] [i_0] = ((/* implicit */unsigned char) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                }
            } 
        } 
        var_17 = ((/* implicit */int) min((var_17), (((((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1]))))) + (((/* implicit */int) arr_3 [i_0 - 1])))) | (((int) arr_7 [(_Bool)1] [i_0 - 1]))))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (var_5)));
    }
}
