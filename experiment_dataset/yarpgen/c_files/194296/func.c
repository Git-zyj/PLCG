/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194296
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
    var_18 = ((/* implicit */unsigned short) 1114391845U);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))));
                                arr_13 [i_0] [i_0] &= ((/* implicit */unsigned long long int) (~(((max((((/* implicit */unsigned int) arr_10 [i_1] [i_1] [i_1])), (var_14))) << (((((/* implicit */int) arr_6 [i_0] [i_2])) - (47)))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_2] |= ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-57))) | ((~(3295535817U)))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) var_4)), (arr_0 [i_0] [i_2])))) ? (((arr_4 [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))) : (((/* implicit */unsigned long long int) arr_1 [i_2] [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_2])) ? (((/* implicit */long long int) arr_1 [i_0] [i_1])) : (2547884546007211224LL)))) ? (((/* implicit */int) ((arr_4 [i_1]) < (((/* implicit */unsigned long long int) arr_8 [i_2] [i_2] [i_2] [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2])))))))));
                }
            } 
        } 
    } 
}
