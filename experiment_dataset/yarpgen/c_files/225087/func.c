/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225087
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned int) var_1);
        arr_2 [(unsigned char)7] [i_0] = arr_1 [i_0];
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */long long int) ((((((/* implicit */int) (short)31554)) & (((/* implicit */int) arr_0 [i_2])))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 4064894076U)))))));
                    arr_7 [i_0] [i_2] [i_2] [(short)15] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [0] [0] [i_2 - 1]))) % (((arr_1 [i_0]) / (((/* implicit */unsigned long long int) 4064894098U))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_8);
                    var_12 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_0] [(short)13] [i_2 + 1] [(short)2]))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */_Bool) var_2);
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [6LL] [i_0] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(short)4] [(short)4])))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        arr_13 [(short)9] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4064894098U)) ? (2059563596U) : (2204188497U)));
        var_14 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_6 [i_3] [i_3] [8LL] [i_3])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_10 [i_3])))) << (((((((/* implicit */_Bool) var_3)) ? (arr_11 [i_3]) : (arr_11 [i_3]))) - (5760910235048805828LL)))));
    }
    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
    {
        var_15 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */unsigned int) 1578364105)) * (230073219U))) < (230073201U))))) >= (max((2059563596U), (((/* implicit */unsigned int) (short)6843)))));
        arr_18 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [(unsigned char)5] [0ULL] [0ULL] [i_4])) | (((/* implicit */int) ((arr_16 [i_4]) && (((/* implicit */_Bool) var_3)))))))) ? (max((((/* implicit */unsigned int) ((int) (short)4564))), (2059563617U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-18291))))))));
    }
    var_16 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((var_2) - (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)213)), (1352637087U)))))) : (var_8)));
}
