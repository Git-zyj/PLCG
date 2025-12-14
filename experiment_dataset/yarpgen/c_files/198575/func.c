/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198575
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
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (((~(arr_1 [8ULL]))) & (((((/* implicit */_Bool) (short)31784)) ? (arr_1 [10U]) : (((/* implicit */int) (_Bool)0)))))))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((unsigned int) (short)-17267))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65524))))) : (3345629714U)))));
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_0))));
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)119)))))));
            }
        } 
    } 
    var_19 &= var_6;
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 13; i_2 += 1) 
    {
        for (unsigned short i_3 = 2; i_3 < 11; i_3 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) arr_8 [i_2])))))))));
                arr_10 [i_2] [i_3 + 2] = ((/* implicit */unsigned int) ((_Bool) ((unsigned int) arr_3 [i_3])));
            }
        } 
    } 
}
