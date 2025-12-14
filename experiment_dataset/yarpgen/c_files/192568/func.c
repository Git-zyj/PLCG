/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192568
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            {
                var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_0])))))))) ? (((((/* implicit */int) var_17)) & (((/* implicit */int) var_2)))) : (max((((((/* implicit */int) (unsigned char)14)) % (((/* implicit */int) arr_2 [i_0] [i_1] [i_1])))), (((((/* implicit */_Bool) arr_3 [i_0] [(unsigned char)3])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_14))))))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_8), (arr_3 [i_1 - 3] [(unsigned char)7])))) ? (((/* implicit */int) min((arr_3 [i_0] [i_1 + 1]), (arr_3 [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) arr_3 [i_1] [i_1 - 3]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 2; i_2 < 18; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            {
                var_21 = arr_8 [i_2] [i_3] [i_3];
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 17; i_4 += 3) 
                {
                    for (unsigned char i_5 = 3; i_5 < 18; i_5 += 4) 
                    {
                        {
                            var_22 *= ((/* implicit */unsigned char) max(((~(((/* implicit */int) (unsigned char)73)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)217)) < (((/* implicit */int) (unsigned char)217)))))));
                            var_23 -= ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned char)29), ((unsigned char)0)))) + (((((((/* implicit */_Bool) arr_10 [i_2 + 2] [i_3] [i_5] [i_5])) || (((/* implicit */_Bool) arr_7 [i_5])))) ? (((/* implicit */int) ((((/* implicit */int) arr_12 [i_3] [i_3] [i_2])) != (((/* implicit */int) (unsigned char)217))))) : (((/* implicit */int) arr_10 [i_5 - 1] [i_5 - 1] [i_4] [(unsigned char)8]))))));
                            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)39))));
                            var_25 *= arr_5 [i_2 + 1] [i_3];
                            var_26 = ((/* implicit */unsigned char) min((((((/* implicit */int) min((arr_5 [i_2] [i_2]), (arr_5 [i_2 - 1] [i_2 + 1])))) & ((-(((/* implicit */int) (unsigned char)2)))))), (((((/* implicit */int) max((arr_6 [i_2] [i_3]), (var_16)))) << (((((((/* implicit */_Bool) arr_10 [i_2] [i_3] [(unsigned char)13] [i_5])) ? (((/* implicit */int) (unsigned char)156)) : (((/* implicit */int) (unsigned char)242)))) - (145)))))));
                        }
                    } 
                } 
                var_27 ^= ((/* implicit */unsigned char) max((((/* implicit */int) min((var_1), (arr_9 [i_2] [i_2] [i_3])))), ((+(((/* implicit */int) max((arr_7 [i_2]), (var_6))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
    {
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)48)) / (((/* implicit */int) min((var_18), (arr_7 [i_6]))))));
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((arr_5 [i_6] [i_6]), (var_15))), ((unsigned char)35)))) ? (((((/* implicit */int) arr_4 [i_6])) ^ (((/* implicit */int) var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_17)) % (((/* implicit */int) arr_9 [i_6] [(unsigned char)4] [i_6]))))))))));
    }
    for (unsigned char i_7 = 1; i_7 < 20; i_7 += 2) 
    {
        var_30 = ((/* implicit */unsigned char) (((((~(((/* implicit */int) var_9)))) | (((((/* implicit */int) var_15)) ^ (((/* implicit */int) (unsigned char)0)))))) & ((~(((/* implicit */int) var_7))))));
        var_31 += ((/* implicit */unsigned char) max((((/* implicit */int) min(((unsigned char)8), ((unsigned char)24)))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_7] [i_7])) ^ (((/* implicit */int) arr_20 [i_7 + 1] [i_7]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_7])) || (((/* implicit */_Bool) (unsigned char)64))))) : (((/* implicit */int) (unsigned char)42))))));
    }
    var_32 &= min((((unsigned char) var_0)), (((/* implicit */unsigned char) ((((/* implicit */int) var_1)) <= ((~(((/* implicit */int) (unsigned char)1))))))));
    var_33 = ((unsigned char) (-(((/* implicit */int) var_7))));
}
