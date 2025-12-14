/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37438
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
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_17 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 15257707113497409731ULL))));
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-15)), (var_7))))))) <= ((~(((/* implicit */int) var_12))))));
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) min((((((/* implicit */_Bool) arr_10 [i_0 - 3] [i_1])) ? (((((/* implicit */_Bool) var_6)) ? (-4176333966018144994LL) : (-7326606579681970697LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_1] [i_1])) & (((/* implicit */int) arr_3 [i_0 + 2] [(unsigned short)19] [i_4]))))))), (((/* implicit */long long int) max((max((var_15), (-416071374))), (((((/* implicit */int) var_12)) | (((/* implicit */int) (_Bool)1))))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 += ((/* implicit */int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) var_15)) > (var_1)))), (((((/* implicit */_Bool) (signed char)-91)) ? (1687471809U) : (4294967281U)))))), ((~(var_9)))));
}
