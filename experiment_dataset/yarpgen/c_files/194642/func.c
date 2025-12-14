/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194642
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
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_13))) % (((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (short)4095)) : (((/* implicit */int) (short)4095))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */int) ((signed char) var_12))) : ((~(((/* implicit */int) var_19))))))) : (4294967295U));
    var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) max(((unsigned short)14), (((/* implicit */unsigned short) (short)-4093)))))));
    var_22 = ((/* implicit */short) (unsigned short)3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 9; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                            {
                                var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)4087)))))) : (var_17))))));
                                arr_11 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)4095)) : (((/* implicit */int) (signed char)0))))));
                            }
                            for (unsigned short i_5 = 1; i_5 < 11; i_5 += 1) 
                            {
                                var_24 *= ((/* implicit */short) arr_4 [(unsigned short)8] [(unsigned short)9]);
                                var_25 = ((/* implicit */short) ((min((arr_0 [i_5 - 1]), (((/* implicit */unsigned int) arr_4 [1U] [i_5 + 1])))) % (((/* implicit */unsigned int) ((((/* implicit */int) (short)-32763)) % (((/* implicit */int) arr_4 [i_0 - 1] [i_2 - 1])))))));
                                arr_16 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_2 + 1] [i_1] [i_1] [i_3] [i_5 + 1] [i_1] [i_1])) >> (((((/* implicit */int) arr_14 [i_2 + 1] [i_5 - 1] [i_0 + 2] [i_3])) + (11148)))));
                            }
                            /* vectorizable */
                            for (signed char i_6 = 0; i_6 < 12; i_6 += 1) 
                            {
                                var_26 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 + 2] [i_2 + 2] [i_2 + 2] [i_6])))))));
                                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_3 [i_0 + 1])))))));
                                arr_20 [i_0] [i_0] [i_0] = var_9;
                            }
                            var_28 ^= ((/* implicit */unsigned short) var_4);
                            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_3])), (72066026U))))));
                        }
                    } 
                } 
                arr_21 [i_1] [i_0] = ((/* implicit */short) ((unsigned int) (~(((/* implicit */int) arr_2 [i_0 + 2])))));
            }
        } 
    } 
}
