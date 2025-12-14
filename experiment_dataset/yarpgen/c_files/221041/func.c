/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221041
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
    var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_6))));
    var_14 = ((/* implicit */unsigned short) ((unsigned int) (~(((((/* implicit */_Bool) (unsigned short)36457)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [(_Bool)1] [i_0] [i_1] = ((/* implicit */_Bool) (~(((18446744073709551613ULL) * (((/* implicit */unsigned long long int) var_1))))));
                arr_7 [i_0] = max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-15176)) : (((/* implicit */int) var_9))))) < ((~(14915214583017996401ULL)))))), ((~(((/* implicit */int) arr_0 [i_0])))));
            }
        } 
    } 
}
