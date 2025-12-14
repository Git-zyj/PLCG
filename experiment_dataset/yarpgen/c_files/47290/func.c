/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47290
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) (+(min((((/* implicit */int) var_1)), (arr_3 [i_0 - 1] [i_0 + 1])))));
                var_11 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)64743)) ^ (((/* implicit */int) (short)-19)))) | (((/* implicit */int) (unsigned char)86))))), (arr_2 [i_0])));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)111))) & ((~(var_3))))))));
        var_13 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) 5226660961284547622ULL)) ? (13220083112425003994ULL) : (((/* implicit */unsigned long long int) 913921655)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [i_2])))));
        arr_8 [i_2] = (!(((/* implicit */_Bool) ((arr_2 [i_2]) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2])))))));
    }
    var_14 = ((/* implicit */unsigned long long int) (signed char)0);
}
