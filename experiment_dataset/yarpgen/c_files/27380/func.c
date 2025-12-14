/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27380
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
    var_16 = ((/* implicit */long long int) (_Bool)1);
    var_17 = ((/* implicit */long long int) ((((/* implicit */int) (short)-11032)) % (((/* implicit */int) ((max((275512261U), (((/* implicit */unsigned int) (unsigned char)94)))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)180)) && (((/* implicit */_Bool) (signed char)-11)))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_6 [5U] [2U] [i_1] [3U] = ((/* implicit */short) ((2745974392U) >> (((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)27027)) * (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-11)) + (2147483647))) << (((((((/* implicit */int) var_8)) + (105))) - (6)))))) : (((arr_5 [(unsigned short)3] [3LL]) & (((/* implicit */long long int) ((/* implicit */int) var_8))))))) - (4806944922895160964LL)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_12 [1ULL] [16ULL] [i_1] [(_Bool)1] = ((/* implicit */short) max((((/* implicit */long long int) ((unsigned int) var_4))), (((((((/* implicit */_Bool) (signed char)-106)) ? (-3460516348338577841LL) : (-3899682890610024501LL))) / (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)23471)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_9))))))));
                                var_18 |= ((/* implicit */long long int) max(((+(0ULL))), (((((/* implicit */_Bool) max((arr_10 [3U] [(signed char)3] [13U] [14LL] [1LL] [(unsigned char)14]), (var_15)))) ? (((((/* implicit */_Bool) var_15)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32759))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((-3460516348338577841LL) >= (((/* implicit */long long int) ((/* implicit */int) (short)32734)))))))))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((6435447727257949127LL), (((/* implicit */long long int) var_13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((+(18446744073709551610ULL))) < (((/* implicit */unsigned long long int) max((2141677270267663639LL), (2141677270267663661LL)))))))) : ((-(var_9)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
