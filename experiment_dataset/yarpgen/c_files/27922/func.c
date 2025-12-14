/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27922
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
    var_15 = ((/* implicit */unsigned int) (_Bool)0);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_16 = (+(var_8));
                            arr_11 [i_0] [i_1] [i_0] [i_3] = (_Bool)1;
                            arr_12 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((long long int) (+(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3]))))) << (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) max((arr_7 [i_0] [i_0]), (((/* implicit */unsigned short) (_Bool)1))))) : (var_10))) - (14988)))))) : (((/* implicit */unsigned long long int) ((((long long int) (+(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3]))))) << (((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) max((arr_7 [i_0] [i_0]), (((/* implicit */unsigned short) (_Bool)1))))) : (var_10))) - (14988))) - (37472))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        {
                            arr_20 [i_0] [i_1] [i_0] [i_5] [i_1] [i_0] = ((/* implicit */unsigned short) var_8);
                            var_17 ^= ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
                            arr_21 [i_1] [i_1] [i_0] [(signed char)13] = ((/* implicit */unsigned int) var_8);
                            var_18 = ((/* implicit */long long int) min((arr_7 [i_0] [i_1]), (arr_10 [i_1] [i_1] [i_4] [18U] [i_4] [(signed char)13])));
                        }
                    } 
                } 
                var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) != (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) 255)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_3 [i_0])) + (2147483647))) >> (((2599674833740388742ULL) - (2599674833740388736ULL)))))) : ((~(2599674833740388742ULL)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) var_5);
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (var_4))))) ? (((((/* implicit */long long int) max((var_8), (((/* implicit */int) var_2))))) % (((var_2) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    var_22 |= ((/* implicit */unsigned short) (((+(((unsigned int) var_0)))) | (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (var_10))))))));
}
