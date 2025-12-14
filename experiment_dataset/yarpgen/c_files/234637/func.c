/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234637
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
    var_11 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_12 ^= (((~(((/* implicit */int) arr_1 [i_0])))) % (arr_0 [i_0]));
                arr_5 [i_0] [i_0] [12U] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) (+(min((var_5), (((/* implicit */long long int) 553633326))))));
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                {
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((signed char) (_Bool)0)))));
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) max(((_Bool)0), ((_Bool)1))))));
                }
            } 
        } 
    } 
}
