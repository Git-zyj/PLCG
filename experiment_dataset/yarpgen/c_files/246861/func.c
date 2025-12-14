/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246861
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -6153492439332802861LL)) ? (-6153492439332802861LL) : (-6153492439332802861LL))) / (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (-3459582729906399523LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-26)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) arr_0 [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((arr_0 [i_0]) ? (var_11) : (((/* implicit */long long int) (+(((/* implicit */int) var_16)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */_Bool) arr_6 [i_1]);
        var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)37800)) ? (-3459582729906399523LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)8)))));
    }
    for (unsigned short i_2 = 4; i_2 < 23; i_2 += 4) 
    {
        var_20 -= ((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (signed char)-19)) ? (3459582729906399511LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2])))))))) : (4565008809308704139LL));
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (min((arr_9 [i_2]), (((/* implicit */long long int) (-(603318484)))))) : (max((((/* implicit */long long int) arr_11 [i_2 - 1])), (((arr_9 [i_3]) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
            arr_15 [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */unsigned char) var_8)), (arr_10 [i_2] [i_2 + 1]))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            arr_19 [i_4] [i_2] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_13 [i_4] [i_4] [i_2])))) ? (((((/* implicit */int) (unsigned short)25866)) / (((/* implicit */int) (signed char)121)))) : ((+(((/* implicit */int) (signed char)-11))))));
            var_22 -= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)39683)) % (((/* implicit */int) var_16))));
        }
    }
}
