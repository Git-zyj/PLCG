/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41512
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
    var_10 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_4))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((10ULL), (var_5)))) ? (((4398046511104LL) - (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)30349))))))) : (18446744073709551585ULL)));
    var_11 *= ((/* implicit */unsigned char) (((-(((long long int) var_1)))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_3)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = var_9;
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551605ULL)) ? (var_4) : (((/* implicit */int) arr_4 [i_1 - 1] [i_1]))))) ? (10ULL) : (10ULL)));
                var_12 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((18446744073709551593ULL), (((/* implicit */unsigned long long int) var_4))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [(unsigned short)7])) ? (((/* implicit */int) arr_3 [i_1])) : (33554431)))))))) >= ((+(1705881139U)))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) 33554431);
}
