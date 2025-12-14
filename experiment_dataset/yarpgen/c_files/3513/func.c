/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3513
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_20 = ((/* implicit */signed char) arr_2 [i_0] [i_1]);
            var_21 |= ((/* implicit */unsigned short) ((var_15) ^ (((/* implicit */long long int) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_16)))))));
        }
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            for (short i_3 = 1; i_3 < 20; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    {
                        var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (arr_12 [i_0] [i_0] [i_3] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) & (var_19)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_11 [i_0] [i_3] [i_2] [i_0]), (var_16))))) : (min((((/* implicit */unsigned int) (signed char)-127)), (var_2))))))));
                        var_23 = ((/* implicit */unsigned short) (~(((long long int) ((arr_3 [i_2] [i_3] [i_4]) & (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_6) : (4768841120317708498LL)))) ? (((/* implicit */int) min((((/* implicit */short) var_5)), ((short)31197)))) : (((/* implicit */int) (short)3199))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned short)42462)) : (((/* implicit */int) (signed char)127))))), (((((/* implicit */_Bool) 2047LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (3932160U))))))));
    var_25 = ((long long int) (((!(((/* implicit */_Bool) 1436514951U)))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)3451))) / (9223372036854775807LL))) : (((/* implicit */long long int) (-2147483647 - 1)))));
    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) var_9))));
}
