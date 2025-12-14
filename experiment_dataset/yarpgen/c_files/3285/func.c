/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3285
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
    var_19 -= ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) >> (((4294967295U) - (4294967272U)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((long long int) arr_8 [i_3] [9]);
                                var_21 = ((/* implicit */signed char) (~(((/* implicit */int) ((2268343085372004966LL) <= (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_2] [(signed char)5] [i_0])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 18; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)134)) ? (min((((/* implicit */unsigned long long int) min(((-2147483647 - 1)), (((/* implicit */int) arr_1 [i_5] [i_0]))))), ((+(5ULL))))) : (((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) (unsigned char)111)), (-1LL)))))))))));
                                var_23 = ((/* implicit */signed char) (((~(((((/* implicit */_Bool) 8610498317558012416ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-46))) : (arr_7 [8U] [i_1 - 1] [8U] [i_5] [i_6] [i_2]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)34)))))))))));
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-46)), (5ULL)))) ? (((/* implicit */unsigned long long int) ((long long int) (signed char)30))) : (((((/* implicit */_Bool) arr_18 [i_6] [i_5 + 2] [i_6])) ? (arr_18 [i_0] [i_5] [i_6]) : (arr_18 [i_0] [i_1] [i_6])))));
                                var_25 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 17059939197706191667ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (arr_5 [i_0] [i_0] [i_0] [(unsigned short)18]))) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-68)))))) <= ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_2] [7U])) | (1895026217)))) : (arr_7 [i_6] [i_6 - 1] [i_6 + 2] [i_6] [i_6 + 3] [i_1])))));
                                arr_19 [i_6 + 2] [i_6] [(unsigned char)6] [i_1] [i_6] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_16 [i_2] [i_5 + 1] [i_6] [i_5])))) ^ (min((((/* implicit */long long int) arr_14 [i_5] [i_2] [i_1 + 1] [i_0])), (((((/* implicit */_Bool) (signed char)-55)) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)56)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            {
                arr_25 [i_7] [i_7] [i_8] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_18))));
                var_26 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) -1957374339)), (0U)))) : (-6067959825779898152LL))), (((/* implicit */long long int) ((((((/* implicit */unsigned int) -413787432)) * (536805376U))) >> (((/* implicit */int) (!((_Bool)1)))))))));
            }
        } 
    } 
}
