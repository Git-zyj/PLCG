/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237328
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
    for (short i_0 = 4; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_5 [11] [i_1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_0]))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (long long int i_3 = 3; i_3 < 21; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)29561)) || (((/* implicit */_Bool) (unsigned char)18))));
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)237)) ? (11031103580974057051ULL) : (((/* implicit */unsigned long long int) arr_12 [i_1] [i_1] [i_3] [i_4]))))) ? (((/* implicit */int) arr_7 [i_0 - 3] [i_0] [i_0 - 1] [i_0])) : (((((/* implicit */_Bool) 4622496149203539162LL)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) (unsigned short)45030))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : ((+(-600445738823706661LL)))));
                                arr_16 [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)206)) || (((/* implicit */_Bool) (unsigned char)23)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)25))))) || (((((/* implicit */_Bool) (unsigned char)237)) || (((/* implicit */_Bool) (unsigned char)8))))))) : (((((/* implicit */_Bool) ((unsigned int) (unsigned char)20))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)249))))) : (((/* implicit */int) ((((/* implicit */_Bool) 4190208U)) || (((/* implicit */_Bool) arr_8 [i_0 + 1] [i_1] [i_2] [i_2] [(signed char)0])))))))));
                                var_17 ^= ((/* implicit */long long int) max((((/* implicit */short) (unsigned char)232)), (max(((short)18573), (((/* implicit */short) (unsigned char)19))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)23))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1))))))));
}
