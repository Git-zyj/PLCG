/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27055
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
    var_11 |= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) 1885006856)) ? (-1885006878) : (((/* implicit */int) (unsigned short)65525))))), (var_1)));
    var_12 ^= ((/* implicit */unsigned long long int) var_5);
    var_13 = var_3;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned int) (~(arr_0 [i_0 - 2] [i_0 - 2])));
                    arr_10 [i_0] [i_0 - 2] [12ULL] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_9)))) ? (((((/* implicit */_Bool) var_8)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) var_6)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_7 [5LL]))))));
                }
            } 
        } 
        arr_11 [i_0] [10LL] = ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]);
    }
    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        arr_15 [i_3] [i_3] = ((/* implicit */int) ((unsigned short) ((long long int) var_8)));
        arr_16 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned short)53218), (arr_13 [i_3])))) ? (((((/* implicit */_Bool) arr_13 [i_3])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3])))));
        var_14 += ((/* implicit */long long int) ((unsigned short) ((unsigned char) (unsigned char)134)));
    }
    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 1885006856)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */long long int) 1885006878))))) : (arr_7 [i_4]))))))));
        arr_19 [i_4] = ((/* implicit */unsigned short) var_4);
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) var_8))));
        arr_20 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3332972094526602689LL)) ? (3332972094526602689LL) : (((/* implicit */long long int) 1885006877))))) == (min((5866663960792680916ULL), (((/* implicit */unsigned long long int) -1047795848))))));
    }
}
