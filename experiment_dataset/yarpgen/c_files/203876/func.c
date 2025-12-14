/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203876
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)191))))) ? (((/* implicit */unsigned long long int) (+(1265372895U)))) : (var_9)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_16 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)216)) ? (-2152141194396531282LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)243)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29922))) : ((+(((arr_0 [i_0] [i_1]) ? (arr_8 [i_0] [i_1] [i_2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))));
                            var_17 -= ((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_0] [i_3]);
                        }
                    } 
                } 
                arr_10 [i_0] [(signed char)3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) >= ((-(((765474888150576942LL) << (((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 3; i_5 < 15; i_5 += 3) 
        {
            for (unsigned short i_6 = 3; i_6 < 13; i_6 += 2) 
            {
                {
                    var_18 -= ((/* implicit */short) ((((((((_Bool) (unsigned short)41171)) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) var_7)))) + (2147483647))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) >= (max((((/* implicit */unsigned long long int) arr_14 [(_Bool)1])), (var_11))))))));
                    var_19 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)0)))) + ((-(((/* implicit */int) arr_1 [i_5])))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) max((var_9), (((/* implicit */unsigned long long int) var_2))));
}
