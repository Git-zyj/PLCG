/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225651
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
    var_11 |= ((/* implicit */signed char) var_6);
    var_12 += ((/* implicit */signed char) ((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_8)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) (((-(((/* implicit */int) ((unsigned short) 2147483647))))) <= (((/* implicit */int) (_Bool)1))));
                                var_14 = ((/* implicit */short) 3529660545942831471ULL);
                                arr_14 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_7 [i_0]) - (min((18192553991284312160ULL), (((/* implicit */unsigned long long int) 4294967295U))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 254190082425239456ULL)) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_3 - 1] [i_2 - 3])) : (((/* implicit */int) arr_9 [i_2] [i_2 - 1] [i_3 + 2] [i_2 - 2]))))) : (((((/* implicit */_Bool) arr_8 [i_1 + 1])) ? (arr_10 [i_3 - 1] [i_2 + 1] [i_1 + 1] [i_3 - 1] [i_3 - 1] [i_2 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0])))))));
                                var_15 = ((/* implicit */short) ((signed char) max((((int) arr_7 [i_0])), (((/* implicit */int) (unsigned short)24713)))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) 18192553991284312160ULL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)82)))));
                var_17 = 254190082425239439ULL;
                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((signed char) arr_5 [i_1 - 1] [i_1 + 1]))) + (2147483647))) >> (((min((((/* implicit */unsigned long long int) (signed char)41)), (1290252264909438222ULL))) - (29ULL)))));
            }
        } 
    } 
    var_18 -= ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) <= (10331801104474994693ULL))) ? (var_1) : (((/* implicit */int) (signed char)-1)));
}
