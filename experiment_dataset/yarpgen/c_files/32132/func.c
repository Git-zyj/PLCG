/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32132
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
    var_19 = ((/* implicit */short) var_17);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */unsigned short) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24))) != (3768700244U))), (((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (-1068056862338898008LL))))))));
        var_20 *= ((/* implicit */signed char) ((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (max((((((/* implicit */_Bool) (short)32758)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_4)))), (((/* implicit */int) max((var_5), (var_14))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_0)) != (max((((/* implicit */int) arr_0 [(short)6])), (2147483647))))) ? (max((((/* implicit */unsigned long long int) arr_7 [i_1] [i_2] [i_4])), (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_1] [i_2] [i_3] [i_4])) / (((/* implicit */int) (signed char)127)))))));
                        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) max(((short)32767), (((/* implicit */short) (signed char)38))))) | (((/* implicit */int) (short)21833)))))));
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (short)-18))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_15 [i_5] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (unsigned short)65535);
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */int) ((28LL) >= (((/* implicit */long long int) ((/* implicit */int) var_12)))))) >= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_12 [i_1] [i_5] [1] [i_3] [i_2] [i_1])) : (((/* implicit */int) arr_14 [i_5] [i_3] [i_4] [i_1] [i_3] [i_1])))))))));
                            arr_16 [i_1] = ((/* implicit */signed char) var_15);
                            var_25 = ((/* implicit */short) max((var_25), (var_0)));
                            arr_17 [i_1] [i_2] [i_3] [i_4] [i_5] &= ((/* implicit */short) (_Bool)0);
                        }
                        for (short i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            arr_21 [i_1] [i_1] [i_1] [i_4] [i_1] [i_6] = ((/* implicit */short) (+(((unsigned int) max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_5 [i_2] [i_2] [i_6]))))));
                            arr_22 [(short)5] [i_2] [i_3] [i_4] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_1] [i_1] [i_2] [i_3] [i_4] [i_6])) & (((/* implicit */int) arr_14 [i_1] [i_1] [i_2] [i_3] [i_4] [i_6]))))) ? (max((var_9), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (18446744073709551613ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                            var_26 -= ((/* implicit */signed char) ((short) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_3]))) + (arr_20 [i_1] [i_3] [i_3] [i_4] [i_6]))));
                            var_27 += ((/* implicit */unsigned short) ((((/* implicit */int) var_17)) ^ (((arr_0 [i_2]) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) arr_0 [i_2]))))));
                            arr_23 [i_1] = ((/* implicit */short) (((~(((/* implicit */int) ((((/* implicit */int) (short)-22716)) >= (((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_4] [i_6] [i_6]))))))) >= ((+(((/* implicit */int) arr_12 [i_1] [i_2] [i_3] [(_Bool)1] [i_6] [i_2]))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            for (int i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 1; i_9 < 7; i_9 += 4) 
                    {
                        for (short i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            {
                                arr_35 [i_1] [i_1] [i_1] [i_8] [i_8] [i_9] [i_1] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) (short)13609)) ? (arr_27 [i_1] [i_7] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30922))))));
                                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (_Bool)1))));
                                var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (!(((/* implicit */_Bool) (short)-13617)))))));
                                var_30 = ((/* implicit */signed char) -839438309479356636LL);
                            }
                        } 
                    } 
                    arr_36 [i_1] [i_1] [i_8] = ((/* implicit */unsigned char) -8226277824817189998LL);
                    arr_37 [i_1] [i_7] [i_8] &= ((((((((/* implicit */_Bool) (short)32504)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (short)20724))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_31 [i_1] [i_7] [7U] [i_7])) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (~(((/* implicit */int) (unsigned char)115))))))) : (((((/* implicit */_Bool) ((2147483647) ^ (((/* implicit */int) (short)-15886))))) ? (((1174251606915885875LL) & (var_6))) : (((/* implicit */long long int) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_7))))))));
                    var_31 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_7])))))) ? (((((/* implicit */_Bool) (short)3623)) ? (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_7] [(signed char)6] [i_8] [i_7])) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_14)))) | ((-(((/* implicit */int) arr_0 [i_1]))))));
                }
            } 
        } 
        arr_38 [i_1] = ((/* implicit */long long int) (short)-13596);
    }
    var_32 = var_18;
}
