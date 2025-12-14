/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213233
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_13 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((int) arr_1 [i_0] [i_0])), (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65520)) - (((/* implicit */int) (unsigned char)124))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))) : ((~(((var_9) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [(signed char)10]))))))))))));
        var_15 += ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) -5816133143834090729LL)) ? (0) : (((/* implicit */int) (unsigned short)26492)))) - (((/* implicit */int) arr_1 [i_1] [i_1]))));
        var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_1] [i_1]))));
        arr_4 [(unsigned char)11] = ((/* implicit */unsigned char) ((long long int) (signed char)100));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) -1632612152);
        arr_7 [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
        arr_8 [i_2] = ((/* implicit */unsigned char) ((2147467264LL) + (((/* implicit */long long int) (-(var_4))))));
    }
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                {
                    var_19 = ((int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_1 [i_5] [i_4]))));
                    var_20 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)39043)) ? (((/* implicit */int) (unsigned char)213)) : (-1599286380)))) < (((long long int) (unsigned short)26489))));
                }
            } 
        } 
    } 
}
