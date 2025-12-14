/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208016
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
    var_16 = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) min((((/* implicit */unsigned char) var_7)), (var_12)))) / (((/* implicit */int) var_14)))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : ((-2147483647 - 1))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((min((((/* implicit */int) min((((/* implicit */unsigned char) var_13)), (arr_7 [i_0] [i_0] [i_0] [i_0])))), (((((/* implicit */int) arr_6 [i_0] [9] [i_2] [i_2])) ^ (((/* implicit */int) var_15)))))) | (((/* implicit */int) var_14))));
                    var_19 = ((/* implicit */unsigned short) ((unsigned long long int) (signed char)76));
                    arr_9 [i_0] [i_0] = ((/* implicit */_Bool) min((arr_8 [2LL] [i_1] [i_2] [i_2]), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)127))) == ((+(var_9))))))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (signed char)57)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-62)) : (((/* implicit */int) arr_7 [i_2] [i_2] [i_1] [i_0]))))))) || (((/* implicit */_Bool) 11572057329273386013ULL))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 6; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_15 [i_3] [i_0] [i_1 - 4] [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (min((var_2), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_2] [i_3 + 1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)76)), (var_4)))) ? ((+(3999839110343840729LL))) : (((/* implicit */long long int) ((unsigned int) var_2))))))));
                                var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned char) -3999839110343840730LL))), (min((((((/* implicit */_Bool) -6086421710891474459LL)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))))), (((/* implicit */unsigned long long int) (signed char)76))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
