/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27194
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */short) min((((/* implicit */int) ((signed char) arr_1 [i_1 - 2]))), ((~(((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */unsigned short) var_5)))))))));
                var_11 -= ((/* implicit */unsigned short) ((unsigned long long int) min(((((_Bool)1) ? (((/* implicit */int) (unsigned short)9872)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((arr_0 [i_0] [i_1]), (var_2)))))));
                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) min((max(((_Bool)1), ((_Bool)1))), ((!(((/* implicit */_Bool) var_9)))))))));
            }
        } 
    } 
    var_13 = max((max(((+(1803197310U))), (((/* implicit */unsigned int) ((_Bool) (unsigned char)240))))), (((/* implicit */unsigned int) ((unsigned char) max(((_Bool)1), (var_5))))));
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)(-127 - 1))))), (max((((/* implicit */unsigned int) (_Bool)1)), (var_1)))))), (min((((var_3) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) var_0))))))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                arr_9 [i_3] = ((/* implicit */unsigned long long int) ((_Bool) min(((-(var_7))), (((int) var_2)))));
                arr_10 [i_3] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_6 [i_3])), (arr_8 [i_3] [i_3])))) ? (max((((/* implicit */unsigned int) arr_1 [i_2])), (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_1)))))));
                arr_11 [i_3] = ((/* implicit */unsigned short) max((((long long int) min((((/* implicit */long long int) (unsigned short)2)), (9223372036854775807LL)))), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65534)))), (((/* implicit */int) min((arr_3 [i_3]), (((/* implicit */short) arr_0 [i_2] [i_3]))))))))));
            }
        } 
    } 
}
