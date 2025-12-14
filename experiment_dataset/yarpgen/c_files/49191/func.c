/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49191
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
    var_11 = ((/* implicit */unsigned int) ((int) ((((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) >> (((2511686724U) - (2511686721U))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (_Bool)1)) >> (((2586936328U) - (2586936310U))))));
                    var_13 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2 - 1]))) : ((-(9223372036854775807LL)))))) ? (((((/* implicit */_Bool) ((unsigned int) arr_6 [i_0]))) ? ((+(9223372036854775807LL))) : (((/* implicit */long long int) arr_7 [i_1] [i_1] [(unsigned short)16] [i_2 - 1])))) : (((/* implicit */long long int) var_3))));
                    var_14 = ((((/* implicit */_Bool) (-(var_6)))) ? (((long long int) (-(1783280572U)))) : (((/* implicit */long long int) ((/* implicit */int) var_10))));
                    arr_10 [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((0U) >> ((((-(((/* implicit */int) (signed char)-95)))) - (85))))))));
                    var_15 *= min((2511686746U), (((/* implicit */unsigned int) (_Bool)1)));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        var_16 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_8)), (arr_2 [i_3] [(short)10])))) ? (min((((/* implicit */long long int) (_Bool)1)), (arr_11 [i_3] [i_3]))) : (((/* implicit */long long int) min((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_1)))), ((~(-614506334))))))));
        var_17 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (~(2586936347U)))) ? (((((/* implicit */int) (_Bool)1)) >> (((-8830540338395863159LL) + (8830540338395863176LL))))) : (((/* implicit */int) max((arr_9 [i_3] [(unsigned short)20] [i_3] [(signed char)14]), (var_8))))))));
        var_18 = ((/* implicit */long long int) (((-(((/* implicit */int) arr_2 [i_3] [i_3])))) / ((~(((/* implicit */int) arr_2 [i_3] [14U]))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_4 - 1])) / (((/* implicit */int) arr_3 [i_4 - 1])))))));
        arr_16 [i_4] = ((/* implicit */signed char) (!((_Bool)1)));
        arr_17 [i_4] = arr_13 [i_4];
        var_20 = ((/* implicit */_Bool) var_7);
        var_21 = ((unsigned int) 2511686758U);
    }
    /* vectorizable */
    for (signed char i_5 = 1; i_5 < 17; i_5 += 3) 
    {
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64)))))) ? (((((/* implicit */_Bool) var_5)) ? (2511686724U) : (var_3))) : (var_6)));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-64)))))));
        arr_20 [i_5] = ((/* implicit */long long int) arr_2 [i_5 - 1] [i_5 + 1]);
    }
    for (unsigned int i_6 = 4; i_6 < 15; i_6 += 1) 
    {
        arr_24 [i_6] = ((/* implicit */signed char) ((long long int) max((((/* implicit */int) arr_0 [i_6 - 2])), ((~(((/* implicit */int) var_8)))))));
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_21 [8LL])) >> (((arr_4 [i_6] [i_6]) - (242558720U)))))))) || (((/* implicit */_Bool) (-((-(523175838U))))))));
        arr_25 [i_6] = ((/* implicit */signed char) max((((/* implicit */long long int) max((max((((/* implicit */unsigned int) arr_14 [i_6] [i_6])), (66856963U))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_10)), ((unsigned short)45225))))))), (arr_6 [i_6 - 3])));
    }
}
