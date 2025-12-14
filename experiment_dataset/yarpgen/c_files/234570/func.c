/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234570
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [14U] [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((unsigned char) var_13))), (min((9223372036854775781LL), (-9223372036854775806LL)))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_14 [i_2 + 1] [i_2 + 1] [0LL] [(signed char)12] = ((/* implicit */signed char) ((long long int) max((((/* implicit */signed char) var_14)), (var_7))));
                            arr_15 [i_0] [i_0] [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_2] [(signed char)1] [i_2 + 4] [i_1 + 1])) | (((/* implicit */int) var_15))))));
                            var_19 = min((((/* implicit */long long int) (_Bool)1)), (-9223372036854775787LL));
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_16)), (((unsigned long long int) min((((/* implicit */short) var_7)), ((short)-23297)))))))));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) -9223372036854775806LL))));
                        }
                    } 
                } 
                arr_16 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned int) arr_3 [i_1 - 1] [i_1 - 1])), (var_6))));
                arr_17 [i_1 - 2] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((((/* implicit */int) var_2)) & (((/* implicit */int) var_2)))) > (((/* implicit */int) ((signed char) var_10))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            {
                arr_25 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) arr_19 [i_4] [i_4]))))), (min((max((-9223372036854775794LL), (((/* implicit */long long int) -188166731)))), (((((/* implicit */long long int) 4294967293U)) | (-9223372036854775802LL)))))));
                /* LoopNest 3 */
                for (signed char i_6 = 2; i_6 < 9; i_6 += 2) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            {
                                arr_33 [i_4] [(unsigned char)8] [i_5] [(_Bool)1] [i_8] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_2)) != (188166722))))))) > (((((/* implicit */_Bool) arr_13 [i_4] [i_4] [i_4] [i_4] [i_6 - 1] [22LL])) ? (((/* implicit */unsigned long long int) arr_10 [i_4] [i_5] [i_5] [i_7])) : (arr_13 [i_4] [i_5] [10ULL] [i_5] [i_6 + 1] [i_5])))));
                                arr_34 [i_4] [i_4] [i_5] [(short)5] [i_5] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((((/* implicit */int) min((var_9), (var_9)))) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))), (min((4072036254U), (((/* implicit */unsigned int) arr_26 [i_6] [i_6] [i_6] [i_6 - 2]))))));
                                var_22 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (-9223372036854775793LL)))) ? (((long long int) (unsigned char)205)) : (((/* implicit */long long int) ((((/* implicit */int) var_14)) | (((/* implicit */int) (unsigned char)244))))))), (((/* implicit */long long int) ((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)8184))) : (var_17))))));
                                arr_35 [2U] [i_5] [2U] [(unsigned char)4] [i_8] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_10)), (var_0))))) ^ (max((((/* implicit */long long int) arr_11 [i_4] [i_5])), (-627284315334489693LL)))));
                            }
                        } 
                    } 
                } 
                arr_36 [i_5] = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) -9223372036854775794LL)) : (arr_13 [i_5] [i_5] [i_5] [(short)1] [(_Bool)1] [i_5]))), (((/* implicit */unsigned long long int) ((arr_27 [8U] [i_5] [i_5] [8U]) ? (((/* implicit */int) (signed char)74)) : (((/* implicit */int) arr_27 [7U] [i_4] [i_5] [i_5])))))));
            }
        } 
    } 
}
