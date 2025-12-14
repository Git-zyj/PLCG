/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240342
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
    var_16 = ((/* implicit */signed char) ((_Bool) var_13));
    var_17 = ((/* implicit */_Bool) (signed char)-119);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 13; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 = max((((((/* implicit */_Bool) (-(arr_10 [i_0])))) ? (((/* implicit */unsigned long long int) (+(-158557688)))) : (max((var_11), (((/* implicit */unsigned long long int) arr_11 [i_2 - 1] [i_2] [i_1] [i_2 - 1] [i_2] [i_0])))))), (83037713843714841ULL));
                            var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((var_8) % (arr_10 [i_1])))))))));
                            arr_12 [i_3] [i_3] [i_2] = (-(((/* implicit */int) (!(((/* implicit */_Bool) -2601932763335272851LL))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            {
                                arr_21 [i_0] [i_1] [i_5] = ((/* implicit */unsigned int) ((_Bool) max((var_1), (((/* implicit */unsigned long long int) (+(arr_5 [i_6])))))));
                                var_20 *= (!(((_Bool) arr_15 [i_0] [i_4] [i_4])));
                                var_21 += ((/* implicit */short) var_10);
                            }
                        } 
                    } 
                } 
                arr_22 [i_0] [9U] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 9; i_7 += 4) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (short i_9 = 3; i_9 < 8; i_9 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 13638254895210390757ULL)))))) == ((-(-2601932763335272851LL))))))));
                    arr_31 [i_7] |= ((/* implicit */_Bool) var_2);
                }
            } 
        } 
    } 
}
