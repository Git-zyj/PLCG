/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27281
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
    for (short i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(7U))))))) % (((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_2]))))), (max((var_7), (((/* implicit */unsigned short) var_5)))))))));
                    arr_6 [i_0 - 2] [i_0 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) min((max((var_0), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))))))) ? (((/* implicit */int) min((var_4), ((unsigned char)205)))) : (((/* implicit */int) var_3))));
                    var_13 = max((((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (var_8)))), (max(((-(((/* implicit */int) var_2)))), (((/* implicit */int) var_7)))));
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_2))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */int) var_11)))), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) var_0)))))) : ((-(min((var_6), (((/* implicit */long long int) var_2))))))));
    /* LoopNest 2 */
    for (long long int i_3 = 1; i_3 < 21; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            {
                arr_14 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_10 [i_3]), (((/* implicit */short) var_10))))) ? (((((/* implicit */_Bool) 21U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32765))) : (6803681936013094624LL))) : (((/* implicit */long long int) (~(-1936824574))))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)12801))) : (min((((/* implicit */long long int) (_Bool)1)), (9223372036854775805LL)))));
                arr_15 [i_3 - 1] [12ULL] |= ((/* implicit */unsigned short) arr_8 [i_3 + 2]);
            }
        } 
    } 
    var_16 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (var_0)))) ? (((/* implicit */int) min((var_4), ((unsigned char)32)))) : (((/* implicit */int) ((_Bool) var_10)))))) : (max((((/* implicit */unsigned long long int) min(((short)-32762), (((/* implicit */short) var_4))))), (var_0)))));
}
