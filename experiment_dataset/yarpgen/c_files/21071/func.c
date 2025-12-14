/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21071
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
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((int) min((((var_4) != (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_5))))));
        var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) (((-(((/* implicit */int) (unsigned short)8191)))) > (((/* implicit */int) ((signed char) 0U))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_13 [i_0] = ((/* implicit */signed char) max((((unsigned short) ((var_9) | (var_5)))), (((/* implicit */unsigned short) ((_Bool) 67108863)))));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        arr_17 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) ((((int) 63U)) + (((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (var_2)))))));
                        arr_18 [i_3] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((var_0) - (((/* implicit */long long int) var_9))))), (((((/* implicit */_Bool) ((var_7) ^ (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) : (var_2)))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        var_11 ^= ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (((unsigned long long int) var_3))))) ? ((+(((var_8) >> (((((/* implicit */int) var_1)) + (68))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                        arr_23 [i_1] [i_0] [11] [i_1] [i_1] = ((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */int) var_6)))))) >> (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))))), (((signed char) var_7))))));
                        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) var_1))));
                        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (min((var_9), (var_9))) : (min((4272538463U), (((/* implicit */unsigned int) (signed char)11))))))) ? (min((4294967291U), (((/* implicit */unsigned int) (short)2032)))) : (((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 22428832U))))))))));
                    }
                    /* vectorizable */
                    for (short i_5 = 1; i_5 < 19; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 4; i_6 < 18; i_6 += 4) 
                        {
                            arr_28 [i_0] [i_0] [i_2] [i_0] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_3)))) || (((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_1))))));
                            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) var_3))));
                            arr_29 [i_0 + 1] [i_1] [i_0] [i_0] [i_6 - 2] = ((/* implicit */_Bool) ((unsigned short) var_2));
                        }
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            var_15 = ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_4)) / (var_5)))) != (((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned long long int) var_0)))));
                            var_16 = ((/* implicit */unsigned char) ((unsigned short) var_3));
                            arr_33 [i_0] [i_0] [i_2] [(signed char)14] &= ((/* implicit */unsigned int) (!(((((/* implicit */int) var_1)) != (((/* implicit */int) var_3))))));
                            arr_34 [i_0 - 1] [i_0] = ((int) var_9);
                        }
                        for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
                        {
                            arr_37 [i_0 - 2] [i_1] [i_8] [i_2] [(unsigned char)18] [i_8] &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))) / (var_8)));
                            arr_38 [i_8] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned int) var_3)));
                            var_17 |= (~(((/* implicit */int) ((var_9) != (var_8)))));
                        }
                        for (int i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            arr_42 [5U] [(unsigned short)7] [i_0] [7] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_2)))));
                            var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */long long int) var_9)))) ^ (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) ^ (var_5))))));
                            arr_43 [i_0] [2] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (((~(var_8))) / (((var_5) - (var_8)))));
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_8)) : (var_0)))))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((var_8) * (var_5)))) : (((((/* implicit */_Bool) (short)-2018)) ? (823320841733887581ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17869)))))));
                        }
                        var_21 *= ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) var_5)) & (var_2)))));
                        var_22 = ((int) var_7);
                    }
                    arr_44 [(signed char)12] [i_0] [(unsigned char)12] = ((/* implicit */int) ((((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) + (var_5)))) % (((((var_8) + (var_9))) - (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
                    var_23 = ((unsigned int) ((long long int) var_5));
                }
            } 
        } 
    }
    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 3) 
    {
        arr_47 [14ULL] &= ((/* implicit */unsigned char) var_1);
        arr_48 [i_10] [7U] = ((/* implicit */unsigned short) var_2);
    }
    for (unsigned int i_11 = 1; i_11 < 12; i_11 += 3) 
    {
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) var_7))));
        var_25 = ((/* implicit */_Bool) max((var_25), ((!(((/* implicit */_Bool) ((long long int) ((unsigned short) var_3))))))));
    }
    var_26 = ((/* implicit */unsigned short) var_7);
}
