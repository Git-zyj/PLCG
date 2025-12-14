/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222613
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)224)) ? ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65523))) : (var_7))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) (short)32763)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-6))) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_2 [i_0]))) ? (min((arr_2 [i_0]), (arr_2 [i_0]))) : (((unsigned int) arr_2 [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) (short)4659)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32749))) : (arr_1 [4LL])))))) ? (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) var_4)))))) : (((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (((long long int) (unsigned short)200))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] &= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1])))))) % ((~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24851))) & (arr_5 [i_0] [1LL])))))));
                    var_12 = ((/* implicit */signed char) min((arr_3 [i_0] [i_1]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1])))))) ? (var_6) : (max((((/* implicit */long long int) var_3)), (arr_3 [i_0] [i_2])))))));
                    arr_11 [(signed char)7] [i_1] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) arr_8 [(_Bool)1] [i_1] [i_0] [i_0]))))))) ? (9223372036854775801LL) : ((~(arr_3 [i_0] [i_2 + 2])))));
                }
            } 
        } 
    }
    var_13 &= ((/* implicit */signed char) var_1);
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        for (signed char i_4 = 1; i_4 < 10; i_4 += 4) 
        {
            {
                arr_18 [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [(signed char)10])) | (((/* implicit */int) arr_13 [i_3]))))) ? (((((/* implicit */_Bool) (short)-32764)) ? (((/* implicit */int) (short)-32767)) : (((/* implicit */int) (unsigned char)128)))) : (((/* implicit */int) ((unsigned short) arr_17 [i_3] [i_3])))))) ? (((/* implicit */long long int) max((12U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */int) arr_13 [i_4 + 1])) : (((/* implicit */int) arr_14 [(signed char)10])))))))) : (((((/* implicit */_Bool) ((unsigned char) arr_15 [i_4] [i_4]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_14 [i_3])) : (((/* implicit */int) arr_12 [i_3]))))) : (((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_16 [i_3] [i_4] [(unsigned char)2])))))));
                arr_19 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((var_7), (((/* implicit */long long int) 4294967283U)))) >> (((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-6096727537351870454LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4 - 1]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_3] [i_4]))) : (arr_16 [i_3] [i_3] [(_Bool)1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_16 [i_3] [i_4] [i_4 + 1])))));
                arr_20 [(unsigned char)1] [i_4] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3]))) : (arr_16 [i_3] [(unsigned short)2] [i_4])))) ? (((((/* implicit */_Bool) var_9)) ? (4796351205443383361LL) : (arr_16 [(signed char)6] [(short)4] [10LL]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_3] [i_4 + 1])))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_15 [i_4] [i_4])), (2690879970U)))) ? (((/* implicit */int) arr_17 [i_3] [i_4])) : (((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */int) arr_13 [i_3])) : (((/* implicit */int) arr_15 [i_4] [i_4])))))))));
            }
        } 
    } 
}
