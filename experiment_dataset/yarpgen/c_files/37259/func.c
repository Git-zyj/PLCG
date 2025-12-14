/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37259
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
    var_18 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)781))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (short i_4 = 4; i_4 < 7; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_3] [i_2] [i_4] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])) > (((/* implicit */int) ((_Bool) (short)-768)))));
                                arr_15 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */short) (_Bool)0);
                                var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)25940))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    for (unsigned short i_6 = 1; i_6 < 10; i_6 += 4) 
                    {
                        {
                            var_21 = (!((!(((/* implicit */_Bool) (short)782)))));
                            arr_24 [i_6] [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_1] [i_5] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (((((/* implicit */_Bool) (short)-769)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_21 [i_0] [i_6 + 1] [i_5] [i_0])))));
                            var_22 = max((max((-4730273117740820725LL), (((/* implicit */long long int) (_Bool)1)))), ((+(1381496577054571949LL))));
                        }
                    } 
                } 
                var_23 = (-(((((/* implicit */_Bool) var_8)) ? (arr_22 [i_0] [i_0] [i_1] [i_1] [i_1]) : (arr_22 [i_0] [i_1] [i_1] [i_1] [i_1]))));
            }
        } 
    } 
}
