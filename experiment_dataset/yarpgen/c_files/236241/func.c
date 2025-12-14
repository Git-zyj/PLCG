/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236241
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
    var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) max((((((/* implicit */_Bool) (short)675)) ? (14431853718811008995ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_8)))))), (((/* implicit */unsigned long long int) (short)32750)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */short) ((min((((arr_3 [i_2] [i_2] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) (short)-17059))))), (((/* implicit */long long int) (signed char)9)))) > (((((/* implicit */_Bool) arr_7 [i_0] [i_1 - 1] [i_1 - 1])) ? (arr_7 [(short)5] [i_2] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1])))))));
                    var_12 = (-(((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (var_3))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)67))))));
                    var_13 = ((/* implicit */long long int) var_0);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) arr_10 [i_0] [i_1 - 3] [i_3]);
                                var_15 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned char)104)), (((((/* implicit */_Bool) ((long long int) (unsigned char)152))) ? (9613920505567567158ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)152)))))));
                                var_16 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) arr_4 [i_0] [i_1])) < (arr_10 [i_0] [i_1] [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((5774152303986526123LL), (((/* implicit */long long int) (short)-31191)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [1] [i_1])))))));
                                var_17 = ((/* implicit */int) max((((/* implicit */long long int) min((((/* implicit */unsigned char) ((-212029260) < (((/* implicit */int) var_6))))), (((unsigned char) arr_9 [i_0]))))), (((((/* implicit */_Bool) ((unsigned short) (unsigned char)104))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_4 [i_0] [i_0])), (arr_11 [i_0] [(short)5]))))) : (arr_3 [i_1 - 2] [i_1 - 2] [i_1 - 2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
