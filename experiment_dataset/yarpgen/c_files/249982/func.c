/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249982
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((6065129936561115029LL), (2LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) 2LL))) ? (((/* implicit */int) ((short) (unsigned short)7606))) : (((/* implicit */int) var_2))))) : (max((-2405315380429092144LL), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)0)))))))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((var_0), (((/* implicit */int) arr_1 [i_0] [i_0]))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)58))) : (arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) (+(2080374784)))) : (134428144522415816ULL)))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            arr_7 [i_0] = ((/* implicit */unsigned int) (-(var_9)));
            arr_8 [i_0] [i_0] [i_1] = ((((long long int) max((((/* implicit */unsigned long long int) arr_5 [i_1] [i_1] [i_0])), (18446744073709551615ULL)))) ^ (-2LL));
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) 10830129579689460678ULL))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) /* same iter space */
    {
        var_13 *= ((/* implicit */short) ((((/* implicit */int) (unsigned short)47889)) & (((/* implicit */int) (unsigned short)6946))));
        var_14 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)7605)) >> (((arr_11 [i_2]) - (8948639927222225970LL)))));
        var_15 = var_8;
        arr_12 [i_2] [1ULL] = ((/* implicit */long long int) (-(arr_0 [i_2])));
    }
    var_16 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)193)), (var_8)))))))));
    var_17 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (short)24)) >> (((var_0) - (1153836922)))))))));
    var_18 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */int) var_3))))) ? (min((var_9), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) min((((/* implicit */unsigned long long int) var_9)), (((unsigned long long int) min((((/* implicit */long long int) (unsigned char)184)), (var_9)))))))));
}
