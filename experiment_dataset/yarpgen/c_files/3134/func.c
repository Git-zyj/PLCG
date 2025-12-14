/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3134
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
    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1383805053590595851LL)) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) var_4))))), ((~(2186505025U))))))));
    var_20 = ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)99)), ((unsigned char)121)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8690)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))))))) & (min((((((((/* implicit */int) var_7)) + (2147483647))) << (((var_3) - (6338912653865859730ULL))))), (((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) var_9)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (long long int i_2 = 4; i_2 < 22; i_2 += 1) 
            {
                {
                    var_21 = ((((((/* implicit */_Bool) (short)-8690)) && (((/* implicit */_Bool) (signed char)32)))) ? (arr_5 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)83))));
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) arr_8 [i_0] [i_0] [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 4; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)20)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)8690)), (11279231430382508842ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2 + 1] [i_2] [i_2 + 3] [i_2] [i_3 - 1] [i_3 + 2]))) : (-3397422692056412429LL))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_10 [i_2 + 2] [i_2] [i_3 - 2] [i_3] [i_3] [i_3 - 1]), (arr_10 [i_2 + 2] [i_2] [i_3 - 2] [i_3] [i_0] [i_3 - 1])))))));
                                var_24 -= ((/* implicit */unsigned char) min((3397422692056412428LL), (((((/* implicit */_Bool) arr_13 [i_2 + 2] [i_2 - 2] [i_2 + 1] [i_3 - 3] [i_3] [i_3 - 2])) ? (arr_13 [i_2 + 2] [i_2 - 2] [i_2 + 1] [i_3 - 3] [i_0] [i_3 - 2]) : (arr_13 [i_2 + 2] [i_2 - 2] [i_2 + 1] [i_3 - 3] [i_3] [i_3 - 2])))));
                                var_25 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_10 [i_2] [i_1] [i_2] [i_2 + 3] [i_1] [i_4])) >> (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2 + 3] [i_3 - 3] [i_3]))))));
                                var_26 = ((/* implicit */unsigned long long int) arr_13 [i_2] [i_2 - 4] [i_2] [i_2] [i_1] [i_1]);
                                var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) (short)-8667)) ? (((/* implicit */int) arr_9 [i_3] [i_3] [i_3 - 3] [i_3] [i_3 - 4] [i_3])) : (((/* implicit */int) arr_9 [i_1] [i_3 + 1] [i_3] [i_3] [i_3 + 2] [i_3])))) < (((/* implicit */int) ((unsigned char) arr_5 [i_1] [i_2 - 2])))));
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) -3397422692056412429LL)) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) (signed char)44)))) / ((-(46734763)))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 3397422692056412411LL)) >= (17399668581409946960ULL)))) == (((((/* implicit */int) (unsigned char)178)) | (((/* implicit */int) (short)-1)))))))) + (4576811551164118867LL)));
}
