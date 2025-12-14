/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208318
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
    var_13 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)14)), ((~(((((/* implicit */_Bool) (signed char)-15)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)13)))))))));
    var_14 = min((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) ^ (144115119356379136ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)-8))))))), (((/* implicit */unsigned long long int) var_12)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (short i_3 = 1; i_3 < 8; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_9), (((/* implicit */int) (signed char)-1)))))))) ^ (((/* implicit */int) (_Bool)1))));
                                arr_11 [i_0] [i_2] [i_2] [i_4 - 1] [i_4] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-7903)), (min((-8723766183014246879LL), (((/* implicit */long long int) (short)3749))))))) ? (2251799813685247ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251)))));
                                var_16 = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_4 - 2] [i_3]);
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((min((var_8), (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (!(((/* implicit */_Bool) 1099511627264ULL)))))))), (17287006591423762700ULL)));
                var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((max((17287006591423762697ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
            }
        } 
    } 
}
