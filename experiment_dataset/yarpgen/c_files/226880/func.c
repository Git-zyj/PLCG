/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226880
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
    var_15 |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned int) ((signed char) (short)(-32767 - 1)));
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))), (max((-483487406), (((((((/* implicit */int) (short)-26082)) + (2147483647))) >> (((((/* implicit */int) (short)14871)) - (14851))))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            for (short i_4 = 4; i_4 < 21; i_4 += 4) 
            {
                {
                    var_17 = ((_Bool) (_Bool)1);
                    arr_16 [i_2] [i_3] [4] = ((/* implicit */long long int) ((unsigned short) var_14));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) var_12);
}
