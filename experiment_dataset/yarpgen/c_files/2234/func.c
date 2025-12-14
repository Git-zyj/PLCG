/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2234
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
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_17 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? (2061861582U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))));
        var_18 = ((/* implicit */long long int) (-(var_1)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    {
                        arr_12 [i_4] = arr_4 [i_4];
                        var_19 = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_12))) + (arr_10 [i_4] [i_3] [i_4])))));
                        var_20 = ((/* implicit */short) var_4);
                        arr_13 [i_1] [i_1] [i_4] [2LL] [i_1] = ((/* implicit */int) min((min((((unsigned int) var_0)), (((/* implicit */unsigned int) min((((/* implicit */short) arr_3 [i_3] [i_1])), (var_2)))))), (((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned short)3), (((/* implicit */unsigned short) (unsigned char)225))))) > (((int) (_Bool)1)))))));
                        arr_14 [i_1] [i_2] [i_4] [i_4] [16U] = ((/* implicit */unsigned char) ((int) (~(((377350045U) - (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */long long int) var_4)) : (var_9)))));
        var_22 -= ((/* implicit */signed char) var_11);
    }
    /* LoopSeq 1 */
    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        arr_17 [15U] [15U] = ((/* implicit */unsigned int) (((_Bool)1) ? ((((~(17805170476019088853ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) arr_15 [3ULL])) : (var_1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (((_Bool)1) && (((/* implicit */_Bool) var_0))))), (arr_15 [i_5])))))));
        var_23 -= (~(((/* implicit */int) ((unsigned char) var_0))));
    }
}
