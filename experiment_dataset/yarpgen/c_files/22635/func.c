/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22635
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
    var_14 = var_12;
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_0)), (10466819095080260740ULL))) >> (((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) var_13)) : (11019314873906271791ULL))) - (11019314873906271778ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -714710048679946051LL)))))) : (var_12)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */signed char) (~(((/* implicit */int) arr_3 [i_0] [i_1] [i_2 + 1]))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_17 ^= ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_8 [i_0] [i_2 + 1] [i_2] [i_2 + 1]))))));
                                arr_12 [i_4] [i_1] [9LL] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_2 - 1] [i_2 - 1] [i_4] [(signed char)5])) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_2 - 1] [i_3])) : (arr_4 [i_2 - 1])))) ? (arr_0 [i_2 + 1]) : (((/* implicit */unsigned long long int) ((-821176809) - (((/* implicit */int) arr_5 [i_1] [2] [i_2] [i_2 - 1]))))));
                            }
                        } 
                    } 
                    var_18 &= min((arr_6 [(signed char)5] [i_1]), (((/* implicit */unsigned long long int) (signed char)-61)));
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [3ULL] [i_1])) ? (((((/* implicit */_Bool) (+(-601365471)))) ? (((-2151264218395031655LL) - (((/* implicit */long long int) 286837955)))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [7ULL] [7ULL] [7ULL]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_5 = 3; i_5 < 19; i_5 += 1) 
    {
        var_20 ^= ((/* implicit */signed char) ((9134906) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) -7209365407847400456LL)) ? (0ULL) : (((/* implicit */unsigned long long int) -1923473905))))) ? (((((/* implicit */_Bool) arr_13 [i_5])) ? (18446744073709551602ULL) : (((/* implicit */unsigned long long int) -2636414554641027066LL)))) : (9510392650423055160ULL))) - (9510392650423055140ULL)))));
        arr_15 [i_5] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-21)), (arr_13 [i_5])));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -7687738640137563038LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)4))) : (-4795083152016515414LL))))))));
    }
}
