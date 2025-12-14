/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227350
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
        arr_2 [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) > (((var_7) | (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [(_Bool)1] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_4 [i_0] [i_1 + 3] [i_2 - 2]))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) max((arr_6 [i_0] [i_1 + 1] [i_2 + 1]), (arr_6 [i_0] [i_2 - 1] [i_2 + 1]))))));
                    arr_8 [i_2] [i_1 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_1 + 2] [(_Bool)1])) ? (arr_5 [i_2] [(unsigned char)13] [i_2]) : (arr_5 [i_2] [i_1 + 1] [i_2 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) & (arr_5 [i_2] [3LL] [i_2])))))) : (((((/* implicit */_Bool) var_8)) ? (arr_5 [i_2] [i_1 + 1] [i_1 + 3]) : (arr_5 [i_2] [i_1 + 1] [i_1 + 3])))));
                    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) % (((/* implicit */long long int) var_5))))) ? (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) : (var_7))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_0]))))))) || (((/* implicit */_Bool) max((((/* implicit */short) min((var_0), (var_0)))), (arr_6 [i_1 + 1] [i_1] [i_0]))))));
                }
            } 
        } 
    }
    var_12 &= ((/* implicit */unsigned int) var_1);
    var_13 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (-(var_7)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */int) var_2))))) : (var_1)))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_1)) == (max((((/* implicit */unsigned long long int) (+(var_9)))), (((unsigned long long int) var_4))))));
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        for (long long int i_4 = 3; i_4 < 16; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_2)), ((+(((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (var_10)))))));
                    var_16 = var_2;
                }
            } 
        } 
    } 
}
