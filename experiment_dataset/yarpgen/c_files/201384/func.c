/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201384
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (-3423561277080496485LL))))));
                var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2))) * (18446744073709551605ULL)));
                var_18 *= ((short) ((max((((/* implicit */long long int) arr_1 [(_Bool)0])), (4575657221408423936LL))) / (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [1LL] [i_1])))))));
                var_19 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_1])) % (((/* implicit */int) arr_3 [i_0] [i_1]))))) ? (((/* implicit */int) ((short) (unsigned short)65535))) : ((~(((/* implicit */int) arr_0 [i_0])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */unsigned char) var_7)), (var_11)))))));
    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)56)) ? (((((/* implicit */_Bool) var_16)) ? (var_2) : (((/* implicit */int) var_7)))) : (var_9)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? ((~(((/* implicit */int) (unsigned char)2)))) : (((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)32512)) ^ (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (var_7))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) & (var_16))))));
}
