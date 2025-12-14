/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245345
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
    for (long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [i_0 - 1])) + (2147483647))) >> (((arr_3 [(_Bool)1] [(_Bool)1]) + (1195019114)))));
                var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((long long int) (+(((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1]))))))));
                var_13 |= arr_1 [(_Bool)1];
                var_14 = ((/* implicit */int) arr_0 [i_0 + 1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) (unsigned short)5727)) >> (((((/* implicit */int) (unsigned short)5727)) - (5717))))))) ? (((/* implicit */int) (unsigned short)5727)) : (((((/* implicit */int) arr_5 [i_3])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2] [5ULL])))))))));
                arr_8 [i_2] [i_2] = ((/* implicit */unsigned int) arr_2 [i_3] [i_2]);
                /* LoopSeq 1 */
                for (long long int i_4 = 1; i_4 < 9; i_4 += 3) 
                {
                    var_16 -= ((/* implicit */unsigned short) (-(((/* implicit */int) max(((unsigned short)59821), (((/* implicit */unsigned short) arr_11 [i_4 + 2] [i_4 - 1] [i_4 - 1])))))));
                    var_17 = ((/* implicit */signed char) ((unsigned char) ((unsigned char) var_4)));
                    var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (unsigned short)5727))) ? (((/* implicit */int) ((short) (unsigned short)5745))) : (((((/* implicit */_Bool) arr_4 [i_4 + 1] [i_4 + 2])) ? (((/* implicit */int) arr_2 [i_2] [i_4 + 2])) : (((/* implicit */int) arr_2 [i_2] [i_4 + 1]))))));
                    var_19 = ((/* implicit */signed char) min((var_19), (var_3)));
                }
                arr_12 [i_2] = ((/* implicit */_Bool) max(((unsigned short)5745), ((unsigned short)59790)));
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_7 [6U]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 2; i_5 < 7; i_5 += 3) 
    {
        for (long long int i_6 = 1; i_6 < 9; i_6 += 3) 
        {
            {
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5])) ? (arr_7 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                var_22 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_5 [i_5 + 1])) ? (((/* implicit */int) (unsigned short)5727)) : (((/* implicit */int) arr_5 [i_5 + 3]))))));
            }
        } 
    } 
}
