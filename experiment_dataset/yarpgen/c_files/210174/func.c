/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210174
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
    var_17 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((var_10) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-106)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) (signed char)-127)))) : (((/* implicit */int) ((unsigned char) var_6))))), (((/* implicit */int) var_15))));
    var_18 -= ((/* implicit */unsigned int) var_15);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) max((((/* implicit */unsigned short) (signed char)11)), ((unsigned short)42121))))));
                arr_5 [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)49))) / (-2868450536034970305LL)))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 9; i_4 += 1) 
                        {
                            {
                                arr_12 [(unsigned short)0] [(short)6] [i_2] [i_3] [i_0] [(unsigned short)2] [(signed char)3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((6721263858791823831ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-12))))))) % (((((/* implicit */_Bool) (unsigned char)83)) ? (-6983118896765072558LL) : (8434425076152940875LL)))))) || (((((/* implicit */int) ((unsigned char) 0U))) == (((/* implicit */int) var_8))))));
                                arr_13 [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 607624865U)) || (((/* implicit */_Bool) 1749302473039721207LL))));
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */int) (signed char)-114)) : (1307720748)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
