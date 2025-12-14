/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211520
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
    var_15 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_1)))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 *= ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_2 [i_0]))) % (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0])))))));
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */unsigned int) arr_1 [i_0]))))) ? ((-(((/* implicit */int) arr_1 [(unsigned char)5])))) : ((-(((/* implicit */int) var_11))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) -1807990898728775734LL)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))))));
        arr_3 [i_0] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned long long int) (+(arr_2 [i_0])))) : (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [(short)8])))));
        var_18 += max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)195))) + (arr_2 [(_Bool)1])))))), (var_1));
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_11))));
            var_20 &= ((/* implicit */unsigned char) arr_6 [i_2]);
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) arr_7 [i_1] [i_2])), (18098369079562134616ULL))) ^ (((/* implicit */unsigned long long int) arr_7 [i_2] [i_1])))))));
            var_22 ^= ((((/* implicit */_Bool) (+((-(arr_4 [i_1])))))) ? (((((/* implicit */_Bool) arr_8 [(short)1] [i_2])) ? (arr_8 [i_1] [i_1]) : (arr_8 [i_2] [(short)2]))) : (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) 18446744073709551611ULL)) ? (arr_8 [i_1] [0]) : (((/* implicit */int) (_Bool)1)))) : (arr_8 [i_1] [i_1]))));
        }
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) /* same iter space */
        {
            var_23 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_6 [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3]))) : (arr_9 [i_1] [i_1])))) ? (((/* implicit */int) (unsigned char)0)) : (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */int) arr_10 [i_1])) : (var_7))) : (((var_6) | (((/* implicit */int) arr_10 [15LL]))))))));
            var_24 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_11 [i_1] [i_1])), (min(((+(arr_7 [i_1] [i_3]))), (((((/* implicit */_Bool) (short)-998)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26347)))))))));
            arr_12 [i_1] &= (+((~(arr_8 [i_1] [i_3]))));
            arr_13 [i_3] &= ((/* implicit */unsigned short) var_5);
        }
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
        {
            arr_16 [i_1] [i_4] = ((/* implicit */long long int) min((((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_7 [i_1] [i_4]) : (((/* implicit */unsigned int) arr_8 [i_1] [i_1]))))), (arr_14 [(_Bool)1])));
            arr_17 [i_1] [21U] = ((/* implicit */unsigned int) ((unsigned long long int) (_Bool)1));
            arr_18 [i_1] [(unsigned char)3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)18616)) ? (((((/* implicit */long long int) max((var_12), (((/* implicit */unsigned int) (unsigned char)51))))) & (arr_9 [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1])))));
            arr_19 [i_1] [i_4] = ((/* implicit */unsigned char) var_9);
        }
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((arr_20 [i_1]) >= (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_4 [i_5]))))))));
            arr_23 [i_1] [i_1] = ((/* implicit */long long int) arr_15 [i_1]);
        }
        var_26 = ((unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_1]))))) / (arr_4 [i_1])));
    }
    for (short i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        arr_26 [i_6] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_11), ((unsigned short)65531)))) ? (arr_20 [11]) : (((/* implicit */long long int) ((arr_21 [i_6] [(signed char)15] [i_6]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_25 [i_6]))))))))));
        var_27 = ((/* implicit */unsigned long long int) arr_8 [i_6] [i_6]);
        arr_27 [i_6] = ((/* implicit */unsigned short) max((min((arr_25 [i_6]), (((/* implicit */short) arr_15 [i_6])))), (((/* implicit */short) arr_21 [i_6] [i_6] [i_6]))));
        arr_28 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_6] [i_6])) ? (arr_14 [i_6]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_6] [3U])) ? (((/* implicit */long long int) 1838916929)) : (min((-9223372036854775797LL), (((/* implicit */long long int) 1962095882U)))))))));
        arr_29 [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_11 [i_6] [i_6]);
    }
    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)177)) ? (((unsigned int) var_7)) : (((/* implicit */unsigned int) min((var_6), (((/* implicit */int) min(((unsigned char)233), (((/* implicit */unsigned char) (signed char)70)))))))))))));
}
