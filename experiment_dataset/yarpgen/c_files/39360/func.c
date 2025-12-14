/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39360
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
    var_10 |= ((/* implicit */long long int) ((((/* implicit */_Bool) 36028794871480320LL)) || ((_Bool)1)));
    var_11 = ((/* implicit */unsigned long long int) var_2);
    var_12 = ((((/* implicit */int) var_0)) >= (var_2));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        var_13 -= ((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 2]);
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? ((~(var_2))) : (((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) (unsigned char)15))))))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (max((((/* implicit */int) (signed char)-126)), (var_7)))))));
        var_14 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((var_9) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) ^ (18446744073709551615ULL))) : (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)0))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_6)))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_0 [i_2] [i_1])) - (((/* implicit */int) arr_0 [i_0] [i_2])))) & (((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0]))))) == ((+(arr_5 [i_1] [i_1]))))))));
                    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126))) : (var_4)))) ? (((((/* implicit */int) var_6)) / (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned char) 0ULL))))))));
                }
            } 
        } 
        var_17 ^= ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (126976ULL))) << (((18446744073709551592ULL) - (18446744073709551571ULL))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 3])))));
    }
    for (short i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        arr_12 [i_3] = ((/* implicit */signed char) var_3);
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) 4294967295U))));
        var_19 = arr_9 [i_3];
    }
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        var_20 ^= ((/* implicit */_Bool) var_7);
        var_21 += ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)24)) ? (((/* implicit */int) (unsigned char)249)) : (2147483647))) + (((/* implicit */int) ((unsigned char) var_4)))));
        var_22 -= 18446744073709551592ULL;
    }
    /* LoopNest 2 */
    for (long long int i_5 = 1; i_5 < 14; i_5 += 4) 
    {
        for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            {
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) var_9)) : (402653184))) : (((/* implicit */int) arr_14 [i_5 + 1]))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_11 [i_5])))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned long long int) arr_18 [i_6] [i_5]);
                    arr_21 [i_5] [i_6] [i_5] [i_7] = ((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) arr_17 [i_5 + 1])) : (((/* implicit */int) (_Bool)1))));
                    arr_22 [i_5] [i_6] [i_7] = ((/* implicit */_Bool) (unsigned short)65535);
                    arr_23 [i_5] = ((/* implicit */long long int) arr_18 [i_5] [i_5 + 1]);
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    var_25 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_5 + 1])) ^ ((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_11 [i_5]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((min((((/* implicit */unsigned long long int) arr_11 [i_8])), (arr_9 [i_5]))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8)))))))));
                    arr_27 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) var_8);
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((((/* implicit */_Bool) -402653185)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)8191)) / (((/* implicit */int) var_6))))) ? (((arr_15 [i_5]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)39))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_5]))))))) : (((/* implicit */unsigned long long int) ((0LL) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (var_5))))))))))));
                }
                for (signed char i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    var_27 ^= ((/* implicit */long long int) (-(max((arr_15 [i_5 + 1]), (((/* implicit */unsigned long long int) arr_19 [i_5] [i_5 + 1] [i_5 + 1]))))));
                    var_28 += max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_20 [i_5 + 1] [i_6])), (var_0)))), ((((!(arr_16 [i_5]))) ? (max((((/* implicit */unsigned long long int) var_5)), (arr_15 [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_24 [i_5] [i_6] [i_9] [i_6]), (((/* implicit */unsigned char) arr_14 [i_5])))))))));
                }
                /* vectorizable */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_29 = ((/* implicit */long long int) var_9);
                    arr_33 [i_5] = ((/* implicit */unsigned short) arr_14 [i_5 + 1]);
                    var_30 = ((/* implicit */long long int) var_8);
                }
            }
        } 
    } 
}
