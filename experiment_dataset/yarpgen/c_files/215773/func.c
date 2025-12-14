/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215773
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
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned long long int) max(((+(var_4))), (((((/* implicit */_Bool) 0ULL)) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned int) (-(max((0LL), (arr_0 [i_0])))));
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [(signed char)4]))))) ? (((arr_1 [8U]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) -690094077)) : (arr_0 [6LL])))) ? (((/* implicit */int) arr_1 [2ULL])) : (((/* implicit */int) var_3))))))))));
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (-(var_7)))))))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) (+(var_9)))) ^ (((((/* implicit */long long int) var_1)) - (var_13)))))));
        var_18 = ((/* implicit */_Bool) (~(((arr_1 [2LL]) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) var_10))))));
    }
    for (long long int i_2 = 1; i_2 < 18; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    {
                        arr_16 [i_5] [i_4] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)26)) << (((/* implicit */int) arr_7 [i_2 + 2]))))) ? (((/* implicit */long long int) arr_13 [i_5] [i_5] [i_5])) : (-9223372036854775805LL))));
                        arr_17 [15LL] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(arr_10 [i_2] [i_2] [i_2])))) && (((/* implicit */_Bool) var_6)))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_2 - 1] [i_2] [i_2])) || (((/* implicit */_Bool) arr_8 [i_3] [i_5]))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5] [12ULL] [i_3] [12ULL]))) : (-6198609183759643196LL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-1))))) : (var_8)))));
                    }
                } 
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned long long int) var_2);
}
