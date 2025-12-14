/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191055
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
    var_12 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (2452299246U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) == (((1125899906842623ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))), ((+(((/* implicit */int) ((short) -2084775624)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [8U] |= ((/* implicit */long long int) arr_0 [(signed char)2]);
        arr_4 [i_0] = ((/* implicit */int) ((unsigned long long int) arr_1 [i_0] [i_0]));
        arr_5 [i_0] = ((/* implicit */_Bool) arr_1 [i_0] [0U]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                {
                    var_13 = ((/* implicit */short) ((((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) 2452299246U))))) ^ (((1155130874) | ((+(((/* implicit */int) (_Bool)1))))))));
                    var_14 *= ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (max((((/* implicit */unsigned char) var_0)), ((unsigned char)7)))))) % (((int) 628799940))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            arr_15 [i_1] [i_4] = ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) var_2)))));
            var_15 = ((/* implicit */unsigned int) max((min((min((var_5), (((/* implicit */unsigned long long int) arr_14 [i_4])))), (((/* implicit */unsigned long long int) arr_10 [i_4])))), (min((((/* implicit */unsigned long long int) arr_12 [i_1] [i_1] [i_1] [(_Bool)1])), (arr_6 [i_1])))));
            arr_16 [i_4] |= ((/* implicit */_Bool) var_8);
        }
        var_16 = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)253)) <= (((/* implicit */int) (unsigned short)38321)))) ? (((/* implicit */int) ((arr_7 [i_1]) != (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1])))))) : (((/* implicit */int) ((unsigned char) 3448857468850213962LL)))));
    }
    for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        var_17 |= ((/* implicit */_Bool) -5672377333147387550LL);
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (_Bool)1))));
    }
}
