/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244298
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
    var_10 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (18446744073709551615ULL) : (7138177918124887581ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-5504221035673083180LL)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_11 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) min((arr_1 [i_0]), ((_Bool)1)))) : (((/* implicit */int) arr_3 [8])))))));
                var_12 = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_4 [i_0]))))))), (((/* implicit */int) var_0))));
                var_13 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) arr_2 [i_0])) < (((/* implicit */int) arr_2 [i_0])))));
                var_14 = ((/* implicit */unsigned char) min((min((arr_2 [i_0]), (arr_2 [i_0]))), (((((unsigned long long int) (unsigned short)33895)) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned char)8])))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 7; i_2 += 1) 
                {
                    for (unsigned short i_3 = 3; i_3 < 10; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) max((-5504221035673083208LL), (((/* implicit */long long int) 1073741823)))))));
                                arr_13 [i_0] [i_0] [i_2] [i_3 + 1] [i_4] = ((/* implicit */unsigned short) ((long long int) min((((/* implicit */signed char) arr_2 [i_0])), ((signed char)-12))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
