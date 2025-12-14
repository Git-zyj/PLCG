/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216153
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                var_12 ^= ((/* implicit */unsigned short) ((unsigned long long int) min(((+(((/* implicit */int) arr_0 [i_1])))), (arr_4 [i_1 + 2] [i_0] [i_1 + 3]))));
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) arr_3 [i_1]))));
                var_14 += ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4205314778467145844ULL)) ? (((/* implicit */int) (short)-5141)) : (((/* implicit */int) var_4))))), (8216724310621993956ULL))), (((((/* implicit */_Bool) max((14241429295242405759ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) 391701435)) : (4205314778467145837ULL)))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 8; i_4 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)255)))) / (((unsigned long long int) arr_8 [i_2] [i_4 - 1])))))));
                    var_17 = ((/* implicit */unsigned short) ((((_Bool) -611864646)) ? (((/* implicit */int) (unsigned short)65535)) : ((~(arr_5 [8U] [i_3])))));
                    var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_4 + 3] [i_4 + 2])) - (((/* implicit */int) var_4))))) == (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)151)) ^ (((/* implicit */int) (unsigned char)149))))), (288230371856744448ULL)))));
                }
            } 
        } 
    } 
}
