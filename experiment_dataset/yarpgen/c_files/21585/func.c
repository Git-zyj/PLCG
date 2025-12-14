/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21585
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
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)90))) > (-1LL))))));
    var_20 &= ((/* implicit */unsigned char) max((-12LL), (((/* implicit */long long int) (~(var_18))))));
    var_21 = ((/* implicit */unsigned char) (short)-3633);
    var_22 = ((/* implicit */unsigned char) var_16);
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_1 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) arr_2 [i_0] [i_1] [(signed char)4]);
                    arr_7 [i_0] = ((/* implicit */unsigned char) var_9);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_3 = 1; i_3 < 10; i_3 += 3) 
        {
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) min(((~(max((3785129221U), (((/* implicit */unsigned int) arr_8 [1LL] [i_3])))))), (((/* implicit */unsigned int) (+(((((((/* implicit */int) arr_1 [(unsigned char)3])) + (2147483647))) >> (((((/* implicit */int) arr_8 [(signed char)8] [(signed char)8])) - (37)))))))))))));
            var_25 *= ((/* implicit */unsigned char) (((!(((arr_5 [i_0 + 2] [0LL] [(signed char)10]) != (var_0))))) ? (arr_3 [i_0] [(signed char)6] [i_0]) : ((~(((/* implicit */int) (signed char)90))))));
            var_26 ^= (-(((/* implicit */int) ((short) -520865408))));
            /* LoopSeq 2 */
            for (long long int i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
            {
                var_27 += min((((/* implicit */int) arr_2 [i_0] [i_0] [8])), (((((/* implicit */_Bool) arr_3 [i_3 + 1] [i_4] [i_3 + 1])) ? ((~(((/* implicit */int) arr_0 [i_3 + 1] [i_3 - 1])))) : (arr_3 [i_0 - 2] [i_4] [i_0 - 1]))));
                arr_13 [i_3] [i_3 + 1] [i_0] [i_3] = ((/* implicit */signed char) ((unsigned char) ((signed char) var_8)));
                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_3)))))));
                var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_0 [(short)1] [3U]), (((/* implicit */short) ((signed char) arr_4 [i_0] [i_4] [(short)4] [i_0])))))) ? (arr_5 [i_0 + 2] [i_3 + 1] [i_4]) : (((/* implicit */int) min((arr_0 [i_3 + 1] [i_0 - 1]), (((/* implicit */short) max((arr_2 [i_3] [i_3] [i_4]), (arr_2 [i_0 + 2] [i_0] [5]))))))))))));
                arr_14 [i_4] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (+(-520865408))))) - (((/* implicit */int) (((+(arr_3 [(signed char)9] [i_0] [i_4]))) != (((((/* implicit */_Bool) -1287498800)) ? (var_18) : (((/* implicit */int) arr_4 [0] [i_0] [i_4] [i_4])))))))));
            }
            for (long long int i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
            {
                arr_18 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((int) (~(var_15))))) == (var_13)));
                var_30 = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_3 + 1]))))), (((arr_3 [i_3] [i_0] [i_3 + 1]) % (arr_3 [9U] [i_0] [i_3 + 1])))));
                var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((int) -5218111465178291483LL))), (max((-22LL), (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_3 + 1] [2LL]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -44LL)) ? (var_12) : (((/* implicit */int) (signed char)53))))) ? (((((/* implicit */int) arr_1 [(unsigned char)7])) % (arr_3 [0LL] [i_5] [6LL]))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_5] [i_5] [i_5] [i_0 - 1])) <= (arr_5 [i_0] [i_3] [i_5])))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0 - 1] [i_0] [i_0 - 1]))) <= ((~(var_17)))))))))));
                var_32 -= ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) min((520865408), (((/* implicit */int) (short)0))))) ? (((unsigned int) arr_17 [i_0] [i_3] [i_3] [i_5])) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_5] [i_0])))))))));
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 10; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        arr_27 [i_0] [i_6] [i_7] [i_8] = (short)-8064;
                        var_33 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((-1LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-6)))))) ? (((((/* implicit */_Bool) arr_26 [i_0] [i_0 - 2] [i_7] [i_8] [8U])) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)33))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        for (signed char i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            {
                                var_34 *= ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-87))));
                                arr_36 [i_0] [i_9] [i_9] [i_7] [2U] [i_6] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((((((/* implicit */int) arr_26 [1U] [i_6] [10] [i_9] [i_10])) - (((/* implicit */int) arr_2 [i_6] [i_7] [i_9])))) != (arr_20 [8U] [8U]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
