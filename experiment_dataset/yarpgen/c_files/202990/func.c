/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202990
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
    var_18 -= ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */int) (unsigned char)255)) : (2147483628)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) ((unsigned char) var_14))))), (((/* implicit */int) var_3))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_9))));
                        var_20 = ((/* implicit */long long int) ((short) (+(var_11))));
                        var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((arr_8 [i_1] [(signed char)17] [i_3]), (((/* implicit */unsigned short) (signed char)-118)))))));
                        arr_15 [i_0 + 1] [i_1] [i_1] [i_3] [i_0] = ((/* implicit */unsigned short) arr_9 [i_0] [i_1]);
                    }
                    arr_16 [i_1] = arr_6 [i_1] [i_1] [i_2];
                }
            } 
        } 
    } 
}
