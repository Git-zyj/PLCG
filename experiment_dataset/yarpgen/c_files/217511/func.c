/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217511
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_13 = var_8;
            arr_6 [i_1] [(short)11] = min((((int) arr_5 [i_0])), (((((/* implicit */int) arr_3 [i_0] [i_1])) ^ (((/* implicit */int) arr_3 [i_0] [i_1])))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    for (int i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned char)203)), (((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17946161588891479458ULL))))))));
                            arr_16 [i_2] [9LL] [16ULL] [i_2] [i_1] [i_2] = ((unsigned short) (((~(-915140398))) >= (((/* implicit */int) (signed char)31))));
                            arr_17 [i_2] [i_3] [i_2] [i_0] [i_2] = (_Bool)1;
                            arr_18 [i_2] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) min((2404482169U), (((/* implicit */unsigned int) (_Bool)1))))), (max((var_8), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)48801)), (arr_2 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((915140397) >> (((/* implicit */int) (_Bool)1))))) : ((((_Bool)1) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-87)))))))));
                        }
                    } 
                } 
                arr_19 [4] [i_2] [i_2] [i_0] = ((/* implicit */signed char) max((((unsigned long long int) (-(var_3)))), (((/* implicit */unsigned long long int) ((short) ((unsigned short) var_11))))));
                arr_20 [i_2] [6LL] [i_2] [i_2] = ((/* implicit */short) var_12);
                arr_21 [(unsigned short)7] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3001424689U)) ? (((/* implicit */int) (short)-11778)) : (((/* implicit */int) ((((/* implicit */_Bool) 15915104926207571261ULL)) || (((/* implicit */_Bool) arr_8 [i_2] [i_2])))))));
                arr_22 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) 1857215581);
            }
            var_15 = ((/* implicit */int) var_1);
            arr_23 [i_0] = ((/* implicit */signed char) arr_13 [i_0] [i_0] [i_1] [i_0] [i_1]);
        }
        arr_24 [i_0] = ((/* implicit */unsigned char) ((unsigned int) (-(min((var_11), (((/* implicit */int) arr_12 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (long long int i_5 = 3; i_5 < 9; i_5 += 1) 
    {
        arr_29 [i_5] = ((/* implicit */int) arr_1 [i_5 - 3] [i_5]);
        arr_30 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)32)) ? (arr_2 [i_5 - 1] [i_5 - 3] [i_5]) : (arr_2 [i_5 - 2] [i_5 + 2] [i_5 - 3])));
        var_16 = ((/* implicit */unsigned int) (+((~(18446744073709551610ULL)))));
        /* LoopSeq 1 */
        for (unsigned int i_6 = 4; i_6 < 8; i_6 += 2) 
        {
            arr_35 [i_5] [i_5 + 2] = ((/* implicit */int) ((unsigned char) (signed char)43));
            arr_36 [i_5] [i_6] = ((/* implicit */short) ((int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)88)))));
            arr_37 [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_4))) ? (var_2) : (((/* implicit */long long int) var_6))));
            /* LoopNest 2 */
            for (unsigned char i_7 = 3; i_7 < 9; i_7 += 2) 
            {
                for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    {
                        var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_42 [i_5 + 2] [i_5] [i_6] [i_7] [i_8])) ? (((/* implicit */int) arr_42 [(_Bool)1] [i_6] [i_6 - 1] [i_6 + 3] [i_8])) : (((/* implicit */int) arr_42 [i_5] [i_6 + 3] [i_7] [i_8] [(short)7]))));
                        arr_44 [(unsigned short)4] [i_7] [i_6 + 1] [(signed char)2] [(signed char)2] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) var_10))) ? (((var_4) % (((/* implicit */long long int) ((/* implicit */int) arr_3 [(short)15] [14U]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5 + 2] [i_5 + 1])))));
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) 7))));
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        }
    }
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */int) var_5)) : (var_7)))), (((long long int) var_5))))) ? ((+(((((/* implicit */_Bool) 10718761700943211911ULL)) ? (7727982372766339713ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)101))))))) : (((/* implicit */unsigned long long int) 2760012751U))));
}
