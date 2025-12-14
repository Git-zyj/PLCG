/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205207
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
    var_11 = ((/* implicit */long long int) var_6);
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */int) var_0)) >> (((var_2) + (1172042449))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_7 [i_2] [i_1] [i_0])) : (arr_1 [i_0] [i_1 - 1]));
                    var_13 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (arr_1 [i_0] [i_1 + 1])));
                }
                /* LoopNest 3 */
                for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (signed char i_5 = 2; i_5 < 21; i_5 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (~(((int) ((((/* implicit */int) arr_14 [i_0] [i_1] [i_3] [i_4] [i_4] [i_5] [i_0])) >= (((/* implicit */int) arr_11 [i_1] [i_0] [i_4] [i_4] [i_1])))))));
                                var_14 = ((/* implicit */unsigned long long int) 2147483647);
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) arr_9 [i_0] [0] [22LL]))));
                var_16 -= ((/* implicit */short) (((((!(((/* implicit */_Bool) (unsigned short)32506)))) || (((/* implicit */_Bool) var_0)))) ? (-4269413612209221516LL) : (((/* implicit */long long int) (+(arr_2 [i_0]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (-2147483647 - 1)))));
    var_18 = ((/* implicit */long long int) var_9);
}
