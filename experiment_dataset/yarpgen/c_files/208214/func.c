/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208214
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
    var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_11))));
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) max((var_9), (((/* implicit */signed char) max(((!(((/* implicit */_Bool) 16121932361503670445ULL)))), (var_10)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((short) 16121932361503670436ULL))) ? (((/* implicit */unsigned int) ((int) var_1))) : ((+(1596938304U)))))));
                                var_16 = arr_7 [i_0];
                                var_17 += ((/* implicit */short) ((((/* implicit */int) ((var_10) || ((!(((/* implicit */_Bool) 16121932361503670454ULL))))))) + ((-(((/* implicit */int) arr_9 [i_2] [i_2] [12] [i_2]))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] [i_1] = var_3;
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) (unsigned short)32159);
                    var_19 = ((/* implicit */short) var_10);
                    var_20 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [4ULL]))) >= (2324811712205881173ULL))))) + (((arr_12 [i_5] [i_5] [i_5] [i_5] [i_7] [i_5]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_8))));
}
