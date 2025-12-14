/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41049
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned int) ((unsigned char) 6963718692915145957ULL));
                var_18 = ((/* implicit */unsigned long long int) (short)-32746);
                arr_6 [1] [(_Bool)1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_4 [i_0 - 3] [i_1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        for (int i_3 = 2; i_3 < 11; i_3 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
                            {
                                var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(arr_10 [i_2]))))));
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) arr_13 [i_3] [i_4] [i_5] [i_6])) : (((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) (_Bool)1)) : (1970591004)))));
                                arr_18 [i_2] [i_3] [i_2] [i_3] [i_5] = ((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2]);
                            }
                            for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
                            {
                                arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)208))))), (max((arr_8 [i_7]), (((/* implicit */long long int) arr_11 [i_7] [i_7] [i_7])))))) > (((/* implicit */long long int) (-(((/* implicit */int) arr_11 [i_5 + 1] [i_3 - 1] [i_4])))))));
                                var_21 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((((/* implicit */_Bool) 16383)) || (((/* implicit */_Bool) (unsigned char)255)))) || (((/* implicit */_Bool) max(((short)-1), (((/* implicit */short) (unsigned char)128)))))))), (((((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_5 + 1] [i_3])) ? (arr_19 [i_3] [i_3] [i_5 + 1] [i_5 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                            }
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_3] [i_4] [i_5]))))) ? (max((arr_19 [i_5 + 1] [i_4] [i_3] [i_2]), (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) var_17)))))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */int) max((max((((/* implicit */unsigned int) (-(((/* implicit */int) (short)-32766))))), (var_13))), (((/* implicit */unsigned int) (unsigned char)120))));
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(1048064U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */_Bool) (unsigned char)120)) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (max((18055359771579064667ULL), (((/* implicit */unsigned long long int) (unsigned short)24651))))))));
    /* LoopSeq 1 */
    for (signed char i_8 = 0; i_8 < 11; i_8 += 2) 
    {
        arr_24 [i_8] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((((/* implicit */int) (unsigned char)24)) & (((/* implicit */int) (unsigned short)11006)))))))));
        arr_25 [i_8] = (-(((((/* implicit */_Bool) arr_17 [i_8] [i_8] [i_8] [i_8] [i_8])) ? (arr_19 [(short)10] [i_8] [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (short)32767))))));
        arr_26 [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (var_14)))))) ? (((/* implicit */long long int) (+(((243810826) - (((/* implicit */int) arr_22 [i_8] [i_8]))))))) : (min((((long long int) arr_7 [i_8] [i_8])), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_7 [i_8] [i_8])) : (arr_20 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))))))));
    }
}
