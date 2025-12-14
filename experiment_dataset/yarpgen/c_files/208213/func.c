/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208213
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
    var_16 = ((signed char) max((((/* implicit */unsigned int) var_14)), (((((/* implicit */_Bool) var_10)) ? (3376476458U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)81)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))));
        arr_2 [i_0 - 4] [i_0] = ((/* implicit */signed char) var_15);
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-6116)) ? (((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned int) var_14))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) ^ (697808060U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-30755))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)252)) | (((/* implicit */int) (signed char)74)))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_1 = 1; i_1 < 13; i_1 += 1) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            {
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_7))));
                var_20 += ((/* implicit */signed char) var_12);
            }
        } 
    } 
}
