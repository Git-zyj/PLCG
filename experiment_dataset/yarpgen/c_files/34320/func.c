/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34320
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
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_12)))) >> (((var_17) - (4423203764649035571LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) var_3)), (var_7)))))))) : (max((((/* implicit */unsigned long long int) var_7)), (var_1))))))));
    var_19 = ((/* implicit */_Bool) (-(min((((/* implicit */int) min(((signed char)35), ((signed char)-35)))), ((+(((/* implicit */int) var_11))))))));
    var_20 ^= ((/* implicit */_Bool) ((max((((/* implicit */int) var_0)), ((~(((/* implicit */int) var_6)))))) + (((/* implicit */int) min((((short) var_5)), (((/* implicit */short) max((((/* implicit */unsigned char) var_13)), (var_12)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((min(((+(((/* implicit */int) arr_0 [i_0])))), ((+(((/* implicit */int) arr_0 [i_0])))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))));
        arr_2 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned char) arr_0 [i_0])), (arr_1 [i_0]))), (((/* implicit */unsigned char) arr_0 [i_0]))))), (max((min((0ULL), (((/* implicit */unsigned long long int) (signed char)-36)))), (((/* implicit */unsigned long long int) (signed char)119))))));
        var_22 -= ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((arr_3 [i_0] [i_1]) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_1])) + (34))))) % (((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_0 [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [0LL])) >= (((/* implicit */int) arr_0 [i_0])))))) : ((-(((arr_4 [i_0]) / (((/* implicit */long long int) arr_3 [i_0] [i_1]))))))));
            var_24 = ((/* implicit */signed char) min((((arr_4 [i_0]) >> (((((/* implicit */int) arr_0 [i_1])) + (39))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0])))))));
            var_25 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_1]))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1])))))));
        }
        /* LoopSeq 1 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_26 *= ((/* implicit */_Bool) ((unsigned long long int) max((arr_1 [2ULL]), (((/* implicit */unsigned char) arr_6 [i_2 - 1])))));
            var_27 = ((/* implicit */long long int) min(((~(((/* implicit */int) max((((/* implicit */short) arr_0 [i_0])), (arr_5 [i_0] [i_2 - 1])))))), ((+(((/* implicit */int) (signed char)35))))));
        }
    }
    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 22; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            {
                                arr_22 [i_3] [i_6] [i_5] [i_7] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_15 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 - 1])) ? (arr_15 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 + 1]) : (arr_15 [i_3 - 1] [i_3 + 1] [(short)19] [i_3 + 1])))));
                                var_28 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_8 [i_3 + 1]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_5]))))))))));
                                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_14 [(_Bool)1] [i_5]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_6] [i_6] [i_6] [i_6]))))) + (max((((/* implicit */unsigned long long int) arr_13 [i_3] [i_3] [i_7])), (arr_18 [i_3] [i_3] [i_3 + 1])))))) && (((/* implicit */_Bool) max((arr_8 [i_3 - 1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_3] [i_3] [i_3])) != (arr_15 [i_3] [i_3] [i_5] [i_5])))))))));
                                var_30 += ((/* implicit */short) ((((/* implicit */int) (signed char)-69)) - (-1530455886)));
                                arr_23 [i_5] [i_6] [12LL] [12LL] [i_5] &= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        for (int i_9 = 4; i_9 < 21; i_9 += 2) 
                        {
                            {
                                var_31 = ((/* implicit */short) (-(((arr_25 [i_9 - 4] [i_3 + 1] [i_3 + 1] [i_3]) / (((/* implicit */unsigned long long int) arr_11 [i_3 - 1] [i_3 - 1] [i_3 + 1]))))));
                                arr_30 [i_3 + 1] [i_4] [i_5] [i_4] [i_5] = ((/* implicit */signed char) (-(min((((/* implicit */long long int) (-(((/* implicit */int) (short)(-32767 - 1)))))), (max((arr_11 [i_3 - 1] [i_3 - 1] [i_9 - 4]), (arr_27 [i_3 + 1] [(_Bool)1] [15LL] [i_3 + 1] [(_Bool)1] [i_9 - 1] [(_Bool)1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_32 *= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((arr_19 [i_3] [i_3 + 1] [i_3] [i_3 - 1] [i_3 - 1] [i_3]) || (arr_19 [i_3] [i_3 - 1] [i_3] [i_3] [i_3] [i_3])))), (((((/* implicit */int) arr_19 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3] [i_3 - 1] [i_3])) >> (((/* implicit */int) arr_19 [i_3] [i_3 - 1] [i_3] [6] [i_3 + 1] [i_3]))))));
        arr_31 [i_3] [i_3] &= ((/* implicit */short) arr_21 [i_3 - 1] [i_3 + 1] [i_3 + 1] [3ULL] [i_3 + 1] [i_3]);
    }
}
