/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193619
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
    var_12 = ((/* implicit */unsigned int) var_11);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned char) var_9);
                        arr_13 [i_0] [i_2] [i_1] [i_0] = (-(8969713445347187671LL));
                        var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-13703)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)82))) : (458752U)));
                    }
                    var_15 = ((/* implicit */unsigned char) ((signed char) (short)-21065));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) 8969713445347187671LL)) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) var_8))))))));
                        arr_18 [i_4] [i_2] [i_0] [i_4] &= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 4840921403052752674LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (9223372036854775807LL)))));
                        arr_19 [i_0] [i_0] [i_1] [i_2] [i_4] [i_0] = ((/* implicit */int) (-(-8969713445347187643LL)));
                    }
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        var_17 += ((/* implicit */short) (((-(arr_1 [(short)6] [i_5]))) ^ (min((var_1), (((/* implicit */long long int) var_8))))));
                        arr_22 [i_0] [i_1] [i_2] [i_5] &= ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) (signed char)14)) ? (var_5) : (var_3))), (((/* implicit */unsigned long long int) min(((signed char)107), ((signed char)-107)))))) > (((/* implicit */unsigned long long int) var_7))));
                    }
                    var_18 = ((/* implicit */signed char) arr_6 [i_2] [i_1] [i_1] [(unsigned char)15]);
                }
            } 
        } 
    } 
}
