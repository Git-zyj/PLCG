/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26551
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_14 = ((/* implicit */int) min((var_14), ((+(((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) max(((signed char)4), (var_6))))))))));
            var_15 += ((/* implicit */long long int) arr_0 [i_1]);
            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (-(var_13)))), (max((0U), (((/* implicit */unsigned int) arr_2 [i_0] [i_1]))))))) / (min((((/* implicit */long long int) (-(((/* implicit */int) (signed char)66))))), (((((/* implicit */_Bool) (signed char)66)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_0))))))))));
            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) arr_2 [i_0] [i_1]))));
        }
        for (signed char i_2 = 1; i_2 < 16; i_2 += 1) 
        {
            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
            /* LoopNest 3 */
            for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                for (unsigned short i_4 = 1; i_4 < 14; i_4 += 3) 
                {
                    for (signed char i_5 = 1; i_5 < 14; i_5 += 4) 
                    {
                        {
                            var_19 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)11))));
                            arr_16 [i_0] [i_2] [i_3] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_5 + 2] [i_4 + 2] [i_2 + 1])) / (2106213864)))) ? (arr_3 [i_2 - 1] [i_4 - 1] [i_5 - 1]) : (((/* implicit */long long int) min((((/* implicit */int) (signed char)-115)), (2106213864))))));
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) min((max((arr_13 [i_0] [i_2 + 1]), (arr_13 [i_0] [i_2 + 1]))), (((/* implicit */unsigned long long int) ((_Bool) arr_8 [i_2] [i_2 + 1] [i_2]))))))));
        }
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max(((((-(arr_14 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0]))) - (((/* implicit */long long int) 2106213864)))), (((/* implicit */long long int) arr_9 [i_0])))))));
        var_22 *= arr_2 [i_0] [(unsigned short)3];
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (+((-(arr_13 [i_0] [i_6]))))))));
            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_5)), (var_6)))), (arr_18 [i_0] [i_0])))) ? ((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5017))) : (3722078226U))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
            var_25 -= ((/* implicit */_Bool) var_7);
            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)120)), (var_13))))));
        }
        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            var_27 |= ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_22 [i_0])), (var_1)));
            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (~(((arr_18 [(signed char)2] [i_0]) | (((/* implicit */unsigned long long int) ((-5871556494687541334LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-114)))))))))))));
        }
    }
    for (long long int i_8 = 1; i_8 < 12; i_8 += 3) /* same iter space */
    {
        arr_27 [i_8] [(signed char)0] |= 0U;
        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) var_10))));
    }
    for (long long int i_9 = 1; i_9 < 12; i_9 += 3) /* same iter space */
    {
        var_30 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(var_10)))) / (((arr_25 [i_9] [i_9]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_9 + 2] [i_9 - 1] [i_9 - 1] [i_9 + 1] [(signed char)14] [i_9])))))))) ? (((/* implicit */int) min((arr_10 [i_9 + 2] [i_9 + 2] [i_9 + 1]), (arr_10 [i_9 + 2] [i_9 + 1] [i_9 + 2])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) != (((((/* implicit */_Bool) arr_13 [i_9 + 1] [i_9])) ? (((/* implicit */unsigned long long int) 2292906323U)) : (arr_7 [i_9]))))))));
        arr_30 [i_9 + 2] &= ((/* implicit */unsigned int) (signed char)-5);
        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) 572889069U)) < (8443830909355048590ULL))))));
        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((763160238) << (((arr_14 [i_9] [i_9 + 1] [i_9] [i_9 - 1] [i_9 - 1] [i_9]) - (8234010950807248250LL)))))) ? (((((/* implicit */_Bool) arr_24 [i_9] [i_9 + 2])) ? (((/* implicit */unsigned long long int) arr_24 [i_9] [i_9 + 2])) : (arr_13 [i_9 + 2] [i_9]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)60518)) | (((/* implicit */int) (signed char)4))))))))));
    }
    var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) var_7))));
    var_34 |= ((/* implicit */short) ((((/* implicit */_Bool) (-((~(var_4)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (4149992196U)));
}
