/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33038
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-59)) + (2147483647))) >> (((5059918557753293837LL) - (5059918557753293818LL)))));
                    var_19 -= ((/* implicit */long long int) (+(((/* implicit */int) (signed char)70))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (((+(var_15))) < (((((((/* implicit */_Bool) var_16)) ? (var_15) : (((/* implicit */unsigned long long int) var_0)))) + (var_7)))));
    var_21 *= ((/* implicit */short) ((unsigned short) (!(((/* implicit */_Bool) min(((short)2494), ((short)-2493)))))));
}
