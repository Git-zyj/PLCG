/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53885
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
    var_15 = min((((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) / (var_14))))), (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))) % (((/* implicit */int) ((var_3) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65504)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_14)) & (min((min((((/* implicit */unsigned long long int) var_6)), (arr_1 [i_0]))), (((/* implicit */unsigned long long int) arr_3 [i_0 - 2] [i_0 + 2]))))));
                var_17 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((unsigned short) arr_0 [i_1] [i_0 - 2]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) >= (9365236212773826610ULL))))) | (((((/* implicit */_Bool) (short)-9714)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12))) : (9081507860935725005ULL))))) : (((/* implicit */unsigned long long int) var_3))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_18 = min((((/* implicit */int) ((_Bool) var_0))), ((-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_7 [i_0])) > (9365236212773826610ULL)))))));
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (_Bool)0))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((((unsigned int) var_8)) != (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) 117146095)) : (var_2))))) ? (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) var_5)))) % (min((((/* implicit */int) (short)32760)), (2147483647))))) : (((/* implicit */int) (_Bool)1))));
}
