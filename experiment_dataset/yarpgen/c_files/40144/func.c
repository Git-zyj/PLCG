/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40144
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (-(var_8)))) : (var_2)));
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            var_13 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))));
                            var_14 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_12));
                        }
                        for (unsigned long long int i_5 = 2; i_5 < 12; i_5 += 1) 
                        {
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2688005301U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3899565674U)));
                            var_16 = ((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))));
                            var_17 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))));
                            var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_6))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))))));
                            var_20 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) var_5))));
                        }
                    }
                } 
            } 
            var_21 *= ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))));
        }
        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            arr_22 [i_0] [i_7] [i_7] |= ((/* implicit */int) (-(var_2)));
            var_22 = ((/* implicit */short) ((var_0) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))));
            arr_23 [i_0] [i_0] [i_7] = ((/* implicit */unsigned short) (!(var_5)));
        }
    }
    for (int i_8 = 3; i_8 < 16; i_8 += 2) 
    {
        arr_26 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-13862)) ? (-1089131628932242215LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-13862)))));
        var_23 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_4)))) ? (((var_0) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_5)))))));
    }
    /* LoopNest 2 */
    for (short i_9 = 1; i_9 < 10; i_9 += 1) 
    {
        for (unsigned long long int i_10 = 2; i_10 < 9; i_10 += 1) 
        {
            {
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_11))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0)))))))) ? ((+(var_11))) : (((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                arr_32 [i_10] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                arr_33 [i_10] = var_3;
                var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(var_12))))));
                arr_34 [i_10] = ((/* implicit */short) (+(var_12)));
            }
        } 
    } 
}
