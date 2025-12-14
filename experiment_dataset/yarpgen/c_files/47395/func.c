/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47395
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
    var_16 = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) var_1)) ? (var_5) : (var_5))), (((((/* implicit */_Bool) (short)30192)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (unsigned char)252)))))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) ^ (min((((/* implicit */int) var_2)), (1015529682)))))));
    var_17 = ((/* implicit */unsigned int) min((((/* implicit */int) (signed char)22)), (var_12)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (1663175830)))) ? (((((/* implicit */_Bool) (signed char)57)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64))) : (8168592875384587651ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)84)))))) && (((((/* implicit */int) ((-1308596933) != (((/* implicit */int) (unsigned char)250))))) == ((~(((/* implicit */int) (signed char)-23))))))));
                                var_19 = ((/* implicit */int) var_15);
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((((/* implicit */int) var_2)) > (((int) (signed char)-23)))) ? (((/* implicit */int) (signed char)-65)) : (((/* implicit */int) arr_2 [i_0])))))));
                            }
                        } 
                    } 
                    var_21 = (unsigned short)58489;
                    arr_13 [i_0] [i_0] [i_2] |= ((/* implicit */signed char) ((long long int) (~(((/* implicit */int) var_7)))));
                }
            } 
        } 
    } 
}
