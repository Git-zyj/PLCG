/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208008
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
    var_11 = ((/* implicit */short) var_4);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) | (((((/* implicit */_Bool) (short)7991)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7991))) : (2453844721U))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) max(((short)11443), ((short)8001))))));
                                var_14 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (short)8001)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (14274094123126955254ULL))), (((((/* implicit */_Bool) 2453844721U)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8001)))))));
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) 2453844713U);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_12 [i_0] [i_0] = (signed char)127;
    }
    var_15 = ((/* implicit */unsigned long long int) var_8);
    var_16 = ((/* implicit */long long int) ((signed char) min((var_7), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 130135870U))))))));
    var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) min(((short)8012), (((/* implicit */short) ((signed char) var_4))))))));
}
