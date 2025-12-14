/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29027
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_12 ^= ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_2 [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned short) (_Bool)1)))))));
        arr_4 [(unsigned char)7] |= ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) arr_1 [i_0] [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((((/* implicit */int) var_5)) - (4144)))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) >= (-2366609265805093326LL)))) : (((/* implicit */int) arr_0 [i_0]))))));
        var_13 = ((/* implicit */short) var_4);
        arr_5 [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_2 [i_0])) : (min((((var_6) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) (unsigned short)13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-16))))))));
    }
    var_14 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned short) (short)28542))) ? (var_1) : (((long long int) var_0)))) ^ (var_1)));
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (+((~(var_0))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 4; i_1 < 11; i_1 += 2) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)115))))) - ((~(((3940843905U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)16384))))))))))));
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) max((((arr_6 [i_1 - 2] [i_1 + 1]) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 2])))), (((/* implicit */int) ((unsigned short) 354123390U))))))));
            }
        } 
    } 
    var_18 = var_9;
}
