/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49388
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
    var_13 = ((/* implicit */long long int) var_1);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */int) min((((/* implicit */unsigned int) (unsigned char)89)), (min((((/* implicit */unsigned int) ((signed char) 4253776166U))), (4253776166U)))));
                arr_7 [i_1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */int) (signed char)22)), (1953166033))))), (562949953421311ULL)));
                var_15 = ((/* implicit */int) min((((41191140U) & (41191158U))), (1965826475U)));
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) 4253776131U))))), (max((-1), (((/* implicit */int) (unsigned char)232))))))) && (((/* implicit */_Bool) min((((/* implicit */int) min(((unsigned short)24794), (((/* implicit */unsigned short) (_Bool)1))))), (-1332316073))))));
                arr_8 [i_1] = ((/* implicit */unsigned short) (+(max((1124853974), (((/* implicit */int) (short)-1))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) 41191158U)))));
                var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)48)))), (max((10843765621090595503ULL), (((/* implicit */unsigned long long int) 1493748619U))))));
            }
        } 
    } 
}
