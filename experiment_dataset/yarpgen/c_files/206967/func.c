/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206967
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_17 += ((/* implicit */_Bool) max((((unsigned long long int) (!(((/* implicit */_Bool) var_1))))), (((/* implicit */unsigned long long int) min((arr_0 [i_0 + 1] [i_0 + 1]), (arr_0 [i_0 + 1] [i_0 + 1]))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = (+(((/* implicit */int) var_15)));
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_4 [i_0 + 1]))));
        }
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_19 = ((/* implicit */signed char) (~(2839866096U)));
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (arr_11 [i_0 + 1] [i_0 + 1] [i_3] [i_4] [i_3])))), (((unsigned long long int) ((((/* implicit */_Bool) 2754097559U)) ? (1537308674U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7594)))))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (int i_7 = 2; i_7 < 19; i_7 += 3) 
            {
                {
                    var_21 -= ((/* implicit */long long int) 2795698622U);
                    var_22 -= ((/* implicit */unsigned int) arr_16 [i_5]);
                }
            } 
        } 
        var_23 -= ((/* implicit */int) arr_9 [i_5] [i_5] [i_5]);
        arr_21 [i_5] = ((/* implicit */unsigned int) (~(800569019)));
        var_24 -= ((/* implicit */short) (+(((/* implicit */int) (unsigned char)88))));
        var_25 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [(short)20])) ? (((/* implicit */int) arr_15 [i_5])) : (((/* implicit */int) arr_15 [i_5]))));
    }
    var_26 = ((/* implicit */int) var_1);
    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) var_16))));
}
