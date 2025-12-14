/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241677
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
    var_19 += (+(((/* implicit */int) (_Bool)0)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 -= ((6820216931071607284LL) < (((/* implicit */long long int) ((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) 2079767866U))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_13) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : ((((_Bool)0) ? (2215199416U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)5537)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_4 = 1; i_4 < 13; i_4 += 1) /* same iter space */
                        {
                            var_22 += ((/* implicit */short) (~(((/* implicit */int) arr_11 [4LL] [i_3 + 1] [i_4 + 2]))));
                            var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1] [i_3 + 1])) ? (((/* implicit */unsigned int) arr_8 [12ULL] [12ULL] [i_1] [i_3 - 1])) : (2079767866U)));
                            arr_13 [i_0] [(_Bool)1] [i_0] [i_3] [i_4 - 1] [i_0] |= ((/* implicit */unsigned char) (~(arr_8 [(_Bool)1] [i_2 - 2] [i_3 + 1] [i_4 + 2])));
                        }
                        /* vectorizable */
                        for (signed char i_5 = 1; i_5 < 13; i_5 += 1) /* same iter space */
                        {
                            var_24 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3043786639U)) ? (-3187835229116701022LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                            arr_16 [i_0] [i_0] [i_0] [(unsigned char)13] [i_2 + 1] [i_3] [i_5 + 2] = ((/* implicit */unsigned short) ((var_16) < (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_2] [i_2 + 2])))));
                            arr_17 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (short)-21964))));
                        }
                        arr_18 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)21964)) ? (2079767866U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (_Bool)0))) ? ((+(((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) arr_11 [i_6] [i_2 + 1] [i_6]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_6]))))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            var_26 -= ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_7 [i_0] [i_0] [i_1 + 1] [i_1 + 1])))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_3 [i_6] [i_0])))))));
                            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)29)))))));
                            var_28 = ((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_2] [i_6] [i_7]);
                        }
                        var_29 = ((/* implicit */unsigned short) ((arr_4 [i_0] [(_Bool)1] [(_Bool)1] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_20 [(_Bool)0] [(_Bool)0] [i_2 - 2] [(_Bool)0] [i_2 - 2] [i_2]) < (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_13))))))))));
                    }
                    arr_25 [3LL] [i_1] [i_0] = min((arr_21 [i_2 - 1]), (min((arr_21 [i_2 + 2]), (arr_21 [i_2 - 2]))));
                    var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) arr_9 [i_0] [4U] [i_1] [i_1 + 3] [i_1 + 3]))));
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((long long int) ((((_Bool) (signed char)-73)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [0ULL] [i_0])) : (((((/* implicit */int) (signed char)-44)) + (var_1)))))))));
        var_32 = ((/* implicit */_Bool) arr_2 [i_0]);
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 14; i_8 += 3) 
    {
        var_33 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)73)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16320))) : (2052313304153692675ULL)));
        var_34 &= ((/* implicit */unsigned long long int) (!((_Bool)0)));
    }
    var_35 *= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-21945)) && (((/* implicit */_Bool) ((var_9) + (((/* implicit */int) var_3)))))))) == (((((/* implicit */_Bool) ((int) var_8))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))));
    var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) var_10))));
}
