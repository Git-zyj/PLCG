/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45804
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
    var_17 = ((/* implicit */_Bool) ((((-1597769548) + (2147483647))) >> (((((/* implicit */int) var_16)) - (21)))));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)16106)) << (((((/* implicit */int) (short)32767)) - (32767))))) >> (((/* implicit */int) max((var_7), (((/* implicit */short) (_Bool)1)))))))) ? (-688696962) : (((/* implicit */int) var_16))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */int) ((unsigned char) arr_2 [i_0]));
                var_19 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 0U)) ? (max((((/* implicit */long long int) (short)17540)), (5073821312595633933LL))) : (((/* implicit */long long int) 1019538063))))));
                var_20 = ((/* implicit */signed char) ((((/* implicit */int) max((arr_3 [i_1]), (arr_3 [i_1])))) == ((+(((/* implicit */int) (unsigned char)200))))));
            }
        } 
    } 
}
