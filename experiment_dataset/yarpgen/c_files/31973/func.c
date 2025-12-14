/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31973
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
    var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))));
    var_20 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_15), (((/* implicit */long long int) var_5)))))))), ((-(var_18)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */short) (_Bool)0);
                arr_7 [12] [i_1] [i_0] = ((/* implicit */int) min((arr_5 [8ULL] [i_0] [i_0]), (max((((((/* implicit */unsigned int) ((/* implicit */int) var_17))) ^ (var_7))), (((/* implicit */unsigned int) ((262143U) > (2459650007U))))))));
                var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (signed char)38)), (10694314086188427661ULL)));
                arr_8 [i_0] [i_1] = ((/* implicit */long long int) ((_Bool) var_2));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 3; i_2 < 11; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            {
                var_23 ^= ((/* implicit */signed char) 4194303LL);
                arr_13 [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) ((short) arr_11 [i_2] [i_2]))))));
            }
        } 
    } 
}
