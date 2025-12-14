/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245587
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
    var_19 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 3; i_2 < 16; i_2 += 1) 
                {
                    arr_7 [i_2 - 3] [i_0] [i_2 + 1] [i_2 - 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)23430)) ? (arr_2 [i_0] [i_1] [i_0 - 1]) : (((/* implicit */long long int) arr_3 [i_0 - 1])))), (((8202940371817062035LL) << (((((/* implicit */int) (unsigned short)23427)) - (23427)))))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2 - 1])) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)23420))) & (-8202940371817062059LL))) : (max((arr_6 [i_1]), (((/* implicit */long long int) var_17)))))) : (((/* implicit */long long int) ((/* implicit */int) var_16)))));
                    var_20 += ((/* implicit */int) arr_4 [i_0 - 1] [i_1] [i_2]);
                }
                var_21 = ((/* implicit */unsigned int) arr_2 [i_0 - 1] [i_1] [i_1]);
                var_22 += (-(min((((/* implicit */long long int) (signed char)-103)), ((+(arr_1 [(unsigned short)14]))))));
                var_23 |= (!(((/* implicit */_Bool) arr_6 [i_1])));
                var_24 -= ((/* implicit */short) max((6298128605143640544ULL), (((/* implicit */unsigned long long int) (unsigned short)7))));
            }
        } 
    } 
}
