/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42228
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
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) var_0);
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) min((((/* implicit */int) var_2)), (max((var_0), (((/* implicit */int) var_6)))))))));
                                var_18 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))) ? ((+((~(((/* implicit */int) var_6)))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-1)), (var_8)))) ? (((/* implicit */int) (unsigned char)61)) : (((/* implicit */int) (unsigned char)176))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 19; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            {
                                var_19 = min((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-49))) : (var_13))));
                                var_20 = ((/* implicit */long long int) min((((/* implicit */short) max((min((((/* implicit */unsigned char) (signed char)24)), ((unsigned char)176))), ((unsigned char)86)))), (var_11)));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) var_4);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_12))));
}
