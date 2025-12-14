/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249592
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
    var_17 = ((/* implicit */unsigned char) var_10);
    var_18 |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13)))) | (((/* implicit */int) max((var_5), (((/* implicit */short) var_10)))))))) % (((((/* implicit */_Bool) (short)-28469)) ? (((((/* implicit */_Bool) var_13)) ? (var_15) : (var_1))) : (((/* implicit */unsigned long long int) var_4))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) 2574516126955417272ULL)) ? (15872227946754134343ULL) : (15872227946754134327ULL))));
        var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)63969)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0]))))) : (((unsigned long long int) (_Bool)1))))));
        arr_4 [8ULL] [i_0] = max((((max((((/* implicit */unsigned long long int) arr_1 [(_Bool)1])), (2574516126955417272ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */int) arr_1 [i_0])) : (-1104263036)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) (short)-18799))))) : (((/* implicit */int) ((signed char) 1106361435)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [(signed char)1] [(signed char)1])) ? (((/* implicit */int) (_Bool)0)) : (1614823577)));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_1]))));
        arr_9 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1])) / (((/* implicit */int) arr_0 [i_1]))));
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)255))));
            arr_12 [12ULL] [i_2] = ((/* implicit */_Bool) (+(arr_11 [i_1] [i_2])));
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_11 [i_1] [i_2]))));
        }
        for (int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            arr_15 [i_3] &= ((/* implicit */unsigned long long int) arr_7 [(short)7] [i_1]);
            var_23 = ((unsigned short) (signed char)17);
        }
        for (int i_4 = 4; i_4 < 14; i_4 += 3) 
        {
            arr_20 [5ULL] [i_4 + 1] = ((((/* implicit */_Bool) arr_18 [i_4 + 1] [i_4 - 1])) ? (((/* implicit */unsigned long long int) arr_18 [i_4 + 1] [i_4 - 3])) : (arr_17 [i_4 + 1] [i_4 + 2] [i_4 - 1]));
            /* LoopSeq 2 */
            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                arr_25 [i_1] [(unsigned char)9] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_5])) ? (arr_17 [i_1] [i_4 + 1] [i_4 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1567)))));
                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) 5766582266628179308LL)) : (18446744073709551615ULL)))) ? ((~(((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) ((unsigned short) arr_24 [(_Bool)1] [i_4] [i_5]))))))));
                arr_26 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) (signed char)98);
                arr_27 [i_1] = ((/* implicit */_Bool) arr_0 [24]);
            }
            for (int i_6 = 3; i_6 < 16; i_6 += 3) 
            {
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)1008)) ? (((((/* implicit */_Bool) -1397617737)) ? (((/* implicit */int) arr_19 [i_6] [4ULL] [i_6 - 1])) : (((/* implicit */int) (signed char)34)))) : (((/* implicit */int) (signed char)34)))))));
                arr_32 [i_6] [i_6] [i_1] = ((signed char) (unsigned char)134);
            }
        }
    }
}
