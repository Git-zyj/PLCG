/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244964
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
    var_14 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (max((((/* implicit */int) (signed char)-72)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)1645)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) var_7))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 + 1])) * (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) ((arr_0 [(unsigned short)3]) || (arr_0 [i_0]))))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (short)1645)) || (((/* implicit */_Bool) (signed char)35))));
        arr_3 [(signed char)7] [i_0 - 2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)37097))));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */short) min(((((~(((/* implicit */int) arr_5 [i_1])))) - (((((/* implicit */_Bool) arr_5 [(signed char)8])) ? (((/* implicit */int) (unsigned short)28439)) : (((/* implicit */int) arr_5 [i_1])))))), (((/* implicit */int) arr_4 [i_1]))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            arr_10 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((arr_9 [i_1] [i_1] [i_2]) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((/* implicit */int) arr_5 [12])))))) ? (((/* implicit */int) ((unsigned short) arr_7 [i_2]))) : (((/* implicit */int) (short)-31739))));
            var_16 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) (signed char)35)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) (short)-1645))))) ? (((/* implicit */int) ((signed char) arr_4 [i_2]))) : (((/* implicit */int) arr_9 [i_1] [i_2] [i_1]))))));
            var_17 = ((/* implicit */unsigned short) ((_Bool) arr_9 [i_2] [i_2] [i_1]));
        }
        arr_11 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))) >= (7ULL))) || (arr_9 [i_1] [i_1] [i_1])))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-26)) : (((/* implicit */int) arr_4 [i_1]))))) ? (((int) arr_5 [i_1])) : (((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_8 [i_1] [i_1]))))))));
    }
    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_4 = 4; i_4 < 15; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                for (int i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    {
                        arr_23 [i_3] [i_4 - 2] [i_5] [i_3] = ((/* implicit */unsigned long long int) arr_7 [(short)1]);
                        var_18 -= (+((+(((/* implicit */int) arr_4 [i_3 + 1])))));
                        arr_24 [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_4 [i_4 + 1])) | (((/* implicit */int) arr_4 [i_4 - 2])))) << (((((((/* implicit */_Bool) max((1899641207731572500ULL), (((/* implicit */unsigned long long int) arr_16 [i_3]))))) ? (((/* implicit */long long int) max((arr_22 [i_4] [i_4] [i_5] [i_6]), (((/* implicit */int) arr_7 [i_3]))))) : (((((/* implicit */_Bool) arr_14 [i_4] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_6] [i_5] [i_5] [i_5] [i_3] [i_3]))) : (arr_20 [(signed char)6] [i_3] [i_6]))))) - (109845340LL)))));
                        arr_25 [i_3] [i_4] [i_3] = ((/* implicit */_Bool) ((((max((((/* implicit */unsigned int) (signed char)35)), (397198609U))) & (3897768686U))) | (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_8 [i_3] [i_3])) : (((/* implicit */int) (unsigned short)37097)))), (((/* implicit */int) arr_8 [i_4 + 1] [i_4])))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            for (long long int i_8 = 2; i_8 < 15; i_8 += 2) 
            {
                {
                    var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_3 + 1] [i_3 + 1])) ? (((/* implicit */int) ((signed char) max((0LL), (((/* implicit */long long int) (signed char)-18)))))) : (max((((((/* implicit */int) (unsigned char)0)) << (((16547102865977979115ULL) - (16547102865977979114ULL))))), (((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) (signed char)18)) : (((/* implicit */int) arr_19 [i_8] [i_7] [i_8] [i_8]))))))));
                    arr_31 [i_3] [i_7] [i_3] = ((((_Bool) ((int) arr_20 [i_3] [i_3] [i_3]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_3])) ? (((/* implicit */int) (unsigned short)14)) : (((/* implicit */int) (signed char)35))))) ? (max((16547102865977979097ULL), (((/* implicit */unsigned long long int) 472246703)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 397198609U)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_3] [i_3] [i_3 - 1] [i_3 - 1]))));
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (min((arr_26 [i_8]), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) 1048575U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-54))) : (1899641207731572500ULL)))))))));
                }
            } 
        } 
    }
}
