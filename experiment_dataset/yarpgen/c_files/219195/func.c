/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219195
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (signed char)52)) != (((/* implicit */int) (signed char)-52))))) >= (((((((((/* implicit */_Bool) (unsigned short)0)) ? (966849646) : (((/* implicit */int) (signed char)-77)))) + (2147483647))) << ((((~(-17))) - (16)))))));
                            var_15 = ((/* implicit */unsigned long long int) ((-1) % (((/* implicit */int) (unsigned short)29231))));
                        }
                    } 
                } 
                arr_12 [i_1 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 2367638477U)), (140737488355327LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)51)) ? (-697482798) : (786308379))))));
                var_16 += ((/* implicit */long long int) (+(((((((/* implicit */int) (signed char)-58)) / (((/* implicit */int) (signed char)-58)))) / (((/* implicit */int) min(((short)-20596), (((/* implicit */short) (_Bool)1)))))))));
                var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)7)) + (((((/* implicit */_Bool) 6962764815871624387ULL)) ? (((/* implicit */int) (short)3)) : (((/* implicit */int) (signed char)58))))))) ? (((/* implicit */int) ((872987247) >= (((/* implicit */int) (unsigned short)65529))))) : ((~(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 2977937421U)) ? (14ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)8191)) << (((/* implicit */int) (_Bool)1))))), (max((((/* implicit */unsigned int) (unsigned short)38693)), (2412225052U))))))));
    var_19 &= ((/* implicit */long long int) var_11);
    var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)2372)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))));
}
