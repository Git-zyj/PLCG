/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241284
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] |= ((/* implicit */int) -9223372036854775805LL);
                var_20 ^= ((/* implicit */unsigned long long int) (unsigned char)243);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)39))))) ? (((arr_3 [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_5))) : (min((arr_0 [i_2]), (((/* implicit */unsigned long long int) 3571590173U))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_4)))) ? ((((_Bool)1) ? (((/* implicit */int) var_12)) : (2147483621))) : (((/* implicit */int) var_15))))));
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) var_17))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_10)))) : ((~(2209994570U)))))))))));
        var_22 -= (((~(max((324314120U), (((/* implicit */unsigned int) (unsigned char)243)))))) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-20027))));
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned short i_4 = 1; i_4 < 13; i_4 += 1) 
            {
                for (unsigned char i_5 = 2; i_5 < 15; i_5 += 4) 
                {
                    {
                        var_23 *= ((/* implicit */unsigned int) var_13);
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            arr_18 [(signed char)7] [(signed char)7] [(short)7] [i_2] [i_6] = ((/* implicit */unsigned long long int) ((int) (+(((((/* implicit */_Bool) arr_8 [i_2] [(short)8] [(short)8])) ? (9223372036854775785LL) : (((/* implicit */long long int) 1097140466)))))));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)14)) && (((/* implicit */_Bool) 2775932498U))));
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) min((((((var_18) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_11))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_15)), ((unsigned short)0))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775781LL)) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_2] [i_6] [i_4])) ^ (((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) 8387247243218282523LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(signed char)2] [i_6] [i_5]))) : (var_16)))))))))));
                        }
                    }
                } 
            } 
        } 
        arr_19 [i_2] [i_2] = ((/* implicit */short) ((signed char) max((2169948971U), (((/* implicit */unsigned int) (_Bool)1)))));
    }
    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned long long int) (signed char)-30);
        var_27 = ((/* implicit */long long int) var_1);
        var_28 |= ((((((/* implicit */_Bool) arr_15 [15ULL] [i_7] [i_7] [i_7])) ? (arr_15 [i_7] [i_7] [i_7] [(_Bool)1]) : (arr_0 [i_7]))) & (((/* implicit */unsigned long long int) ((unsigned int) arr_15 [i_7] [i_7] [i_7] [10LL]))));
    }
}
