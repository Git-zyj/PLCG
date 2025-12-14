/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229823
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
    var_10 += ((/* implicit */signed char) max((((((/* implicit */_Bool) var_1)) ? (max((var_8), (((/* implicit */unsigned long long int) (short)12366)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) min(((+(var_4))), (((/* implicit */int) var_6)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] &= ((/* implicit */int) min((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_1)))), (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_0 [(signed char)13]))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32))) : (-3811778971586240341LL)))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_11 = (short)-12365;
            var_12 = ((/* implicit */unsigned char) min((((/* implicit */int) var_0)), ((+((-(((/* implicit */int) var_7))))))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            var_13 |= ((/* implicit */short) ((((/* implicit */int) var_6)) << (((((/* implicit */int) (short)-16898)) + (16926)))));
            var_14 = ((/* implicit */unsigned int) var_5);
            var_15 = ((/* implicit */long long int) ((_Bool) 3129681743U));
            var_16 = ((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) arr_0 [i_2])))));
            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (+(arr_1 [i_0] [i_2]))))));
        }
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_18 = ((/* implicit */int) arr_10 [i_3]);
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (-((-(((/* implicit */int) var_5)))))))));
        arr_14 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) arr_0 [i_3]))))) : (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) arr_0 [i_3])))))));
    }
    var_20 = ((/* implicit */unsigned char) min((((((/* implicit */int) var_0)) - (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (unsigned char)93))))))), (((((/* implicit */_Bool) (short)-15830)) ? (-1991338807) : (((/* implicit */int) (unsigned char)126))))));
    var_21 ^= ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_8))))) & ((~(((var_6) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
}
