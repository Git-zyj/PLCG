/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23390
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
    var_17 = ((((/* implicit */_Bool) min((((long long int) var_3)), (((/* implicit */long long int) var_0))))) ? (((7948072048306848607ULL) >> (((((/* implicit */int) (unsigned short)64372)) - (64371))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) (_Bool)1);
                            var_19 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */int) (unsigned short)29265)) : (((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) min(((unsigned char)162), (((/* implicit */unsigned char) arr_4 [i_1])))))))));
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)0)) <= (((/* implicit */int) (signed char)-57)))) ? (max((((/* implicit */long long int) var_1)), (arr_5 [10] [10]))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : ((+(arr_2 [(_Bool)1]))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    var_21 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) -135752827)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (short)-27437)))), ((~(((/* implicit */int) (unsigned char)64))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                var_22 |= ((/* implicit */long long int) min(((+(((/* implicit */int) ((unsigned char) var_16))))), (((/* implicit */int) (signed char)-57))));
                                var_23 = ((/* implicit */unsigned long long int) (+(arr_2 [i_0])));
                                var_24 = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_7 [i_5] [i_5] [i_5] [i_5] [i_0] [i_5]))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (1707933079267069785ULL)));
                }
                var_26 ^= ((/* implicit */int) arr_0 [14ULL]);
            }
        } 
    } 
}
