/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248408
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1] [i_0 + 3] [i_0] [i_1]))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [12LL] [i_1] [i_2])) ? (((/* implicit */int) arr_5 [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_1 [i_2] [i_1]))))), (min((((/* implicit */unsigned long long int) (signed char)21)), (13973915353210825347ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_0 + 1] [i_0 + 2] [i_1])) ? (((((/* implicit */_Bool) 13973915353210825321ULL)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])))) : (max((((/* implicit */int) arr_3 [i_0])), (var_3))))))));
                    var_11 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_2)))))) > (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5))))))))));
                }
                var_12 = ((/* implicit */unsigned short) (~((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_3)) : (4472828720498726269ULL)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 807948672)) ? (((/* implicit */int) (unsigned short)8160)) : (((/* implicit */int) (unsigned short)33212))));
                    var_14 -= min((max((((/* implicit */unsigned long long int) (-2147483647 - 1))), (13973915353210825347ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_4 [i_0 + 3] [i_0 + 1] [i_0 + 2])), ((-2147483647 - 1))))));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (arr_8 [i_0] [i_1]) : (((/* implicit */int) var_1))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [0LL]))) : (var_4)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(17643011589077468905ULL)))) ? (min((var_3), (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)48543))))))) : (((((/* implicit */_Bool) max(((short)24753), (((/* implicit */short) (unsigned char)130))))) ? (((/* implicit */long long int) arr_2 [i_0 + 3])) : (min((((/* implicit */long long int) var_1)), (-8044688002644735644LL)))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_4 = 2; i_4 < 12; i_4 += 4) 
    {
        var_16 = ((((/* implicit */_Bool) arr_11 [i_4 - 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_4 + 1] [i_4 + 1]))))) : ((-(((/* implicit */int) var_7)))));
        var_17 = ((/* implicit */unsigned short) var_7);
    }
    var_18 = ((/* implicit */unsigned int) var_1);
}
