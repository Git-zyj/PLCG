/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206047
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
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    var_16 -= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned short)2032)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))))) : (max((((long long int) -3977832908064436619LL)), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)255)))))))));
                    var_17 *= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned char)0)) : (-8)))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (var_14))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned char) ((61537425U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)75)))));
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) ((((/* implicit */long long int) 1308956465U)) < (1615421514331910603LL))))))) && (((/* implicit */_Bool) max((2240079676456015367ULL), (((((/* implicit */_Bool) 1615421514331910603LL)) ? (16206664397253536240ULL) : (var_7))))))));
                                arr_14 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)35390), (((/* implicit */unsigned short) (unsigned char)3)))))) >= (min((1930574702314319243ULL), (((/* implicit */unsigned long long int) -1615421514331910604LL))))))) >= ((-(((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_2)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (-(1615421514331910603LL)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 3216978994710523861ULL)) ? (((((/* implicit */_Bool) 1615421514331910614LL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-4))))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) 1975820248)) : (1615421514331910614LL))))))));
}
