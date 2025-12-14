/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207702
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
    for (unsigned int i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */long long int) var_9);
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 9; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (+((+(((/* implicit */int) ((unsigned char) (short)-4027))))))))));
                                arr_13 [i_0] [i_0 - 1] [i_0] [i_0 - 2] [i_0] = ((/* implicit */_Bool) max((min((((/* implicit */short) (!(((/* implicit */_Bool) 2118344978))))), (var_11))), (((/* implicit */short) var_3))));
                                arr_14 [i_2 - 1] [i_2] [i_2] [i_2 - 2] [i_2 + 2] = ((/* implicit */short) ((long long int) -2118344979));
                                var_19 = (+(-2118344979));
                                var_20 = min((((/* implicit */unsigned long long int) max(((~(var_7))), (((/* implicit */unsigned int) 2118344978))))), (min((min((9811160223620258693ULL), (((/* implicit */unsigned long long int) -2118344994)))), (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 2; i_5 < 21; i_5 += 3) 
    {
        for (unsigned short i_6 = 3; i_6 < 20; i_6 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_6)) + ((-(-2118344978)))))) ^ (((((((/* implicit */_Bool) (unsigned short)65533)) ? (var_8) : (((/* implicit */long long int) 16U)))) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_23 &= ((/* implicit */signed char) (_Bool)1);
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) (!(((/* implicit */_Bool) (short)13877)))))) / (var_2)));
}
