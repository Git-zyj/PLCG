/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237599
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            arr_7 [i_0] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((((((/* implicit */int) min((arr_0 [i_0]), (arr_4 [i_1])))) + (2147483647))) << (((var_18) - (17823842315722063785ULL)))))) : ((~(arr_6 [(_Bool)0] [(_Bool)0] [i_0])))));
            arr_8 [i_0] [i_0] = ((/* implicit */short) arr_5 [i_0] [(_Bool)1]);
        }
        var_20 += ((/* implicit */_Bool) min((1677597750U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (short)3959)) : (((/* implicit */int) var_17))))) && ((!(((/* implicit */_Bool) (unsigned char)50)))))))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)10514)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (unsigned short)55039)))), ((((_Bool)0) ? (((/* implicit */int) (unsigned short)10525)) : (((/* implicit */int) (unsigned short)10514))))))) ^ (arr_5 [i_0] [9U])));
    }
    var_22 = ((/* implicit */unsigned char) (~(var_8)));
}
