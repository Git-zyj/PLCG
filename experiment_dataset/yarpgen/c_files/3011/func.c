/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3011
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_7 [i_1 + 2]), (((/* implicit */unsigned int) ((unsigned char) arr_4 [i_2] [i_1] [i_0])))))) && (((/* implicit */_Bool) arr_5 [i_0] [i_1]))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned short)23415)) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) (signed char)74)))), (((((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_4])) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) : (arr_10 [i_0] [i_1] [i_1] [i_3] [i_1]))) : ((+(((/* implicit */int) (_Bool)1))))))));
                                arr_14 [i_4] [i_3] [i_2] [9ULL] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5695506189274918480LL)))))) & (max((((/* implicit */long long int) (_Bool)1)), (5357760466645613782LL))))), (((/* implicit */long long int) (_Bool)1))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) (((-((~(((/* implicit */int) (_Bool)1)))))) != (min((((/* implicit */int) ((unsigned char) arr_3 [i_3]))), (arr_10 [i_0] [i_0] [i_2] [i_1 + 2] [i_0])))));
                                arr_16 [i_4] [i_1] [i_3] [10U] [i_1] [i_1] [i_0] = ((long long int) (_Bool)1);
                                var_18 = ((/* implicit */unsigned short) (-(((unsigned long long int) (unsigned short)65534))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) var_3);
    var_20 |= ((/* implicit */short) -151480618403929288LL);
    var_21 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */unsigned int) min((((/* implicit */int) var_3)), (var_13)))) >= (3575085324U)))), (min((((var_5) ? (((/* implicit */int) (_Bool)1)) : (var_0))), (((/* implicit */int) var_6))))));
    var_22 ^= ((/* implicit */_Bool) ((((((/* implicit */int) var_7)) / (((/* implicit */int) var_15)))) + (var_4)));
}
