/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21993
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
    for (signed char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        var_12 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (signed char)2)))));
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            var_13 = ((/* implicit */unsigned char) arr_4 [i_0]);
            /* LoopSeq 2 */
            for (int i_2 = 2; i_2 < 17; i_2 += 1) /* same iter space */
            {
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((var_6) << (((((/* implicit */int) (unsigned char)204)) - (144))))))));
                var_15 = ((/* implicit */unsigned short) (((+(var_11))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
                var_16 = ((/* implicit */signed char) ((((long long int) 391477163395724960LL)) != (((/* implicit */long long int) (+(((/* implicit */int) var_9)))))));
            }
            for (int i_3 = 2; i_3 < 17; i_3 += 1) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned short) (+((+(arr_1 [i_0])))));
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 17; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((short) arr_3 [i_5])))));
                            var_19 ^= ((/* implicit */unsigned short) arr_4 [i_0]);
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))) * (((((/* implicit */long long int) ((/* implicit */int) (short)-20410))) / (var_8)))));
                        }
                    } 
                } 
            }
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (~(((((/* implicit */_Bool) var_10)) ? (arr_10 [i_0 - 2] [i_0 - 2] [i_0 + 1]) : (((/* implicit */unsigned int) -1769154928)))))))));
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [(unsigned char)8] [i_0] [i_1] [i_1 - 2] [i_0])) ? (((/* implicit */int) (signed char)-24)) : (var_1)));
        }
        var_23 = ((/* implicit */signed char) ((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (signed char)28))))))));
        arr_17 [(signed char)13] = ((/* implicit */unsigned char) ((var_1) / (((/* implicit */int) arr_13 [i_0] [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 1] [(unsigned char)8]))));
    }
    var_24 = ((((/* implicit */_Bool) (signed char)-118)) ? (((var_10) & (121584675))) : ((~(var_5))));
}
