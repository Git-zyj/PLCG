/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39377
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
    var_15 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_1 [i_0 - 1]))))));
        var_16 = max((min(((unsigned char)164), ((unsigned char)91))), (((/* implicit */unsigned char) arr_1 [i_0 + 2])));
        arr_3 [i_0] [i_0] |= (~(((var_2) ? (((/* implicit */int) (signed char)-25)) : (((/* implicit */int) (unsigned char)148)))));
        var_17 += ((/* implicit */short) max((((/* implicit */int) (unsigned char)0)), (((((/* implicit */int) arr_1 [i_0 + 2])) >> (((((/* implicit */int) arr_1 [i_0 + 2])) - (37)))))));
        arr_4 [i_0 + 1] = ((/* implicit */signed char) (!((_Bool)1)));
    }
    for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 3) 
        {
            for (short i_3 = 4; i_3 < 16; i_3 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) max((arr_11 [i_1] [i_1 + 1] [i_1 - 1] [i_1 - 1]), (arr_11 [i_1] [i_1 - 1] [i_1] [i_1 + 1])))) : (arr_6 [i_1])));
                    arr_12 [i_1] [i_2] [i_3 - 4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)39))))) ? (min((arr_7 [i_1] [16ULL] [i_3]), (((/* implicit */long long int) arr_10 [i_1] [(signed char)1] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) || (((/* implicit */_Bool) arr_7 [i_1] [(signed char)4] [(unsigned char)15]))));
                }
            } 
        } 
        arr_13 [i_1] = ((/* implicit */long long int) -1181727227);
    }
    /* vectorizable */
    for (unsigned char i_4 = 2; i_4 < 17; i_4 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((((_Bool) (signed char)-78)) ? (((/* implicit */int) (signed char)-25)) : (((/* implicit */int) arr_11 [(unsigned short)11] [i_4 - 2] [i_4] [i_4]))));
        var_20 = ((/* implicit */unsigned long long int) 8885646427200968257LL);
    }
    var_21 = ((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))))));
}
