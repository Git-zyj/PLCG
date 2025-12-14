/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244913
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
    for (int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [22U] [10LL] [(unsigned char)19] = ((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */long long int) ((signed char) (unsigned short)65324))), (max((-2934590728397244788LL), (((/* implicit */long long int) arr_3 [i_0 - 1])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) var_8);
                                arr_15 [i_0] [i_1 + 1] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */short) var_0);
                                var_16 = ((((/* implicit */_Bool) 7347927262651355610ULL)) ? (10458272729881173868ULL) : (((/* implicit */unsigned long long int) 884083393)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_5)))), (var_13));
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) var_8))) & (((/* implicit */int) var_3)))))));
}
