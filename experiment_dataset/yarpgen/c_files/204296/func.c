/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204296
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
    var_13 = ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) var_3))));
    var_14 = ((unsigned short) ((((/* implicit */int) (unsigned short)20735)) << (((((((/* implicit */_Bool) (unsigned short)44800)) ? (((/* implicit */int) (unsigned short)64736)) : (((/* implicit */int) (unsigned short)20748)))) - (64733)))));
    var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)37392)) : (((/* implicit */int) (unsigned short)0))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            var_16 = ((/* implicit */unsigned short) min((var_16), (var_4)));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20751)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)59512))))) ? (((((/* implicit */int) var_4)) - (((/* implicit */int) var_2)))) : ((+(((/* implicit */int) (unsigned short)43944))))));
                arr_9 [i_1] = var_1;
            }
            var_18 -= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)45667)) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24732)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) (unsigned short)32767)) : (((((/* implicit */_Bool) (unsigned short)52797)) ? (((/* implicit */int) (unsigned short)46809)) : (((/* implicit */int) var_10))))))));
        }
        for (unsigned short i_3 = 1; i_3 < 8; i_3 += 2) 
        {
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (unsigned short)37308))) - (((/* implicit */int) ((unsigned short) arr_12 [i_0 - 1] [i_0 - 2] [i_0 + 1])))));
            arr_13 [i_0] [i_3 + 1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned short) (unsigned short)26496))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) ((unsigned short) ((unsigned short) var_4))))));
            arr_14 [i_3] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)20721)) ? (((/* implicit */int) arr_7 [i_0] [i_0 - 2] [i_3] [i_3])) : (((/* implicit */int) var_11))))));
        }
        arr_15 [i_0 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_8 [i_0] [(unsigned short)7] [(unsigned short)0])))) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) ((unsigned short) var_3)))))) ? (((((((/* implicit */int) (unsigned short)11354)) << (((((/* implicit */int) (unsigned short)40742)) - (40734))))) - (((/* implicit */int) min(((unsigned short)0), (var_12)))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)1991)) : (((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [(unsigned short)7])) % (((/* implicit */int) var_8))))))));
    }
    for (unsigned short i_4 = 1; i_4 < 14; i_4 += 1) 
    {
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_3)) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) arr_16 [i_4 - 1] [i_4 - 1])))), (((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12))))));
        arr_19 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)59160)) ? (((((/* implicit */_Bool) (unsigned short)15270)) ? (((/* implicit */int) ((unsigned short) (unsigned short)65535))) : (((((/* implicit */int) (unsigned short)61703)) + (((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)65345)) : ((+(((/* implicit */int) (unsigned short)1))))))));
    }
    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        arr_24 [(unsigned short)22] [i_5] |= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)65535))));
        arr_25 [i_5] = ((/* implicit */unsigned short) ((((((((/* implicit */int) (unsigned short)56329)) % (((/* implicit */int) (unsigned short)65535)))) << (((((((/* implicit */int) var_4)) | (((/* implicit */int) (unsigned short)1)))) - (17615))))) - (((((/* implicit */int) (unsigned short)65534)) - (((/* implicit */int) (unsigned short)1023))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned short)17904)))) - (((/* implicit */int) (unsigned short)50716))))) ? (((((/* implicit */int) var_5)) << (((((/* implicit */int) var_8)) - (43896))))) : ((+(((((/* implicit */_Bool) (unsigned short)11010)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)10940))))))));
    }
}
