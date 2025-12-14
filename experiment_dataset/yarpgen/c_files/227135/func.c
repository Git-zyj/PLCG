/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227135
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_1))));
                    var_15 = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned long long int) 14242861264531103086ULL)));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (short)2450))));
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 4) 
        {
            {
                var_17 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned char) arr_10 [i_4] [i_4 - 2]))) && (((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4 - 2] [i_4 - 1]))) : (((arr_6 [i_4 - 1] [i_4] [i_4 + 1] [i_4 + 1]) >> (((/* implicit */int) (_Bool)1))))));
                var_18 |= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_2 [i_4 - 1] [18ULL])), (arr_10 [18ULL] [18ULL])))) && (((/* implicit */_Bool) arr_6 [i_4 - 2] [19] [i_4] [i_4 - 1])))));
                arr_12 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((arr_8 [i_3]), (((/* implicit */short) var_2))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((((/* implicit */int) var_1)), (var_12))), (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) var_11)) : (((unsigned int) var_11)))) : (((/* implicit */unsigned int) max((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_9)))), (((((/* implicit */int) var_6)) | (((/* implicit */int) var_6)))))))));
}
