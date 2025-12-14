/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233125
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
    for (unsigned char i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 4; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [i_1 - 1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */int) (short)30543)) : (((/* implicit */int) (unsigned short)0))));
                                var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_10 [i_1 + 1] [i_0] [i_3 + 2] [(signed char)16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [(short)12])))))) : (((((/* implicit */_Bool) arr_2 [i_4] [(unsigned short)16])) ? (((/* implicit */long long int) var_7)) : (var_12)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [(unsigned short)7] [8U] [8U]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 7035982665731899236LL)) ? (arr_1 [i_2] [i_3]) : (((/* implicit */unsigned int) var_9))))) : (((((/* implicit */_Bool) arr_10 [i_4] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) var_7)) : (-8337742893388296819LL)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-46))) : (arr_4 [i_0] [i_1] [i_3] [i_4])))) ? (((var_0) ? (140600049401856ULL) : (((/* implicit */unsigned long long int) 1665261128U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (short)-19024))))))))));
                            }
                        } 
                    } 
                    arr_12 [i_2] [i_2] [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) arr_10 [i_0] [i_2] [i_2] [i_2])) : (12607835261761590317ULL)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)30561)) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) -8337742893388296816LL)) ? (-1704195137) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15338012056240302834ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)30561))) : (2629706181U)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (-8337742893388296819LL) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)19023)))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)7936)) ? (12948915324804570836ULL) : (((/* implicit */unsigned long long int) 2147483647)))))));
}
