/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231278
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
    var_18 |= ((/* implicit */signed char) (~(((/* implicit */int) var_6))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_19 = arr_1 [i_0] [i_0];
        arr_3 [7U] [i_0] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (signed char)0)))) & ((+(((/* implicit */int) ((((/* implicit */int) (unsigned char)238)) <= (((/* implicit */int) (unsigned char)113)))))))));
        var_20 = ((((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32766))) : (4104823865155930819LL))) + (9223372036854775807LL))) << ((((-(arr_0 [i_0]))) - (15493476058132843547ULL))));
    }
    var_21 = ((((/* implicit */_Bool) ((max((var_9), (((/* implicit */long long int) var_5)))) + (max((var_2), (var_9)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) (unsigned char)28)))))))) : (((min((((/* implicit */unsigned long long int) (unsigned char)23)), (var_8))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -1831520905)))))));
    /* LoopNest 2 */
    for (unsigned char i_1 = 2; i_1 < 16; i_1 += 1) 
    {
        for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max((arr_6 [i_1] [i_1] [i_1 - 1]), (arr_6 [i_1 + 1] [i_1 + 1] [i_2]))))) ^ (3243421015797421689LL)));
                var_23 = ((/* implicit */long long int) min((((/* implicit */int) arr_6 [i_1] [i_2] [i_2])), (((((/* implicit */int) ((_Bool) arr_4 [i_1]))) / (((/* implicit */int) arr_7 [i_1] [i_1] [i_2]))))));
            }
        } 
    } 
    var_24 |= (signed char)122;
}
