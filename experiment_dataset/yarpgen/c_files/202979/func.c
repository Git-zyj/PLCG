/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202979
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
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) var_12));
        var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_0]))));
        arr_5 [(unsigned short)7] = ((((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)3659)) ? (((/* implicit */int) arr_0 [i_0])) : (var_8))) >> (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))))) == (var_12));
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) max((arr_6 [i_1]), (arr_6 [i_1])))) ? (((unsigned int) arr_6 [i_1])) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_6 [i_1]), (arr_6 [i_1]))))))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1] [i_1]))))) || (((/* implicit */_Bool) (unsigned char)243))));
    }
    /* LoopSeq 2 */
    for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                {
                    var_21 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_4] [i_4] [i_3] [(signed char)4]))));
                    var_22 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_8)) ^ (1776124916U)))) ? (((/* implicit */int) arr_12 [i_4] [i_3] [i_2])) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_2))))))) * (((((/* implicit */_Bool) arr_12 [i_2] [12LL] [i_4])) ? (((/* implicit */int) arr_9 [i_4] [i_2])) : (((var_8) | (176010200)))))));
                }
            } 
        } 
        arr_14 [i_2] = ((/* implicit */unsigned int) (unsigned short)57094);
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) min((arr_8 [i_2]), (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9213))) : (11986800602850428130ULL)))))))));
    }
    for (unsigned int i_5 = 1; i_5 < 19; i_5 += 1) 
    {
        var_24 = ((/* implicit */int) ((((/* implicit */int) arr_13 [i_5] [i_5] [(unsigned char)4] [i_5 + 1])) >= ((((+(((/* implicit */int) (unsigned char)86)))) * (((((/* implicit */_Bool) 1150627190U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))))));
        var_25 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)46), (var_7)))) ? (((var_16) << (((((/* implicit */int) arr_16 [i_5] [i_5])) - (35))))) : (((/* implicit */unsigned int) arr_11 [i_5 + 1]))))) ? (((((((/* implicit */int) (signed char)95)) == (((/* implicit */int) (unsigned char)100)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) arr_16 [i_5] [i_5])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_5] [i_5 - 1] [i_5 + 1])) || (((/* implicit */_Bool) 1776124908U))))))) : ((((~(((/* implicit */int) var_1)))) | (((/* implicit */int) var_17))))));
        arr_19 [i_5] [i_5 + 1] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) min((var_13), (((/* implicit */int) (unsigned short)13791))))), (max((((/* implicit */unsigned int) (unsigned char)46)), (4294967284U))))))));
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) max(((!(((/* implicit */_Bool) (signed char)123)))), (((((/* implicit */int) arr_16 [i_5] [i_5 + 1])) <= (((/* implicit */int) arr_18 [3LL]))))))) - (((/* implicit */int) arr_12 [i_5 - 1] [i_5] [i_5 + 2]))));
    }
    var_27 = ((/* implicit */int) max((var_27), (var_10)));
    var_28 = ((/* implicit */short) var_9);
}
