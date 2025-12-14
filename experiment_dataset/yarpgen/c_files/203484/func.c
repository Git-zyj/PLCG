/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203484
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
    var_18 = var_8;
    var_19 -= ((/* implicit */unsigned char) 2147483647);
    var_20 = ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) - (var_16)))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) arr_2 [i_0]);
        arr_4 [i_0] = ((/* implicit */long long int) ((_Bool) ((((((/* implicit */int) arr_3 [i_0])) + (2147483647))) >> (((max((var_13), (((/* implicit */int) (signed char)(-127 - 1))))) - (259466825))))));
        var_22 += ((/* implicit */short) max((((/* implicit */int) (signed char)(-127 - 1))), (max((((var_12) | (((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) arr_1 [(unsigned char)16] [i_0]))))));
        var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (((!(var_15))) ? (((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) max((arr_3 [i_0]), (arr_3 [i_0])))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */int) max((arr_5 [i_0]), (arr_5 [i_0])))), (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_0 [i_1] [i_0]))))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_25 = ((/* implicit */_Bool) ((unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_8 [i_0] [i_0] [6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))), (min((arr_9 [(_Bool)1] [i_2]), (((/* implicit */long long int) 2147483647)))))));
                var_26 = ((/* implicit */int) arr_8 [i_0] [(unsigned char)0] [i_2]);
                arr_10 [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) arr_3 [i_0]))))) ? (4294967270U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (var_13) : (-345133729))))));
            }
            for (long long int i_3 = 2; i_3 < 14; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        {
                            var_27 &= ((/* implicit */unsigned long long int) max((((long long int) arr_16 [i_1] [i_3] [i_3] [i_3 + 3] [i_3])), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [(unsigned char)15] [(unsigned char)15] [14LL])) ? (var_4) : (8388604U))))));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_3 + 3] [i_3 + 1] [i_3 + 1])) ? (((/* implicit */int) arr_7 [i_3 + 3] [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) arr_7 [i_3 + 3] [i_3 + 1] [i_3 + 1]))));
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (arr_9 [i_3] [i_3 + 3]) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))));
                        }
                    } 
                } 
                var_30 -= ((/* implicit */unsigned char) var_10);
            }
            var_31 = ((/* implicit */signed char) ((max((((unsigned int) var_9)), (((/* implicit */unsigned int) (+(((/* implicit */int) var_14))))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (var_13))))))))));
        }
    }
    for (signed char i_6 = 2; i_6 < 15; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 16; i_8 += 3) 
            {
                {
                    arr_24 [i_8] = ((/* implicit */unsigned long long int) ((signed char) 562949953421311LL));
                    arr_25 [i_8] [i_8] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4611685743549480960LL)) ? (4294967269U) : (arr_8 [(short)2] [i_8] [i_8])))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-6620)), (var_9)))) || (((_Bool) (unsigned short)0))))) : (2147483644)));
                }
            } 
        } 
        var_32 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)65533)) / (((/* implicit */int) ((unsigned short) arr_22 [i_6 - 1] [i_6 - 1])))));
        var_33 ^= ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned int) (-2147483647 - 1))), (((((/* implicit */_Bool) var_7)) ? (arr_21 [i_6] [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6])))))))));
    }
    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 2) 
    {
        var_34 -= ((/* implicit */signed char) var_11);
        arr_30 [i_9] [i_9] = ((/* implicit */_Bool) min((min((var_5), (((/* implicit */unsigned long long int) arr_14 [i_9] [i_9])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_9] [i_9])) ? (arr_29 [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_9] [i_9]))))))));
        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (((~(arr_29 [i_9]))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_9]))))))));
    }
    for (short i_10 = 2; i_10 < 10; i_10 += 1) 
    {
        var_36 = ((/* implicit */signed char) var_12);
        var_37 -= ((/* implicit */short) ((((/* implicit */int) arr_17 [i_10] [i_10] [i_10] [i_10] [2ULL])) + (2147483647)));
        arr_33 [i_10] = ((/* implicit */long long int) min((((signed char) arr_13 [i_10 - 1])), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) 9223372036854775807LL))))) == (((/* implicit */int) var_15)))))));
        arr_34 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_14 [i_10] [i_10]), (((/* implicit */signed char) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-32744), (((/* implicit */short) arr_14 [i_10] [i_10])))))) : (min((((/* implicit */unsigned int) arr_14 [i_10] [i_10])), (var_4)))));
        var_38 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32767))) & (min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)106)), (arr_16 [i_10] [i_10] [i_10] [i_10] [i_10])))), (max((((/* implicit */unsigned long long int) arr_26 [i_10 - 2] [i_10])), (var_16))))));
    }
}
