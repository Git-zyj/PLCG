/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216159
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
    var_17 = ((/* implicit */short) var_3);
    var_18 = ((/* implicit */unsigned int) max((var_18), ((((-(var_13))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_1]);
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_20 |= ((/* implicit */unsigned char) (((+(((unsigned long long int) arr_14 [i_0] [i_0] [(unsigned char)19] [i_0] [i_4])))) >> (((max((307889310618030366ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18138854763091521250ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))))))) - (18446744073709551599ULL)))));
                                arr_15 [i_0] [(signed char)9] [i_0] [(unsigned char)9] [i_2] = ((/* implicit */unsigned short) min((((short) (+(((/* implicit */int) arr_14 [i_4] [i_3] [17U] [i_1 - 1] [i_0]))))), (((/* implicit */short) var_3))));
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(short)16] [(short)16] [i_2] [i_2] [6ULL] [(short)16])) ? (((/* implicit */unsigned long long int) arr_12 [i_3] [(signed char)13] [i_2] [i_1] [i_1 - 1] [i_1 - 1] [i_0])) : (var_2)))) ? (307889310618030366ULL) : (((/* implicit */unsigned long long int) (((+(arr_6 [i_2] [(_Bool)1] [3ULL] [i_1 - 1]))) / (((long long int) 307889310618030369ULL)))))));
                                arr_16 [i_2] [i_2] [0U] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) arr_4 [(_Bool)1] [i_0]);
                                var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 307889310618030366ULL))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    for (unsigned char i_6 = 1; i_6 < 18; i_6 += 3) 
                    {
                        {
                            var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((18138854763091521255ULL) / (307889310618030366ULL)))) ? (max((((((/* implicit */_Bool) 307889310618030360ULL)) ? (307889310618030366ULL) : (18138854763091521250ULL))), (arr_7 [i_1 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [3] [i_5] [i_5] [(signed char)10] [i_0] [i_0])))));
                            var_24 += ((/* implicit */unsigned char) var_5);
                            var_25 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18138854763091521229ULL)) ? (18138854763091521249ULL) : (18138854763091521247ULL))))));
                            var_26 = ((/* implicit */unsigned char) max((18138854763091521249ULL), (307889310618030366ULL)));
                            var_27 = arr_21 [i_6] [i_6] [i_5] [i_1] [i_1] [(signed char)12];
                        }
                    } 
                } 
                arr_22 [i_1] &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_1)), (arr_12 [i_0] [(_Bool)1] [i_0] [i_1 - 3] [i_1] [i_1 - 1] [i_1 + 3])))), (max((var_5), (18138854763091521258ULL)))));
            }
        } 
    } 
    var_28 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) max((18138854763091521229ULL), (((/* implicit */unsigned long long int) var_11))))))));
}
