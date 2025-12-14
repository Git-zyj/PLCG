/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48143
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
    var_17 = ((/* implicit */unsigned int) max((max((4147414699234250997ULL), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_14)), (2122466)))))), (((/* implicit */unsigned long long int) (unsigned short)57084))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_0);
        var_18 = ((/* implicit */short) 3387441421094984870LL);
        var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((max((10533801069760028445ULL), (((/* implicit */unsigned long long int) -1701844315)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))), (max((((((/* implicit */unsigned long long int) (-2147483647 - 1))) & (13835382177432426761ULL))), (((/* implicit */unsigned long long int) max((var_11), (var_11))))))));
        var_20 = ((/* implicit */unsigned int) var_1);
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            arr_10 [i_1] [i_1] [i_1] = ((/* implicit */long long int) 2273064846U);
            arr_11 [i_1] = ((/* implicit */unsigned long long int) ((long long int) var_12));
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) ((10835326079920502272ULL) >> (0ULL)));
            var_22 = ((/* implicit */long long int) var_0);
            var_23 = ((/* implicit */unsigned char) (_Bool)1);
        }
        for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_5 = 4; i_5 < 12; i_5 += 1) 
            {
                var_24 ^= ((/* implicit */signed char) (unsigned char)189);
                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)166))) != (var_12)))) << (((((((/* implicit */int) (unsigned short)62462)) | (((/* implicit */int) var_7)))) - (62458))))))));
            }
            arr_18 [5LL] &= ((/* implicit */short) 60253030U);
            arr_19 [i_4] = ((/* implicit */_Bool) ((min((var_15), (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */int) var_7))))))) * (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_3)), (var_2))))));
        }
        var_26 = ((/* implicit */short) -1);
    }
    var_27 = ((/* implicit */short) ((((((/* implicit */long long int) min((2920624342U), (((/* implicit */unsigned int) var_5))))) * (min((((/* implicit */long long int) (unsigned short)39585)), (8422343419816417200LL))))) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((_Bool) (signed char)117)))))));
}
