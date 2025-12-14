/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22442
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) var_13)), (1696171484)))) - (((((0ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_1), (var_0)))))))));
    var_20 = ((/* implicit */unsigned char) 3933197984U);
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(1400030583)))) ? (((int) (unsigned char)131)) : (((((/* implicit */int) var_3)) + (((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_14)))))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-32))) != (var_11))) ? (max((478285007U), (((/* implicit */unsigned int) (unsigned char)131)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) min((var_22), (((signed char) max((((/* implicit */unsigned char) (signed char)(-127 - 1))), ((unsigned char)131))))));
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) min((arr_2 [i_0]), (((/* implicit */unsigned int) arr_1 [i_0])))))));
        var_24 -= ((/* implicit */signed char) min((-828906167), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (min((arr_2 [i_0]), (arr_2 [i_0]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-79)))))));
        var_26 -= ((/* implicit */signed char) min((((/* implicit */unsigned short) ((1383661113089719375LL) > (((/* implicit */long long int) 828906166))))), (max((arr_1 [i_0]), (arr_1 [i_0])))));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        arr_6 [11U] |= ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_5 [i_1]))))) ? ((~(0ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_1])))))))));
        var_27 = ((/* implicit */signed char) arr_3 [8LL] [i_1]);
        /* LoopSeq 4 */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                var_28 = ((/* implicit */_Bool) max((var_28), (arr_4 [i_1])));
                var_29 = ((/* implicit */int) (((!(((/* implicit */_Bool) 0ULL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)48))))) : (((long long int) arr_12 [i_2]))));
                var_30 -= ((/* implicit */unsigned long long int) max((0U), (((/* implicit */unsigned int) var_15))));
            }
            arr_13 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) max((((arr_10 [i_1] [i_2] [i_2]) >> (((arr_10 [8LL] [i_2] [i_2]) - (1608032793U))))), (((/* implicit */unsigned int) min((arr_1 [i_1]), (arr_1 [i_1]))))));
            arr_14 [i_2] [i_2] = ((/* implicit */unsigned short) ((((arr_8 [i_1] [i_2]) ? (arr_11 [i_2] [i_2] [8ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))))) < (((/* implicit */unsigned long long int) ((arr_12 [i_1]) ? (((/* implicit */int) max(((unsigned char)250), (((/* implicit */unsigned char) (signed char)4))))) : (((/* implicit */int) (unsigned char)0)))))));
        }
        for (unsigned char i_4 = 2; i_4 < 15; i_4 += 3) 
        {
            arr_17 [8U] [i_4] = ((/* implicit */unsigned int) 6170407054892372873LL);
            arr_18 [13LL] [i_1] [i_1] = (!(((/* implicit */_Bool) ((((8362038240009033168ULL) >> (((3800193573U) - (3800193572U))))) | (arr_11 [i_1] [(signed char)12] [i_4 - 2])))));
        }
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            arr_22 [14LL] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_5]))));
            arr_23 [15U] [i_1] [i_1] = ((((/* implicit */_Bool) ((arr_9 [i_1] [i_5]) << (((arr_20 [i_1] [i_5] [i_1]) - (3671634428U)))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1] [i_1] [(signed char)3]))) | (((long long int) arr_7 [i_1] [i_1] [i_5])))) : (((/* implicit */long long int) ((((/* implicit */int) min((var_3), (((/* implicit */signed char) arr_8 [i_1] [i_1]))))) & (((/* implicit */int) var_0))))));
        }
        for (signed char i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_3 [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1])))))) : (((unsigned int) arr_3 [i_1] [i_6]))));
            arr_26 [i_1] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_8 [(signed char)8] [i_6])) : ((~(max((((/* implicit */int) arr_25 [i_1] [i_1])), (1147851401)))))));
            var_32 = 1ULL;
        }
        arr_27 [i_1] [i_1] = ((/* implicit */int) (~(min((((arr_21 [i_1]) & (arr_11 [i_1] [i_1] [i_1]))), (arr_16 [i_1] [i_1] [(signed char)10])))));
        arr_28 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_1] [i_1])) ? (arr_21 [2ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(arr_3 [(unsigned char)0] [10LL]))) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65531)))))))));
    }
}
