/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231166
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
    var_20 = ((/* implicit */long long int) var_6);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_5)) - (arr_1 [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((unsigned char) var_17));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) (~(-7788866924646658423LL)))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)19))) | (7788866924646658414LL)))))))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-25)) + (2147483647))) >> ((((~(((/* implicit */int) arr_4 [i_1])))) + (2)))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_1])) ? (602066354U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))))) + (var_3)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_0 [i_1]))))) ? (((((/* implicit */long long int) -1823508031)) / (457525101632948497LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            var_22 |= ((/* implicit */unsigned int) max((((/* implicit */int) max((arr_10 [i_1]), (arr_0 [i_2])))), (((((/* implicit */int) arr_10 [i_1])) / (((/* implicit */int) arr_8 [i_1] [i_2]))))));
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1])))), (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_6 [i_2])))))))));
        }
    }
    for (int i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) arr_5 [i_3] [i_3]))));
        arr_14 [i_3] = max((min((((/* implicit */unsigned int) var_19)), (arr_11 [i_3]))), (((arr_10 [i_3]) ? (arr_11 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3]))))));
        var_25 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)62900)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_4 [i_3])) : (((/* implicit */int) (short)-4081))))) : (var_11)))), (min((((/* implicit */unsigned long long int) (unsigned char)130)), (801792917458247334ULL)))));
        var_26 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) max((936424583), (((/* implicit */int) (short)31416))))) == (-873046890552208674LL))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)17554))));
        var_27 = ((/* implicit */int) arr_5 [i_3] [i_3]);
    }
}
