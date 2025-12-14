/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206689
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_18 &= ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_1 [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) (unsigned short)55573)), ((+(134217664ULL))))) == (((/* implicit */unsigned long long int) max((arr_6 [i_0] [i_1 - 3] [i_2 - 2] [i_2]), (arr_6 [i_0] [i_1 - 3] [i_2 - 2] [i_0]))))));
                    arr_8 [i_2 - 1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((min((arr_1 [i_2 - 1]), (((/* implicit */unsigned long long int) (_Bool)1)))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [(unsigned short)15] [i_0])) - (((/* implicit */int) arr_4 [i_0] [i_1] [i_2 + 1]))))))))) == (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 - 3] [i_1 - 3] [i_2]))) % (6472710759726499611LL)))));
                    var_19 *= ((/* implicit */unsigned long long int) arr_2 [i_1] [i_1] [i_2 - 3]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) arr_0 [(short)4] [19U])) == (((/* implicit */int) ((0U) == (((/* implicit */unsigned int) arr_6 [i_0] [i_1 + 2] [(unsigned short)5] [11ULL])))))))))));
                                var_21 = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0])) + (((/* implicit */int) ((short) max((((/* implicit */int) arr_2 [i_0] [(short)5] [i_2])), (-1738753257)))))));
                                arr_13 [i_0] [6U] [i_3] [i_3] [4] = ((/* implicit */unsigned short) arr_10 [i_0] [i_3] [i_3] [i_3] [i_4] [(unsigned char)3]);
                                var_22 = ((/* implicit */_Bool) arr_0 [i_2 + 1] [i_1 + 2]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((unsigned long long int) (unsigned char)59)) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) == (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))))), ((~(((unsigned long long int) arr_0 [i_0] [i_0]))))));
    }
    var_24 = (+(5635654249871220428ULL));
    var_25 = ((/* implicit */int) var_5);
    var_26 |= var_7;
}
