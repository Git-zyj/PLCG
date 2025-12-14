/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202077
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
    var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-1))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_1])) <= ((~(((/* implicit */int) (signed char)79))))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                var_15 = ((/* implicit */signed char) (((-(arr_4 [i_1]))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
                arr_9 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) (+(arr_5 [i_0 - 2])));
            }
            var_16 |= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [i_0] [i_0 + 3] [i_0 + 1] [i_0 + 1]))));
        }
        /* vectorizable */
        for (signed char i_3 = 3; i_3 < 9; i_3 += 3) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned int) ((long long int) -521190257));
            var_18 &= ((/* implicit */signed char) (+((~(((/* implicit */int) (signed char)0))))));
            var_19 = ((/* implicit */int) ((signed char) var_5));
        }
        for (signed char i_4 = 3; i_4 < 9; i_4 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(1048064U)))))))));
            var_21 *= ((/* implicit */signed char) (-(max((((/* implicit */int) arr_8 [i_0] [i_0] [i_4 + 1] [i_0])), ((+(((/* implicit */int) (unsigned char)237))))))));
        }
        arr_14 [(unsigned short)3] [(unsigned short)3] = ((/* implicit */unsigned int) arr_2 [i_0]);
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) % (var_7)))) ? (max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)84)) | (((/* implicit */int) arr_6 [i_0 + 1] [i_0]))))), (min((var_6), (((/* implicit */unsigned int) (unsigned char)248)))))) : (((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_6 [i_0] [i_0 + 1])))))))));
        var_23 = ((/* implicit */signed char) arr_10 [i_0 + 1] [i_0 + 3] [i_0]);
    }
    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */long long int) ((int) ((signed char) var_7)));
        var_25 = (signed char)2;
    }
    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
    {
        arr_20 [i_6] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (9223372036854775807LL) : ((-9223372036854775807LL - 1LL))))) || (((/* implicit */_Bool) arr_19 [i_6])))));
        var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) max((((/* implicit */int) arr_18 [i_6] [i_6])), (var_2)))) : (((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */long long int) arr_17 [5ULL])))))))));
        /* LoopSeq 1 */
        for (unsigned int i_7 = 1; i_7 < 11; i_7 += 2) 
        {
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(arr_17 [i_7])))) ^ ((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_8)) : (arr_19 [i_7])))))));
            arr_24 [i_6] [i_7] = ((/* implicit */unsigned int) var_0);
            arr_25 [i_6] = ((/* implicit */unsigned int) var_11);
        }
    }
    var_28 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) (unsigned char)18))))))) ? (((((/* implicit */_Bool) var_8)) ? (1934926567U) : (var_6))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (var_12)))))));
    var_29 = (~(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (unsigned char)18)))))));
    var_30 = ((((/* implicit */_Bool) min((((/* implicit */long long int) (-(4293919231U)))), (((((/* implicit */_Bool) var_11)) ? (var_1) : ((-9223372036854775807LL - 1LL))))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_10)) : (((var_7) ^ (((/* implicit */unsigned int) var_12)))))) : (((((/* implicit */_Bool) -1685822536)) ? (((/* implicit */unsigned int) (-(var_0)))) : (((((/* implicit */_Bool) var_3)) ? (4294967295U) : (1703849008U))))));
}
