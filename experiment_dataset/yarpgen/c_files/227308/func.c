/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227308
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
    var_18 = ((/* implicit */short) max((min((((/* implicit */unsigned int) ((254526309) <= (((/* implicit */int) (signed char)109))))), (max((var_11), (((/* implicit */unsigned int) var_14)))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_14)), (var_15))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) != (arr_1 [i_1] [i_0]))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_15)), (arr_4 [i_1] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) arr_5 [i_1])) : ((+(var_4)))))));
                var_19 += ((/* implicit */unsigned short) min((((((unsigned long long int) var_5)) % (((/* implicit */unsigned long long int) ((254526325) >> (((arr_1 [i_0] [i_1]) - (770422402)))))))), (((var_9) * (((/* implicit */unsigned long long int) ((int) 254526309)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                {
                    arr_13 [i_3] [i_3] [i_3] [i_2] &= ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_9 [i_3])) ? (-254526309) : (((/* implicit */int) var_7)))) + (2147483647))) >> (((((/* implicit */int) (unsigned short)16103)) - (16088)))));
                    var_20 -= ((/* implicit */long long int) ((var_11) > (((/* implicit */unsigned int) var_5))));
                }
            } 
        } 
    } 
}
