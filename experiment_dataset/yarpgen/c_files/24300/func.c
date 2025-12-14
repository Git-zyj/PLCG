/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24300
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
    var_12 = ((/* implicit */unsigned long long int) var_0);
    var_13 &= ((/* implicit */int) min((max(((unsigned short)65509), (((/* implicit */unsigned short) var_4)))), (max((var_3), (var_8)))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) ((short) (short)22773))), (var_11)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((((/* implicit */int) (short)14205)) / (var_5))))))) : ((+(569907782)))));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_14 [12ULL] [i_2] [i_4] = ((/* implicit */unsigned short) (short)-14206);
                                var_15 = ((/* implicit */signed char) 642764095);
                            }
                        } 
                    } 
                    arr_15 [i_0 - 3] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((short) arr_7 [i_0 - 3]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [(short)0] [(short)0] [i_0] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) : (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14183))) : (min((9826904781579079722ULL), (((/* implicit */unsigned long long int) 3099452947U))))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 18; i_7 += 2) 
                        {
                            {
                                var_16 &= ((/* implicit */unsigned short) arr_22 [i_0] [i_1] [i_5] [8ULL] [i_1]);
                                var_17 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) ((unsigned char) 14225348003502310392ULL))) == (((/* implicit */int) (short)-14205)))));
                                var_18 &= ((/* implicit */unsigned char) arr_2 [i_7] [i_1]);
                            }
                        } 
                    } 
                    var_19 = min(((+(2148827977172794395ULL))), (((/* implicit */unsigned long long int) (unsigned char)10)));
                    arr_23 [i_1 - 2] [i_1 + 2] [i_5] = ((/* implicit */unsigned int) var_10);
                }
                for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    var_20 = ((/* implicit */signed char) max((((arr_22 [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 2]) >= (((/* implicit */unsigned long long int) ((unsigned int) 100663296))))), ((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0])))))))));
                    arr_26 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_1);
                }
                for (int i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((max((arr_10 [i_0 - 3] [i_1] [i_1 - 1] [i_1]), (((/* implicit */unsigned long long int) (short)-14205)))), (((/* implicit */unsigned long long int) arr_28 [i_0] [i_1] [i_9])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        for (signed char i_11 = 4; i_11 < 19; i_11 += 4) 
                        {
                            {
                                arr_34 [i_0] [i_0] [i_0] [i_10] [i_11 - 3] = ((/* implicit */unsigned long long int) (unsigned char)178);
                                var_22 += ((unsigned short) min(((~(((/* implicit */int) var_6)))), (((/* implicit */int) var_6))));
                            }
                        } 
                    } 
                    arr_35 [i_0] [14ULL] [i_9] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_22 [3] [4ULL] [(unsigned short)3] [i_0 - 4] [i_1 + 2]) >> (((((/* implicit */int) arr_20 [i_1] [(signed char)4] [i_9] [i_0 - 4])) - (179)))))) ? ((~(((/* implicit */int) (signed char)59)))) : (min((var_5), (((/* implicit */int) arr_30 [i_9] [15ULL] [i_9] [i_0 - 4]))))));
                    arr_36 [i_1 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */int) (signed char)17)), (arr_9 [(short)8] [i_9] [i_9]))))) ? ((-(((/* implicit */int) (short)-22774)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-14206)))))));
                }
                arr_37 [19ULL] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) (~(3965358421914271587ULL)))) ? (((/* implicit */unsigned int) ((((-100663296) + (2147483647))) >> (((1631206908) - (1631206888)))))) : (((((/* implicit */_Bool) 1012138992530574667ULL)) ? (arr_2 [i_0 - 4] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) -1447893540)), (arr_2 [i_0] [i_0])))) : (((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0] [i_1]))) ? (((/* implicit */unsigned long long int) arr_21 [i_1])) : (arr_3 [i_1 + 2])))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 20; i_12 += 4) 
                {
                    for (int i_13 = 1; i_13 < 18; i_13 += 2) 
                    {
                        {
                            arr_46 [i_0] [i_1] [i_12] [i_13] = var_5;
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) max(((-(((/* implicit */int) (signed char)61)))), (max(((~(var_1))), (((/* implicit */int) ((signed char) arr_10 [i_0] [i_1] [i_12] [i_13 + 1]))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) var_4))));
}
