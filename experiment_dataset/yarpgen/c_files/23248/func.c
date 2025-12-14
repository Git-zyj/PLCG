/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23248
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) >= (((((/* implicit */_Bool) ((signed char) 1715098907))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (1715098906) : (((/* implicit */int) var_0))))) : (var_3)))));
    var_11 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */short) (_Bool)0);
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    var_13 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))));
                    var_14 = ((/* implicit */signed char) ((((((/* implicit */int) var_8)) & (-1715098932))) / (((((/* implicit */_Bool) (short)-1630)) ? (1715098932) : (((/* implicit */int) var_6))))));
                }
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    arr_8 [i_0] = ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) var_7)))));
                    /* LoopSeq 2 */
                    for (short i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        arr_12 [i_0] [i_0] [i_3 + 1] [i_4] [i_1] = ((short) ((((/* implicit */int) ((short) var_9))) / (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (-1715098904)))));
                        var_15 += max(((-(((((/* implicit */_Bool) 747548849)) ? (((/* implicit */unsigned long long int) var_4)) : (var_3))))), (((/* implicit */unsigned long long int) min((min((((/* implicit */int) var_9)), (-1715098931))), (((/* implicit */int) ((_Bool) (unsigned short)2047)))))));
                        var_16 -= ((/* implicit */unsigned int) 6194148193509168668LL);
                    }
                    for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -747548849)) && (((/* implicit */_Bool) var_0))));
                        arr_17 [i_0] [i_0] = ((/* implicit */_Bool) var_5);
                    }
                }
                for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    arr_21 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_7))))) ? (((((-1715098924) + (var_4))) - (-1715098920))) : (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            {
                                var_18 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((2147483647) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))) & (var_4)));
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) / (((/* implicit */int) (unsigned short)53671))))) ? ((((_Bool)0) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) 17178820608ULL)) ? (var_4) : (((/* implicit */int) (short)-26887))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))) ? (((((((/* implicit */int) var_7)) + (2147483647))) << (((((/* implicit */int) var_6)) - (28833))))) : (min((((/* implicit */int) var_2)), (-1715098921)))))) : (((((/* implicit */_Bool) 15543005434008353406ULL)) ? (((((/* implicit */_Bool) var_5)) ? (504U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
                            }
                        } 
                    } 
                }
                var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((0U) & (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) ((var_3) != (((/* implicit */unsigned long long int) var_4))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53684))) | (((((/* implicit */_Bool) var_5)) ? (13215235640370616163ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
            }
        } 
    } 
}
