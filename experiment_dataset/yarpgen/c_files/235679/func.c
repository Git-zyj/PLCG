/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235679
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
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_11 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) arr_1 [i_0])), (15404765739833309801ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
        var_12 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)23714))));
        arr_2 [i_0] = -2125557427;
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_13 -= ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned short)45855)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_1]))))));
        arr_5 [i_1] [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1] [i_1])) + (((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : ((-(2135059375)))))));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_1] [i_1])) <= (((((/* implicit */int) arr_3 [i_1] [i_1])) * (((/* implicit */int) arr_3 [i_1] [i_1]))))));
        var_15 = ((/* implicit */unsigned long long int) var_8);
    }
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                {
                    var_16 = ((/* implicit */int) ((((/* implicit */int) min(((!(var_9))), (((((/* implicit */_Bool) arr_8 [i_2] [i_4])) && (((/* implicit */_Bool) var_3))))))) > ((~(((/* implicit */int) ((_Bool) (unsigned short)22344)))))));
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_4] [i_3] [i_2])) ? (15607667100702894569ULL) : (((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_7 [i_2])) * (((/* implicit */int) arr_7 [i_2])))))))));
                    var_18 = (unsigned short)33957;
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_2);
    var_20 -= ((/* implicit */_Bool) -1787016005);
}
