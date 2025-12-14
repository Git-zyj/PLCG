/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44058
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) var_13);
                            arr_12 [i_0] [i_3] [i_2] [8] &= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 536870400)) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) (short)-24650))))) != (((((/* implicit */_Bool) (short)-4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_8 [i_0] [i_0] [i_0] [i_3]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)66)))))))) : (max((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */int) var_18)) % (((/* implicit */int) (_Bool)1))))))));
                            arr_13 [i_1] [i_1] = (~(((/* implicit */int) ((arr_8 [13U] [i_1] [i_1] [i_1 + 1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-119)) || (((/* implicit */_Bool) (short)-23019))))))))));
                            arr_14 [i_0] [i_1] [i_2] |= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_9 [i_0] [i_0] [13ULL] [i_2] [i_3])))), (((((/* implicit */_Bool) ((var_15) / (((/* implicit */long long int) 3402072078U))))) ? (min((((/* implicit */unsigned long long int) arr_9 [(unsigned char)6] [(short)12] [i_2] [(signed char)8] [i_0])), (17557826306048ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) / (2526028013653692058LL))))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_4 = 1; i_4 < 15; i_4 += 1) 
                {
                    var_19 |= (!(((/* implicit */_Bool) (short)-18587)));
                    arr_18 [i_0] [i_1 - 1] |= ((((/* implicit */long long int) -1164436076)) ^ (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_15))));
                    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_15 [i_0] [(_Bool)1] [i_1])) ? (17875550503702403243ULL) : (arr_2 [i_0] [i_0] [i_1]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) (short)23027))))))));
                }
                for (short i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    arr_21 [i_1] = ((/* implicit */unsigned short) 536870407);
                    arr_22 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (+(min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)-26))))), ((-(var_2)))))));
                    var_21 = ((/* implicit */short) var_14);
                    var_22 = ((/* implicit */short) (~(((/* implicit */int) var_7))));
                }
                for (int i_6 = 4; i_6 < 13; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 3; i_7 < 14; i_7 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_8 = 3; i_8 < 15; i_8 += 3) 
                        {
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) var_7))));
                            arr_32 [i_8] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_0)))) | (282692937U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))) : (min((min((((/* implicit */unsigned int) arr_3 [i_0])), (4294967292U))), (arr_16 [i_7] [i_8 - 3] [i_7 + 2] [i_6 - 2])))));
                            var_24 = ((/* implicit */int) max((max((((/* implicit */long long int) arr_16 [i_7 - 1] [i_1] [(unsigned char)15] [i_7])), (arr_17 [i_7 - 1] [i_1] [i_7 - 1] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_17 [i_0] [i_6] [i_7] [i_8]), (((/* implicit */long long int) arr_7 [i_1] [i_1] [i_1] [i_1]))))) || (((/* implicit */_Bool) max((arr_10 [i_0] [i_1] [i_6] [5ULL] [i_1]), (var_16)))))))));
                        }
                        var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) arr_6 [i_6 - 2] [i_6 - 1])))));
                        var_26 = ((/* implicit */int) (-9223372036854775807LL - 1LL));
                        arr_33 [i_1] [i_6] [i_1] [i_0] [i_0] [i_1] = ((/* implicit */int) var_6);
                    }
                    arr_34 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((max((((arr_31 [i_1]) ? (((/* implicit */long long int) -1125164024)) : (var_9))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)65530)), (2670491526U)))))) == (3LL)));
                    var_27 = ((/* implicit */unsigned short) arr_7 [i_1] [i_1 - 1] [i_6] [i_6]);
                    var_28 |= ((/* implicit */long long int) max((((/* implicit */unsigned char) ((_Bool) var_4))), (((unsigned char) var_1))));
                }
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 - 1]))))) : ((+(((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_9 = 1; i_9 < 8; i_9 += 3) 
    {
        for (unsigned short i_10 = 1; i_10 < 10; i_10 += 1) 
        {
            {
                var_30 = ((/* implicit */unsigned char) var_3);
                var_31 = ((/* implicit */unsigned int) ((unsigned char) ((unsigned char) arr_38 [i_9] [i_9] [i_10])));
                var_32 *= ((/* implicit */short) (!(((arr_25 [i_10 + 1] [i_10] [(unsigned char)2]) > (((/* implicit */long long int) arr_7 [8ULL] [i_9] [i_9 - 1] [i_10 + 1]))))));
            }
        } 
    } 
    var_33 *= ((/* implicit */unsigned char) (+(2316992874U)));
    var_34 = ((/* implicit */unsigned short) min((var_15), (((var_11) ? (((var_9) << (((9223372036854775796LL) - (9223372036854775796LL))))) : (((/* implicit */long long int) ((((/* implicit */int) var_17)) ^ (((/* implicit */int) var_16)))))))));
}
