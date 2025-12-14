/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212236
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)31)) ? (((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (unsigned char)199)))) : (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (unsigned char)0))))))) ? (((((((/* implicit */int) var_11)) * (((/* implicit */int) var_11)))) % (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)13)))))) : ((-(((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) (unsigned char)249))))))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) min((min((((((/* implicit */int) (unsigned char)190)) | (((/* implicit */int) var_2)))), (((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) (unsigned char)140)))))), (((((/* implicit */_Bool) max(((unsigned char)1), ((unsigned char)254)))) ? (((/* implicit */int) (unsigned char)13)) : (((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) var_14)))))))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)93)) : (((/* implicit */int) var_15)))) <= ((~(((/* implicit */int) arr_4 [i_0] [i_1])))))))));
            var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_1]))));
        }
        var_20 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (unsigned char)98))))));
        arr_7 [i_0] &= ((unsigned char) var_0);
    }
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        var_21 |= ((/* implicit */unsigned char) ((((((/* implicit */int) var_5)) + (((/* implicit */int) arr_8 [i_2])))) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)163)))))));
        arr_10 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) + (((/* implicit */int) var_7)))) / (((/* implicit */int) min(((unsigned char)3), (arr_9 [i_2] [i_2]))))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)89)) : (((/* implicit */int) (unsigned char)162)))) : ((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) (unsigned char)122))))))));
        var_22 = ((/* implicit */unsigned char) max((var_22), ((unsigned char)132)));
    }
    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        var_23 = ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)198)) | (((/* implicit */int) (unsigned char)59)))))));
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) max(((unsigned char)89), (var_12)))) ? (((/* implicit */int) arr_9 [i_3] [i_3])) : ((~(((/* implicit */int) (unsigned char)103)))))), (((((/* implicit */_Bool) ((unsigned char) arr_12 [i_3]))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_14)))))))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        var_25 = var_5;
        arr_17 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) var_3))))) || (((/* implicit */_Bool) min((arr_15 [i_4] [i_4]), (var_14))))));
        arr_18 [(unsigned char)6] [i_4] = ((/* implicit */unsigned char) max(((+(((((/* implicit */_Bool) (unsigned char)119)) ? (((/* implicit */int) arr_14 [i_4] [i_4])) : (((/* implicit */int) (unsigned char)191)))))), ((~(((/* implicit */int) min(((unsigned char)255), (var_12))))))));
        var_26 = ((/* implicit */unsigned char) (+(((((/* implicit */int) max(((unsigned char)244), (arr_8 [i_4])))) ^ (((/* implicit */int) max((var_13), (arr_13 [(unsigned char)15]))))))));
        arr_19 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_9))))))));
    }
    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            var_27 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) arr_1 [i_5])) == (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_5])) && (((/* implicit */_Bool) arr_22 [i_5] [i_5])))))))), ((+(((/* implicit */int) arr_23 [i_5] [i_5]))))));
            var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)84)) && (((/* implicit */_Bool) arr_14 [i_5] [i_6]))))) << (((/* implicit */int) min(((unsigned char)93), ((unsigned char)2)))))))));
            arr_24 [i_5] [i_6] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [i_5]))));
            arr_25 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)64)) | (((/* implicit */int) arr_4 [(unsigned char)3] [(unsigned char)5]))))) ? (((/* implicit */int) min(((unsigned char)246), (var_11)))) : (((/* implicit */int) arr_21 [i_5]))))) ? (((/* implicit */int) ((unsigned char) ((unsigned char) arr_16 [i_5])))) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) var_1)) * (((/* implicit */int) arr_0 [(unsigned char)0])))) : ((+(((/* implicit */int) var_6))))))));
        }
        /* vectorizable */
        for (unsigned char i_7 = 0; i_7 < 13; i_7 += 3) 
        {
            arr_28 [i_5] [i_5] = var_6;
            var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_23 [i_5] [i_7]))));
            var_30 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_5])) ? (((/* implicit */int) arr_12 [i_5])) : (((/* implicit */int) (unsigned char)93))));
            var_31 |= ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) - ((~(((/* implicit */int) var_14))))));
        }
        arr_29 [i_5] = ((/* implicit */unsigned char) max((((/* implicit */int) min(((unsigned char)3), (arr_0 [i_5])))), (((((/* implicit */int) (unsigned char)3)) | (((/* implicit */int) (unsigned char)31))))));
        arr_30 [i_5] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) var_0)))), (((/* implicit */int) var_12))));
    }
    var_32 *= ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) (unsigned char)240)))));
}
