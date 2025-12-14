/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24342
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [(unsigned char)2] [(unsigned char)2] = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) (unsigned char)48))), ((~(((/* implicit */int) (unsigned char)251))))));
                arr_6 [i_1] [i_1] |= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)15))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    var_10 = arr_1 [(unsigned char)8];
                    var_11 = (unsigned char)4;
                    var_12 *= ((unsigned char) (unsigned char)242);
                }
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    arr_13 [i_0] [(unsigned char)9] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [(unsigned char)1] [(unsigned char)1] [(unsigned char)2] [(unsigned char)7])) || (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_1])))) && (((/* implicit */_Bool) ((unsigned char) arr_8 [(unsigned char)2] [i_3] [(unsigned char)4] [i_0])))));
                    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) min((((/* implicit */int) (((!(((/* implicit */_Bool) arr_2 [i_0])))) || (((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_2 [(unsigned char)12]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned char)12] [i_0])) : (((/* implicit */int) (unsigned char)230))))) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_3])) : (((/* implicit */int) ((unsigned char) (unsigned char)248))))))))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [(unsigned char)9] [i_1] [i_1])) ? ((+(((/* implicit */int) arr_11 [i_0] [i_1] [i_3])))) : (((/* implicit */int) var_7))));
                }
                var_15 ^= ((/* implicit */unsigned char) min(((~(((/* implicit */int) arr_2 [i_0])))), ((~(((/* implicit */int) arr_2 [i_1]))))));
            }
        } 
    } 
    var_16 &= ((/* implicit */unsigned char) (~(min((((/* implicit */int) var_6)), ((~(((/* implicit */int) (unsigned char)230))))))));
}
