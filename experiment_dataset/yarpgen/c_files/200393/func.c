/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200393
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [i_1] [(unsigned char)2] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_3 [i_0] [1LL] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) -773595025))))) : (((/* implicit */int) min((arr_4 [i_0] [i_0] [i_0]), ((unsigned short)65509)))))), (max((773595013), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)7491)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))))));
                var_10 ^= ((/* implicit */_Bool) ((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned long long int) 773595013);
        arr_11 [i_2] = ((/* implicit */_Bool) max((773595028), (-773595028)));
    }
}
