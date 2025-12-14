/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41186
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
    for (signed char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_1 [i_0 - 2]))) >> (((((/* implicit */int) arr_1 [i_0 + 2])) + (18293)))));
        var_19 = ((/* implicit */short) min((min((((/* implicit */int) (short)27154)), ((+(((/* implicit */int) (signed char)-114)))))), ((-(((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_0 [i_0]))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)477)) ? (arr_5 [i_1] [i_1]) : (((/* implicit */int) arr_0 [i_1])))))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                {
                    var_21 = arr_5 [i_1] [i_1];
                    var_22 = ((/* implicit */short) min((var_22), (arr_7 [i_3] [i_2] [i_3])));
                }
            } 
        } 
    }
    for (short i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        var_23 = ((/* implicit */signed char) (-(((((/* implicit */int) min((((/* implicit */short) (unsigned char)176)), (var_17)))) << (((((/* implicit */int) arr_6 [i_4])) - (53)))))));
        var_24 = (_Bool)1;
        var_25 -= ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_4] [i_4])) && (((/* implicit */_Bool) var_6))))), (((((((/* implicit */int) arr_2 [i_4])) > (arr_5 [i_4] [i_4]))) ? (min((arr_12 [i_4]), (((/* implicit */long long int) arr_0 [i_4])))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)181)), ((short)477)))))))));
    }
    var_26 |= ((/* implicit */signed char) min((min((((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (unsigned char)171))))), (max((((/* implicit */int) (_Bool)1)), (-820790577))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4192)) ? (((/* implicit */int) (unsigned char)152)) : (((/* implicit */int) (short)15125))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) -5625545739284363901LL)))))))));
    var_27 = ((/* implicit */long long int) 1400047683U);
    /* LoopNest 2 */
    for (long long int i_5 = 1; i_5 < 24; i_5 += 2) 
    {
        for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_7 = 3; i_7 < 21; i_7 += 4) 
                {
                    var_28 = ((/* implicit */int) arr_18 [i_5]);
                    var_29 -= ((((((/* implicit */int) var_13)) | (((/* implicit */int) (unsigned char)74)))) >> (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-4192)) : (((/* implicit */int) var_10)))) + (4193))));
                    var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5 + 1]))) ^ (arr_16 [i_7 - 1] [i_7 + 3]))))));
                }
                for (unsigned char i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)168)) < (((/* implicit */int) (short)-17600)))))));
                    var_32 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)35242)) | (((/* implicit */int) (unsigned char)178))));
                    var_33 = ((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) min(((short)-2089), (var_0))))) * (1575302554U))), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)4192)))))));
                    var_34 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_17 [i_5] [i_6])) ? (arr_21 [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1221826543)) ? (var_15) : (((/* implicit */int) (short)2236))))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6] [i_6] [i_6] [i_6]))) : (arr_20 [i_5] [i_5] [i_5])))) ? ((~(((/* implicit */int) arr_17 [i_8] [i_6])))) : (((/* implicit */int) var_2)))))));
                }
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        {
                            arr_29 [i_9] [i_6] [i_6] [i_10] [i_9] [i_5] = ((/* implicit */int) arr_21 [i_5 - 1] [i_10] [i_9] [i_10]);
                            arr_30 [i_10] |= ((/* implicit */signed char) max((-128522555), (((((/* implicit */_Bool) arr_17 [i_10] [i_10])) ? (((((/* implicit */int) arr_14 [i_10])) + (((/* implicit */int) (short)2236)))) : (((/* implicit */int) (signed char)24))))));
                            arr_31 [i_5] [i_6] [i_5] [i_5] [i_5] [i_5] = (i_6 % 2 == 0) ? (((/* implicit */short) ((min((var_8), (((/* implicit */long long int) var_13)))) << (((arr_28 [i_6] [i_6] [i_6] [i_6]) - (837359371)))))) : (((/* implicit */short) ((min((var_8), (((/* implicit */long long int) var_13)))) << (((((arr_28 [i_6] [i_6] [i_6] [i_6]) + (837359371))) + (1137055799))))));
                            arr_32 [i_5] [i_5] [i_5] [i_10] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_23 [i_5] [i_10] [i_9] [i_10])), (arr_20 [i_9] [i_10] [i_9])))) ? (((long long int) arr_14 [i_9])) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_19 [i_5]))))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) min((arr_17 [i_5 + 1] [i_10]), (((/* implicit */short) var_13))))) : (min((arr_28 [i_5 - 1] [i_5] [i_10] [i_5]), (((/* implicit */int) var_12)))))) : (min((((/* implicit */int) var_4)), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) var_13))))))));
                            arr_33 [i_5] [i_9] [i_6] [i_6] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_35 |= ((/* implicit */_Bool) var_6);
}
