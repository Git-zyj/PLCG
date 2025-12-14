/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245995
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) ((arr_1 [i_0 + 1]) & (((/* implicit */unsigned long long int) 622072099U))));
        var_12 = ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) arr_0 [i_0 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) % (arr_1 [i_0]))));
    }
    for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (short)3613)) && (((/* implicit */_Bool) (signed char)-51))));
        var_14 += ((/* implicit */int) ((((/* implicit */_Bool) ((arr_1 [i_1]) | (arr_1 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_1]) <= (arr_1 [i_1]))))) : ((((_Bool)0) ? (910496561171300115ULL) : (arr_1 [i_1])))));
        arr_6 [i_1] = arr_2 [i_1] [i_1];
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                for (signed char i_4 = 1; i_4 < 7; i_4 += 3) 
                {
                    {
                        arr_18 [i_3] [i_3] [i_4] [i_4] [i_3] [i_3] = ((/* implicit */int) var_7);
                        arr_19 [i_4] [i_2] [i_2] [i_3] [i_4 + 1] = (~(((/* implicit */int) max((((/* implicit */unsigned short) (short)29775)), ((unsigned short)36544)))));
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])), (5268197127895512304ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) : (arr_5 [i_3])))) | (15386549740696967437ULL)));
                        var_16 = ((/* implicit */unsigned char) var_4);
                    }
                } 
            } 
        } 
        arr_20 [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 935939454)) ? (-935939455) : (((/* implicit */int) arr_4 [i_1] [i_1]))))) ? (((/* implicit */int) ((signed char) var_2))) : (1125371065)))));
    }
    var_17 &= ((/* implicit */unsigned char) var_6);
}
