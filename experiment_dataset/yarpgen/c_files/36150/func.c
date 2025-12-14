/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36150
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
    var_15 = ((/* implicit */short) -8981185934735575367LL);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] &= ((short) (unsigned char)213);
        arr_5 [i_0] = arr_3 [i_0];
        var_16 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) == (((/* implicit */int) var_4))));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */short) ((((((/* implicit */int) max((var_14), ((short)10845)))) == (((((/* implicit */_Bool) (short)10855)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_1])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2057804278)) ? (((/* implicit */int) ((unsigned char) arr_3 [0LL]))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (unsigned short)22)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) arr_7 [i_2]))));
            var_19 &= ((unsigned char) ((unsigned int) (short)-10855));
            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-21867)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)-10847))));
            var_21 -= ((/* implicit */unsigned int) ((long long int) (short)(-32767 - 1)));
        }
    }
}
