/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4920
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
    var_19 = var_15;
    var_20 = ((unsigned char) (unsigned char)166);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_16)) && ((!(((/* implicit */_Bool) arr_3 [i_0])))))) ? (((((/* implicit */_Bool) arr_1 [(unsigned char)14])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) ((((/* implicit */int) var_15)) > (((/* implicit */int) var_16))))))) : (min((((((/* implicit */int) arr_3 [(unsigned char)20])) * (((/* implicit */int) var_6)))), (((/* implicit */int) ((unsigned char) arr_2 [(unsigned char)6] [(unsigned char)24]))))))))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((unsigned char) arr_1 [i_0]);
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)54)) << (((/* implicit */int) (unsigned char)2))))) ? (((/* implicit */int) min((min((arr_2 [(unsigned char)24] [(unsigned char)24]), ((unsigned char)64))), (min((arr_4 [(unsigned char)24] [i_1]), (arr_0 [(unsigned char)6])))))) : (((((/* implicit */int) (unsigned char)177)) | (((/* implicit */int) ((unsigned char) (unsigned char)160))))))))));
        }
        for (unsigned char i_2 = 1; i_2 < 24; i_2 += 4) 
        {
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)177))))) ? (((/* implicit */int) ((unsigned char) arr_5 [(unsigned char)18] [i_0] [i_0]))) : (((((/* implicit */int) (unsigned char)24)) * (((/* implicit */int) var_3))))));
            var_24 = min(((unsigned char)245), ((unsigned char)19));
            var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) max((arr_5 [i_0] [i_0] [i_0]), (arr_3 [i_2])))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)6)))))) < (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)175))))))));
            var_26 = arr_5 [i_0] [i_0] [i_0];
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((((/* implicit */int) arr_9 [i_2] [i_2] [(unsigned char)18])) - (((/* implicit */int) var_4)))) + (2147483647))) << (((((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) - (24)))))) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_2])) : ((+(((/* implicit */int) arr_4 [i_0] [i_2]))))));
        }
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_12)) > (((((/* implicit */int) arr_2 [i_0] [i_3])) - (((/* implicit */int) arr_0 [i_0]))))))) == (((((/* implicit */_Bool) ((unsigned char) arr_11 [i_3] [i_3] [i_3]))) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [(unsigned char)17]))))));
            var_29 = ((/* implicit */unsigned char) ((((((((/* implicit */int) arr_5 [i_0] [i_3] [i_0])) - (((/* implicit */int) arr_12 [i_0])))) & (((((/* implicit */int) (unsigned char)202)) | (((/* implicit */int) arr_2 [i_0] [i_3])))))) >= (((/* implicit */int) arr_10 [i_0] [i_0]))));
        }
        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            arr_17 [i_0] [i_0] [i_0] = arr_11 [i_0] [i_0] [i_0];
            var_30 += ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [(unsigned char)11])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_5 [i_0] [(unsigned char)12] [(unsigned char)6])))) > (((((/* implicit */_Bool) arr_12 [(unsigned char)8])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_4 [(unsigned char)0] [(unsigned char)8]))))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [(unsigned char)12] [(unsigned char)12])) : (((/* implicit */int) var_13))))) ? (((((/* implicit */int) (unsigned char)101)) | (((/* implicit */int) var_6)))) : (((((/* implicit */int) arr_8 [i_0] [(unsigned char)11] [i_4])) | (((/* implicit */int) arr_16 [i_0] [i_0] [i_0]))))))));
            var_31 = arr_4 [i_0] [(unsigned char)7];
            var_32 *= ((unsigned char) ((((((/* implicit */int) arr_14 [i_0])) == (((/* implicit */int) arr_11 [i_0] [i_0] [i_4])))) ? (((/* implicit */int) arr_8 [i_0] [(unsigned char)2] [i_4])) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_10 [i_0] [i_4])) : (((/* implicit */int) arr_13 [i_0] [i_4]))))));
        }
        arr_18 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? ((~(((/* implicit */int) arr_11 [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) var_2)))))) : (((((/* implicit */int) min((arr_15 [i_0] [i_0]), (arr_14 [i_0])))) | (((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) arr_15 [i_0] [i_0])) : (((/* implicit */int) var_13))))))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
    {
        var_33 ^= ((/* implicit */unsigned char) (-(((((/* implicit */int) (unsigned char)6)) - (((/* implicit */int) arr_10 [i_5] [i_5]))))));
        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) (unsigned char)192))));
    }
    var_35 = var_13;
}
