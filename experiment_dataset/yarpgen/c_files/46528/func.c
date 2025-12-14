/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46528
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
    var_18 = ((/* implicit */signed char) ((1459683390U) & (((/* implicit */unsigned int) min(((~(((/* implicit */int) (signed char)113)))), (((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */int) (unsigned short)32767)) : (((/* implicit */int) (short)17827)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)57739)) * (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_1 + 2])) : (((/* implicit */int) arr_2 [i_1 - 1] [(signed char)0]))))));
            /* LoopSeq 1 */
            for (signed char i_2 = 2; i_2 < 24; i_2 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_3 = 1; i_3 < 24; i_3 += 1) 
                {
                    var_19 = ((/* implicit */signed char) (unsigned short)32744);
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)25)) ? (arr_10 [(unsigned char)12] [i_3] [(unsigned char)21] [i_1 + 4] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_4])))))) ? (((/* implicit */int) (unsigned short)32767)) : (((/* implicit */int) ((signed char) (unsigned char)235)))));
                        var_21 = (unsigned short)32788;
                    }
                    var_22 *= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_2] [i_2] [i_0] [i_1] [i_0])))) ? (((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)32747)))) : (((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) (unsigned short)32788))))));
                    var_23 *= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)47))));
                }
                for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        var_24 = (signed char)-25;
                        var_25 = ((((/* implicit */_Bool) arr_1 [i_6] [i_6])) ? (((/* implicit */int) arr_6 [i_0])) : ((~(((/* implicit */int) (unsigned short)32790)))));
                    }
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)120))))) >= (((((/* implicit */_Bool) arr_19 [i_5] [(signed char)10] [i_1] [i_0] [i_0])) ? (arr_5 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [4] [i_1] [i_2 - 2] [i_2] [i_5] [i_5])))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_7 = 4; i_7 < 24; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        {
                            var_27 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-122)) ? ((-(((/* implicit */int) (short)16471)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-113)))))));
                            var_28 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)65519)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) (unsigned short)32772)))) << (((((/* implicit */int) arr_15 [i_1] [i_8])) - (177)))));
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned short)59300)) ? (((/* implicit */int) (unsigned short)4510)) : (((/* implicit */int) (unsigned short)54992)))))))));
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (~((~(((/* implicit */int) (unsigned short)3852)))))))));
                        }
                    } 
                } 
                arr_28 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (arr_1 [i_0] [i_0])));
            }
            arr_29 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)243))))) ? (((/* implicit */int) arr_18 [i_0] [i_1 + 1] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_16))));
            var_31 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)65))) : (arr_24 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1 + 1] [10])))));
        }
        var_32 *= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1352007403)))))));
        var_33 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [(unsigned char)23] [(unsigned char)20])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61025)))))));
        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) (signed char)-83))));
    }
}
