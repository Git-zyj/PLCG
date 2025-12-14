/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34768
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)128)) ? (min(((-(((/* implicit */int) (unsigned short)36257)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)23358))))))) : (((/* implicit */int) max(((unsigned short)53415), ((unsigned short)12120))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = (-(((/* implicit */int) ((576460752303423487LL) != ((~(var_2)))))));
        arr_4 [6U] [i_0] = ((/* implicit */unsigned long long int) ((min((270582939648ULL), (((/* implicit */unsigned long long int) min(((unsigned short)29296), ((unsigned short)53415)))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3039439813U))))), ((unsigned short)41042)))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        arr_7 [i_1] &= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)12120)) != (((/* implicit */int) (unsigned short)36243))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)41035)) ? (-576460752303423503LL) : (3713299193395648151LL)));
    }
}
