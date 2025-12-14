/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54923
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
    var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)51)))))))), (((((/* implicit */_Bool) (+(-1074702296)))) ? (((((/* implicit */_Bool) (unsigned char)6)) ? (218151362U) : (((/* implicit */unsigned int) -1138535325)))) : (((/* implicit */unsigned int) ((1073740800) - (((/* implicit */int) (unsigned short)49509)))))))));
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (-(((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) / (140737488355327ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12683169260637713217ULL)) ? (268435455U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249)))))))))))));
    var_17 = ((/* implicit */long long int) (((-(((5763574813071838399ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11620))))))) > (((((/* implicit */_Bool) -2515531147096407323LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-16013)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)16004))))) : (((((/* implicit */_Bool) -4142334058489570463LL)) ? (7805301978790059596ULL) : (16724504952984620193ULL)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    var_18 -= ((/* implicit */unsigned char) 4076815923U);
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)39617)) * (((/* implicit */int) (unsigned short)11620))));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31844)) ? (((((/* implicit */_Bool) (short)16016)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (8643397301632108272LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)-14578)))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)255)), (-378878726)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)6821)))))) : (((334111179U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-14656)))));
                        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max(((short)-10367), (((/* implicit */short) (signed char)-87))))), (3363315234891630040ULL))))));
                        arr_13 [(unsigned short)9] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned char)11)) ? (((364653497U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)44))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-56)) || (((/* implicit */_Bool) (signed char)66)))))))), (((/* implicit */unsigned int) (short)16012))));
                        arr_14 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */int) (signed char)105)) == (((/* implicit */int) (unsigned short)49510))));
                    }
                }
            } 
        } 
    } 
}
