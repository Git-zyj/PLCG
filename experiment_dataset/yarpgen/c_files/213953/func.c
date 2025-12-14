/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213953
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
    var_12 = ((/* implicit */unsigned char) var_11);
    var_13 = ((/* implicit */unsigned long long int) var_9);
    var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (4160749568U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)5)) << (((((/* implicit */int) (signed char)-124)) + (149)))))) : (((((/* implicit */_Bool) 4160749568U)) ? (var_4) : (var_4)))))) && (((/* implicit */_Bool) min((((/* implicit */short) var_8)), (((short) var_7)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned short)23])) ? (436159493U) : (((/* implicit */unsigned int) -1669328501))))) ? (((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) ((var_6) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))))), (((/* implicit */int) (unsigned char)251))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_1 [i_0]))) << (((((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0])), (arr_1 [i_0])))) - (103)))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) ((var_0) % (((/* implicit */long long int) ((/* implicit */int) ((var_1) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)26)))))))));
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 14; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4692298308217620133LL)) ? (((/* implicit */long long int) 2516311369U)) : (var_11))) <= (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_1] [i_1] [i_3])))))));
                    arr_12 [i_3] [i_1 - 1] [i_2 + 1] [i_3] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (arr_9 [i_2 - 1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-114)))));
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 1; i_4 < 14; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) || ((_Bool)1)));
                        arr_15 [i_1] [3ULL] [3ULL] [i_2] [i_3] [i_4 - 1] = ((/* implicit */short) ((long long int) ((((/* implicit */int) var_10)) | (((/* implicit */int) arr_2 [(short)12])))));
                        var_20 = ((/* implicit */long long int) max((var_20), (((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [(signed char)14] [i_3] [i_3])) >> (((/* implicit */int) var_2))))) ? (var_0) : (((/* implicit */long long int) arr_11 [i_1 - 1] [i_2] [1ULL] [(short)5]))))));
                    }
                    for (int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        arr_18 [i_2] = arr_4 [i_1] [i_1];
                        var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))) <= ((-(var_6)))));
                    }
                    var_22 = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_1] [i_2] [i_3])) + (((/* implicit */int) arr_10 [i_1 + 1] [i_2] [i_3]))));
                    var_23 = ((/* implicit */unsigned long long int) (+(var_3)));
                }
            } 
        } 
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 2])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (arr_4 [(_Bool)1] [i_1 + 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_7)) + (24989)))))))))));
    }
}
