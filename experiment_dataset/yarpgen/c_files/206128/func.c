/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206128
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)255))));
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)255))));
                            var_15 |= (unsigned char)252;
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)255)), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)15))))) ? (((/* implicit */int) min(((unsigned char)253), ((unsigned char)15)))) : (((/* implicit */int) (unsigned char)1)))))))));
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned char)7), ((unsigned char)0)))) ? (((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (unsigned char)0)))) : (((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */int) (unsigned char)165)) : (((/* implicit */int) (unsigned char)255))))));
                        }
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)110)) << (((((/* implicit */int) (unsigned char)164)) - (154))))))));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (unsigned char)174)))) : (((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) (unsigned char)71)) : (((/* implicit */int) (unsigned char)255))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)164))));
                        var_21 = (unsigned char)192;
                    }
                    var_22 = ((/* implicit */unsigned char) min((((/* implicit */int) min(((unsigned char)202), ((unsigned char)0)))), (min((((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) (unsigned char)31)))), (((/* implicit */int) (unsigned char)56))))));
                }
            } 
        } 
    } 
    var_23 = var_9;
    var_24 = ((/* implicit */unsigned char) (~(min((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) var_0))))));
}
