/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33760
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
    for (signed char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        var_10 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)(-127 - 1))))))));
        var_11 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_1 [i_0 + 1])))) / (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (signed char)-108)) && ((_Bool)1)))))));
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)19814))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) var_6)), ((short)-19823)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (9691876785698169139ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned short) (_Bool)1)))))))))));
    }
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) -572648514)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (min((((/* implicit */unsigned long long int) var_1)), (1368763540705195521ULL)))))));
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                arr_8 [i_1] = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_0)))) >> (((((((/* implicit */_Bool) var_4)) ? (18446744073709551615ULL) : (var_9))) - (18446744073709551588ULL)))));
                var_14 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_8)))));
            }
        } 
    } 
}
