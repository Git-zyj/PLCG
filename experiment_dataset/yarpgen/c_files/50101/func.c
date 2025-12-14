/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50101
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-33))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-33)), (var_15))))) : (min((((/* implicit */unsigned int) (signed char)32)), (3418342037U)))));
    var_17 = ((/* implicit */int) var_11);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_18 = 93916173;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 22; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_14 [6U] [(unsigned char)8] [(_Bool)1] [14U] [14U] |= ((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) (unsigned short)22492)))));
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) min((((/* implicit */short) ((_Bool) arr_2 [i_0] [i_1] [i_3 - 2]))), (arr_2 [i_0] [i_3] [i_3 - 2]))))));
                                arr_15 [i_0] [12ULL] [(short)5] = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)116)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)31338)))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [i_2] [i_2]))))) ? (((/* implicit */int) arr_7 [i_4] [i_1] [i_1] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_7 [i_3 + 1] [i_1] [i_0 + 2] [i_0 + 2] [13ULL] [i_1]))))));
                                var_20 = ((/* implicit */_Bool) max((((/* implicit */int) (short)-28558)), (1021795043)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
