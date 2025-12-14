/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19870
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
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) var_12)), (var_5))) << (((((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) - (4251285674U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 18446744073709551612ULL)))) : (((var_0) - (var_0)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        arr_11 [i_3] [i_2] [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) & (var_7)))) ? (((/* implicit */int) var_17)) : (((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_6)) - (15105)))))));
                        arr_12 [i_0] [i_1] [i_0] = var_1;
                        arr_13 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) ((short) 18446744073709551615ULL));
                        arr_14 [i_3] [i_1] |= ((/* implicit */unsigned int) var_6);
                    }
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        arr_18 [(_Bool)1] [i_0] [i_2] [(_Bool)1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (~(max((var_9), (((/* implicit */int) var_11))))))) ? (((((/* implicit */int) var_4)) - (((/* implicit */int) var_11)))) : (((/* implicit */int) ((short) var_2)))));
                        arr_19 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [(unsigned char)1] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))) <= (((unsigned long long int) 15ULL)));
                        arr_20 [(_Bool)1] [i_1] [(_Bool)1] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) min((((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_9)))), (var_10))))));
                        arr_21 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) << (((131071) - (131052)))));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */long long int) var_9)) ^ (var_16)))) ? (((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_2)))) : (((var_9) & (((/* implicit */int) var_2)))))) >> (((((/* implicit */int) ((signed char) var_0))) + (98)))));
}
