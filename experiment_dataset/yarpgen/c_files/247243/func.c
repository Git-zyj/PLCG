/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247243
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
    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) (+(((/* implicit */int) var_8))))))));
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_0)), (var_10))), (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */unsigned char) var_11)))))))) ? (((/* implicit */unsigned long long int) min((min((((/* implicit */int) var_17)), (var_15))), (((/* implicit */int) max((var_17), (var_17))))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (var_6)))) : ((~(var_5)))))));
    var_20 = ((/* implicit */_Bool) min((((/* implicit */long long int) max((33554176), (((/* implicit */int) (short)-32759))))), (144115188067467264LL)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            arr_6 [i_1] = ((/* implicit */_Bool) (~((-(var_10)))));
            /* LoopNest 2 */
            for (signed char i_2 = 4; i_2 < 13; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_4 = 2; i_4 < 15; i_4 += 3) 
                        {
                            var_21 = ((((/* implicit */_Bool) var_3)) ? (var_6) : ((~(((/* implicit */int) var_17)))));
                            arr_13 [(signed char)0] [i_2] [i_2] [i_0] [i_0] |= ((/* implicit */int) (+(18387760521540193073ULL)));
                            var_22 ^= ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_5)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (+(var_15))))));
                            arr_16 [0ULL] [i_1] [i_2] [(unsigned char)2] [i_5] [i_0] [i_3] &= ((/* implicit */_Bool) (+(((var_2) ? (var_10) : (var_10)))));
                            var_24 *= ((/* implicit */int) ((short) ((var_2) ? (((/* implicit */int) var_2)) : (var_15))));
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_3))) ? (((/* implicit */int) ((unsigned char) var_8))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))))))));
                        }
                        var_26 = ((/* implicit */unsigned char) ((unsigned int) (-(((/* implicit */int) var_17)))));
                        arr_17 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_0)))) : ((+(var_10)))));
                    }
                } 
            } 
            arr_18 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(var_0)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
        }
        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) min((((/* implicit */short) ((signed char) max((18387760521540193074ULL), (((/* implicit */unsigned long long int) 3)))))), ((short)32767))))));
    }
}
