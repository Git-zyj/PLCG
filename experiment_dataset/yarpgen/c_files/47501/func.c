/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47501
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 4; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */signed char) -1);
                    var_11 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4029643690876158833ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((-1), (-18))))))) : ((+(max((-24), (((/* implicit */int) var_3))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 2; i_3 < 21; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_14 [i_3] [i_3])), (((arr_11 [i_4]) - (((/* implicit */long long int) ((/* implicit */int) var_8)))))))))))));
                arr_16 [i_3] = ((/* implicit */short) arr_15 [i_4] [i_4] [i_3]);
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) var_5);
}
