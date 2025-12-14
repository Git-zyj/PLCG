/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20493
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1763795057)) ? (var_5) : (((((var_5) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13856)))))));
    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (1317030526588805544LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_6)))))) >> (((var_0) - (11251695114708541103ULL)))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) var_14)) + (((/* implicit */int) var_11))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = (_Bool)0;
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_11 [7ULL] [7ULL] [10ULL] [i_4] [7ULL] [i_3] [i_2] = ((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned int) arr_4 [i_2])), (arr_3 [i_0]))));
                                arr_12 [i_4] [i_2] [i_0] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((long long int) arr_1 [i_1]))), (var_5)));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_13 [(signed char)2] = ((/* implicit */unsigned int) var_3);
        arr_14 [i_0] = ((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_0]);
    }
}
