/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22183
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */int) arr_1 [i_1 - 2])) : (((/* implicit */int) var_12)))) : (((/* implicit */int) min(((unsigned char)31), (((/* implicit */unsigned char) var_0)))))));
                var_19 = ((/* implicit */int) ((unsigned char) var_14));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((unsigned short) (~(((/* implicit */int) ((signed char) var_8))))));
    var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */short) (signed char)103)), ((short)21466)))), (((((/* implicit */_Bool) (-(var_9)))) ? (var_13) : (((/* implicit */long long int) var_18))))));
    var_22 = ((/* implicit */int) ((unsigned long long int) (-((+(var_7))))));
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) (((+(((((/* implicit */_Bool) 5937104951516646183ULL)) ? (((/* implicit */unsigned long long int) var_8)) : (1944771290396179986ULL))))) < (((/* implicit */unsigned long long int) (~((-(arr_12 [i_2] [i_2]))))))));
                    arr_16 [i_3] [i_3] [i_2] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (arr_8 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-28))))), (((/* implicit */long long int) max((((/* implicit */int) var_0)), (var_8))))));
                }
            } 
        } 
    } 
}
