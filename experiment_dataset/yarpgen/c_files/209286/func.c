/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209286
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)203)), (max((18446744073709551615ULL), (18446744073709551615ULL)))))) ? (((/* implicit */int) (short)25416)) : (((/* implicit */int) arr_2 [i_0]))));
        /* LoopSeq 3 */
        for (short i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */int) arr_3 [i_1 + 2])) : (((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 1])))));
            arr_9 [i_0] [(unsigned short)18] [i_0] = ((/* implicit */short) (-(((/* implicit */int) min((arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 3]), (arr_1 [i_0] [i_0]))))));
            var_20 += ((/* implicit */unsigned short) (~((~(((/* implicit */int) max(((short)-16807), (arr_0 [i_1]))))))));
            arr_10 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */int) arr_0 [i_1 - 2])) <= (((/* implicit */int) arr_1 [i_0] [i_0])))) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
        }
        for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            arr_14 [11LL] [i_2] = ((/* implicit */short) ((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [(unsigned short)23])) ? (((/* implicit */int) (short)15360)) : (((/* implicit */int) (short)15360))))) != (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (arr_7 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))))))) ? (((/* implicit */int) arr_12 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_2] [i_2]))));
            var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_13 [i_0] [i_0]))));
        }
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            var_22 = ((/* implicit */short) (((-(((/* implicit */int) arr_15 [i_0] [i_3] [i_3])))) - ((+(((/* implicit */int) ((short) 0ULL)))))));
            arr_18 [i_0] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_0] [i_3]))));
            var_23 |= ((/* implicit */unsigned short) arr_17 [i_0] [i_3]);
        }
    }
    for (unsigned short i_4 = 4; i_4 < 13; i_4 += 4) 
    {
        var_24 = ((/* implicit */unsigned char) max((((/* implicit */int) ((short) arr_15 [i_4] [i_4] [i_4 + 1]))), (((((/* implicit */_Bool) arr_12 [i_4 - 3] [i_4 + 1])) ? (((/* implicit */int) arr_12 [i_4 - 3] [i_4 - 1])) : (((/* implicit */int) (_Bool)1))))));
        arr_22 [i_4] [i_4 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_4] [i_4 - 3])) ? (arr_7 [i_4 - 1]) : (((/* implicit */long long int) ((/* implicit */int) max((arr_2 [i_4 - 2]), (((/* implicit */unsigned short) (unsigned char)162))))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [(short)17]))))) ? (arr_7 [i_4 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51103))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((8182512955682751709ULL), (((/* implicit */unsigned long long int) arr_11 [i_4] [i_4]))))) ? (((/* implicit */int) (unsigned short)14426)) : (((/* implicit */int) arr_21 [i_4 + 1])))))));
        arr_23 [(unsigned short)2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_4] [i_4 - 4])) % (((/* implicit */int) arr_15 [i_4] [i_4] [i_4]))))) ? ((+(((((/* implicit */_Bool) arr_20 [i_4] [i_4])) ? (arr_7 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4] [i_4]))))))) : ((+(max((((/* implicit */long long int) (short)-5835)), (arr_7 [i_4])))))));
        var_25 += ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_4] [i_4])) ? (((/* implicit */int) arr_15 [i_4] [i_4] [i_4 + 2])) : (((/* implicit */int) arr_0 [i_4]))))) ? (((/* implicit */int) arr_0 [i_4 + 1])) : (((/* implicit */int) arr_3 [i_4 - 3])))) >= ((((((~(((/* implicit */int) (unsigned short)51103)))) + (2147483647))) << (((((((/* implicit */int) arr_20 [i_4] [i_4])) + (13473))) - (22)))))));
    }
    var_26 = ((/* implicit */long long int) var_12);
}
