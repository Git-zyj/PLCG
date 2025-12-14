/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232215
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 17; i_2 += 3) 
            {
                {
                    var_14 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((arr_6 [i_2] [14LL] [i_0] [4LL]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))) ? ((~(((/* implicit */int) arr_0 [i_1] [10LL])))) : (((/* implicit */int) (unsigned char)1))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned char) var_12);
                        arr_11 [3LL] [3LL] [i_1] [3LL] [2ULL] = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) >> (((arr_6 [i_2 - 3] [i_1] [i_0] [0ULL]) - (14945223825452150499ULL)))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned short) var_9))), (-310874265008710399LL)))) ? ((+(max((var_9), (((/* implicit */long long int) var_7)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
                        var_17 = ((/* implicit */unsigned char) var_9);
                        arr_15 [0LL] [0LL] [i_2] [i_2 - 3] [i_2 - 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [3] [3] [i_4])) ? (((/* implicit */long long int) ((unsigned int) var_5))) : (max((((/* implicit */long long int) (signed char)-16)), (((var_3) % (7794846921257916182LL)))))));
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((var_1), (((/* implicit */long long int) (unsigned char)2)))), (((/* implicit */long long int) arr_3 [i_1]))))) ? (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2900018959690093424ULL)))))) * (var_9))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_2)))))))));
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? ((-(895138041))) : (((/* implicit */int) (unsigned short)49288))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))));
    var_20 = ((/* implicit */unsigned char) ((var_10) > (var_3)));
    var_21 = var_10;
}
