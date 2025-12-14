/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208002
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
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
    var_15 = ((/* implicit */short) (((!(((/* implicit */_Bool) min((-150963240520144504LL), (150963240520144503LL)))))) ? (((/* implicit */long long int) ((unsigned int) max((var_2), (((/* implicit */long long int) var_12)))))) : (max((((long long int) (signed char)-32)), (((/* implicit */long long int) max((((/* implicit */int) (signed char)-35)), (2147483631))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 4; i_2 < 11; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) (((+(arr_9 [i_0] [i_1]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))), (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)31))))), (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3] [i_2] [i_1])) ? (arr_9 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))))))))))));
                            arr_11 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((2827456410599468710LL) - (2827456410599468697LL)))) ? (((((/* implicit */_Bool) arr_10 [i_1] [i_2 - 2] [i_2 - 4] [i_2 - 3] [i_2] [i_2])) ? (((/* implicit */long long int) -1749684698)) : (arr_10 [i_1] [i_2 + 1] [i_2] [i_2 - 2] [i_2] [i_3]))) : (((/* implicit */long long int) 0U))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] = ((/* implicit */unsigned char) -2827456410599468681LL);
                var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)38))))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (10623149284895466857ULL)))));
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_18 = ((/* implicit */unsigned int) ((max((max((150963240520144503LL), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) (~(1749684697)))))) << ((-(((var_10) / (18446744073709551615ULL)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 3; i_5 < 9; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 10; i_6 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((0ULL) % (((/* implicit */unsigned long long int) -282659340))))) ? (1084286803U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                                var_20 = var_4;
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
