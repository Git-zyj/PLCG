/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217821
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) ((arr_1 [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) -1479482307)) == (arr_2 [i_0] [i_1] [i_0]))))) : (max((max((((/* implicit */unsigned int) var_4)), (arr_4 [i_0] [i_1] [(unsigned short)10]))), (((/* implicit */unsigned int) (_Bool)1))))));
                    arr_7 [i_2] [i_2] = ((/* implicit */int) (short)-7156);
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned short) var_6);
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : ((((_Bool)1) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)59460)) : (((/* implicit */int) var_7)))))))));
    /* LoopSeq 1 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        arr_11 [i_3] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_7))))));
        arr_12 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) min((((var_0) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_9 [i_3] [i_3])))), (((/* implicit */int) min(((short)7156), (((/* implicit */short) (_Bool)0)))))))) ? (((/* implicit */int) max((arr_9 [i_3 - 1] [i_3 - 1]), (var_2)))) : (((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned short) var_6))))) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_10 [i_3]))))));
    }
}
