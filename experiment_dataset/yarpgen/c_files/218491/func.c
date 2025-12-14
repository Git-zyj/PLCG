/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218491
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
    var_15 = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) (unsigned char)213))))), (max((((/* implicit */unsigned int) var_13)), (var_1))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
    var_16 += ((/* implicit */signed char) ((max((((((/* implicit */_Bool) 5723964589055430892LL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5)))), (var_6))) <= ((+(((/* implicit */int) ((-9223372036854775791LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)162))))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */_Bool) max((var_17), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2] [i_2 + 2] [i_2 - 1])) ? (arr_3 [4ULL] [4ULL] [i_2 + 2]) : (arr_3 [i_1] [i_1 - 1] [i_2 + 1]))))))));
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)236)), (var_10)))))))))));
                    var_19 = ((/* implicit */unsigned int) var_10);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 1; i_3 < 17; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            for (unsigned char i_5 = 1; i_5 < 14; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) arr_12 [i_3] [i_3] [i_3 - 1]))));
                                arr_24 [i_3] [i_3 + 1] [i_4] [i_5 - 1] [i_6] [10U] = ((/* implicit */long long int) var_13);
                            }
                        } 
                    } 
                    arr_25 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((arr_20 [i_3 - 1] [i_4] [i_4] [i_4] [12ULL] [i_5 + 3]) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-19877)) < (var_6))))))) ^ (max((((((/* implicit */_Bool) arr_17 [i_3] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)234))) : (209132197900691786LL))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_16 [14LL] [i_3] [i_5])), (arr_7 [i_4] [i_5]))))))));
                    var_21 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (short)19876)))))) ? (arr_15 [2ULL] [2ULL]) : ((+(arr_7 [i_5] [8LL]))))), (((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_11 [2ULL]), (var_14)))))))));
                }
            } 
        } 
    } 
}
