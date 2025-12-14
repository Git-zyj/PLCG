/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193370
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
    var_13 = ((/* implicit */unsigned char) var_10);
    var_14 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_9)))))) ^ (min((var_12), (((/* implicit */unsigned long long int) var_5)))))), ((-(((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (-(var_2))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) var_10))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (var_5)));
        var_18 &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-14))) != ((-(4828342381315087381LL)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_19 += ((/* implicit */_Bool) (-(min(((-(((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) arr_3 [14]))))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)-92)), (-4828342381315087382LL)))), (max((arr_4 [i_1]), (((/* implicit */unsigned long long int) var_3)))))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_3), (((/* implicit */unsigned short) arr_3 [14U]))))) / (((/* implicit */int) ((((/* implicit */_Bool) 12569075838205129159ULL)) || (((/* implicit */_Bool) var_3)))))))))))));
        var_21 -= ((/* implicit */unsigned int) (~(min(((~(((/* implicit */int) (unsigned short)7205)))), (((/* implicit */int) (unsigned char)230))))));
        var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)9)) || (((/* implicit */_Bool) arr_4 [i_1]))))) != (((((/* implicit */int) (unsigned char)246)) - (((/* implicit */int) var_6))))))), (max((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58330))) : (12962383243874420239ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)58325)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))))))));
        var_23 = ((/* implicit */unsigned long long int) (+(((int) (unsigned char)215))));
    }
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned int) arr_6 [i_2])), (var_2)))));
        var_25 &= ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3104549857U)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) arr_5 [i_2]))))) ? (((/* implicit */int) arr_5 [i_2])) : (((((/* implicit */_Bool) arr_6 [2LL])) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) (unsigned char)246)))))), (((/* implicit */int) arr_5 [i_2]))));
    }
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */short) ((((((/* implicit */int) arr_6 [i_3])) << (((((/* implicit */int) var_8)) - (30))))) != (((/* implicit */int) (unsigned short)37897))));
        var_27 = ((/* implicit */unsigned long long int) ((_Bool) arr_5 [i_3]));
        var_28 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (_Bool)0)), (3100621030441984720ULL)));
    }
}
