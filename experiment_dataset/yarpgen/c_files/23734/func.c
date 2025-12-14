/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23734
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        var_13 += ((/* implicit */unsigned long long int) (unsigned char)31);
        var_14 *= ((max((((/* implicit */unsigned long long int) (unsigned char)255)), (13680204587329729153ULL))) << (((((/* implicit */_Bool) arr_0 [6U])) ? (min((4766539486379822462ULL), (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] = ((/* implicit */unsigned char) max((arr_1 [i_4]), (((/* implicit */unsigned long long int) 80227150U))));
                                var_15 = ((/* implicit */unsigned char) min((17468512543731396237ULL), (13680204587329729154ULL)));
                            }
                        } 
                    } 
                    arr_16 [i_0] = ((/* implicit */unsigned char) ((min((arr_10 [i_0 + 3]), (arr_10 [i_0 + 2]))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 1] [i_2 - 1])))));
                    arr_17 [i_0] = ((/* implicit */unsigned int) max((((9079337989594098300ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)61))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 903636791U)) ? (4766539486379822467ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)240)) / (((/* implicit */int) (unsigned char)29)))))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 3; i_5 < 13; i_5 += 3) 
    {
        var_17 = ((/* implicit */unsigned long long int) (-(369933140U)));
        /* LoopSeq 4 */
        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 4214740146U)) != (0ULL)));
            var_19 += ((/* implicit */unsigned char) (-(((/* implicit */int) ((2681172315U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)225))))))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            var_20 = arr_25 [i_5 + 2] [i_7];
            arr_26 [(unsigned char)10] [i_7] [i_7] = ((/* implicit */unsigned char) arr_6 [i_5 + 3] [i_5 - 3] [i_7] [i_5 - 1]);
        }
        for (unsigned int i_8 = 2; i_8 < 16; i_8 += 3) 
        {
            var_21 = arr_9 [i_5] [8U] [i_8];
            var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [18U] [i_5 - 3] [2ULL] [i_8 - 2] [18U])) || (((4766539486379822493ULL) < (4766539486379822466ULL)))));
        }
        for (unsigned char i_9 = 0; i_9 < 17; i_9 += 2) 
        {
            arr_33 [i_5 - 3] [i_5] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((unsigned int) 0U)) : (arr_23 [i_5] [i_5 - 3] [i_5])));
            arr_34 [i_5] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_5 + 3])) ? (((/* implicit */int) arr_18 [i_5 + 2])) : (((/* implicit */int) var_4))));
            var_23 *= ((/* implicit */unsigned int) (unsigned char)31);
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)159))))) || (((/* implicit */_Bool) 17468512543731396226ULL))));
            var_25 += ((/* implicit */unsigned char) arr_27 [i_9]);
        }
        arr_35 [i_5] = ((/* implicit */unsigned char) 4294967295U);
    }
    for (unsigned char i_10 = 1; i_10 < 6; i_10 += 3) 
    {
        var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)0)) ? (13680204587329729165ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))))), (min((((/* implicit */unsigned long long int) var_1)), (13680204587329729131ULL)))))) && (((4766539486379822463ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145)))))));
        arr_38 [i_10] = ((((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)27))) : (6U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_10]))));
        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (unsigned char)76)))))));
    }
    var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
    var_29 += ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */unsigned int) var_4)), (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)84)))))))), ((~(var_6)))));
    /* LoopSeq 1 */
    for (unsigned char i_11 = 0; i_11 < 11; i_11 += 3) 
    {
        var_30 = ((/* implicit */unsigned char) ((4766539486379822467ULL) * (10847621340456627547ULL)));
        var_31 |= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_12)), (min((((/* implicit */unsigned int) (unsigned char)166)), (8U)))));
        var_32 = ((/* implicit */unsigned long long int) min((min((((var_8) % (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [(unsigned char)13] [(unsigned char)13] [i_11]))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_29 [i_11] [i_11])) != (arr_28 [i_11] [i_11])))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 6ULL)))))));
    }
}
