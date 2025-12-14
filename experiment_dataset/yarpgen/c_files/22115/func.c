/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22115
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
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_3)), (-838584949877113722LL)));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((-1), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((var_1) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)249)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) var_5);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        var_20 *= ((/* implicit */signed char) (short)-11747);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 2) 
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((arr_3 [i_0 + 1]) << (((((/* implicit */int) arr_2 [i_0 + 3] [i_0 + 1] [i_4 - 2])) - (7153)))));
                            arr_13 [i_0] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */int) (unsigned short)7680)) & (((/* implicit */int) (_Bool)1))))));
                        }
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (2147483647) : (((((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_3])) + (((/* implicit */int) (unsigned char)178))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        arr_17 [10ULL] [10ULL] = ((/* implicit */unsigned short) (+(-11)));
        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)11744))))) ? (((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) : (((((/* implicit */int) arr_4 [i_5] [i_5])) * (((/* implicit */int) var_12))))))) ? (((/* implicit */int) arr_14 [i_5])) : (((/* implicit */int) (short)9)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            var_23 ^= ((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_5] [i_5]))));
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) 17)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -8))));
            /* LoopNest 3 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned short i_8 = 2; i_8 < 12; i_8 += 2) 
                {
                    for (long long int i_9 = 3; i_9 < 9; i_9 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (~(((/* implicit */int) var_5)))))));
                            arr_29 [i_7] [i_5] [i_6] [i_7] [i_8] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) (_Bool)1))));
                            arr_30 [i_8] [(unsigned short)10] [i_8 - 2] [i_8] [i_7] [(unsigned short)10] [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_11 [i_8 - 1] [i_8 + 1] [1ULL] [i_8 - 2] [i_9 + 4]))));
                        }
                    } 
                } 
            } 
        }
        var_26 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4334391338002623628ULL))), (arr_21 [i_5] [i_5] [i_5] [i_5])));
    }
}
