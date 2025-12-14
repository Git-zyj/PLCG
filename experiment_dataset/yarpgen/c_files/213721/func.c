/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213721
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
    var_16 ^= ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                var_17 = ((signed char) ((((/* implicit */_Bool) 9792103377604148072ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))) : (2969845127U)));
                arr_6 [i_1 - 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1080863910568919040LL)) ? (8654640696105403544ULL) : (586913218346461323ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)0))))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_7)) << (((((/* implicit */int) arr_0 [i_0])) - (121)))))))) : (9792103377604148072ULL)));
                var_18 = ((/* implicit */long long int) var_14);
            }
        } 
    } 
}
