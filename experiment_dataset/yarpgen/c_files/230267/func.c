/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230267
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((unsigned int) 3782119041U))))) ? (min((max((((/* implicit */unsigned int) (unsigned short)4984)), (820552016U))), ((+(var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
        arr_4 [2] |= ((/* implicit */short) (signed char)-88);
    }
    for (short i_1 = 1; i_1 < 16; i_1 += 2) 
    {
        var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (2944864080U) : ((-(min((898249683U), (173371806U)))))));
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 16; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                {
                    arr_11 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((_Bool) arr_10 [i_3] [i_3] [i_2] [i_1]))), (arr_1 [16U])));
                    var_20 = max((2944864086U), (((/* implicit */unsigned int) (short)-22029)));
                    var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) max((4121595490U), (((/* implicit */unsigned int) -259970478))))))) <= (arr_9 [i_1] [i_1] [i_1] [i_3])));
                    arr_12 [i_3] [i_1] [i_3] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) 4121595490U)) > ((+(8895036886494939595ULL))))) ? (((((/* implicit */int) var_14)) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)64))) >= (-8725136057738209164LL)))))) : (((/* implicit */int) (short)22027))));
                }
            } 
        } 
        var_22 = ((/* implicit */short) var_12);
    }
    var_23 = ((/* implicit */short) max((((/* implicit */unsigned int) var_14)), ((+(((unsigned int) (signed char)-16))))));
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        for (int i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            for (long long int i_6 = 2; i_6 < 18; i_6 += 4) 
            {
                {
                    var_24 &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (signed char)106)), (5316291014069130730ULL)));
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) 3018649762U))));
                    var_26 = ((/* implicit */short) max(((+(arr_16 [i_6] [i_4]))), (min((((/* implicit */unsigned int) var_7)), (((var_3) - (arr_16 [i_5] [i_4])))))));
                    arr_22 [i_5] = ((/* implicit */unsigned long long int) ((arr_2 [i_4]) / (min((((/* implicit */long long int) 512848255U)), (2532450344949055801LL)))));
                }
            } 
        } 
    } 
}
