/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213487
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
    var_12 = ((/* implicit */unsigned char) var_1);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */int) (~((~(arr_0 [i_0])))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 30132696)) ? (((/* implicit */int) var_0)) : (1)));
        var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */int) var_4);
            arr_10 [i_0] [i_0] [i_0] = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-2067310412) ^ (((/* implicit */int) (_Bool)1))))) ? (max((var_5), (((/* implicit */int) (unsigned short)65472)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))) != (var_4))))))) > (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -1)) - (var_6)))) ? ((+(arr_5 [i_0] [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (var_5)))))));
        }
        for (long long int i_2 = 2; i_2 < 20; i_2 += 2) 
        {
            arr_15 [i_0] [(_Bool)1] |= ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_5 [i_2 - 1] [i_2 + 1])))) ? (((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2 + 2])) ? (arr_5 [i_2 - 1] [i_2 - 2]) : (((/* implicit */unsigned int) arr_7 [i_2 - 1] [i_2 + 2])))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)64)) + (1))))));
            var_14 = ((/* implicit */int) (!(((((/* implicit */unsigned long long int) min((-2067310412), (((/* implicit */int) arr_14 [i_0] [i_0] [i_0]))))) >= (((((/* implicit */_Bool) arr_5 [i_0] [i_2 - 1])) ? (((/* implicit */unsigned long long int) var_1)) : (var_2)))))));
            arr_16 [i_0] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((arr_6 [i_0]) ? (((/* implicit */unsigned long long int) var_3)) : (var_2)))) ? (arr_8 [i_0] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65472)) * (((/* implicit */int) (unsigned char)255)))))))));
            arr_17 [i_0] = ((((((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11)))) > (((((/* implicit */_Bool) arr_12 [9ULL])) ? (-2067310417) : (((/* implicit */int) (unsigned char)105)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)164))) : (var_2)))) && (((((/* implicit */_Bool) (signed char)99)) || (((/* implicit */_Bool) var_1))))))) : ((+(((/* implicit */int) arr_14 [i_2 - 2] [i_2 + 2] [i_2 + 1])))));
        }
        arr_18 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0])))))));
    }
    /* LoopSeq 1 */
    for (int i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        arr_22 [i_3] [i_3] = ((/* implicit */unsigned int) arr_7 [2LL] [i_3]);
        arr_23 [9ULL] [i_3] = ((/* implicit */_Bool) (+((~(11ULL)))));
        var_15 |= min(((+((-(((/* implicit */int) var_10)))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_1)) * (var_4)))) ? (((/* implicit */int) min(((unsigned short)7592), (((/* implicit */unsigned short) (signed char)31))))) : (((/* implicit */int) arr_6 [i_3])))));
    }
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) var_10)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_9))))))) ? ((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))))) : (((var_8) ? (((((/* implicit */_Bool) 23ULL)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (unsigned short)63)))) : (var_5))))))));
}
