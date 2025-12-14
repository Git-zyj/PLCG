/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193836
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-119)), (((long long int) (unsigned short)8128))))) ? (((/* implicit */int) (unsigned short)57407)) : ((~(((/* implicit */int) (signed char)-88))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */int) (+(((unsigned long long int) 14U))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 3; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 9; i_4 += 3) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned short) -1482980445))))), (((/* implicit */int) (!(((/* implicit */_Bool) 131941395333120ULL)))))));
                                var_16 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) ((unsigned short) var_14))) & (((((/* implicit */int) arr_7 [i_0] [i_0] [i_2])) ^ (((/* implicit */int) var_12)))))) : (((/* implicit */int) ((signed char) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) << (0)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_10);
}
