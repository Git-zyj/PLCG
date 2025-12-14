/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232191
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
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_3)) * (((/* implicit */int) (_Bool)1))))));
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (-(((((/* implicit */int) ((var_8) != (var_7)))) * (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_1])))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            {
                                arr_18 [i_0] [i_0] [10U] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_13 [i_1] [i_1] [i_1] [(short)2] [(signed char)6]) >= (((/* implicit */long long int) ((unsigned int) arr_16 [i_1] [i_2] [i_2] [i_6]))))))));
                                arr_19 [i_2] [i_5] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) min((((/* implicit */short) (signed char)127)), ((short)-23807)))) + (2147483647))) << ((+(((/* implicit */int) (_Bool)0))))))) ? (min((((/* implicit */unsigned int) (short)-23835)), (var_16))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)127))))) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) var_10)))))));
                                var_19 &= ((/* implicit */unsigned long long int) ((((unsigned int) ((((/* implicit */_Bool) (short)23799)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)7)) > (((/* implicit */int) arr_4 [i_6]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 1) 
    {
        for (long long int i_8 = 0; i_8 < 19; i_8 += 4) 
        {
            {
                arr_24 [i_7] = ((/* implicit */unsigned int) (+((+(arr_20 [i_8] [i_8])))));
                arr_25 [6LL] [(short)8] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) var_2)) < (((/* implicit */int) min(((unsigned char)65), (((/* implicit */unsigned char) ((arr_20 [i_7] [i_8]) > (((/* implicit */long long int) ((/* implicit */int) var_0)))))))))));
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 19; i_9 += 4) 
                {
                    for (signed char i_10 = 1; i_10 < 18; i_10 += 2) 
                    {
                        {
                            arr_32 [i_7] [i_7] [16U] [i_7] [i_7] = ((/* implicit */unsigned char) (short)-1);
                            arr_33 [i_10] [(short)3] [i_9] [17ULL] [i_7] [i_7] |= ((/* implicit */signed char) ((unsigned int) (~(min((arr_23 [i_7] [i_7]), (((/* implicit */unsigned long long int) arr_31 [i_7] [i_7] [i_7])))))));
                            var_21 ^= ((/* implicit */short) min(((+(arr_27 [i_9] [i_10] [(unsigned char)3] [i_10 + 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3598190803U)) ? (((/* implicit */int) (short)21)) : (((((/* implicit */_Bool) 12018859381763297909ULL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)8634)))))))));
                            /* LoopSeq 2 */
                            for (unsigned int i_11 = 0; i_11 < 19; i_11 += 1) 
                            {
                                var_22 = ((/* implicit */signed char) arr_28 [i_10]);
                                var_23 -= ((/* implicit */short) (((((!(((/* implicit */_Bool) var_9)))) && (((/* implicit */_Bool) arr_26 [i_7] [i_8])))) ? ((+(min((((/* implicit */unsigned int) (signed char)-1)), (10U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                            }
                            for (short i_12 = 0; i_12 < 19; i_12 += 4) 
                            {
                                var_24 = ((/* implicit */short) min((((((/* implicit */_Bool) var_13)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-74))) <= (186960690U))))));
                                var_25 = ((/* implicit */signed char) arr_27 [i_12] [i_12] [i_12] [(signed char)1]);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
