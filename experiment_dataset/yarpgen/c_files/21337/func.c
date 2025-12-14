/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21337
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) == (var_8))) ? (max((((/* implicit */unsigned long long int) var_1)), (12363719848917486850ULL))) : (((unsigned long long int) var_3))))) && (((/* implicit */_Bool) var_12))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)32066)) == (((/* implicit */int) (short)-28878))))) << (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_1)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32080))) & (6083024224792064766ULL)))))));
                        var_16 = ((/* implicit */unsigned short) 12363719848917486850ULL);
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */signed char) (short)8885);
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        arr_11 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((var_5) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
        arr_12 [i_4] = ((/* implicit */short) 522240);
        var_18 = ((/* implicit */short) (-((+(0ULL)))));
    }
}
