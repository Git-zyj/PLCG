/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228241
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((arr_1 [i_0] [i_0]) || (((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) (unsigned char)215)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_13 -= ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (-2074437946)))) ? (((/* implicit */int) var_11)) : (((arr_1 [i_0] [(_Bool)1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
    }
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))) ? ((((_Bool)1) ? (((/* implicit */int) var_9)) : (var_0))) : (((((/* implicit */int) var_2)) & (((/* implicit */int) var_11))))))) ? (((((((/* implicit */_Bool) var_8)) ? (1884863468) : (((/* implicit */int) var_2)))) - (((/* implicit */int) (signed char)-126)))) : (((/* implicit */int) var_8))));
    var_15 &= ((/* implicit */unsigned char) var_2);
    var_16 = ((/* implicit */_Bool) (~(max((((var_10) - (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) (signed char)65)) != (((/* implicit */int) var_5)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_1 = 1; i_1 < 16; i_1 += 1) 
    {
        var_17 = ((((((/* implicit */int) var_4)) <= (((/* implicit */int) (unsigned short)47314)))) ? (((/* implicit */int) (!(var_5)))) : (((/* implicit */int) arr_3 [i_1 + 1])));
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 14; i_2 += 3) 
        {
            var_18 = (((!(var_5))) ? (((/* implicit */int) (unsigned short)47308)) : (((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_1 + 1] [i_2])))));
            arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1] = (((-(((/* implicit */int) arr_3 [i_1])))) - (((/* implicit */int) arr_3 [i_1 - 1])));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        var_19 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_1] [i_4] [i_3])) < (((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (unsigned short)47315)) : (((/* implicit */int) var_6))))));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)86)) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_8)))))));
                        arr_15 [i_3] [i_3] = ((((/* implicit */int) arr_7 [i_2 + 3] [i_3])) <= (((((/* implicit */_Bool) arr_10 [i_1] [i_4] [i_1] [i_4] [(signed char)11] [(_Bool)1])) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1])) : (((/* implicit */int) var_2)))));
                        var_21 ^= ((((/* implicit */int) arr_7 [i_1] [(_Bool)0])) ^ (((/* implicit */int) arr_7 [i_2 + 3] [16])));
                        var_22 = ((/* implicit */unsigned char) var_6);
                    }
                    arr_16 [i_3] [12] [i_3] [i_3] = ((/* implicit */_Bool) ((arr_5 [i_2 + 1] [i_1 + 1] [i_2 + 1]) ? (((/* implicit */int) arr_5 [i_2 + 2] [i_1 - 1] [i_4])) : (((/* implicit */int) arr_13 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_2 + 1]))));
                    arr_17 [i_1 + 1] [i_3] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_5 [(_Bool)1] [i_2] [i_2])) : (((/* implicit */int) (unsigned char)0)))));
                }
                for (signed char i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
                {
                    var_23 = (!(((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_4 [i_3])))));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_2 + 2] [i_2 + 3] [i_2 - 1] [i_2 + 1])) ? (((var_11) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-91)))) : (((((/* implicit */int) (unsigned char)154)) - (((/* implicit */int) var_11))))));
                    arr_20 [i_3] = ((((/* implicit */int) (signed char)91)) - (1074834194));
                    var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_7))));
                }
                var_26 += ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                arr_21 [i_1 + 1] [(_Bool)1] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) (signed char)106))));
                var_27 = ((/* implicit */unsigned short) arr_11 [5] [5] [5] [i_1]);
            }
            /* LoopSeq 2 */
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (_Bool)1))));
                var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) (!((_Bool)0)))) : (((((/* implicit */int) arr_11 [(signed char)0] [(signed char)0] [i_2] [(unsigned short)1])) & (((/* implicit */int) (signed char)126)))))))));
            }
            for (signed char i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                var_30 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_26 [i_1] [6] [(_Bool)1] [5])))) * (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_6))))));
                var_31 = ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2] [i_8])) * (((/* implicit */int) var_9))));
                var_32 = (!(((/* implicit */_Bool) arr_22 [i_1 - 1])));
            }
        }
    }
}
