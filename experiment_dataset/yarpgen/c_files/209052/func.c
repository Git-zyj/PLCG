/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209052
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1 + 1] [(signed char)3] = ((/* implicit */signed char) min(((~(arr_2 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2779371435395139792ULL)) ? (3313182475582554747LL) : (-3313182475582554748LL))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_3] = ((/* implicit */signed char) ((long long int) min((min((arr_1 [i_1]), (((/* implicit */int) arr_6 [15] [i_1] [i_1] [i_0])))), (((/* implicit */int) min((var_9), (((/* implicit */unsigned short) arr_0 [i_3] [i_2]))))))));
                            var_14 = ((/* implicit */_Bool) ((signed char) (_Bool)0));
                        }
                    } 
                } 
                arr_10 [i_0] [i_1] [i_1 + 1] = ((/* implicit */unsigned int) (-(-9223372036854775807LL)));
                arr_11 [i_1] [i_0] = ((/* implicit */signed char) -3313182475582554742LL);
            }
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((((/* implicit */int) (signed char)-75)) + (2147483647))) << (((((/* implicit */int) var_10)) - (44008))))), (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) min((min((var_12), (((/* implicit */unsigned short) var_6)))), (((/* implicit */unsigned short) var_3)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54134)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13))))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
}
