/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31491
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
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = var_4;
                arr_7 [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (unsigned short)9778)) / (1160322859)))));
                var_12 = ((/* implicit */int) (+((-((+(arr_1 [i_0] [i_1])))))));
                var_13 |= ((/* implicit */short) (-(1160322862)));
                var_14 = var_11;
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                arr_13 [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) var_4))));
                arr_14 [i_3] = ((/* implicit */unsigned int) var_7);
                var_15 = ((/* implicit */unsigned char) var_0);
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_7);
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (539807564U)))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1160322877)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))) ^ ((~(var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    /* LoopNest 3 */
    for (long long int i_4 = 1; i_4 < 21; i_4 += 1) 
    {
        for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            for (int i_6 = 0; i_6 < 23; i_6 += 2) 
            {
                {
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (-(((((/* implicit */_Bool) 14766898224647232333ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)133))) : (var_11))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 1; i_8 < 22; i_8 += 4) 
                        {
                            {
                                arr_27 [i_4] [13ULL] [i_7] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) arr_18 [(unsigned short)12] [(unsigned short)12]))))) ? ((~(var_10))) : ((~(var_11)))))));
                                var_19 *= ((/* implicit */signed char) max((((unsigned int) max((var_3), (var_3)))), (var_6)));
                                arr_28 [i_4] [i_4] = ((/* implicit */unsigned char) 1160322876);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
