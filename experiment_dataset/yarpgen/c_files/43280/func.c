/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43280
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
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((/* implicit */int) ((((/* implicit */long long int) var_11)) != (1008LL)))) : ((+(((/* implicit */int) (unsigned short)29898))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */int) (short)5928)) : (((/* implicit */int) arr_0 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        arr_7 [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_6 [i_1] [8U]) : (arr_5 [i_1] [i_1])))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 2; i_2 < 21; i_2 += 1) 
        {
            for (unsigned short i_3 = 1; i_3 < 22; i_3 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_3 + 1] [i_2] [i_3 + 1])) + (((/* implicit */int) arr_9 [i_3 - 1] [i_2] [i_3 + 1]))));
                    var_15 = ((/* implicit */unsigned short) arr_10 [i_2]);
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_2]) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) ((arr_10 [i_2]) >= (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_2] [(signed char)11])))))) : (((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_8)))))));
                    arr_14 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [9ULL] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_5 [(signed char)3] [i_1])))) : (2752676245U)));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned short) ((short) arr_12 [(_Bool)1] [i_1 + 1]));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(_Bool)1] [i_4])) ? (((/* implicit */unsigned int) var_4)) : (arr_6 [i_4] [i_4])));
        var_19 = ((/* implicit */unsigned char) 4031926185424671732LL);
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2752676226U)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4] [11])))))) ? (((/* implicit */int) ((short) 5945699255880526107LL))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_4])))))));
    }
}
