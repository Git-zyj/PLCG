/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237012
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 3; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_10 = ((/* implicit */short) ((unsigned short) (+(((/* implicit */int) var_7)))));
                                var_11 = ((/* implicit */unsigned char) var_7);
                                arr_14 [i_1] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */int) (short)-14867);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */long long int) 4179644176U))))) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) arr_12 [i_5] [i_1] [i_5] [i_5]))))));
                            arr_20 [i_0] [i_1] [i_1] [i_5] [i_1] = ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_1] [i_1] [i_5]))))) - (((((/* implicit */unsigned long long int) var_1)) + (arr_1 [i_0] [i_1])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    for (long long int i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        {
                            arr_28 [i_0] [i_1] [i_7] [17U] = ((/* implicit */unsigned long long int) ((unsigned char) (~(arr_26 [i_1 + 1] [i_1] [i_1] [i_1 - 2] [i_1 + 1] [i_1 - 1]))));
                            arr_29 [i_1 - 1] [i_1] [i_1 - 1] [i_8] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) 6718516282671571111ULL)) ? (((/* implicit */unsigned long long int) 115323097U)) : (11728227791037980505ULL)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_9 = 1; i_9 < 8; i_9 += 3) 
    {
        for (short i_10 = 0; i_10 < 10; i_10 += 3) 
        {
            for (long long int i_11 = 0; i_11 < 10; i_11 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 3; i_12 < 8; i_12 += 1) 
                    {
                        for (signed char i_13 = 0; i_13 < 10; i_13 += 2) 
                        {
                            {
                                arr_42 [i_9] [i_9] [9U] [i_12] [i_13] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64645))) - (((((/* implicit */_Bool) 6115642092565963134ULL)) ? (1137690259272091917ULL) : (((/* implicit */unsigned long long int) 3758285208U)))))))));
                                var_13 |= (unsigned char)142;
                                var_14 = min((((/* implicit */unsigned int) var_0)), (((arr_17 [i_13] [i_13] [12U] [i_12 + 2] [i_9 + 1] [i_13]) ^ (arr_17 [i_11] [i_12] [i_12] [i_12 - 2] [i_9 - 1] [i_11]))));
                                var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (unsigned char)142)), (((((/* implicit */_Bool) 2U)) ? (arr_18 [i_9] [i_9] [i_13] [i_9 - 1] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_9 + 2] [i_10] [i_9 + 2])))))));
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_9] [i_10] [i_10] [i_10])) ? (((arr_4 [i_9] [i_9] [i_12]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) var_0))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [i_9 - 1] [i_11] [i_13])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 10; i_14 += 3) 
                    {
                        for (long long int i_15 = 0; i_15 < 10; i_15 += 3) 
                        {
                            {
                                arr_47 [i_15] [i_10] [i_14] [i_14] [i_15] = ((/* implicit */int) ((short) (~(arr_46 [i_10] [6U] [i_11] [(short)8] [i_9 - 1]))));
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_44 [i_9 - 1] [i_9 + 2] [i_9 + 2] [i_9] [i_9 - 1] [i_9])) - (((/* implicit */int) arr_44 [i_9 + 1] [i_9 + 2] [i_9] [7ULL] [i_9 - 1] [9LL]))));
                                arr_48 [i_14] = ((/* implicit */unsigned char) min(((+(arr_30 [i_9 + 2]))), (min((arr_30 [i_9 - 1]), (arr_30 [i_9 - 1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 0; i_16 < 10; i_16 += 2) 
                    {
                        for (signed char i_17 = 0; i_17 < 10; i_17 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) ((unsigned char) var_8));
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 12331101981143588482ULL)) ? (((/* implicit */int) arr_5 [i_9] [i_17])) : (((/* implicit */int) (unsigned short)22102))))))) : (2984159518658471949ULL))))));
                                var_20 *= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 2147483631)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2558789016U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_9 - 1]))) : (var_3)))) : (((((/* implicit */_Bool) var_6)) ? (6115642092565963134ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_9 + 2] [i_9] [i_9 - 1] [i_9])))))));
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((((/* implicit */long long int) var_2)), (((long long int) arr_39 [i_16] [i_16])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_18 = 0; i_18 < 15; i_18 += 1) 
    {
        for (unsigned long long int i_19 = 2; i_19 < 14; i_19 += 1) 
        {
            for (long long int i_20 = 3; i_20 < 13; i_20 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_21 = 0; i_21 < 15; i_21 += 1) 
                    {
                        for (int i_22 = 3; i_22 < 14; i_22 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) arr_53 [i_18]);
                                var_23 *= (~((~(var_1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_23 = 0; i_23 < 15; i_23 += 1) 
                    {
                        for (unsigned char i_24 = 2; i_24 < 12; i_24 += 2) 
                        {
                            {
                                arr_71 [i_18] [i_23] [i_20 - 2] [i_19] [i_18] [i_18] = (i_18 % 2 == 0) ? (((/* implicit */unsigned short) (+(((arr_64 [i_18] [i_18] [i_20 - 2] [i_24 - 1] [i_24] [i_24] [i_24]) >> ((((~(var_8))) - (3955852738955871762LL)))))))) : (((/* implicit */unsigned short) (+(((((arr_64 [i_18] [i_18] [i_20 - 2] [i_24 - 1] [i_24] [i_24] [i_24]) + (9223372036854775807LL))) >> ((((~(var_8))) - (3955852738955871762LL))))))));
                                arr_72 [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) 15U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_19 + 1] [i_19 + 1] [i_19 + 1])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_24])))))) ? (((/* implicit */unsigned int) -1178133689)) : ((+(arr_25 [i_18] [i_19 - 1] [i_20] [7U] [i_24])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_25 = 0; i_25 < 15; i_25 += 1) 
                    {
                        for (signed char i_26 = 2; i_26 < 12; i_26 += 3) 
                        {
                            {
                                var_24 *= ((/* implicit */signed char) (+((~(((((/* implicit */_Bool) 12121800474099184173ULL)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
                                arr_77 [i_18] [5LL] [i_18] [i_26] = ((/* implicit */unsigned long long int) arr_74 [i_18] [i_18] [i_18] [12U] [(signed char)2]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_27 = 0; i_27 < 15; i_27 += 4) 
                    {
                        for (signed char i_28 = 0; i_28 < 15; i_28 += 4) 
                        {
                            {
                                var_25 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -519416208))));
                                arr_84 [i_28] [i_28] [i_27] [i_28] [i_27] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)(-127 - 1))), ((unsigned char)114)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_27] [i_19 - 2] [i_20 + 2] [i_27] [i_28]))) : (((((/* implicit */_Bool) arr_25 [i_18] [i_18] [i_18] [i_18] [i_18])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_18]))) : (var_8))))) >> (((((/* implicit */int) (unsigned short)812)) - (791)))));
                                var_26 = ((/* implicit */unsigned int) arr_0 [(unsigned char)17]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
