/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27559
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
    var_16 += ((/* implicit */signed char) max((((((((/* implicit */_Bool) 13119756058931115734ULL)) ? (13119756058931115727ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65533))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((var_1) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))), (var_13))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                var_17 ^= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 - 2] [i_1 + 1])) ? (arr_3 [i_1 - 2] [i_1 - 1] [i_1 + 1]) : (arr_3 [i_1 + 2] [i_1 - 2] [i_1 + 1])))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((4221941542365095489ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-117)))));
                arr_5 [i_1] [i_1 - 2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) << (((/* implicit */int) ((var_10) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))) ? (((arr_0 [i_1 - 1]) * (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_3 [i_0] [i_0] [i_0])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 17; i_4 += 2) 
                {
                    for (signed char i_5 = 2; i_5 < 17; i_5 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_10 [i_4 - 2])) ? (((/* implicit */unsigned long long int) ((arr_8 [i_3]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (max((13119756058931115718ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) < (((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3]))) == (arr_10 [i_3])))))))));
                            arr_15 [i_2] [i_4] = ((arr_14 [i_5 + 1] [i_3] [i_4] [i_5 - 2] [i_4] [i_4]) % (((((/* implicit */_Bool) arr_14 [i_2] [i_4 - 2] [i_4 - 3] [i_4 - 2] [i_4 + 2] [i_2])) ? (((arr_7 [16U]) ? (((/* implicit */unsigned int) arr_11 [i_2])) : (1820503011U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-83)) : (arr_6 [i_4] [i_2])))))));
                            arr_16 [i_5] [i_3] [i_3] [i_2] = ((/* implicit */int) max((((/* implicit */short) max((((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_6 [i_2] [i_4])) == (var_10)))), (arr_9 [i_5] [i_4] [i_2])))), (var_6)));
                        }
                    } 
                } 
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_7 [i_3]) && (arr_7 [i_2]))))) : (((unsigned int) max((var_3), (var_3))))));
                arr_17 [i_3] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) arr_11 [i_3])), (var_10))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) var_7)))))));
            }
        } 
    } 
    var_20 += ((/* implicit */unsigned char) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2)))) == (((/* implicit */int) var_4)))))));
}
