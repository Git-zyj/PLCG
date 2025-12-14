/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21560
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
    var_14 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_15 = ((/* implicit */signed char) (((~((+(var_4))))) >= (var_9)));
        var_16 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-17)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_6)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) (!((!((_Bool)1)))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3] [i_3]))))));
                        var_17 = ((unsigned char) ((((/* implicit */_Bool) arr_7 [i_2] [i_2 - 1])) ? (((((/* implicit */_Bool) (signed char)-17)) ? (arr_8 [i_0] [i_0] [i_2 - 1] [14]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)179))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 11ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))))));
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */long long int) (unsigned char)255);
    var_19 = var_4;
}
