/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208669
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 7; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 7; i_3 += 1) 
                {
                    {
                        arr_10 [i_1] [i_1] [i_1] [i_2] [i_3] [(short)4] = ((((/* implicit */_Bool) ((567453553048682496ULL) - (8527575985816764725ULL)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) : (min((((/* implicit */unsigned long long int) var_9)), (((17879290520660869113ULL) / (((/* implicit */unsigned long long int) 4190208U)))))));
                        arr_11 [i_1] [i_3] = ((/* implicit */int) ((short) (~(arr_7 [i_3 + 2] [i_3 - 2] [i_3] [i_3 + 2]))));
                        arr_12 [i_3] [i_2] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_4 [i_0] [i_1] [i_2] [i_3 - 2]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_1]))))))) * (max((((/* implicit */unsigned int) arr_9 [9] [9] [i_2 + 2] [i_1])), (arr_4 [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3 - 1])))));
                        var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) var_9))));
                    }
                } 
            } 
        } 
        var_12 = ((/* implicit */unsigned short) var_5);
    }
    for (short i_4 = 2; i_4 < 14; i_4 += 3) 
    {
        var_13 = ((/* implicit */long long int) ((unsigned short) 17879290520660869120ULL));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                {
                    arr_23 [i_4] [i_4] [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_15 [i_4]);
                    var_14 = ((/* implicit */unsigned char) 4269293545U);
                }
            } 
        } 
    }
    var_15 = var_10;
    var_16 = ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) (unsigned short)35192))))))));
}
