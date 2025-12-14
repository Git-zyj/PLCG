/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45615
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
    var_17 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) max((min((var_10), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (var_11))))))), (max((((/* implicit */long long int) min((var_0), (((/* implicit */int) var_9))))), (min((var_14), (((/* implicit */long long int) var_1))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) max((min(((+(var_11))), (var_16))), (min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15)))), (((int) var_4))))));
                arr_6 [i_0] = max(((+(((/* implicit */int) var_3)))), (((((/* implicit */_Bool) ((long long int) 1504190114U))) ? (((/* implicit */int) ((unsigned short) var_1))) : (((((/* implicit */_Bool) var_16)) ? (var_11) : (var_16))))));
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(max((var_0), (((/* implicit */int) var_5))))))) ? (((((/* implicit */_Bool) ((int) var_16))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_4))))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_14))))) : (((/* implicit */long long int) (+(((var_3) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))))))));
                var_19 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_15)))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            {
                var_21 *= ((/* implicit */unsigned short) min((min((((/* implicit */int) max((var_1), (var_1)))), (max((841874506), (((/* implicit */int) (_Bool)0)))))), (var_16)));
                var_22 = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned char) var_12))), (max((((/* implicit */int) var_7)), (var_16)))));
            }
        } 
    } 
}
