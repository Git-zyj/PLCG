/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42567
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
    for (long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_12 = ((/* implicit */short) ((((((/* implicit */_Bool) ((-2619174093685596323LL) + (((/* implicit */long long int) arr_0 [(_Bool)1]))))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((/* implicit */int) ((2147483646) == (1876485138))))))) | ((((_Bool)1) ? (-2619174093685596323LL) : (-3178920748093533059LL)))));
        var_13 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((arr_0 [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28177))) | (arr_0 [3U]))) : (((arr_0 [i_0]) >> (((var_0) - (9472398879754625203ULL)))))))));
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (~(((/* implicit */int) (short)-1)))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
    }
    var_15 = ((/* implicit */unsigned long long int) (-(min((((((/* implicit */int) var_5)) * (((/* implicit */int) (short)-1)))), (((/* implicit */int) ((short) var_10)))))));
    var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (var_0)));
    /* LoopNest 2 */
    for (unsigned char i_1 = 2; i_1 < 22; i_1 += 1) 
    {
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            {
                var_17 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-9)) ^ (((/* implicit */int) var_10)))) % (((/* implicit */int) ((signed char) -2147483647)))))) < ((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (10595907278335846637ULL)))))));
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    for (signed char i_4 = 1; i_4 < 20; i_4 += 2) 
                    {
                        for (short i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) arr_13 [i_4 - 1] [i_2] [i_3] [i_4])), (arr_16 [i_1 - 2] [i_2] [i_2])))));
                                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) -1876485145))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), (max((var_2), (((/* implicit */int) var_1))))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (var_4))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_0))))))));
}
