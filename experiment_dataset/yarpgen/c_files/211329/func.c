/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211329
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
    var_18 += ((/* implicit */int) (!(((/* implicit */_Bool) var_14))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [1] [i_1] [i_2 + 1] [i_3])) ? (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned short)65534)))) ^ (var_2)))) : (min((((/* implicit */unsigned long long int) ((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))), (min((((/* implicit */unsigned long long int) arr_3 [(_Bool)1])), (arr_6 [i_1] [i_1]))))))))));
                        var_20 = ((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_0] [i_0]);
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_10))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
    {
        arr_13 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((((~(9223372032559808512LL))) + (9223372036854775807LL))) >> (((min((18446744073709551615ULL), (arr_6 [i_4] [(unsigned char)5]))) - (8996344073730119389ULL)))))) ? (min((((/* implicit */int) (unsigned char)60)), (((var_3) & (((/* implicit */int) arr_3 [i_4])))))) : (((((((/* implicit */int) arr_2 [i_4] [(unsigned short)7] [i_4])) << (((var_2) + (1755328609))))) >> (((((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234))) : (0ULL))) - (213ULL)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 2) 
        {
            var_22 ^= ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [8LL] [i_5] [(_Bool)1] [5LL]))));
            /* LoopSeq 1 */
            for (short i_6 = 1; i_6 < 13; i_6 += 3) 
            {
                arr_21 [i_5] = ((/* implicit */signed char) ((var_0) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)60)))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_23 *= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned char)64)) ? (((0ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5 + 1] [i_8]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)103))))), (((((/* implicit */_Bool) arr_11 [i_4] [i_5 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)127)), ((unsigned short)1))))) : (min((18446744073709551613ULL), (((/* implicit */unsigned long long int) arr_10 [(short)10]))))))));
                            arr_26 [(unsigned char)12] [i_5] [i_6] [i_6] [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) << (((arr_0 [i_4]) + (1124011331))))) > (((/* implicit */int) arr_22 [i_5] [i_7] [i_6] [i_5] [i_4] [i_4]))));
                            var_24 = ((/* implicit */unsigned short) var_14);
                            var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) arr_15 [i_4] [(unsigned short)7] [i_5]))))) == (((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_12))))))))));
                        }
                    } 
                } 
                var_26 += ((/* implicit */int) ((((((/* implicit */int) var_14)) << (((67108864U) - (67108864U))))) > (((/* implicit */int) ((unsigned char) ((var_17) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)194)))))))));
            }
        }
    }
    var_27 = var_16;
}
