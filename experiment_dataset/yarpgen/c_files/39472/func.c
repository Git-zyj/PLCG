/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39472
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
    var_12 = ((/* implicit */int) var_4);
    var_13 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */int) max((var_14), ((+(((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)26084)) : (((/* implicit */int) arr_1 [i_2 + 1]))))))));
                                var_15 = ((/* implicit */int) min((var_15), (((((/* implicit */_Bool) max((((((/* implicit */_Bool) -2147483642)) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) arr_1 [i_0])))), ((+(((/* implicit */int) arr_7 [i_1]))))))) ? ((-(((/* implicit */int) min(((signed char)(-127 - 1)), ((signed char)(-127 - 1))))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)46)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-21706))) : (2757361737U)))))))));
                                var_16 = ((signed char) ((unsigned short) (short)21705));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (2757361733U) : (2747633491U)))) ? ((~(3510026479U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)10678)))))))) ? (((/* implicit */long long int) min((max((((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_2 + 1])), (1963341531U))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))))) : (5LL)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (signed char i_6 = 1; i_6 < 24; i_6 += 1) 
                        {
                            {
                                var_18 -= ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) ((arr_10 [i_1] [i_2] [i_1] [i_6]) ? (15278546666398721823ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                                arr_21 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) 1537605559U))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-8366412038494569887LL)))) + (((((/* implicit */_Bool) ((((/* implicit */int) (short)21705)) | (((/* implicit */int) (unsigned char)236))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-19954)))))) : (((unsigned long long int) (short)-18275))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_4))));
    var_20 ^= ((/* implicit */long long int) ((signed char) var_8));
}
