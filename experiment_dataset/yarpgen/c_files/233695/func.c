/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233695
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)62))) : (-36028797018963968LL))) >> (((((/* implicit */int) var_0)) - (53196)))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (-36028797018963968LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))), (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned char)41)))))))));
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (min((var_7), (7836708710008114577ULL)))))) ? (((/* implicit */unsigned long long int) var_9)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2539)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) var_9)) : (max((var_7), (var_1)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_12 = (~(((/* implicit */int) arr_0 [i_0] [i_0])));
        var_13 -= ((/* implicit */unsigned char) ((short) (+(((/* implicit */int) (signed char)-75)))));
        var_14 = ((/* implicit */_Bool) max((var_14), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (((arr_1 [i_0]) ? (-948363648404519834LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 16; i_1 += 4) 
    {
        var_15 ^= ((/* implicit */int) (signed char)48);
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 + 1])) ? (2465850500089285170ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))));
    }
    /* vectorizable */
    for (short i_2 = 1; i_2 < 21; i_2 += 2) 
    {
        arr_8 [i_2] [i_2 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)41)) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) arr_5 [i_2]))))) ? (((unsigned long long int) (unsigned char)214)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (163503325) : (((/* implicit */int) (unsigned char)34)))))));
        /* LoopNest 2 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 255U))))));
                    var_18 = ((/* implicit */unsigned char) (-(((((/* implicit */long long int) arr_13 [i_2 - 1] [i_3] [i_4])) % (arr_14 [i_2] [i_3] [i_3] [i_4])))));
                    arr_15 [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_7 [i_4 + 1]))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 191856295696644441ULL))) ? (((((/* implicit */_Bool) (unsigned short)14468)) ? (((/* implicit */int) (unsigned char)44)) : (((/* implicit */int) (_Bool)1)))) : ((~(arr_10 [i_3])))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((unsigned int) arr_13 [i_2 + 2] [(unsigned char)14] [i_2 - 1]));
                    var_21 = ((/* implicit */short) ((int) arr_9 [i_2 + 1] [i_6]));
                    var_22 &= ((/* implicit */unsigned int) ((unsigned long long int) arr_9 [i_2 + 2] [i_6]));
                }
            } 
        } 
    }
}
