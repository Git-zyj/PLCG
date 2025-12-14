/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22003
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
    var_16 = ((/* implicit */long long int) 1313675421111109217ULL);
    var_17 |= ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) != (((/* implicit */int) min((var_9), (((/* implicit */short) var_14)))))))), ((-(((unsigned int) var_7))))));
    var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)104)))), ((~(-398228086)))))) & (17133068652598442399ULL)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    var_19 &= ((/* implicit */unsigned short) arr_1 [i_0]);
                    arr_7 [i_1 + 2] [i_1] [i_2] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (4503582447501312ULL)))) ? (((((var_6) + (9223372036854775807LL))) >> (((/* implicit */int) arr_2 [i_0] [i_0])))) : (((/* implicit */long long int) max((3U), (3U))))))));
                }
                arr_8 [i_0] [i_0] |= ((/* implicit */signed char) (~(((/* implicit */int) ((short) var_8)))));
            }
        } 
    } 
}
