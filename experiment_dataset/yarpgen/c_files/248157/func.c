/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248157
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
    for (int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((unsigned short) ((((/* implicit */_Bool) (+(var_0)))) ? (((((/* implicit */_Bool) 17160532063495546393ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (1495992581U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0])))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_15 *= ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_11 [i_0] [i_1] [i_2] [i_0] [(unsigned char)19])))) ? (((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3] [i_2] [i_1]))))) : ((~(1286212010214005229ULL))))));
                                var_16 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) arr_5 [i_0] [i_3] [i_1] [i_0])) : (arr_6 [i_0] [i_1] [i_0] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2715485389U)) ? (1579481902U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))) : (((long long int) var_0)))), (((/* implicit */long long int) arr_9 [(short)9] [i_0]))));
                                var_17 &= ((/* implicit */short) (+(min((arr_9 [i_4] [i_0]), (((((/* implicit */int) arr_8 [i_0] [i_0] [i_2])) << (((((var_6) + (7807123111800216209LL))) - (17LL)))))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 4])) ? (((/* implicit */int) arr_1 [i_0 + 4])) : (((/* implicit */int) arr_1 [i_0 + 4]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0 + 4])), (var_12)))) : (((((/* implicit */_Bool) arr_1 [i_0 + 4])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_0 + 4])))))))));
                arr_12 [i_0 + 4] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((max((var_2), (arr_11 [i_0] [1LL] [i_0] [(_Bool)1] [11LL]))) << (((((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0 + 3] [i_0 + 3])) : (((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_0])))) - (3312)))))) ? ((~(((((/* implicit */_Bool) var_0)) ? (arr_6 [i_0] [10LL] [i_0] [i_0]) : (((/* implicit */unsigned int) arr_5 [(unsigned short)17] [i_1] [(unsigned char)16] [i_0])))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_10 [i_0 + 2] [i_0 + 2] [i_1] [i_0 + 2] [i_1]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))) ? (var_14) : (max((var_14), (((/* implicit */unsigned long long int) var_4)))))));
}
