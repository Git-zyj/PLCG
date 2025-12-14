/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31790
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
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((long long int) var_15)), (((/* implicit */long long int) ((((/* implicit */unsigned int) -1)) >= (var_5))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) var_11))) != ((-(13969118901567028353ULL)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(2342903450U)))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */int) (((-(max((((/* implicit */unsigned long long int) var_12)), (var_11))))) >= (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(unsigned char)1] [4U] [i_4]))) : (arr_3 [i_3]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_9))))))))));
                                var_20 = ((/* implicit */signed char) var_15);
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_2) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2] [i_2 + 2]))) : (((((/* implicit */_Bool) (signed char)116)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (short)27273)))))))) : (max((((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned int) var_14))))), (((((/* implicit */unsigned long long int) -541110322)) | (11330270084634861570ULL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_15);
}
