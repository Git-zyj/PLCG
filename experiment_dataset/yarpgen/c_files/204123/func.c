/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204123
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
    var_10 = ((/* implicit */int) var_7);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1])) + (((/* implicit */int) (unsigned char)102))))), (((((/* implicit */_Bool) var_4)) ? (arr_5 [i_0 + 1] [i_1 - 2]) : (arr_5 [i_0 - 2] [i_1 - 2])))));
                    var_12 = (unsigned char)252;
                }
            } 
        } 
        var_13 -= ((/* implicit */long long int) (signed char)-21);
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) ((short) (unsigned char)16))) - (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) arr_1 [i_0]))))))))))));
                    var_15 = ((/* implicit */short) ((((/* implicit */int) var_2)) + (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (469762048)))))));
                }
            } 
        } 
    }
}
