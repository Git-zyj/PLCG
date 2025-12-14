/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244973
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
    var_18 = ((/* implicit */long long int) (_Bool)1);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 458752)) : (25ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))));
                    var_19 += ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */unsigned int) (+(arr_2 [i_2] [i_2])))) : ((+(2866080361U))))));
                }
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 2; i_4 < 17; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 2; i_5 < 16; i_5 += 3) 
                        {
                            {
                                var_20 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) arr_9 [i_0] [i_0] [i_0] [i_0]))), ((((-2147483647 - 1)) + (((/* implicit */int) (unsigned char)247))))))) ? (((/* implicit */int) var_13)) : ((~(((/* implicit */int) (unsigned char)247))))));
                                var_21 = ((/* implicit */unsigned char) (~(((long long int) arr_9 [i_5] [(unsigned char)12] [i_5] [i_4 + 1]))));
                            }
                        } 
                    } 
                    var_22 += ((/* implicit */signed char) ((unsigned char) (+(max((arr_13 [i_0] [i_0] [i_1] [i_1] [11U] [i_3] [7LL]), (((/* implicit */unsigned long long int) (unsigned char)247)))))));
                }
                /* LoopSeq 3 */
                for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    var_23 *= ((/* implicit */unsigned char) (+((+((+(((/* implicit */int) (signed char)0))))))));
                    var_24 *= (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-12506)) : (((/* implicit */int) (unsigned char)232)))), (((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_4 [i_0]))))))));
                    var_25 = ((/* implicit */short) max((((((/* implicit */_Bool) max(((unsigned char)55), (((/* implicit */unsigned char) (signed char)-1))))) ? (((((/* implicit */unsigned long long int) var_7)) / (var_8))) : (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) (+(arr_8 [i_0]))))));
                }
                for (signed char i_7 = 2; i_7 < 14; i_7 += 2) 
                {
                    arr_19 [i_0] [i_0] [i_7] [i_7] = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_7] [i_7] [i_1] [i_0]))) & ((~(12117920912465634374ULL))))), (((/* implicit */unsigned long long int) arr_2 [i_1] [(short)10]))));
                    var_26 ^= ((/* implicit */signed char) max((max((arr_15 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned char)84)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)22)) - (((/* implicit */int) (signed char)-22))))) ? (((/* implicit */int) max(((signed char)6), ((signed char)4)))) : (((/* implicit */int) (unsigned char)0)))))));
                    arr_20 [i_7] [i_0] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_13 [i_7] [16] [i_7] [i_7 + 1] [i_7 - 2] [i_7 - 2] [i_0])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_4 [16ULL]))) % (var_2))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_16 [i_0] [i_0] [i_0]))))))), (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))));
                }
                /* vectorizable */
                for (long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    arr_23 [i_0] [i_1] [i_8] [i_8] = ((/* implicit */short) (~(((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_1]))));
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_10])) << (((((/* implicit */int) ((signed char) var_5))) + (120)))));
                                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((_Bool) 319991114U)))));
                                arr_29 [13ULL] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551605ULL)))))));
                                var_29 = ((/* implicit */unsigned char) max((var_29), ((unsigned char)55)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        for (unsigned char i_12 = 3; i_12 < 16; i_12 += 2) 
                        {
                            {
                                var_30 *= ((/* implicit */unsigned char) (+(((var_2) - (arr_31 [i_0])))));
                                var_31 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_33 [i_0] [i_12 - 2] [i_8] [i_11] [i_12 - 3] [i_1] [i_12]))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                {
                    for (unsigned short i_14 = 0; i_14 < 18; i_14 += 2) 
                    {
                        {
                            var_32 &= ((/* implicit */signed char) 515711933671679720LL);
                            var_33 = ((/* implicit */long long int) (~(max((((14027302169370626178ULL) % (arr_6 [i_0] [i_0]))), (((/* implicit */unsigned long long int) 3974976185U))))));
                            var_34 = (~(((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)142)) <= (((/* implicit */int) (signed char)-6))))), (max((((/* implicit */unsigned char) (signed char)5)), ((unsigned char)64)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 15; i_15 += 1) 
    {
        for (int i_16 = 0; i_16 < 15; i_16 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_17 = 3; i_17 < 11; i_17 += 2) 
                {
                    for (signed char i_18 = 0; i_18 < 15; i_18 += 2) 
                    {
                        {
                            arr_49 [i_18] [i_18] [i_17] [12LL] [i_16] [i_15] |= ((/* implicit */short) ((((/* implicit */int) arr_46 [(signed char)3] [5ULL])) > (((/* implicit */int) ((short) arr_36 [i_15] [(unsigned char)10] [i_15] [i_15])))));
                            var_35 = ((/* implicit */unsigned short) (((~((+(var_5))))) * (((/* implicit */unsigned long long int) var_16))));
                            var_36 = ((/* implicit */unsigned char) (_Bool)1);
                            arr_50 [i_16] [i_17 + 3] [i_18] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_39 [i_15] [i_16] [i_17 - 2] [i_18] [i_17 - 2] [i_16])), (arr_37 [i_15] [i_15] [i_15] [i_15])));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_19 = 4; i_19 < 12; i_19 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_20 = 0; i_20 < 15; i_20 += 1) 
                    {
                        for (unsigned long long int i_21 = 0; i_21 < 15; i_21 += 2) 
                        {
                            {
                                var_37 = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_6 [i_19 - 3] [i_19 - 1]), (((/* implicit */unsigned long long int) arr_4 [i_21])))))));
                                arr_61 [i_21] [12ULL] |= ((/* implicit */signed char) arr_52 [i_15] [i_20]);
                                var_38 = ((/* implicit */unsigned short) max((4294967295U), (((/* implicit */unsigned int) (unsigned char)144))));
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) 5641386490898123814LL))));
                    arr_62 [8LL] [i_16] [i_16] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_26 [i_19 - 4] [i_19 - 4] [i_19 - 4] [i_19 - 4] [i_19] [i_19 - 3]))))), (max((1953523556U), (((/* implicit */unsigned int) arr_26 [i_15] [i_15] [i_19 + 3] [i_19] [i_19 + 2] [1ULL]))))));
                }
                var_40 = ((/* implicit */unsigned int) arr_40 [i_15] [i_16]);
                var_41 = ((/* implicit */unsigned char) (short)17645);
            }
        } 
    } 
}
