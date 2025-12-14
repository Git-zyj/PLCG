/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53500
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_10 ^= ((/* implicit */_Bool) ((var_7) % (((((/* implicit */_Bool) (unsigned short)17105)) ? (arr_0 [i_1 - 1] [i_1 - 1]) : (max((-7670775720290952501LL), (((/* implicit */long long int) arr_4 [i_1] [i_1 - 1]))))))));
                arr_8 [i_1] [i_1] = ((/* implicit */long long int) (unsigned short)17103);
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    arr_11 [i_1] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) -25706389)) ? (arr_7 [i_1 + 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_5)), ((unsigned short)17105))))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) > (arr_0 [i_1 + 3] [i_1 + 3])))))));
                    arr_12 [i_1] [i_1] = ((max((arr_9 [i_0]), (arr_9 [i_1 + 2]))) ^ (((/* implicit */int) (short)-7977)));
                    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) & (((/* implicit */int) (short)17857))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)17081))));
                }
                /* vectorizable */
                for (int i_3 = 4; i_3 < 19; i_3 += 2) 
                {
                    arr_15 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) 1320060343);
                    arr_16 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 2] [i_1 + 2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -1320060323)) ? (3175954286U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)33))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_12 = var_4;
                        var_13 = ((/* implicit */unsigned int) arr_14 [i_3] [i_3 + 2] [i_1 + 3] [i_4]);
                        arr_19 [i_1] [i_3] [(short)18] [i_1] = ((/* implicit */unsigned int) ((arr_0 [i_1 + 2] [i_1 + 2]) == (arr_0 [i_1 + 1] [i_1 + 2])));
                        var_14 = (unsigned short)30414;
                        arr_20 [i_1] [i_1] [i_3 - 2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_1] [i_1])) >> (((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 1]))));
                    }
                    var_15 ^= ((/* implicit */int) ((((/* implicit */int) arr_13 [i_1 + 3] [i_3 - 1] [i_1 + 3])) <= (((/* implicit */int) arr_2 [i_1 + 1]))));
                }
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_3)))), (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)4463)) : (((/* implicit */int) var_1))))) == (((((/* implicit */_Bool) -5778300666371725483LL)) ? (var_7) : (-5778300666371725468LL)))))) : (((/* implicit */int) var_5))));
}
