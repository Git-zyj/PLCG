/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213276
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
    var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_19))))))))));
    var_21 = ((/* implicit */short) var_3);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_22 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) >= (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (arr_0 [i_0] [i_0]))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_18)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) var_15)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) && (((/* implicit */_Bool) min(((+(((/* implicit */int) (short)29951)))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)2047)) && (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
        {
            arr_5 [i_1] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-20640))));
            arr_6 [i_1] = ((/* implicit */_Bool) var_4);
            var_24 = ((/* implicit */long long int) (((-(2344473122768146950ULL))) != (2028350141736714376ULL)));
            arr_7 [i_0] [i_0] &= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_1)) - (3964)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-1))))));
        }
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
        {
            var_25 *= ((/* implicit */unsigned int) var_1);
            var_26 ^= ((/* implicit */unsigned int) var_5);
            arr_10 [i_0] [i_2] |= ((/* implicit */short) (~(((5502166429422800409LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-44)))))));
        }
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
        {
            arr_13 [i_3] = ((/* implicit */_Bool) (unsigned char)104);
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(var_14))) + (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_3 [i_0] [i_3])), (((var_12) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-43)))))))) : (min((((arr_9 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8)))))))));
        }
    }
    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? ((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_13))))) : (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (_Bool)0)))))))));
    var_29 = ((/* implicit */unsigned int) var_10);
}
