/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36200
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) (signed char)-18);
                var_13 += ((/* implicit */long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-49)))))) & (8388606U)))));
                arr_4 [i_1] = ((/* implicit */unsigned short) ((0LL) - (((/* implicit */long long int) (-(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)17221)))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            arr_9 [i_1] [i_1] [i_1] [i_1] [i_3] = 4294967295U;
                            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (signed char)66))));
                            var_15 *= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))) > (((/* implicit */int) ((unsigned char) ((int) arr_0 [i_2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) % (((((/* implicit */_Bool) var_3)) ? (3337966830U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))) ? ((((-(var_5))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775792LL)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)6)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
}
