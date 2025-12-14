/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194871
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
    var_17 = ((/* implicit */unsigned short) (!((_Bool)1)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = max((((/* implicit */signed char) (_Bool)1)), ((signed char)127));
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 8; i_2 += 4) 
                {
                    for (unsigned int i_3 = 4; i_3 < 9; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-((((!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((int) arr_7 [i_3] [i_3] [i_3]))) : (min((12961763356923628468ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                            var_18 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) max((((/* implicit */long long int) var_16)), (((((/* implicit */_Bool) ((unsigned short) (unsigned short)3968))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_9)))) : (var_11)))));
    var_20 = ((/* implicit */unsigned int) 12961763356923628464ULL);
    var_21 -= ((long long int) var_12);
}
