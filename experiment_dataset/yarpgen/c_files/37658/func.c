/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37658
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            arr_14 [i_3] [i_3] [i_3] = ((/* implicit */long long int) (-((~(263420252)))));
                            var_20 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((263420252), (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)(-127 - 1)))))) : (((((/* implicit */_Bool) (unsigned short)20991)) ? (((/* implicit */long long int) 263420252)) : (20LL)))))), ((((-(8594271781207998230ULL))) % (((/* implicit */unsigned long long int) -21LL))))));
                            var_21 = ((/* implicit */signed char) (-((-(((/* implicit */int) (signed char)-39))))));
                        }
                    } 
                } 
                var_22 |= ((/* implicit */unsigned short) max((min((1LL), (((/* implicit */long long int) (unsigned short)17442)))), (((/* implicit */long long int) ((((/* implicit */_Bool) -2)) ? (((/* implicit */int) (short)15829)) : (((/* implicit */int) (unsigned char)122)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        for (short i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 24; i_6 += 3) 
                {
                    for (long long int i_7 = 1; i_7 < 20; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-1))))), (((((/* implicit */_Bool) arr_25 [i_8] [i_7] [i_5])) ? (((/* implicit */unsigned long long int) var_15)) : (var_9))))) != (((/* implicit */unsigned long long int) arr_24 [i_4] [i_4] [i_4] [i_4])))))));
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-24207)) ? (((/* implicit */long long int) var_19)) : (((((/* implicit */long long int) min((((/* implicit */int) var_17)), (arr_25 [(signed char)14] [(signed char)14] [(signed char)14])))) + (arr_20 [i_7 + 4])))));
                                var_25 = ((/* implicit */int) min((((((/* implicit */_Bool) var_11)) ? (786043437U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned int) (~((~(((/* implicit */int) var_4)))))))));
                                arr_28 [i_4] [i_5] [i_6] [i_6] [(unsigned char)9] [i_8] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */unsigned int) (-(-2)))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_27 [i_4] [i_5] [i_8] [i_7 - 1] [i_5] [i_8])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_9 = 2; i_9 < 21; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        for (short i_11 = 0; i_11 < 24; i_11 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) arr_27 [i_5] [i_5] [i_9] [i_5] [18ULL] [i_9 - 2])) ? (((/* implicit */unsigned long long int) var_6)) : (var_1)))));
                                arr_35 [i_9] [i_5] [i_9] [i_9] [i_11] [i_10] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (unsigned short)48093)) : (1414622300)))));
                                var_27 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) (unsigned char)127)))), ((-(((/* implicit */int) arr_30 [i_9] [i_9 + 3] [i_9 - 2]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_12 = 1; i_12 < 21; i_12 += 3) 
                {
                    for (long long int i_13 = 0; i_13 < 24; i_13 += 3) 
                    {
                        for (int i_14 = 2; i_14 < 23; i_14 += 2) 
                        {
                            {
                                arr_44 [i_12] [i_12] [i_12] [i_12] [i_14] [i_4] [(unsigned char)3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)63))));
                                var_28 = ((/* implicit */int) max((var_28), ((~((+(((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
