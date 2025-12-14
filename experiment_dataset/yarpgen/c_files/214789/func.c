/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214789
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_9 [i_0 + 1] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) (unsigned short)2580);
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((min((arr_2 [i_2 + 1]), (arr_2 [i_2 + 2]))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))))));
                            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((((/* implicit */int) ((arr_8 [i_1] [i_1] [i_0]) != (arr_8 [i_4] [10LL] [i_2 + 2])))) + (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_12))))))) == (((((/* implicit */int) var_2)) % ((~(((/* implicit */int) arr_10 [i_0] [i_0] [i_0 - 1] [i_1])))))))))));
                            arr_15 [i_0] [i_1] [i_0] &= ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned short)27187)), ((~((~(((/* implicit */int) arr_1 [i_2] [i_4]))))))));
                        }
                        var_17 ^= ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */unsigned int) arr_12 [i_2] [i_2] [i_2 + 1] [i_2] [i_2 - 1] [i_2]))))) : (max((((/* implicit */unsigned long long int) arr_2 [i_1])), (arr_8 [i_0 - 2] [i_0 - 2] [i_0]))))), (max((min((((/* implicit */unsigned long long int) (unsigned short)62955)), (var_0))), (((/* implicit */unsigned long long int) ((arr_6 [i_3] [i_1]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_0])))))))));
                    }
                    arr_16 [i_2] [i_1] [i_1] [i_2 + 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [(_Bool)1] [i_0])) == (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_0]))))), (((unsigned int) 1948183601U)))))));
                    arr_17 [i_2] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_0 [i_2])) + (2147483647))) << ((((-(((/* implicit */int) ((signed char) (unsigned short)62956))))) - (20)))));
                    var_18 = ((/* implicit */unsigned short) ((_Bool) ((unsigned short) (~(arr_4 [i_0 - 2] [i_1])))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) min((min((max((var_8), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) var_3)))))))))));
}
