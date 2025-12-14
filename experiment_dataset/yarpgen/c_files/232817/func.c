/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232817
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
    var_19 = ((/* implicit */long long int) var_7);
    var_20 *= ((/* implicit */unsigned int) var_2);
    var_21 &= ((/* implicit */unsigned int) var_16);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (arr_2 [i_0] [(unsigned char)6])))) - (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_6))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-1521245825)))) ? (4934706280331113014ULL) : (var_16))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        var_23 = ((/* implicit */long long int) var_14);
                        var_24 = ((/* implicit */_Bool) ((unsigned char) (_Bool)1));
                        var_25 = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)131))) * (arr_7 [i_0] [i_0] [16])))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0 + 3] [i_0] [19] [i_3] [i_0] [i_0])) << (((var_0) - (1876068435)))))))))));
                        var_26 = (i_0 % 2 == 0) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0 + 3] [i_0] [i_0 + 3])) ? (((((arr_9 [i_2 - 1] [i_2 + 3] [i_2 - 1] [i_0] [i_0 - 1] [i_0 - 1]) + (9223372036854775807LL))) >> (((arr_7 [i_0 + 2] [i_0] [i_0 + 2]) - (3118101128U))))) : (((/* implicit */long long int) (-(arr_7 [i_0 - 1] [i_0] [i_0 - 1]))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0 + 3] [i_0] [i_0 + 3])) ? (((((arr_9 [i_2 - 1] [i_2 + 3] [i_2 - 1] [i_0] [i_0 - 1] [i_0 - 1]) + (9223372036854775807LL))) >> (((((arr_7 [i_0 + 2] [i_0] [i_0 + 2]) - (3118101128U))) - (4162134496U))))) : (((/* implicit */long long int) (-(arr_7 [i_0 - 1] [i_0] [i_0 - 1])))))));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((var_0), (((/* implicit */int) var_5)))), ((~(((/* implicit */int) (_Bool)1))))))) ? (arr_9 [i_3] [i_2] [i_0] [i_0 + 3] [i_0] [i_0 + 3]) : (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_0])) & (((/* implicit */int) var_1)))))));
                    }
                    /* LoopNest 2 */
                    for (short i_4 = 2; i_4 < 21; i_4 += 1) 
                    {
                        for (long long int i_5 = 2; i_5 < 23; i_5 += 3) 
                        {
                            {
                                var_28 -= ((/* implicit */unsigned char) var_11);
                                var_29 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) (((_Bool)0) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) - (((arr_13 [i_0] [i_0] [(_Bool)1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))) >= (min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) && (arr_8 [i_0]))))))));
                                var_30 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) & (arr_9 [i_4 + 4] [i_4 + 4] [(_Bool)1] [i_5 + 2] [i_0 - 1] [i_5 + 2])))) || (((/* implicit */_Bool) ((short) arr_9 [i_4 - 1] [i_1] [i_5 - 2] [i_5 + 2] [i_0 + 3] [i_5 - 2])))));
                                var_31 |= (-((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) < (var_7)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
