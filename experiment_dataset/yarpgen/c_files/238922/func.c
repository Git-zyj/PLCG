/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238922
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
    var_17 = ((/* implicit */unsigned long long int) ((long long int) max((((long long int) 3084406867U)), (((/* implicit */long long int) (unsigned short)20987)))));
    var_18 = ((/* implicit */unsigned short) (~(1210560437U)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(1637809130U)))) != ((~(arr_2 [i_0] [i_1] [i_1])))));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) 3280165548U)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) -1220923221)) ? (85893154U) : (var_14))) : (((/* implicit */unsigned int) -725095713))))) : (max((((/* implicit */unsigned long long int) 840592512U)), (((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_14 [i_4] [i_4] &= ((/* implicit */unsigned long long int) ((840592496U) != (2427030901U)));
                                var_19 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_0))))));
                                arr_15 [i_3] [i_3] [i_1] [i_3] [i_4] [i_1] [i_2 + 3] = ((/* implicit */unsigned int) -5995069429856905281LL);
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(arr_8 [i_0] [i_2 + 2] [i_2] [i_3])))))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned long long int) arr_12 [i_1] [i_1])));
            }
        } 
    } 
}
