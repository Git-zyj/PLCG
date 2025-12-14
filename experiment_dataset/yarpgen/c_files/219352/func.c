/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219352
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
    var_19 = ((/* implicit */short) (-(((/* implicit */int) var_13))));
    var_20 = ((/* implicit */short) ((7512259273234429054ULL) >> (((/* implicit */int) (unsigned short)0))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) ^ (7512259273234429070ULL)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_12 [i_3] [i_3] [i_2] [i_2] [i_3] [(short)6] = ((/* implicit */_Bool) var_12);
                                var_22 = ((/* implicit */unsigned char) (+(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)5)) && (((/* implicit */_Bool) (short)-16384)))))) / ((-9223372036854775807LL - 1LL))))));
                            }
                        } 
                    } 
                    var_23 -= ((/* implicit */unsigned char) (-(((((/* implicit */int) (short)127)) >> (((9223372036854775807LL) - (9223372036854775783LL)))))));
                    var_24 = (((~(((var_2) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) << (((((/* implicit */_Bool) (-(var_18)))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)120)) % (((/* implicit */int) (_Bool)1))))) : (3355838777176326727LL))));
                }
            } 
        } 
    } 
}
