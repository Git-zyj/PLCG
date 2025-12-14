/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213329
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
    var_11 = ((/* implicit */short) (~(var_2)));
    var_12 = ((/* implicit */int) var_5);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [(short)17] [i_0] [5ULL] = ((/* implicit */unsigned short) (-(arr_2 [i_0] [(short)3] [i_0])));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (short i_3 = 3; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) (~((~(((/* implicit */int) max(((signed char)11), ((signed char)-9))))))));
                                arr_14 [i_4 + 2] [i_4] [i_3] [(signed char)7] [i_3] [i_1] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0 - 1] [(signed char)14] [i_4 - 1] [i_4] [i_4])))))) ? (((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 1] [i_4 - 1] [i_4] [i_4])) : (((/* implicit */int) arr_12 [i_0 - 1] [i_2] [i_4 - 1] [8ULL] [i_4]))));
                                arr_15 [i_3] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)46433))))), ((-(((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */unsigned long long int) -1633302598)) : (5155592075675604551ULL)))))));
                            }
                        } 
                    } 
                } 
                arr_16 [(short)12] = ((/* implicit */short) ((((min((((/* implicit */int) (unsigned char)127)), ((-(((/* implicit */int) (unsigned short)49944)))))) + (2147483647))) << (((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)129)), ((unsigned short)57836)))) ? (((((/* implicit */int) arr_12 [i_0] [i_0] [(short)6] [i_0] [i_1])) | (((/* implicit */int) arr_11 [i_0] [i_1])))) : (((/* implicit */int) (unsigned short)35573)))) - (230)))));
            }
        } 
    } 
}
