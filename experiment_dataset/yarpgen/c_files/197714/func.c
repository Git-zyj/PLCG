/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197714
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
    var_15 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 17; i_1 += 3) 
        {
            {
                arr_8 [i_0] [8U] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1] [i_0] [i_0])) ? (((((/* implicit */_Bool) (+(7ULL)))) ? (4294967295U) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)25803)) | (arr_4 [(unsigned short)14] [i_1] [i_0])))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2097151)) ? (-2097166) : (((/* implicit */int) (_Bool)1)))))));
                var_16 = ((/* implicit */int) var_1);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)55258))));
}
