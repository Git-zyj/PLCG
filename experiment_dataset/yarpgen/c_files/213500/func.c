/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213500
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_10 = ((/* implicit */signed char) (_Bool)0);
        var_11 |= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_3)))));
        var_12 = ((/* implicit */unsigned short) (~(3099695410U)));
    }
    var_13 *= ((/* implicit */signed char) var_3);
    /* LoopSeq 4 */
    for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_14 |= ((/* implicit */signed char) var_8);
            arr_8 [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (((/* implicit */long long int) 3099695388U)) : (arr_4 [i_1] [i_2]))));
        }
        for (int i_3 = 1; i_3 < 12; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        {
                            arr_19 [i_6] [i_5] [(signed char)9] [i_1] = ((/* implicit */int) var_8);
                            var_15 = ((/* implicit */signed char) var_1);
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */long long int) ((unsigned long long int) ((1841188652U) == (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_3 [(_Bool)1])))))));
            arr_20 [i_1] [i_1] = ((/* implicit */unsigned int) ((((unsigned long long int) (~(((/* implicit */int) (signed char)117))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_17 [8LL] [i_1] [9U] [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [(signed char)9] [i_3])))))))));
        }
        arr_21 [8ULL] = ((/* implicit */int) (((-(((18446744073709551615ULL) * (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1]))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1]))))))));
        arr_22 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_1])), (-6251758675793805855LL))))));
    }
    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 4) 
    {
        var_17 = ((/* implicit */long long int) 2921785802U);
        var_18 = (signed char)-118;
        var_19 = ((/* implicit */long long int) max(((signed char)-1), ((signed char)123)));
    }
    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 13; i_9 += 1) 
        {
            for (long long int i_10 = 0; i_10 < 13; i_10 += 4) 
            {
                {
                    var_20 ^= (~((~(arr_24 [i_8]))));
                    var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) var_7)) / (((((/* implicit */unsigned int) (-(var_7)))) * (arr_10 [(signed char)12])))));
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) arr_28 [i_8] [i_8]))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_28 [i_8] [i_8])) : (((/* implicit */int) arr_28 [i_8] [i_8]))))));
    }
    for (short i_11 = 0; i_11 < 21; i_11 += 3) 
    {
        var_23 = ((/* implicit */_Bool) (+((+(((/* implicit */int) (short)20350))))));
        var_24 = ((/* implicit */unsigned int) var_8);
    }
}
