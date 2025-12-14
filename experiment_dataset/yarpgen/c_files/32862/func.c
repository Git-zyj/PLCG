/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32862
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
    var_18 = ((/* implicit */unsigned short) min((var_18), (var_11)));
    var_19 = ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (0ULL))))) > (((/* implicit */int) ((-227574158) == (((/* implicit */int) var_6)))))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        {
                            arr_11 [i_3] [i_3] [i_0] [i_3] [i_3] = max((arr_7 [i_0] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (var_14)))) || (((/* implicit */_Bool) (unsigned short)10269))))));
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) arr_3 [i_0] [i_1] [i_3]))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((arr_1 [i_0] [i_1]) / (arr_1 [i_0] [i_1])))) / (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (arr_7 [2ULL] [i_1]) : (arr_7 [(short)0] [i_1]))))))));
                var_23 *= ((/* implicit */unsigned short) -227574158);
            }
        } 
    } 
}
