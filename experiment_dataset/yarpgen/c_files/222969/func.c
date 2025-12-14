/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222969
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
    var_10 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_11 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_2 [i_1 + 1]))) ? (min((arr_2 [i_1 - 1]), (arr_2 [i_1 - 1]))) : (min((((/* implicit */int) (unsigned char)198)), (arr_2 [i_1 + 1])))));
                arr_6 [i_1] [i_1] [i_1 - 1] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) var_3)) / (arr_3 [i_0] [i_0])))), (((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */long long int) arr_0 [i_1 + 1] [i_1]))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)55)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))) ? ((~(((/* implicit */int) min(((short)3620), (((/* implicit */short) (unsigned char)198))))))) : ((+((-(((/* implicit */int) var_3))))))));
    var_13 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 3 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 1; i_3 < 22; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 22; i_4 += 2) 
            {
                {
                    var_14 = ((/* implicit */signed char) (~(((((/* implicit */int) var_3)) & (((/* implicit */int) ((short) var_9)))))));
                    arr_13 [i_3] [i_3] = ((/* implicit */unsigned short) (+(6611464457981525492ULL)));
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((var_4) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3 + 1] [(short)2] [i_3 - 1]))))) ? (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_11 [i_2 - 1] [(unsigned short)0] [i_4])))), (((/* implicit */int) arr_9 [16U]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249))) : (var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_4] [(short)8] [4U])) ? (((/* implicit */int) (unsigned char)204)) : (((/* implicit */int) var_2))))) : (max((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (var_4))))))))));
                }
            } 
        } 
    } 
}
