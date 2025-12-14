/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223255
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)32263)) + (((((/* implicit */int) (signed char)-59)) | (((/* implicit */int) (signed char)55))))))) == (((unsigned long long int) ((int) var_2)))));
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((short)(-32767 - 1)), (((/* implicit */short) (signed char)58))))) ? (min((((/* implicit */int) (_Bool)1)), (((((((/* implicit */int) (short)-32757)) + (2147483647))) >> (((-2898294928400331988LL) + (2898294928400332013LL))))))) : (((((/* implicit */int) (_Bool)1)) ^ (-487427892)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (long long int i_4 = 2; i_4 < 7; i_4 += 4) 
                        {
                            {
                                var_14 = ((long long int) ((max((4046517454988563772LL), (((/* implicit */long long int) 4194303)))) % (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                                var_15 = ((/* implicit */long long int) arr_10 [10] [10] [(signed char)4] [i_3]);
                                arr_14 [i_3] [i_2] = ((/* implicit */_Bool) (signed char)-48);
                                var_16 = ((/* implicit */unsigned long long int) var_3);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) (_Bool)1);
                    var_18 = ((/* implicit */signed char) 2069779848U);
                    var_19 = ((/* implicit */unsigned long long int) 2069779848U);
                }
            } 
        } 
    } 
}
