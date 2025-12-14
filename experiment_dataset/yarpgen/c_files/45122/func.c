/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45122
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
    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */short) (+((-9223372036854775807LL - 1LL))));
                        var_15 ^= ((/* implicit */long long int) (~((+(((/* implicit */int) ((_Bool) (unsigned short)41710)))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 2; i_4 < 13; i_4 += 4) 
                        {
                            arr_14 [i_1] [i_0] [i_1] = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) (((((((-(((/* implicit */int) var_12)))) + (2147483647))) << (((((((/* implicit */_Bool) -2693840858318193983LL)) ? (((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 1] [i_2] [i_3] [i_0])) : (8380416))) - (20))))) >> (((((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)7)))) / (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [11ULL]))) : (arr_2 [i_0])))))))) : (((/* implicit */unsigned short) (((((((-(((/* implicit */int) var_12)))) + (2147483647))) << (((((((((/* implicit */_Bool) -2693840858318193983LL)) ? (((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 1] [i_2] [i_3] [i_0])) : (8380416))) - (20))) - (156))))) >> (((((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)7)))) / (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [11ULL]))) : (arr_2 [i_0]))))))));
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)156)) ^ ((~(((/* implicit */int) arr_6 [i_0] [(unsigned char)8])))))))));
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) -2693840858318193975LL)) ? (arr_3 [i_0] [11] [(unsigned short)12]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_6))))))) : ((+(((arr_10 [i_4] [i_3] [i_2] [i_1] [i_2] [i_0] [i_0]) / (((/* implicit */long long int) var_7)))))))))));
                            var_18 += ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)55714)) == (arr_4 [i_4 + 1] [i_3 - 1])));
                        }
                        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
                        {
                            arr_19 [i_0] [(_Bool)1] [i_0] = ((/* implicit */_Bool) (-(3562646417U)));
                            arr_20 [12U] [i_1] [i_0] [i_1] [i_1] [i_1] [(unsigned short)0] = ((/* implicit */long long int) (_Bool)1);
                            arr_21 [i_0] [i_0] [i_0] [i_3] [i_3] [i_2] = min((((/* implicit */int) (_Bool)0)), (170397278));
                        }
                        for (long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            arr_25 [(unsigned short)7] [i_0] [i_0 - 1] [7LL] [2LL] [i_0] [i_6] = ((/* implicit */unsigned long long int) ((((arr_5 [i_0] [i_0] [i_0]) >= ((-(arr_5 [i_0] [6ULL] [i_3]))))) ? (min((((/* implicit */int) ((unsigned char) 2693840858318193988LL))), ((~(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((unsigned char) var_1)))));
                            arr_26 [i_0] [i_3 - 1] [12ULL] [9LL] [9LL] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_3 - 1] [i_3] [(signed char)5] [i_3 - 1] [9LL] [i_3] [i_3 - 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))))), ((~(arr_10 [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_0] [i_3] [i_3 - 1])))));
                        }
                    }
                    var_19 += ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) arr_7 [i_2] [i_2]))))));
                    arr_27 [(_Bool)0] [i_0] [(signed char)11] = ((/* implicit */unsigned short) (-((+(((2686886894U) >> (((-952735217451780699LL) + (952735217451780718LL)))))))));
                }
            } 
        } 
    } 
}
