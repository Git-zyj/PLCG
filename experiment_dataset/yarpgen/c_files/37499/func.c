/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37499
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
    for (signed char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_19 = (!(((/* implicit */_Bool) 18210486828647567490ULL)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    arr_8 [(unsigned short)15] [(unsigned short)15] [(unsigned short)1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)11104))));
                    var_20 = ((/* implicit */long long int) ((((5795730465202969136ULL) < (((/* implicit */unsigned long long int) -3303735888535137628LL)))) ? (((((/* implicit */_Bool) 11783268232290584372ULL)) ? (523776) : (((/* implicit */int) (signed char)1)))) : ((+(((/* implicit */int) (signed char)12))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned int) ((unsigned long long int) ((283726776524341248ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)128))))));
                        arr_12 [0U] [i_1] = ((unsigned short) ((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 3; i_4 < 17; i_4 += 4) 
                        {
                            var_22 = ((((((/* implicit */long long int) 4189750710U)) != (17179869056LL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-23)) | (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) 2047ULL)) ? (12004591035689599871ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                            var_23 += ((/* implicit */unsigned short) ((((unsigned long long int) 2528849331U)) / (((/* implicit */unsigned long long int) ((-784308479) - (((/* implicit */int) (signed char)-84)))))));
                            var_24 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 13280718534229839234ULL))))));
                            arr_16 [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            arr_19 [i_0 + 1] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) (~(-2147483643)));
                            arr_20 [7U] [i_3] [i_2] = ((/* implicit */signed char) 784308481);
                            arr_21 [i_0] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-4108))));
                            var_25 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (short)-4096)) : (((/* implicit */int) (signed char)-14))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) 18446744073709549568ULL)) ? (((/* implicit */unsigned long long int) 803632806U)) : (623023802474869933ULL))));
                            var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)40980))));
                        }
                    }
                    arr_24 [i_2] [i_1] [i_0 - 1] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)15847))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */_Bool) max(((-(((((/* implicit */_Bool) (unsigned short)2682)) ? (1766117966U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) max((((972418497U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-14))))), (((511) < (-2147483636))))))));
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (int i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            {
                var_29 = ((/* implicit */unsigned long long int) min((var_29), (min((max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)49685)), (1953265780U)))), (((unsigned long long int) 12U)))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 10339887745799535410ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4))) : (972418498U))) + (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (896649843)))))))))));
                arr_30 [i_8] [i_8] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (((long long int) (_Bool)1))));
                var_30 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)111)), (16376U)))) ? (((/* implicit */int) ((unsigned short) (short)511))) : (((/* implicit */int) (unsigned short)2047)))));
            }
        } 
    } 
    var_31 = ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)110)), (4294967271U))))))) != (((/* implicit */int) var_0)));
}
