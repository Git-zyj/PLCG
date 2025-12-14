/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208220
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
    var_19 = ((/* implicit */long long int) (unsigned char)0);
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_2)) ? (2789857093221813383LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (var_2) : (1499006320U)))))))))));
    var_21 = ((/* implicit */unsigned short) var_16);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) var_0);
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 2789857093221813406LL)) ? (16897176572870709045ULL) : (((/* implicit */unsigned long long int) -5319269600469400453LL)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10)))))))) ? (arr_4 [i_0] [i_1 - 2] [1ULL]) : (((/* implicit */unsigned long long int) var_8))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_15 [i_4] [i_4] = ((/* implicit */unsigned long long int) max(((unsigned char)3), (((/* implicit */unsigned char) arr_7 [i_4 - 1] [i_3] [i_2] [i_0]))));
                                arr_16 [i_3] [i_3] [i_3] [i_3] &= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_3]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
