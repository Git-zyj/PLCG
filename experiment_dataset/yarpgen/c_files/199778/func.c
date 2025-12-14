/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199778
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [14U] = min((((/* implicit */unsigned int) var_11)), (((((/* implicit */_Bool) (~(var_14)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-42))))) : (max((195219755U), (((/* implicit */unsigned int) (signed char)-63)))))));
                var_15 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((((/* implicit */int) var_9)) >= (((/* implicit */int) (signed char)-66)))))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((int) -6772453573785409345LL)), ((-(((/* implicit */int) (_Bool)1))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_15 [i_4] [4U] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (signed char)-91))));
                                arr_16 [i_2] = ((/* implicit */short) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-96)))))))));
                                arr_17 [i_0] [i_0] [15] = ((/* implicit */unsigned char) var_9);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 2; i_5 < 13; i_5 += 4) 
                {
                    for (int i_6 = 2; i_6 < 15; i_6 += 2) 
                    {
                        {
                            var_16 |= ((/* implicit */unsigned short) (-((((!(((/* implicit */_Bool) 178697641U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) (!((_Bool)1))))))));
                            var_17 &= ((/* implicit */unsigned int) (+(((/* implicit */int) var_13))));
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_13)) ? (var_8) : (((/* implicit */unsigned int) var_4)))), (max((2275689736U), (((/* implicit */unsigned int) var_4))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = (_Bool)1;
    var_20 = ((/* implicit */short) (+((-(((((/* implicit */_Bool) var_6)) ? (195219745U) : (((/* implicit */unsigned int) var_4))))))));
}
