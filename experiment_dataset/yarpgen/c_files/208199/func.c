/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208199
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_10 |= ((/* implicit */signed char) (-(var_8)));
            arr_5 [i_1] = ((/* implicit */signed char) (-(var_6)));
            var_11 = ((/* implicit */int) var_5);
            arr_6 [i_1] = ((/* implicit */int) var_6);
        }
        for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (~(((unsigned int) var_3)))))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    {
                        var_13 = ((/* implicit */signed char) (-(-1680701163279280702LL)));
                        var_14 = (!(((/* implicit */_Bool) var_7)));
                    }
                } 
            } 
        }
        var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
        var_16 *= ((/* implicit */_Bool) (-(((/* implicit */int) var_4))));
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_7 = 1; i_7 < 20; i_7 += 3) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 21; i_9 += 3) 
                        {
                            {
                                arr_29 [i_5] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) min(((-(var_6))), (((/* implicit */unsigned long long int) (-(31))))));
                                arr_30 [2U] [2U] [i_6] [2U] [i_7] [i_8] [i_9] |= ((/* implicit */int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (short)32767))))), ((+(var_1)))));
                                var_17 = min((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) var_0);
                var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))))), (max((max((var_6), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((int) var_8)))))));
                var_20 |= ((/* implicit */short) (~(((/* implicit */int) ((signed char) var_8)))));
                /* LoopNest 2 */
                for (long long int i_10 = 2; i_10 < 19; i_10 += 3) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_37 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */short) var_4)), (var_9)))))))));
                            var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) (!((_Bool)1))))));
                            var_22 = ((/* implicit */int) (!(min(((!(((/* implicit */_Bool) var_6)))), ((!(((/* implicit */_Bool) var_7))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) min((min((((/* implicit */long long int) var_0)), (max((var_5), (((/* implicit */long long int) var_9)))))), (((/* implicit */long long int) (-((+(((/* implicit */int) var_9)))))))));
}
