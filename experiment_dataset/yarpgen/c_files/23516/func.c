/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23516
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        arr_2 [9U] = ((/* implicit */short) var_3);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            arr_5 [i_0 + 1] [i_0 + 1] = ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
            var_10 = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_3 [i_0] [i_0])) - (((/* implicit */int) arr_3 [i_0] [i_0]))))));
        }
        for (short i_2 = 3; i_2 < 21; i_2 += 3) 
        {
            var_11 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5))) & ((+(137438953471ULL)))));
            arr_10 [i_0 + 1] = ((/* implicit */unsigned long long int) (-((+(arr_7 [i_2])))));
            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(arr_8 [i_0] [i_2])));
        }
        for (unsigned int i_3 = 1; i_3 < 21; i_3 += 3) 
        {
            var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0 + 1])) == (((/* implicit */int) arr_0 [i_0 - 2]))))) == (((((/* implicit */int) arr_0 [i_0 + 1])) & (var_2)))));
            arr_14 [i_3] = ((/* implicit */_Bool) arr_13 [i_0 - 2] [i_0]);
        }
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        arr_17 [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_16 [i_4])) && (((/* implicit */_Bool) arr_3 [i_4] [(short)4])))) || ((!(((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4]))))));
        /* LoopSeq 2 */
        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
        {
            arr_20 [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_4] [i_4]))));
            /* LoopNest 3 */
            for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_4])) * (((/* implicit */int) var_1))));
                            arr_29 [i_4] [i_5] [i_5] [i_4] [i_7] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_19 [i_4] [2ULL] [i_4])) == (((/* implicit */int) var_3)))))) <= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_4] [i_4]))) : (arr_24 [i_4] [i_4] [i_4])))));
                            arr_30 [i_4] [i_5] [i_5] [i_5] [i_5] = (((-(arr_23 [16ULL] [i_5] [i_4]))) / (((/* implicit */unsigned long long int) arr_25 [i_4] [i_5] [i_6] [i_7] [i_8] [i_8])));
                        }
                    } 
                } 
            } 
            var_14 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 1023LL)) ? (70368744177663ULL) : (18446743936270598145ULL)))));
        }
        for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) /* same iter space */
        {
            var_15 += ((/* implicit */signed char) (+((+(14097429701484546384ULL)))));
            var_16 = ((/* implicit */short) (-(((/* implicit */int) var_4))));
        }
        arr_34 [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4]))) == (4349314372225005222ULL))))));
    }
    /* vectorizable */
    for (long long int i_10 = 0; i_10 < 25; i_10 += 2) 
    {
        arr_38 [i_10] &= ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
        var_17 = ((unsigned short) var_6);
    }
    /* LoopNest 2 */
    for (unsigned int i_11 = 0; i_11 < 17; i_11 += 1) 
    {
        for (short i_12 = 1; i_12 < 15; i_12 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_12 + 2])) ? (((/* implicit */int) min((var_8), (((/* implicit */signed char) ((((/* implicit */int) arr_33 [i_11])) == (((/* implicit */int) var_4)))))))) : (((/* implicit */int) ((((/* implicit */int) ((arr_13 [i_12] [i_11]) < (var_6)))) <= ((+(((/* implicit */int) var_8)))))))));
                var_19 |= (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (arr_3 [i_11] [13LL]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (4349314372225005236ULL))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_13 = 0; i_13 < 17; i_13 += 3) 
                {
                    var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)4095))));
                    var_21 -= ((/* implicit */unsigned long long int) arr_44 [(signed char)11] [i_12] [i_12]);
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))) == (((unsigned int) (unsigned short)26732)))))));
}
