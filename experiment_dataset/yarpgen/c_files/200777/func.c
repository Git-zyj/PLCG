/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200777
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
    var_10 = ((((/* implicit */_Bool) 407941135U)) ? ((~((-(3887026160U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26248)) ? (407941131U) : (1099649698U)))) || (((/* implicit */_Bool) (~(407941135U)))))))));
    var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) == (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 2147483647)) : (0ULL))))))) - (407941122U)));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_2 [i_0])) | ((~(3710365687640435150LL)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) arr_3 [i_0]);
                                var_14 = ((/* implicit */_Bool) (unsigned char)100);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 3; i_5 < 20; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            {
                                arr_18 [i_0] [i_5 - 1] [i_0] [(unsigned short)21] [20LL] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((407941131U) ^ (3195317597U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) (_Bool)1)))) == (((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */int) (unsigned char)167)) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_1])))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1099649698U)), (18446744073709551615ULL)))) ? ((~(arr_13 [i_0] [18]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 876730284U))))))))));
                                var_15 = ((/* implicit */unsigned long long int) arr_11 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1]);
                                var_16 = ((/* implicit */signed char) ((((max((arr_10 [i_1] [i_0]), (((/* implicit */long long int) 0U)))) / (((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (407941135U)))))) > (((/* implicit */long long int) ((/* implicit */int) max((arr_7 [i_0] [i_0 + 2] [i_0 + 1]), (arr_7 [i_0] [i_0 - 1] [i_0 + 3])))))));
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967295U)) ? (min((((((/* implicit */_Bool) -6692521285819695608LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)29958))) : (9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483648U)) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)29958)) == (arr_5 [i_0] [i_0] [i_0])))))));
                                arr_19 [i_1] [i_0] = ((/* implicit */unsigned int) (((((((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) 3887026171U)))) + (9223372036854775807LL))) << (((arr_6 [i_0] [i_0 + 3]) / (arr_6 [i_0] [i_0 + 2])))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247))) != (((unsigned int) (unsigned short)65519)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((min((((/* implicit */unsigned int) (short)-4453)), (2956249760U))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_15 [i_0 + 2] [i_1] [i_2] [10] [(_Bool)1] [10])) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [(short)18] [(_Bool)1]))))))))) : (((((/* implicit */_Bool) 3294088038U)) ? (407941120U) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_9 [i_0] [i_1] [i_1] [i_0])), ((short)-32740)))))))));
                }
            } 
        } 
    } 
}
