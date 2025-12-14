/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196573
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
    for (signed char i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned char i_3 = 3; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_18 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 0)), (var_15)))) ? (arr_2 [i_1]) : (((/* implicit */long long int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (~(arr_2 [i_2])))))))) : (min((((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */long long int) arr_6 [i_2] [i_0])))), (((/* implicit */long long int) ((var_11) <= (((/* implicit */int) (unsigned char)183)))))))));
                            var_19 += ((/* implicit */unsigned short) (~(var_11)));
                            arr_12 [i_3 - 1] [i_0] [i_1] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) (-(7921401119337330089ULL)))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_0 - 1] = ((/* implicit */signed char) arr_7 [i_0]);
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min((-1683908365724857118LL), ((+((+(4294967295LL))))))))));
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (min((((/* implicit */unsigned int) (-(var_11)))), ((+(1897341787U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (4294967295U)))))))))));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)10827)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0]))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) (-(((max((var_7), (((/* implicit */long long int) (unsigned short)56970)))) % (((/* implicit */long long int) 2397625508U))))));
    var_24 &= ((/* implicit */unsigned short) (-((-(var_13)))));
    var_25 &= ((/* implicit */signed char) 12U);
    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */_Bool) (+(((-2027184858273054286LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)171)))))))) && (((/* implicit */_Bool) ((signed char) var_1))))))));
}
