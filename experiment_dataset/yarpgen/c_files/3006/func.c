/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3006
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (-188807810051352112LL) : (((/* implicit */long long int) ((/* implicit */int) var_17))))) : (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 20; i_2 += 2) 
                {
                    for (int i_3 = 3; i_3 < 21; i_3 += 2) 
                    {
                        {
                            arr_10 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (((_Bool)1) ? (2147483647) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (unsigned char)111)) ? (var_12) : (arr_7 [i_1] [i_3 - 3] [i_3 - 3] [i_1])))));
                            var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3 + 1] [i_2 + 1])) ? (-1494735296) : (((/* implicit */int) arr_0 [1] [i_2 + 2]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_0 [i_2] [i_2 - 1])) : (((/* implicit */int) var_17))))) : (((((/* implicit */_Bool) (short)-21024)) ? (var_12) : (((/* implicit */long long int) 2147483628)))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_16)) : (arr_11 [i_0] [i_1] [i_4] [i_1])))) : (-3LL)));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            {
                                arr_17 [i_1] = ((/* implicit */long long int) ((arr_2 [i_5] [i_4] [(signed char)15]) ? (((/* implicit */int) arr_2 [i_0] [(unsigned char)8] [i_5])) : (((/* implicit */int) var_3))));
                                var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_4 [i_0] [i_1] [13LL]))));
                            }
                        } 
                    } 
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_14 [i_1] [i_7] [i_7] [i_1] [i_0] [i_1])) : (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))) ? (((((/* implicit */_Bool) -15LL)) ? (var_9) : (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_7] [i_1] [i_7])))) : (((((/* implicit */_Bool) (signed char)-1)) ? (-2147483647) : (2147483628)))));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)1))))) ? (3143632699211699748LL) : (((/* implicit */long long int) -2147483604))));
                }
                for (short i_8 = 1; i_8 < 21; i_8 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_9 = 4; i_9 < 19; i_9 += 1) 
                    {
                        for (long long int i_10 = 2; i_10 < 21; i_10 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) (((_Bool)0) ? (2147483632) : ((((_Bool)1) ? (730558020) : (((/* implicit */int) (unsigned short)65535))))));
                                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_9 + 3] [i_9 - 2] [i_8 - 1])) ? (((/* implicit */int) (short)-26686)) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_0 [i_10] [i_8]))))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)12)) : (arr_11 [i_9 - 1] [i_8 - 1] [i_8 + 1] [i_10 + 1]))) : (((((/* implicit */_Bool) var_0)) ? (2147483623) : (((/* implicit */int) arr_28 [i_10 - 2] [i_10 - 2] [i_8 - 1] [i_10 - 2] [i_10] [i_10] [i_9 - 3]))))));
                            }
                        } 
                    } 
                    var_26 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) -22LL)) ? (-2147483628) : (((/* implicit */int) (short)-32764)))) : (2147483628)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -16LL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (signed char)-58)) ? (6283707470740907445LL) : (9223372036854775805LL)))));
                    /* LoopSeq 1 */
                    for (signed char i_11 = 2; i_11 < 21; i_11 += 1) 
                    {
                        var_27 += ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) -574990205)) : (1426078315167657980ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -2147483627)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_24 [i_11 - 1] [i_8 + 1]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_8 + 1])) ? (2147483647) : (((/* implicit */int) (signed char)-12))))) ? (arr_9 [i_0] [i_8 - 1] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_12 = 0; i_12 < 22; i_12 += 3) 
                        {
                            arr_35 [i_1] [i_1] [i_8 + 1] [i_11] [i_12] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40383)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_11 + 1] [i_8 + 1] [i_8 - 1]))))) ? (((((/* implicit */_Bool) var_2)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_11 + 1] [i_8 + 1] [i_8 - 1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_11 - 1] [i_8 + 1] [i_8 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_11 + 1] [i_8 + 1] [i_8 - 1]))))));
                            var_28 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [(unsigned char)7] [i_8 + 1] [i_11 + 1] [i_11 + 1] [i_11])) ? (((/* implicit */int) (short)4716)) : (2147483640)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -2844097873626892818LL)) ? (((/* implicit */int) (short)32753)) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_8 + 1] [i_8] [i_11] [i_11 - 2]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_30 [i_0] [i_1] [i_11 - 2] [i_12])) : (arr_26 [i_0] [i_12] [i_11] [i_8 - 1] [16] [i_0])))) ? (arr_5 [i_8 + 1] [i_11 - 1] [i_11 - 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)253)) : (var_9))))))));
                        }
                    }
                }
            }
        } 
    } 
    var_29 &= ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (((_Bool)1) ? (-2147483628) : (((/* implicit */int) (_Bool)1))))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (var_1)));
    /* LoopNest 3 */
    for (short i_13 = 3; i_13 < 11; i_13 += 3) 
    {
        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)54104)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (-9223372036854775802LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)187)))))) ? (((var_16) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_13] [i_13] [i_15]))) : (2887782678523433143LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (6283707470740907439LL)))));
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 0; i_16 < 14; i_16 += 3) 
                    {
                        for (long long int i_17 = 3; i_17 < 10; i_17 += 2) 
                        {
                            {
                                arr_50 [i_13] [i_14] [i_14] [i_16] [i_13] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483640)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) (_Bool)1)) : (-1)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_37 [i_13]) : (((/* implicit */int) arr_6 [i_13] [i_14] [i_14] [i_16]))))) ? (((((/* implicit */_Bool) -8211241188451960809LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_30 [i_17] [i_17] [i_17 + 3] [i_17 + 3])))))))));
                                var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_17) ? (((var_10) ? (var_14) : (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_13])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_1)) ? (2147483627) : (((/* implicit */int) (signed char)118)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_32 [(_Bool)1] [(_Bool)1] [i_15] [i_13])) : (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) arr_23 [i_13])) ? (arr_23 [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24)))))));
                            }
                        } 
                    } 
                    arr_51 [i_13] [i_13] [(signed char)11] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) 6283707470740907445LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
    {
        for (short i_19 = 0; i_19 < 18; i_19 += 4) 
        {
            for (short i_20 = 2; i_20 < 14; i_20 += 2) 
            {
                {
                    var_32 -= ((/* implicit */short) ((((/* implicit */_Bool) 1915544170)) ? (-3LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)115)))));
                    /* LoopNest 2 */
                    for (unsigned char i_21 = 1; i_21 < 15; i_21 += 4) 
                    {
                        for (unsigned short i_22 = 4; i_22 < 17; i_22 += 2) 
                        {
                            {
                                var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) -1705687906)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_21 [i_21 + 2])))) : (((((/* implicit */_Bool) arr_52 [i_20] [i_21])) ? (-2147483629) : (((/* implicit */int) (signed char)-3))))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((((_Bool)1) ? (var_2) : (((/* implicit */unsigned int) arr_53 [i_22])))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_18] [i_21 + 2])) ? (arr_1 [i_18 + 1] [i_18 + 1]) : (((/* implicit */unsigned long long int) arr_15 [11] [11] [i_20] [(_Bool)1] [(_Bool)1]))))) ? (((/* implicit */int) arr_14 [i_22] [i_22] [i_18 + 1] [i_20] [i_20] [i_20 + 4])) : (((/* implicit */int) var_3))))))))));
                                var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483628)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-11907))))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_20 + 4] [i_18] [i_18] [i_18 + 1])))))) ? (((((/* implicit */_Bool) 17991790527815335184ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)193))) : (4LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-99)))))));
                }
            } 
        } 
    } 
}
