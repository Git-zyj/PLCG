/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212869
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_0] |= ((/* implicit */_Bool) ((arr_5 [i_1]) * (var_1)));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 1) 
                {
                    var_19 = ((/* implicit */unsigned int) ((((10ULL) ^ (((/* implicit */unsigned long long int) 8388607)))) | ((~(var_10)))));
                    var_20 = ((/* implicit */signed char) 2265487810U);
                }
                for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    var_21 = ((/* implicit */unsigned int) (((((-(23347065076547975ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-28), ((signed char)110))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (3485146972U))))));
                    arr_11 [i_0] [i_0] [i_3] = ((/* implicit */long long int) 190484496U);
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) -3710715978941466146LL)))) * ((((_Bool)0) ? (797758338U) : (3901855115U)))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) min((-203959230), (826290339)));
}
