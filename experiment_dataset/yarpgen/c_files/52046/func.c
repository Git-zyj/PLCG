/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52046
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
    var_18 = min((((/* implicit */unsigned int) ((signed char) max((var_11), (var_13))))), (((((/* implicit */_Bool) (short)5439)) ? (((/* implicit */unsigned int) ((var_2) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_16))))) : (var_4))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                arr_5 [i_1] [i_1] = ((/* implicit */_Bool) ((signed char) var_15));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (signed char i_3 = 3; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) arr_2 [i_0] [i_1] [i_2])), ((~(((/* implicit */int) arr_11 [i_4])))))) / ((~((~(var_13)))))));
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_2] = ((/* implicit */short) ((((((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) 8722120489540183560ULL)))) || (((/* implicit */_Bool) ((unsigned int) var_4))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3 - 1] [i_2] [i_3] [i_3 - 2] [i_3 - 2] [i_2])) ? (arr_9 [i_3 - 3] [i_3] [i_3] [i_3] [i_3 - 3] [i_2]) : (((/* implicit */int) var_2)))))));
                                arr_14 [i_2] [i_3] [i_2] [i_2] = ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_6 [i_0] [i_2] [i_2] [(_Bool)1])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_2] [i_4]))))) & ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (7U))))) * (max((var_14), (((/* implicit */unsigned int) min((-1842430792), (((/* implicit */int) (unsigned char)134))))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) & (((/* implicit */int) min(((short)32767), (((/* implicit */short) (_Bool)1)))))));
                arr_16 [i_0] [i_1] = ((/* implicit */unsigned char) arr_0 [i_0]);
            }
        } 
    } 
}
