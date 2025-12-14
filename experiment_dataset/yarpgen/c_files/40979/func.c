/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40979
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
    var_15 -= var_10;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_1] = max((((/* implicit */long long int) ((-6194654495388356845LL) != (arr_6 [i_0])))), (min((min((-6194654495388356874LL), (-6047071501477522617LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_16 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2305843009213693952LL)) ? (max((2305843009213693951LL), (((/* implicit */long long int) (short)32754)))) : (2305843009213693951LL)));
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_3])) ? ((+(((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) != (arr_12 [i_0] [(unsigned char)7] [i_0] [(unsigned char)7]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
    var_19 = ((/* implicit */short) max((((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (1928812525)))), (max((var_13), (((((/* implicit */long long int) 2580082907U)) / (var_13)))))));
}
