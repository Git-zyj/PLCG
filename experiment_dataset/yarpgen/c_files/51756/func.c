/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51756
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) ((-70359077) <= (((/* implicit */int) (_Bool)1)))))));
        arr_2 [i_0] [i_0] &= arr_1 [i_0] [i_0];
        var_16 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)125), (((/* implicit */unsigned char) (_Bool)1)))))) : (var_4))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_17 = ((/* implicit */int) arr_4 [i_1] [i_1]);
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((var_7) ? (3423090676U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(_Bool)1] [i_1]))))), (((arr_5 [i_1]) ? (2301057093U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) max((arr_5 [i_1]), (arr_5 [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [5U]))))))))));
        var_18 = ((/* implicit */_Bool) min((var_18), ((!(arr_5 [i_1])))));
        var_19 &= ((/* implicit */_Bool) ((unsigned char) ((((-288452577) + (2147483647))) << (((7234616625673368238ULL) - (7234616625673368238ULL))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            arr_10 [10] &= ((/* implicit */int) ((arr_5 [i_2]) || (((_Bool) var_3))));
            var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (!((_Bool)0)))) ^ (((/* implicit */int) (_Bool)1))));
            var_21 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_9 [i_1] [i_2])))) ? (((/* implicit */int) (!(arr_8 [i_1] [i_2] [i_2])))) : (((/* implicit */int) (_Bool)1))));
        }
    }
    var_22 = ((var_11) == (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_1)))) != (14252020719221545100ULL)))));
}
