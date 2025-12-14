/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189921
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
    var_10 = ((/* implicit */_Bool) min(((+(((int) var_0)))), (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) ((((/* implicit */int) var_3)) <= (((/* implicit */int) (signed char)-46))))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((long long int) (~((~(var_7)))));
        arr_3 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-10))));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            arr_9 [i_1] [4ULL] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)3))));
            var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) + (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)13524)) : (((/* implicit */int) (_Bool)1))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_3 = 2; i_3 < 16; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                {
                    var_12 = (unsigned char)3;
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) var_6))))) & (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))) & (3986519249U)))));
                }
            } 
        } 
        arr_16 [1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
        arr_17 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_5)))) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_5)))))));
    }
    for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) ((unsigned short) (-(((/* implicit */int) var_2)))));
        /* LoopSeq 1 */
        for (int i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            var_15 = ((/* implicit */short) (~(var_9)));
            arr_22 [i_5] [i_5] [i_5] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)224))))));
            arr_23 [i_5] = ((/* implicit */signed char) (short)-25457);
        }
    }
    /* LoopSeq 1 */
    for (signed char i_7 = 1; i_7 < 20; i_7 += 1) 
    {
        arr_26 [i_7] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)122)) : (var_8)))));
        arr_27 [i_7] = ((((/* implicit */int) ((short) var_5))) - (((/* implicit */int) var_3)));
        arr_28 [i_7] = (((-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))))) >> (((/* implicit */int) ((var_0) >= (((/* implicit */unsigned int) var_1))))));
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) (+(((/* implicit */int) (short)28365))))), (((308448046U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))))));
    }
}
