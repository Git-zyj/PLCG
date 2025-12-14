/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199747
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) var_9);
                var_20 += ((/* implicit */short) var_12);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned char) var_14);
                var_22 = ((/* implicit */unsigned short) min(((short)24479), (((/* implicit */short) (unsigned char)255))));
                var_23 = ((/* implicit */int) var_4);
                var_24 = ((/* implicit */short) ((((8192) != (((/* implicit */int) ((-1) < (1)))))) ? (((((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_3))))) & (((/* implicit */int) ((8) == (2147483647)))))) : ((+(((/* implicit */int) var_17))))));
            }
        } 
    } 
    var_25 = ((/* implicit */short) var_3);
}
