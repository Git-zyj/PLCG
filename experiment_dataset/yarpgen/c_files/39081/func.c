/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39081
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
    var_15 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) ((var_4) == (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) >> (((/* implicit */int) var_14)))), (((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    for (int i_3 = 3; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */int) arr_4 [i_3] [i_2] [i_1] [i_0])) : (((int) (signed char)15))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) min((((/* implicit */short) ((_Bool) (signed char)-96))), (arr_6 [i_0] [i_1] [i_3] [(signed char)6] [i_3 - 3]))))));
                            arr_8 [i_3] [i_1] [(unsigned char)4] [i_1] [i_1] = ((signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0] [i_3 - 2])) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) (signed char)31)))) : (((/* implicit */int) (unsigned short)11))));
                            var_17 = (signed char)68;
                        }
                    } 
                } 
                var_18 &= ((/* implicit */_Bool) arr_6 [i_0] [i_0] [(_Bool)1] [i_0] [i_0]);
                var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_1]))));
            }
        } 
    } 
}
