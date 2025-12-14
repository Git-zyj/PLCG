/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191707
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) 1761362154)) ? (8002516389363237215ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49899)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_1]))) ? (((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */long long int) 488401802)) : (-3707589752763609782LL))) : (((/* implicit */long long int) var_6))));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) var_1);
        }
        arr_7 [i_0] = ((/* implicit */signed char) (((_Bool)1) ? (-1761362166) : (((/* implicit */int) (signed char)-85))));
        var_12 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20076)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_3))))) : ((~(var_3)))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        arr_10 [i_2 + 1] [4ULL] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_2] [i_2 + 1]))))) ? (((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 1])) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (var_6)))));
        arr_11 [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_2]))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 2) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */_Bool) var_1);
        arr_15 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_8 [i_3]))))) ? (arr_12 [i_3 - 3]) : (((/* implicit */unsigned int) -1761362169))));
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) 9223372036854775801LL))));
            var_14 = ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) ^ (((((/* implicit */_Bool) (unsigned short)20096)) ? (var_5) : (arr_12 [i_3]))));
        }
    }
    for (int i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            for (int i_7 = 3; i_7 < 9; i_7 += 2) 
            {
                for (unsigned short i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    {
                        arr_29 [i_5] [i_8] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) arr_18 [i_5] [i_7 - 2]);
                        var_15 = ((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) arr_22 [i_7 - 1] [i_7 - 3] [i_7])))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */int) var_1);
    }
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned int) var_3))))))) ? ((-(var_5))) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)20076))))))))));
    var_18 |= ((/* implicit */signed char) (~(((/* implicit */int) var_9))));
}
