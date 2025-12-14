/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203279
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((9219605564081399874LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-21963)))))) ? (((((/* implicit */unsigned int) var_8)) ^ (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [6ULL] [i_0])))))) ? (((/* implicit */long long int) ((((_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (arr_2 [i_0] [i_1])))) : (9219605564081399874LL)));
                arr_6 [i_0] = ((/* implicit */unsigned char) ((long long int) ((unsigned int) ((((/* implicit */_Bool) (short)-11247)) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned long long int) -9219605564081399874LL))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_13 [i_3] [(short)7] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 9219605564081399873LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3]))) : (((unsigned int) (short)16616)))) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)81)))));
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((382601915165656008LL) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (unsigned char)154))))))))))));
                            var_19 = ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */unsigned long long int) 9219605564081399884LL)) : (arr_4 [i_0] [i_3])))))));
                        }
                    } 
                } 
                var_20 = arr_0 [i_0];
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_0);
    var_22 ^= ((/* implicit */_Bool) ((short) max((((/* implicit */int) ((unsigned short) var_5))), ((~(((/* implicit */int) (short)-29961)))))));
}
