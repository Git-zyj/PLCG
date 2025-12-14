/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39001
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
    var_14 = 10245583868678009121ULL;
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_10)) * (max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_8)) : (8201160205031542485ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))))));
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (short)-7974)) ? (((/* implicit */unsigned long long int) var_11)) : (10245583868678009121ULL))))) ? (4578520601422417117LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? ((~(((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) arr_0 [2ULL])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_7))))));
        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (arr_0 [i_0]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            arr_5 [i_0] [i_1 + 2] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_13)) : (7881299347898368LL)))));
            var_19 = ((unsigned short) arr_1 [5LL]);
        }
        /* LoopNest 3 */
        for (unsigned int i_2 = 2; i_2 < 13; i_2 += 4) 
        {
            for (unsigned int i_3 = 1; i_3 < 11; i_3 += 2) 
            {
                for (signed char i_4 = 2; i_4 < 13; i_4 += 1) 
                {
                    {
                        arr_15 [i_4] [i_4] [(_Bool)1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_2 [i_4 - 2] [i_3 - 1] [i_2 + 1]))));
                        var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_4 + 1] [i_4] [i_3 + 2]))));
                    }
                } 
            } 
        } 
        arr_16 [i_0] = ((/* implicit */unsigned short) (~(((var_11) | (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_6 = 2; i_6 < 11; i_6 += 3) 
        {
            var_21 = var_4;
            var_22 = ((/* implicit */unsigned short) ((unsigned char) max((arr_7 [i_5] [i_6 + 1] [i_6 + 1]), (((/* implicit */unsigned long long int) (~(32768U)))))));
            arr_21 [i_6] [(unsigned short)6] = ((/* implicit */short) ((((/* implicit */long long int) var_3)) >= (arr_19 [10ULL] [i_5] [i_5])));
        }
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) min((var_4), (((/* implicit */unsigned short) arr_18 [i_5] [i_5])))))) ^ (arr_20 [i_5] [i_5])));
    }
    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned short) (~(arr_0 [i_7])));
        /* LoopSeq 2 */
        for (short i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            arr_27 [i_7] [i_8] = ((/* implicit */_Bool) max((((/* implicit */long long int) arr_14 [i_7] [i_8] [i_8] [(signed char)4])), ((-(((((/* implicit */long long int) 1942304443U)) & (var_8)))))));
            arr_28 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [(signed char)6] [(signed char)6] [(signed char)6])) ? (((/* implicit */int) min(((!(((/* implicit */_Bool) var_0)))), ((!(((/* implicit */_Bool) var_9))))))) : ((-(((/* implicit */int) arr_9 [(unsigned char)4] [(unsigned char)4] [i_7] [(_Bool)1]))))));
            arr_29 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) * (((/* implicit */int) arr_12 [4LL] [i_7] [i_7] [i_8] [4LL] [i_8]))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_33 [i_9] [i_9] [i_9] = min((max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)7))))), ((~(((/* implicit */int) var_12)))))), (2147483647));
            var_25 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1)));
        }
        var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) min((8201160205031542485ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)13)) | (((/* implicit */int) var_12))))))))));
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))) == (((/* implicit */int) ((_Bool) arr_13 [i_7])))))) : (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) arr_14 [i_7] [(signed char)0] [i_7] [i_7]))))))));
    }
}
