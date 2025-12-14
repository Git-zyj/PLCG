/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21797
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
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [(unsigned char)2] [i_2] &= ((/* implicit */unsigned char) (+((~((~(((/* implicit */int) var_9))))))));
                    arr_9 [i_0] [i_0] [i_1] [i_1] = var_4;
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 3) 
        {
            for (short i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_24 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned char) ((-1037353475573150457LL) % (((/* implicit */long long int) ((/* implicit */int) var_10))))))), (max((((/* implicit */unsigned long long int) arr_16 [i_4] [i_4] [i_4 + 1])), (((((/* implicit */_Bool) 8234855439251874515ULL)) ? (((/* implicit */unsigned long long int) 1888249694U)) : (arr_23 [i_3] [i_4] [i_5] [i_5] [i_5])))))));
                                var_12 += ((/* implicit */signed char) (unsigned char)248);
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) * (((/* implicit */int) arr_17 [i_4] [0U]))))), (min((2406717602U), (((/* implicit */unsigned int) 27)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_7), (2406717578U)))) ? ((+((-2147483647 - 1)))) : (((/* implicit */int) (unsigned char)168))))))))));
                }
            } 
        } 
    } 
    var_14 = (~(((/* implicit */int) ((unsigned char) var_8))));
    var_15 = ((/* implicit */unsigned int) (+(max(((+(((/* implicit */int) (unsigned char)132)))), (((/* implicit */int) var_5))))));
}
