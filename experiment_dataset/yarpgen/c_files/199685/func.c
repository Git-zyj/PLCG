/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199685
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-29648))) : (((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58821))) : (var_7)))))) ? (((/* implicit */int) ((unsigned char) ((unsigned short) var_7)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775794LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-65))) : (-6573474525378025367LL)))) != (min((((/* implicit */unsigned long long int) (unsigned short)65535)), (14196554351043686259ULL))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */long long int) (!(arr_5 [i_0] [i_0])));
                    arr_10 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) 9223372036854775784LL);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_1 [i_4] [i_1]))));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_1])) ? (arr_3 [i_0]) : (max((((/* implicit */long long int) arr_11 [i_2] [i_0] [i_0])), (-4034556656637275981LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)7953))) : (-9223372036854775782LL)))) ? ((((_Bool)1) ? (((/* implicit */int) arr_12 [i_0] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_1] [23U] [i_4])))) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_3])))) : (((/* implicit */int) ((signed char) arr_8 [i_2] [6ULL])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0]))))), (max((arr_6 [i_0]), (arr_6 [i_0])))));
        arr_16 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) -1581982782))) ? (min((arr_6 [i_0]), (arr_4 [i_0]))) : ((+(arr_8 [i_0] [i_0])))))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((int) -9223372036854775785LL))) : (((arr_12 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) arr_3 [i_0])) : (arr_8 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) -9223372036854775785LL))));
        arr_17 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_0] [i_0]))))) ? (((/* implicit */int) ((arr_1 [i_0] [i_0]) <= (-8042514235398747850LL)))) : (((/* implicit */int) (signed char)127))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1581982752)) ? (arr_13 [i_0] [i_0] [5] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0])))))) : (arr_11 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_12 [i_0] [i_0] [i_0] [i_0]) ? (-9223372036854775782LL) : (-9223372036854775771LL))))))))));
    }
    for (signed char i_5 = 2; i_5 < 11; i_5 += 2) 
    {
        arr_20 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_2 [i_5 - 2]) ? (((/* implicit */int) arr_15 [i_5 - 2] [i_5] [i_5 - 2] [i_5 - 2] [i_5] [i_5])) : (((/* implicit */int) arr_15 [10U] [i_5 - 2] [(unsigned short)21] [i_5 - 2] [i_5 - 2] [i_5]))))), (min((((/* implicit */unsigned long long int) (unsigned short)62332)), (arr_6 [i_5 - 2])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_15 [i_5] [i_5 - 1] [i_5] [i_5] [i_5] [22ULL])))))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_15 [i_5] [i_5] [i_5] [i_5] [i_5 - 2] [i_5]))))))));
        arr_21 [i_5 + 1] [i_5] = ((/* implicit */signed char) arr_19 [i_5]);
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */int) ((short) ((unsigned long long int) (short)-4661)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5 - 2] [i_5])) ? (arr_11 [i_5] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127)))))))))));
    }
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
    {
        for (signed char i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            {
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 1959625237)) ? (((/* implicit */int) (signed char)-86)) : (((/* implicit */int) arr_14 [i_7] [i_6])))), (((/* implicit */int) ((short) arr_1 [i_6] [i_7])))))) ? (((((/* implicit */_Bool) arr_22 [i_7])) ? (((/* implicit */int) arr_22 [i_7])) : (((/* implicit */int) arr_22 [i_7])))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_7] [i_7] [i_6])) ? (((/* implicit */int) (short)4660)) : (((/* implicit */int) arr_26 [i_7] [i_7] [i_7]))))) || ((!((_Bool)1)))))))))));
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    for (long long int i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) (-(((unsigned long long int) ((arr_3 [i_6]) != (arr_23 [i_6]))))));
                            var_25 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_6] [i_8])) ? (((((/* implicit */_Bool) arr_8 [i_7] [i_9])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)11110))) <= (arr_6 [i_6])))) : (((/* implicit */int) ((arr_27 [i_7]) < (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_7])))))))) : (max(((-(((/* implicit */int) arr_28 [i_9] [i_7] [i_6])))), (((((/* implicit */_Bool) arr_31 [i_6] [i_7] [i_7] [i_8] [i_9])) ? (-1959625238) : (1581982774)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) var_4))));
}
