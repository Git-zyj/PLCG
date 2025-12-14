/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212632
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
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) max((((/* implicit */unsigned short) ((short) min((var_6), (var_6))))), (var_5))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 8; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 7; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_1] [i_4] [i_2] [i_0] = ((/* implicit */long long int) max((((/* implicit */short) ((_Bool) arr_5 [i_1] [i_2 + 3] [i_1]))), (arr_3 [i_0])));
                                var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)8)), (((((/* implicit */_Bool) var_5)) ? (arr_4 [i_3 + 1] [i_2 + 1] [i_2 + 3]) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_13))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    for (int i_6 = 1; i_6 < 10; i_6 += 4) 
                    {
                        {
                            var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(signed char)5])) ? (arr_7 [1LL] [i_6 - 1] [i_6 - 1] [i_6 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_6])))))) ? (max((arr_7 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 + 1]), (((/* implicit */long long int) arr_10 [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 + 1])))) : (((((arr_9 [i_0] [i_1] [i_5] [i_6]) != (((/* implicit */long long int) var_14)))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_5] [i_6])) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)111))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-72))))));
                            var_18 *= ((/* implicit */signed char) min((var_12), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_11 [i_6] [0LL] [8U] [7LL])) || (((/* implicit */_Bool) (signed char)-66))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */long long int) (_Bool)1);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 21; i_7 += 2) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 21; i_9 += 1) 
                {
                    for (long long int i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) min((var_20), (((((((((/* implicit */long long int) (-(((/* implicit */int) var_7))))) - (max((arr_20 [i_7] [i_8]), (((/* implicit */long long int) arr_26 [i_10] [i_9] [(signed char)15] [i_7])))))) + (9223372036854775807LL))) << (((max((((/* implicit */int) ((((/* implicit */int) arr_24 [i_7] [i_8] [i_9] [i_10])) != (((/* implicit */int) var_5))))), ((+(((/* implicit */int) (signed char)81)))))) - (81)))))));
                            arr_29 [i_8] [9ULL] [i_9] = ((/* implicit */short) min((((/* implicit */long long int) ((unsigned char) (unsigned char)208))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_7] [i_7] [i_7]))) : (((long long int) arr_22 [i_10] [i_8] [i_7]))))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_19 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) 9223372036854775807LL))))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_8] [9U] [i_9] [i_8]))) : (min((((long long int) arr_24 [i_9] [i_9] [i_9] [i_9])), (((/* implicit */long long int) arr_25 [i_10] [i_9] [i_8] [i_7]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 21; i_11 += 2) 
                {
                    for (unsigned char i_12 = 2; i_12 < 19; i_12 += 3) 
                    {
                        {
                            arr_35 [i_7] [i_7] [i_8] [(_Bool)1] [i_12] [(short)3] = var_9;
                            var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_7] [17LL] [i_11] [i_12])) ? (((/* implicit */int) (((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_26 [i_11] [i_11] [i_11] [i_12])) + (17249))))) == (((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) & ((-9223372036854775807LL - 1LL))))))) : (((/* implicit */int) var_2))));
                            var_23 = (signed char)126;
                            var_24 |= ((/* implicit */signed char) (-(max((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (-9223372036854775807LL))), (((/* implicit */long long int) ((int) (short)16905)))))));
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (~(((((((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_7] [i_7] [i_11] [i_12]))) & (var_12))) + (9223372036854775807LL))) >> (((((((var_12) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_32 [i_7] [i_7] [i_8] [i_11] [i_12])) + (3304))) - (28))))) - (8599572281071223933LL))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */int) var_13);
    var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) var_0))));
}
