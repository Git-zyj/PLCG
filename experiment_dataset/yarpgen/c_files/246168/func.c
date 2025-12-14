/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246168
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
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 16; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((var_1), (((/* implicit */int) (short)-1))))) & (((unsigned long long int) ((int) (signed char)1)))));
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) 2574213478U);
                }
            } 
        } 
    } 
    var_13 = max((max((((/* implicit */unsigned long long int) max((var_3), (((/* implicit */long long int) var_1))))), (((var_8) ? (((/* implicit */unsigned long long int) var_5)) : (16450437764918266474ULL))))), ((-((+(var_9))))));
    var_14 = (~(((/* implicit */int) (unsigned char)248)));
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) var_10))));
    /* LoopSeq 1 */
    for (short i_3 = 2; i_3 < 21; i_3 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (int i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    {
                        var_16 += ((/* implicit */unsigned short) (unsigned char)18);
                        var_17 = ((/* implicit */short) (((+(((((/* implicit */_Bool) (unsigned short)4355)) ? (var_6) : (((/* implicit */unsigned long long int) 2312313548U)))))) >= (((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_3])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4] [i_3] [i_6])))))) : (max((var_4), (((/* implicit */unsigned long long int) (unsigned short)61180))))))));
                    }
                } 
            } 
        } 
        arr_17 [8] &= ((/* implicit */int) min((max((arr_10 [i_3] [i_3]), (((/* implicit */unsigned long long int) (unsigned short)61169)))), (((((/* implicit */_Bool) ((unsigned int) var_0))) ? (var_4) : (((/* implicit */unsigned long long int) arr_11 [i_3 + 1] [i_3 - 2] [i_3 + 1]))))));
    }
}
