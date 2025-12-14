/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227204
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
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((unsigned long long int) 15650137112852051196ULL)))));
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)255)))))), (var_2))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) arr_0 [i_0 - 2]);
        var_19 *= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) ((_Bool) (_Bool)1)))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 4) 
    {
        arr_5 [i_1] |= ((/* implicit */unsigned char) var_5);
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min((min((8314426926733187930ULL), (((/* implicit */unsigned long long int) (_Bool)0)))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) arr_3 [i_1]))))) : (min((arr_4 [i_1] [i_1]), (((/* implicit */unsigned long long int) var_8)))))))))));
        arr_6 [i_1] [i_1] = ((_Bool) ((min((var_3), (((/* implicit */int) arr_3 [i_1 + 2])))) - (min((-1340294444), (((/* implicit */int) (unsigned char)57))))));
    }
    for (int i_2 = 3; i_2 < 10; i_2 += 3) 
    {
        var_21 += arr_1 [i_2];
        var_22 *= min((((/* implicit */unsigned long long int) arr_0 [i_2])), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) arr_0 [i_2 - 3]))))), (min((arr_7 [i_2] [i_2 + 2]), (((/* implicit */unsigned long long int) arr_2 [i_2 - 2])))))));
        /* LoopNest 3 */
        for (signed char i_3 = 1; i_3 < 11; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 4) 
            {
                for (unsigned char i_5 = 2; i_5 < 9; i_5 += 1) 
                {
                    {
                        arr_17 [i_4] = ((signed char) arr_1 [i_2]);
                        /* LoopSeq 2 */
                        for (short i_6 = 4; i_6 < 11; i_6 += 4) 
                        {
                            var_23 *= ((/* implicit */_Bool) arr_15 [i_5] [7] [i_5]);
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_1))))), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((int) ((short) (unsigned char)12)))))))));
                            arr_20 [i_2] [i_6] &= ((((/* implicit */int) arr_2 [i_2])) < (((((/* implicit */_Bool) min((arr_7 [i_3] [i_4]), (((/* implicit */unsigned long long int) arr_0 [i_5 - 1]))))) ? (((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_14 [i_6] [i_5 + 2] [i_2])))) : (((/* implicit */int) ((_Bool) arr_13 [i_2 - 3] [i_3] [i_5] [i_6]))))));
                        }
                        for (unsigned long long int i_7 = 3; i_7 < 11; i_7 += 2) 
                        {
                            var_25 *= ((/* implicit */unsigned short) arr_3 [i_7]);
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */int) (unsigned short)12111)) <= (((/* implicit */int) (short)12)))))));
                        }
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((unsigned short) (unsigned short)0)))));
                        arr_24 [i_4] [i_5 + 1] = ((/* implicit */_Bool) var_1);
                    }
                } 
            } 
        } 
    }
    for (short i_8 = 1; i_8 < 21; i_8 += 4) 
    {
        arr_27 [i_8] |= ((/* implicit */unsigned long long int) ((_Bool) arr_25 [i_8] [i_8 - 1]));
        arr_28 [i_8] |= min((((/* implicit */int) arr_26 [i_8])), (min((((/* implicit */int) min((arr_26 [i_8 - 1]), (((/* implicit */short) (_Bool)1))))), (min((var_3), (((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 1 */
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) min((min((var_13), (((/* implicit */unsigned long long int) ((arr_30 [i_8 + 1] [i_8]) + (arr_25 [i_8] [i_9 - 1])))))), (((/* implicit */unsigned long long int) arr_29 [i_9] [i_8] [i_8])))))));
            var_29 += ((/* implicit */short) arr_32 [i_8]);
        }
        var_30 -= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((_Bool) var_6))))));
    }
}
