/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203476
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))), (max((max((((/* implicit */int) arr_0 [i_0] [i_0])), (-1860990454))), (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_7))))))));
        var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [18LL] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_0)))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (1860990479)))))) ? (((/* implicit */int) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) : (((/* implicit */int) (unsigned short)54365))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (unsigned int i_3 = 2; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_11 -= ((/* implicit */unsigned char) arr_8 [i_2] [i_2] [i_0] [i_0] [i_2]);
                        var_12 = ((((/* implicit */_Bool) -1860990470)) ? (min((((/* implicit */int) (unsigned char)88)), (-1860990451))) : (((/* implicit */int) arr_7 [(short)0] [i_0] [i_2] [i_3 - 2])));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */signed char) min((((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) (unsigned short)27998))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1860990494)) ? (arr_4 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2040)))))) : (arr_6 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) min((arr_9 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned short)28015)))))));
    }
    var_14 = (unsigned short)28015;
}
