/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218081
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
    var_19 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((9223372036854775802LL) - (((/* implicit */long long int) var_12))))) ? ((~(((/* implicit */int) (short)-12134)))) : (((/* implicit */int) ((_Bool) (unsigned char)18))))));
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? ((((~(180572334U))) ^ (((/* implicit */unsigned int) (~(2147483647)))))) : (1695463007U)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((((11581369656378614655ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)80))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (arr_0 [i_0] [(signed char)2])))) || ((!(((/* implicit */_Bool) (unsigned char)9))))))));
        var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((((~(8887137571873757722LL))) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)62947)) - (62947)))))) ? (((((/* implicit */_Bool) (short)32762)) ? (9223372036854775794LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)19)))))))) : (((/* implicit */long long int) -1))));
    }
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-10514))));
                arr_8 [i_1] = ((/* implicit */short) ((signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 6865374417330936955ULL))))))));
            }
        } 
    } 
}
