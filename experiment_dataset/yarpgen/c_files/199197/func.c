/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199197
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */long long int) var_10);
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) max((12), (0))))))) : (((((/* implicit */_Bool) 26)) ? (-1335468703) : (820173622)))));
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5048)) ? (2047767184U) : (0U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) min((((/* implicit */unsigned short) var_11)), ((unsigned short)42248)))))) : (max((((/* implicit */unsigned int) var_8)), ((~(3766921253U)))))));
                    var_16 = ((/* implicit */unsigned short) ((max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)48430)) || (((/* implicit */_Bool) 11LL))))), ((((_Bool)1) ? (-21) : (((/* implicit */int) var_0)))))) << (((((((/* implicit */_Bool) 3ULL)) ? (((/* implicit */int) (unsigned char)204)) : (((/* implicit */int) (unsigned char)133)))) - (198)))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 11; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 2; i_5 < 11; i_5 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) var_8))));
                                var_18 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5305))) : (-6510772824135597249LL))));
                                var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) >> (((((/* implicit */int) var_3)) - (105)))));
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) var_2)) << (((((/* implicit */int) (unsigned short)28102)) / (((/* implicit */int) var_7)))))))));
                                var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (var_5) : (var_5)));
                }
                arr_17 [i_1] = ((/* implicit */signed char) min(((-(((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) (_Bool)1))));
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) 0LL))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_6 = 0; i_6 < 25; i_6 += 2) 
    {
        for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            for (short i_8 = 2; i_8 < 21; i_8 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)29)) ? (var_10) : (((/* implicit */int) var_8))))) > (6743540792207492242ULL))))) ^ ((~(var_12)))));
                    var_24 = ((/* implicit */unsigned char) arr_22 [i_8 + 3]);
                }
            } 
        } 
    } 
    var_25 = var_9;
    var_26 = max((((/* implicit */long long int) (~(((int) var_11))))), ((+(min((0LL), (((/* implicit */long long int) (unsigned short)3)))))));
}
