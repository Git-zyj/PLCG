/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19188
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
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 ^= ((/* implicit */short) arr_1 [i_0]);
                    var_18 += ((unsigned short) var_9);
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0 + 1])), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) / (var_15)))))));
                                var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)11303)), (((((/* implicit */_Bool) 4073738517U)) ? (2147483648U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32754)))))));
                                var_21 = var_15;
                                var_22 = ((/* implicit */short) min((((arr_5 [(unsigned short)3] [i_1] [i_2]) - (((/* implicit */unsigned long long int) ((int) (unsigned short)34675))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))))) ? (((long long int) var_9)) : (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_4])) ? (12LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3]))))))))));
                            }
                        } 
                    } 
                    var_23 = 7835871076694788587LL;
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) max((((signed char) (short)32767)), (((/* implicit */signed char) ((((/* implicit */int) var_16)) < (((/* implicit */int) (!((_Bool)1)))))))));
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (unsigned short)58148))) << (((/* implicit */int) ((unsigned short) var_3)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_4)));
    var_26 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_12))) - (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */long long int) ((/* implicit */int) var_12))) - (var_7))) : (((/* implicit */long long int) ((/* implicit */int) ((var_5) < (var_6)))))))));
    /* LoopNest 2 */
    for (short i_5 = 2; i_5 < 22; i_5 += 1) 
    {
        for (unsigned int i_6 = 1; i_6 < 21; i_6 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            {
                                var_27 &= ((_Bool) 27ULL);
                                var_28 += ((/* implicit */int) (unsigned short)49115);
                            }
                        } 
                    } 
                } 
                var_29 = ((/* implicit */unsigned char) var_11);
                arr_26 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */int) var_2)) % (((/* implicit */int) var_2)))), ((-(((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) ((1973545886U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)17790)))))) ? (((/* implicit */int) arr_23 [i_5] [i_5] [i_5] [i_5] [i_6] [i_6])) : (((/* implicit */int) ((((/* implicit */int) arr_17 [i_5])) < (((/* implicit */int) (signed char)-82))))))) : (((/* implicit */int) var_0))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_10 = 0; i_10 < 24; i_10 += 1) 
                {
                    var_30 += var_16;
                    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (-(6588897284088147391ULL)))) || (((/* implicit */_Bool) arr_4 [i_5 + 1] [i_5]))));
                    arr_29 [i_5] = ((/* implicit */unsigned short) (signed char)15);
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_32 -= ((/* implicit */unsigned short) 7642888070579500099ULL);
                    var_33 += ((/* implicit */unsigned long long int) arr_12 [(unsigned short)5] [i_6] [i_5]);
                }
                for (short i_12 = 0; i_12 < 24; i_12 += 1) 
                {
                    var_34 ^= ((/* implicit */int) ((((((/* implicit */_Bool) (short)31)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)21917))) >= (arr_22 [i_5] [i_6 - 1] [i_6] [i_12])))) : (((arr_19 [i_5 + 1] [0U] [(signed char)6]) / (((/* implicit */int) (unsigned short)36282)))))) != (min((((/* implicit */int) min((((/* implicit */unsigned short) (short)32766)), ((unsigned short)65535)))), (((((/* implicit */_Bool) -5299603428236822821LL)) ? (((/* implicit */int) (signed char)78)) : (((/* implicit */int) (_Bool)1))))))));
                    arr_35 [i_5] [i_5] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_1 [i_12]))));
                }
            }
        } 
    } 
}
