/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218892
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
    var_16 = ((/* implicit */unsigned int) max((var_16), (min((max((((/* implicit */unsigned int) ((17966815106382920673ULL) >= (((/* implicit */unsigned long long int) 16383U))))), (min((1992422387U), (((/* implicit */unsigned int) var_7)))))), (2302544909U)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 7; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_3])) ? (2302544898U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((arr_3 [i_3]) >> (((-1652939060) + (1652939123))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))) >> (((((((((/* implicit */int) (unsigned short)65535)) >> (((((/* implicit */int) arr_5 [6ULL] [i_2 + 1] [i_3])) - (211))))) - (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (arr_9 [i_0] [i_0] [i_1] [i_2 - 3] [i_2] [i_0])))))) + (143)))));
                            arr_11 [i_0] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) 1886353166U);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        {
                            var_18 -= ((/* implicit */long long int) var_0);
                            var_19 = ((/* implicit */unsigned int) max((var_19), (min((((/* implicit */unsigned int) max(((~(((/* implicit */int) (signed char)-102)))), (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_12 [i_0] [i_1] [i_0] [i_5])), (-164161495107507440LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) var_6))))) : (arr_10 [i_4] [i_5])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_11)) >> (((2147483647) - (2147483641))))), (((/* implicit */int) var_8)))))));
}
