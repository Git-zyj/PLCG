/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45251
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_7 [i_1] [i_0] [i_0] |= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)52)) ? (var_6) : (var_3))))));
                var_10 += ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-19))) : (-1LL))))) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                            {
                                arr_15 [i_2] [i_1] [i_1] [i_3 + 1] [i_3 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) max(((signed char)-53), ((signed char)127))))))) ? (var_4) : (((/* implicit */unsigned int) (~((~(-1))))))));
                                var_11 &= ((/* implicit */short) max(((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) > (var_3)))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)49)) && (((/* implicit */_Bool) (signed char)121))))))), ((-(((/* implicit */int) var_8))))));
                            }
                            arr_16 [i_0] [i_0] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned int) var_0);
                            var_12 = ((/* implicit */unsigned int) (((+(((/* implicit */int) var_5)))) <= ((+(((/* implicit */int) ((var_6) != (var_3))))))));
                            var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) min((-4443725375300246188LL), (-4443725375300246188LL))))));
                            var_14 = ((/* implicit */long long int) (((((-(((/* implicit */int) min((((/* implicit */short) var_7)), (var_9)))))) + (2147483647))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))) ? ((-(((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) (signed char)52)) ? (((/* implicit */int) (unsigned short)11531)) : (((/* implicit */int) (signed char)125)))))) - (50)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) var_8);
}
