/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228979
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) var_9);
                var_12 *= ((/* implicit */unsigned char) min((((/* implicit */signed char) var_4)), ((signed char)63)));
                var_13 = ((((/* implicit */_Bool) min((((((/* implicit */int) (signed char)63)) - (((/* implicit */int) (signed char)-63)))), (((((/* implicit */int) (unsigned short)54095)) * (((/* implicit */int) (_Bool)0))))))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_1), (((/* implicit */unsigned char) var_8)))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_14 += ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 1014567258U)) ? (3280400038U) : (1014567273U))));
                                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (((~(((/* implicit */int) var_0)))) == (((/* implicit */int) ((signed char) (short)828))))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [16LL] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)231))))), (3280400037U)));
            }
        } 
    } 
    var_16 = ((/* implicit */int) min((var_16), (((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */long long int) 1014567259U)) : (132120576LL))) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) var_1))))));
}
