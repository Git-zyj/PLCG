/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49332
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
    var_14 = ((/* implicit */unsigned char) var_0);
    var_15 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [(unsigned short)0] &= ((/* implicit */int) var_4);
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (unsigned char)50))));
        arr_3 [i_0] = ((/* implicit */int) max((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))), (((((var_3) | (((/* implicit */long long int) ((/* implicit */int) (short)-28495))))) | (((/* implicit */long long int) (~(((/* implicit */int) (short)21527)))))))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((int) arr_0 [i_1]));
        var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)35983)), (arr_5 [0LL])))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_2))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) max((((long long int) max((-836689800), (((/* implicit */int) (short)28494))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)23793)) ? (836689776) : (((/* implicit */int) (short)-21517)))))));
        arr_8 [i_1] [i_1] = ((/* implicit */int) arr_1 [i_1]);
    }
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-21517)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)175)) && (((/* implicit */_Bool) (unsigned short)2970)))))));
}
