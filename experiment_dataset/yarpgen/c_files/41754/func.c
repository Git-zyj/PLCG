/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41754
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
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 8; i_4 += 1) 
                        {
                            {
                                var_13 = ((((/* implicit */unsigned long long int) -1302739055)) >= (max((((/* implicit */unsigned long long int) arr_17 [i_1] [i_2] [i_2] [i_3] [i_4 - 2] [i_4 + 1] [i_4])), (max((arr_13 [i_3] [i_1]), (((/* implicit */unsigned long long int) var_5)))))));
                                var_14 = ((/* implicit */long long int) ((((/* implicit */int) ((short) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) var_3)) + (18832))))))) / (((/* implicit */int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) 4294967287U))))) && (((/* implicit */_Bool) var_0)))))));
                            }
                        } 
                    } 
                    arr_19 [8U] [i_1] [i_1] [7LL] = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */signed char) var_8)), ((signed char)7)))) || (((/* implicit */_Bool) var_1)))) || (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_0] [i_1] [i_2]))) == (((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_0] [i_2])))))))));
                    var_15 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) var_2)))))), (((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */long long int) ((var_10) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) arr_18 [i_1]))))) : (arr_2 [i_2])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            {
                var_16 *= ((/* implicit */signed char) (-((+(min((1212495931U), (((/* implicit */unsigned int) (_Bool)1))))))));
                var_17 = ((/* implicit */unsigned int) arr_24 [i_6]);
                var_18 = ((max((((/* implicit */unsigned long long int) ((unsigned short) (signed char)-110))), (arr_20 [i_6]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                var_19 = max((-7104984463507279784LL), (((/* implicit */long long int) (signed char)-64)));
            }
        } 
    } 
}
