/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191087
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
    var_11 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) (unsigned short)1417)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) (~(var_6)))) ? (max((var_4), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)16706)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)16678)))))))));
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((/* implicit */unsigned int) ((((_Bool) var_4)) ? (((int) (short)-16698)) : ((-2147483647 - 1))))) : (((unsigned int) (unsigned char)38))));
    var_13 = ((/* implicit */signed char) var_1);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_14 += ((/* implicit */int) var_0);
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10111)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (18446744073709551589ULL)))) ? (((/* implicit */int) ((_Bool) arr_1 [i_0]))) : (((((/* implicit */_Bool) (-(4011374341U)))) ? (((/* implicit */int) ((_Bool) var_8))) : ((+(((/* implicit */int) (short)8184))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_16 = ((/* implicit */short) (-(((/* implicit */int) ((signed char) var_7)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_17 = var_3;
        arr_8 [i_1] = ((/* implicit */signed char) var_3);
        arr_9 [i_1] [(unsigned char)8] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27950))) ^ (var_9)))) ? (min((((/* implicit */unsigned long long int) (unsigned short)10092)), (12ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_1])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)82))) | (((unsigned int) arr_6 [i_1]))))) : (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (18446744073709551615ULL))) >> ((((~(10389532294074070932ULL))) - (8057211779635480623ULL)))))));
    }
    var_18 &= ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
}
