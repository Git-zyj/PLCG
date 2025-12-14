/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30316
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_20 += ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) var_10)))))));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned short)16), (((/* implicit */unsigned short) ((_Bool) arr_4 [i_1] [i_1] [i_1])))))) ? (((/* implicit */int) (unsigned short)56030)) : (((/* implicit */int) arr_4 [i_1] [i_2] [i_2]))));
                var_23 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_1] [i_1]))) : (var_8))) & (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_4 [(_Bool)1] [i_2] [i_2])))))));
                /* LoopNest 3 */
                for (unsigned int i_3 = 1; i_3 < 19; i_3 += 4) 
                {
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) (_Bool)1);
                                var_25 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8160))) : (var_9))))) >> (((((var_2) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3 + 1] [i_3 - 1] [i_3 + 1]))))) - (1535736315U)))));
                                var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)53284)) ? (((/* implicit */int) (unsigned short)53284)) : (((/* implicit */int) arr_9 [i_1] [i_1] [(_Bool)1] [i_4])))) | (((/* implicit */int) (unsigned short)1)))))));
                                var_27 = ((/* implicit */unsigned int) (~(((((/* implicit */int) var_11)) >> (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                } 
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12229))) : (min((((/* implicit */unsigned int) ((_Bool) var_16))), (((arr_8 [i_1] [i_1] [i_2] [i_1] [i_2]) >> (((/* implicit */int) var_1))))))));
                var_29 &= (unsigned short)16;
            }
        } 
    } 
    var_30 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_5), (min((var_19), (((/* implicit */unsigned short) var_13))))))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) var_13))) < (var_12))) ? ((~(var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_14), (var_4))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))));
}
