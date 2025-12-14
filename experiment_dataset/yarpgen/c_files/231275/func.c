/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231275
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [3ULL] [i_0 - 2]))) : (((-8014207446260927090LL) * (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
        var_17 &= ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)0)))))));
        var_18 = ((/* implicit */unsigned short) (_Bool)1);
    }
    /* LoopSeq 2 */
    for (unsigned char i_1 = 1; i_1 < 16; i_1 += 2) 
    {
        arr_8 [(_Bool)1] &= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)15)) + (min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)142))))), (((((/* implicit */int) (unsigned short)65535)) >> (((3796254822U) - (3796254806U)))))))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) ((unsigned short) arr_6 [i_1] [i_1]))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_1])))));
        /* LoopNest 3 */
        for (signed char i_2 = 3; i_2 < 17; i_2 += 2) 
        {
            for (short i_3 = 2; i_3 < 16; i_3 += 2) 
            {
                for (unsigned int i_4 = 2; i_4 < 16; i_4 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) var_15);
                        var_21 = ((unsigned long long int) ((((((/* implicit */int) arr_5 [i_3])) != (-563168357))) ? (max((arr_4 [i_1] [(signed char)1]), (var_14))) : (((8776496944253973602LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 - 1] [i_2 - 1])))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_5 = 2; i_5 < 16; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 18; i_6 += 4) 
        {
            for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_8 = 3; i_8 < 18; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
                        {
                            {
                                var_22 += ((/* implicit */unsigned short) ((_Bool) (_Bool)1));
                                var_23 = ((/* implicit */unsigned int) (+((+(((((/* implicit */int) arr_28 [i_5] [(signed char)6] [i_5] [i_5] [i_6] [i_5])) / (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    arr_31 [i_5] [i_5 + 3] [i_6] [i_5] = ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_6] [i_6] [i_6]))) & (arr_30 [i_5] [(unsigned short)9] [i_6] [i_7] [i_7] [i_5])))))) >= (((unsigned int) 12239438112406183555ULL)));
                    var_24 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) arr_23 [(signed char)8] [12LL] [i_6] [12LL])), (arr_30 [i_7] [i_7] [i_7] [i_7] [i_6] [i_6]))), (((/* implicit */unsigned long long int) ((short) 2147483637)))));
                }
            } 
        } 
        var_25 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) arr_2 [i_5 + 3] [i_5 - 1])) << (((arr_24 [i_5 + 1] [i_5 + 2] [4] [i_5 + 2] [(signed char)18]) - (18025761252909728929ULL))))));
        var_26 ^= ((/* implicit */unsigned char) var_3);
        var_27 += ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)3))));
    }
}
