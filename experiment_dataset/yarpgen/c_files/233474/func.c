/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233474
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
    var_15 &= ((/* implicit */int) var_11);
    var_16 = ((/* implicit */unsigned short) (short)12742);
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) max((6042525976384422538LL), (((/* implicit */long long int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) ((long long int) (~(((/* implicit */int) var_10)))))) : (var_3)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((unsigned char) 2ULL)));
        arr_5 [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((unsigned char) (short)-1952))) ? (((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (short)12761))))) : (((/* implicit */int) var_11))))));
        var_18 *= ((/* implicit */short) var_14);
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)111)))))));
        var_20 *= ((/* implicit */unsigned char) arr_3 [10U]);
    }
    for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */int) var_3);
        var_21 = ((/* implicit */_Bool) (unsigned short)20872);
        var_22 = ((/* implicit */unsigned short) arr_6 [i_1]);
        var_23 = ((/* implicit */unsigned char) (+((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65001))) * (var_8)))))));
    }
}
