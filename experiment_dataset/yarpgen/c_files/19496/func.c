/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19496
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
    var_10 = (+(max((max((576425567931334656LL), (4710554728440190383LL))), ((+(var_3))))));
    var_11 = (+(max(((+(var_0))), (((var_0) / (var_3))))));
    var_12 = var_0;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_13 = max((max((2529444969631532507LL), (((7194430646757142752LL) ^ (6491201389423728517LL))))), ((+(arr_2 [i_0] [i_1]))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    var_14 = min(((+(((((/* implicit */_Bool) 2727629471164281078LL)) ? (-2173420050897182079LL) : (arr_1 [2LL]))))), (max((min((var_0), (arr_5 [i_0] [i_0] [i_2]))), (min((6491201389423728517LL), (arr_3 [i_0] [i_0]))))));
                    var_15 = ((3199472773063512575LL) << (((((-2173420050897182097LL) + (2173420050897182144LL))) - (47LL))));
                    arr_7 [i_0] [i_0] [6LL] [6LL] = ((((/* implicit */_Bool) min((min((arr_4 [i_0] [i_1] [10LL]), (-1231033679887556904LL))), (((long long int) 1824740572786899052LL))))) ? (min((144115188075855871LL), ((-9223372036854775807LL - 1LL)))) : (((((/* implicit */_Bool) -1371086092033713368LL)) ? (4406803692229438436LL) : (-6491201389423728518LL))));
                    arr_8 [i_1] &= ((/* implicit */long long int) ((((((-5198441938649974546LL) + (9223372036854775807LL))) >> (((arr_2 [i_1] [i_2]) - (2639440727823655436LL))))) < ((~(arr_6 [i_0] [i_1] [i_2])))));
                }
                var_16 ^= ((((/* implicit */long long int) ((/* implicit */int) (((~(arr_2 [i_0] [i_0]))) != (((((/* implicit */_Bool) var_4)) ? (var_6) : (var_7))))))) & (((((/* implicit */_Bool) -243301096162628163LL)) ? (-2120707431737878128LL) : (35184372023296LL))));
                var_17 = ((/* implicit */long long int) ((min((-2511738708668718155LL), (((long long int) arr_2 [i_0] [i_1])))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_6 [i_1] [7LL] [i_1]), (2482839790634621136LL))))))))));
                var_18 -= (~(((((arr_2 [i_0] [i_0]) ^ (arr_0 [i_0] [i_0]))) / ((~(arr_5 [i_0] [17LL] [i_0]))))));
            }
        } 
    } 
}
