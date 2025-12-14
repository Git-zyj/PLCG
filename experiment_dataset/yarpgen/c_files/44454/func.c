/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44454
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [(unsigned char)4])) ? ((~(arr_1 [(_Bool)1]))) : ((-(arr_1 [(_Bool)1])))));
        var_18 ^= ((/* implicit */unsigned int) arr_0 [i_0]);
        arr_2 [4LL] |= ((/* implicit */unsigned int) ((var_3) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) || ((!(((/* implicit */_Bool) var_9)))))))) : ((~(arr_1 [2LL])))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) ((10284610821722229605ULL) ^ (1757935094229722607ULL))));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) var_8);
        var_19 ^= ((/* implicit */long long int) (unsigned short)37541);
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2 - 1])) ? (min((((/* implicit */long long int) var_5)), (arr_4 [i_2 - 1]))) : (((/* implicit */long long int) ((unsigned int) arr_4 [i_2 - 1])))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_10))) || (((/* implicit */_Bool) ((int) arr_4 [i_2 - 1]))))))));
        arr_9 [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2 - 1])) ? (arr_8 [i_2 - 1] [i_2 - 1]) : (((/* implicit */long long int) arr_7 [i_2 - 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2 - 1])) ? (((/* implicit */long long int) arr_7 [i_2 - 1])) : (arr_8 [i_2 - 1] [i_2 - 1])))) : (((((/* implicit */_Bool) arr_7 [i_2 - 1])) ? (((/* implicit */unsigned long long int) var_12)) : (var_8))));
        var_22 = ((/* implicit */long long int) max((var_22), (min(((~(arr_4 [i_2 - 1]))), (((/* implicit */long long int) ((arr_5 [i_2 - 1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)16))))))))));
        var_23 = ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) (+(arr_5 [6])))))));
    }
    var_24 = ((/* implicit */_Bool) var_8);
    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((((var_14) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) << (((((/* implicit */int) (signed char)-61)) + (124))))) > (var_8))))));
}
