/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43516
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
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (min((arr_0 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)15179)) ? (((/* implicit */int) arr_3 [18U])) : (((/* implicit */int) (signed char)109))))))) : (arr_0 [i_1])));
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_10 [11] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (2729624036U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 2] [i_1] [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 - 3] [i_2 - 3] [i_0]))) : (arr_0 [(unsigned short)6])))));
                            var_17 = ((/* implicit */signed char) var_1);
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) (_Bool)1))));
                            var_19 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)4088)) ? (((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 1])) : (((/* implicit */int) (signed char)-67)))), (((/* implicit */int) (unsigned short)5196))));
                            arr_11 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) var_13);
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-91)) != (var_1))))) : (((((((/* implicit */_Bool) (short)20)) || (((/* implicit */_Bool) (signed char)-67)))) ? (((/* implicit */unsigned int) var_1)) : (3626426482U)))));
    var_22 = ((/* implicit */long long int) var_5);
}
