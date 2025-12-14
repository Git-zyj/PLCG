/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50139
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
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                var_10 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_2])) ? (arr_6 [i_1] [i_1] [i_2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned short)3])))))))))));
                arr_8 [i_2 + 1] [(unsigned char)3] [17LL] = ((/* implicit */unsigned char) ((short) min((var_5), (((/* implicit */int) arr_3 [18U] [i_0 - 1])))));
                var_11 += ((/* implicit */_Bool) arr_1 [i_0 + 1] [i_1]);
            }
            var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) arr_5 [i_1] [i_0]))));
            arr_9 [i_0 + 1] [i_1] [(signed char)11] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)9119)) ? (1203869070U) : (1564474095U))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)52)))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)149)));
            arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)30152))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1]))) | (((unsigned long long int) var_8))))));
            var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (+(arr_6 [i_0] [i_0 - 1] [10LL] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_1 [i_1] [i_0])))))) : (((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (arr_4 [i_0 - 1] [i_0 - 1] [i_0]) : (((/* implicit */long long int) var_7)))))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)6), (((unsigned char) var_1)))))))))));
        }
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            arr_13 [i_0] [(_Bool)1] [i_0] |= ((/* implicit */short) (((((-(((((/* implicit */_Bool) 67076096U)) ? (((/* implicit */int) arr_5 [i_3] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0 + 1])))))) + (2147483647))) << (((min((arr_4 [i_0] [i_0] [1U]), (((arr_7 [i_0 + 1]) & (arr_4 [i_0] [i_3] [i_3]))))) - (1162564230575048704LL)))));
            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_0])), ((~(((/* implicit */int) (unsigned short)32767))))))) ? ((+(min((((/* implicit */long long int) var_5)), (arr_7 [i_0 + 1]))))) : (((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (unsigned short)46458)))) >> (((((/* implicit */int) ((unsigned short) (unsigned short)30152))) - (30149))))))));
            arr_14 [i_0] [i_3] [17LL] = ((/* implicit */unsigned long long int) (-((-(arr_6 [i_3] [i_0 - 1] [i_0] [i_0])))));
        }
        var_15 = ((/* implicit */unsigned short) ((((arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1]) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1]))))) == (((/* implicit */long long int) ((arr_11 [i_0 - 1]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)29))))))));
    }
    var_16 &= ((/* implicit */signed char) var_2);
}
