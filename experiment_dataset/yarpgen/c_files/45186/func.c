/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45186
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((short) (unsigned short)46243)), ((short)6583)))) ? (((/* implicit */int) (short)6555)) : (((/* implicit */int) ((short) (short)-8746)))));
    var_11 = ((/* implicit */short) min((((((/* implicit */int) (short)25775)) % (((/* implicit */int) (unsigned short)64154)))), (((/* implicit */int) max((((unsigned short) (short)6583)), (((unsigned short) (short)-8751)))))));
    /* LoopSeq 4 */
    for (short i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min(((unsigned short)0), (((/* implicit */unsigned short) var_0))))) ? (((((/* implicit */int) (unsigned short)2161)) / (((/* implicit */int) arr_1 [(short)11])))) : (((((/* implicit */_Bool) (unsigned short)54488)) ? (((/* implicit */int) (short)-8634)) : (((/* implicit */int) (unsigned short)1387)))))))))));
        var_13 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */int) (unsigned short)43405)) : (((/* implicit */int) arr_2 [i_0 - 3])))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) (short)-30317);
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
        {
            arr_8 [i_1] [i_2] [(short)4] = ((/* implicit */unsigned short) max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)30291)))))))));
            arr_9 [(unsigned short)12] [i_2] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned short)53764), ((unsigned short)38544)))))))));
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
        {
            var_14 ^= ((/* implicit */unsigned short) var_4);
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_13 [i_3] [i_1])) : (((/* implicit */int) arr_4 [i_3]))));
            arr_14 [(unsigned short)1] [(short)3] [(unsigned short)4] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (short)8757)) ? (((/* implicit */int) (short)-20915)) : (((/* implicit */int) var_0))))));
            arr_15 [i_3] [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_1])) << (((((/* implicit */int) var_6)) - (24785)))));
        }
    }
    for (short i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
    {
        arr_19 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (short)8634))))), (((((/* implicit */int) arr_1 [(unsigned short)7])) - (((/* implicit */int) (unsigned short)60452))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (short)56)))))) : (((((/* implicit */_Bool) (unsigned short)46377)) ? (((/* implicit */int) (short)-6132)) : (((/* implicit */int) var_4))))));
        arr_20 [i_4] = ((/* implicit */unsigned short) ((short) min((((((/* implicit */int) (unsigned short)8)) + (((/* implicit */int) (short)2526)))), (((/* implicit */int) var_9)))));
        arr_21 [(unsigned short)8] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)35955))));
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
    {
        arr_25 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)8796))))) ? (((/* implicit */int) (short)30306)) : (((/* implicit */int) (short)-10691))));
        arr_26 [i_5] = ((/* implicit */short) arr_7 [i_5] [i_5] [i_5]);
    }
    var_16 = ((/* implicit */short) (unsigned short)11043);
}
