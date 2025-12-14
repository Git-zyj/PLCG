/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225711
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0 + 2] = ((/* implicit */unsigned char) ((((unsigned int) ((((/* implicit */int) (unsigned short)26317)) ^ (((/* implicit */int) (unsigned short)32929))))) << ((((+(((((/* implicit */_Bool) (unsigned short)65535)) ? (7806178572892189547LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)247))))))) - (7806178572892189538LL)))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_13) % (((/* implicit */long long int) var_0))))) ? (max((var_8), (((/* implicit */long long int) var_16)))) : (var_8)))) ? (min((((7806178572892189546LL) / (var_13))), (((/* implicit */long long int) (-(((/* implicit */int) (short)-6105))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(-7806178572892189547LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 2]))) : (131071U))))));
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((arr_4 [20ULL]) ? (7806178572892189556LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 2] [i_0 - 1]))))) != (max((((/* implicit */long long int) arr_4 [10LL])), (arr_1 [i_0 + 1]))))))));
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                for (long long int i_4 = 3; i_4 < 20; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        {
                            var_20 += ((/* implicit */unsigned long long int) ((int) var_13));
                            var_21 *= ((/* implicit */long long int) ((((((/* implicit */_Bool) -297091695)) && (((/* implicit */_Bool) arr_11 [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1LL)) && (((/* implicit */_Bool) var_5)))))) : (arr_16 [i_0] [i_2] [i_4 - 1] [i_4 - 1] [i_0])));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_16 [i_2] [i_2] [i_2] [(unsigned char)5] [i_2]))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (11U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
        }
        arr_18 [i_0] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) ((var_2) | (((/* implicit */long long int) ((/* implicit */int) (short)-8218)))))) ? (((unsigned long long int) (short)-32080)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))))));
        var_23 = ((/* implicit */unsigned int) ((var_17) == (((/* implicit */unsigned long long int) max((-7806178572892189538LL), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) == (arr_16 [i_0] [i_0] [i_0 + 2] [20] [i_0])))))))));
    }
    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        var_24 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_13))))))));
        var_25 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_6] [i_6]))) : (arr_15 [i_6] [i_6] [i_6]))));
        var_26 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) % (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_6])) + (((/* implicit */int) arr_6 [i_6]))))) : (2717054646U)));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)252)) << (((((7806178572892189549LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44539))))) - (7806178572892225523LL)))));
        var_28 = ((/* implicit */unsigned char) 3639389196U);
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 12; i_8 += 4) 
        {
            for (short i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                {
                    arr_29 [i_7] [i_7] [i_8] &= ((/* implicit */unsigned char) min((((long long int) (unsigned short)55608)), (((((/* implicit */_Bool) arr_12 [i_7] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_7] [i_7]))) : (7806178572892189537LL)))));
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 12; i_11 += 1) 
                        {
                            {
                                var_29 += ((/* implicit */unsigned short) 1577912672U);
                                var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((unsigned int) (short)-32070))) ? (1782058242) : (((/* implicit */int) arr_12 [i_7] [8U])))), (((/* implicit */int) (short)-6822)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) arr_0 [i_7] [i_7]))));
    }
    var_32 -= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (short)32069)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) var_16)))));
    var_33 = ((/* implicit */int) ((((((((/* implicit */_Bool) (unsigned short)35648)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40507))) : (var_2))) / (var_8))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
}
