/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191902
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(min((-6378434283472927125LL), (((/* implicit */long long int) 0U))))))) ? (min((min((var_2), (var_2))), (((/* implicit */int) max(((short)0), (((/* implicit */short) (unsigned char)0))))))) : (var_2)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 1) 
            {
                var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) | (arr_7 [i_0] [1U]))))));
                var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) -7334079180559049475LL))) ? (-7334079180559049475LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (3104433443U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))))))));
                var_13 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)30))));
            }
            var_14 = ((/* implicit */_Bool) var_8);
        }
        for (unsigned int i_3 = 2; i_3 < 18; i_3 += 3) 
        {
            arr_13 [(unsigned char)17] = (((((-(arr_9 [i_3 + 1] [i_0 + 1] [(unsigned short)17]))) + (2147483647))) >> (((max((arr_9 [i_3 + 1] [i_0 - 2] [i_0]), (arr_9 [i_3 + 1] [i_0 - 1] [12U]))) - (1609739346))));
            var_15 = ((/* implicit */unsigned short) ((_Bool) ((unsigned long long int) -1)));
        }
        for (short i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            arr_16 [i_4] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1208716716038202430LL)) ? (((/* implicit */unsigned long long int) -7334079180559049475LL)) : (16133366128994264877ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [16]))) : (max((1808243205967425672ULL), (1808243205967425672ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (min((((/* implicit */int) var_4)), (32))))))));
            var_16 += ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (arr_12 [i_0 - 1] [i_0 + 2])))) ? (max((1808243205967425672ULL), (((/* implicit */unsigned long long int) -977627456)))) : (((/* implicit */unsigned long long int) min((arr_12 [i_0 - 1] [i_0 + 1]), (var_0))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            var_17 = ((/* implicit */long long int) 4294967295U);
            var_18 = ((/* implicit */int) 8751381076218960675LL);
            arr_20 [13ULL] [13ULL] = ((/* implicit */int) (-(((4502608602441440096ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            var_19 = ((/* implicit */unsigned long long int) var_0);
        }
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_7 = 1; i_7 < 18; i_7 += 4) 
            {
                var_20 = ((/* implicit */_Bool) ((short) ((((/* implicit */int) var_9)) <= (0))));
                arr_25 [i_0 - 2] = ((/* implicit */unsigned short) (-(arr_14 [i_7 + 1] [i_7 - 1] [i_7 + 1])));
            }
            for (unsigned char i_8 = 2; i_8 < 18; i_8 += 3) 
            {
                var_21 ^= (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-104))))));
                var_22 = ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25052))) + (1808243205967425672ULL)));
            }
            var_23 = ((/* implicit */signed char) -7747360330564248667LL);
            arr_29 [(unsigned char)15] &= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)243)) ? (1808243205967425663ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) var_6)) : (1808243205967425663ULL))))));
            var_25 = ((/* implicit */unsigned int) arr_18 [0ULL] [i_6] [i_6]);
        }
    }
}
