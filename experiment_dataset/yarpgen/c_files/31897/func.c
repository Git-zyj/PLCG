/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31897
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [3ULL] [i_1] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) / (arr_6 [i_0] [i_1] [i_0])))) ? ((-(5089223536625033318ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)0)), (var_4))))))), (((/* implicit */unsigned long long int) min((arr_0 [i_1] [i_1]), (((/* implicit */unsigned int) ((unsigned char) var_9))))))));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((long long int) arr_5 [i_0] [i_1])) >= (max((arr_7 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) (signed char)90)))))))) <= (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])) ? (min((((/* implicit */unsigned int) (unsigned char)0)), (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) >= (((/* implicit */int) (_Bool)1))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((arr_7 [i_3] [i_3] [i_3] [i_3]) & (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_3]))))) >= (((/* implicit */long long int) ((/* implicit */int) var_4)))));
        var_17 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-73)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3])))))))) | ((~(((unsigned long long int) arr_5 [i_3] [i_3]))))));
    }
    for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        var_18 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -1846190044)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)72))) : (4294967295U)))) ? (((((/* implicit */_Bool) (signed char)-90)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (-5225186033497446174LL))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)159), (((/* implicit */unsigned char) arr_2 [i_4]))))))))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_8 [i_4]))) ? (((((/* implicit */_Bool) arr_8 [i_4])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_7)), (arr_0 [i_4] [i_4]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) ((((arr_15 [i_5] [i_5]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(short)17]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_14 [i_5]))))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_5])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5])))));
        var_22 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) arr_14 [i_5])))));
    }
}
