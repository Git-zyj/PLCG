/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37544
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
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_13 = ((/* implicit */short) arr_0 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */int) (unsigned short)35961)) : (((/* implicit */int) (unsigned char)229))))))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 1])))) : (((((/* implicit */int) (short)-7176)) * (((/* implicit */int) (unsigned char)229))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 -= ((/* implicit */unsigned long long int) (~((~(((((/* implicit */_Bool) arr_3 [i_1])) ? (1577039620051673613LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)32)))))))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1]))))))))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)29575))))) ? ((~(((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (signed char)-33)) : (((/* implicit */int) (signed char)17)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-121)))))));
        var_16 = ((/* implicit */short) (!((!(((/* implicit */_Bool) (-(2147483647))))))));
        var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)1)) & ((-((-(((/* implicit */int) (unsigned char)0))))))));
    }
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)44814)) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) (((~(((/* implicit */int) (unsigned char)188)))) != (((/* implicit */int) (short)-13203)))))));
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) (unsigned char)218)) ? (((/* implicit */int) (unsigned short)21319)) : (((/* implicit */int) (signed char)32)))))))));
    var_20 -= ((/* implicit */long long int) var_12);
}
