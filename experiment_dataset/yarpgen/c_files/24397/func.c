/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24397
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
    var_20 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                var_21 = 3602594715U;
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) arr_8 [i_1])) + ((-(arr_1 [i_0]))))))))));
                    var_23 = (-(((/* implicit */int) (short)15664)));
                    var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)36092))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) (+(41577670))))))) : (((/* implicit */int) (_Bool)1))));
                }
            }
        } 
    } 
}
