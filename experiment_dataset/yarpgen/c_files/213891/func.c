/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213891
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
    var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) max((var_1), (var_14))))) ? ((+((+(1480780275U))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_9)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 3; i_1 < 24; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */signed char) (((~(arr_4 [i_1] [i_0] [i_0]))) >> ((((~(((/* implicit */int) (unsigned char)20)))) + (23)))));
            /* LoopSeq 1 */
            for (signed char i_2 = 1; i_2 < 24; i_2 += 1) 
            {
                arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -144956670)) ? (828839746U) : (arr_4 [i_0 - 2] [i_0 - 3] [i_0 - 3])));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 23; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_15) : (1480780265U)))) / (var_5)));
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */long long int) (+(arr_15 [i_3 + 2] [i_1 + 1])));
                            var_18 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 + 1])))))));
                            arr_18 [(unsigned char)9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) 479505923)) : (2814187030U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) arr_3 [i_0]))))))));
                        }
                    } 
                } 
                arr_19 [i_0] [24] [3U] [i_2] = ((/* implicit */long long int) var_14);
            }
            arr_20 [i_1] [i_1] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)111)))))) | ((+(var_13)))));
        }
        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            arr_23 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) var_2))) << (((/* implicit */int) ((_Bool) 2814187002U)))));
            arr_24 [i_0] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(3970710718U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)86))) : (828839746U)));
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_12))))) ^ (((((/* implicit */_Bool) var_2)) ? (arr_0 [(_Bool)1]) : (((/* implicit */int) var_0))))));
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 1; i_7 < 23; i_7 += 4) 
            {
                for (unsigned short i_8 = 3; i_8 < 23; i_8 += 1) 
                {
                    {
                        arr_35 [20] [i_6] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_10)))) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0 - 1] [i_6 - 1] [i_8 + 2])) : (((/* implicit */int) (unsigned char)97))));
                        arr_36 [i_0] [i_8] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -479505931)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)111))));
                        arr_37 [i_8] [i_8] [i_8] [i_8] [i_6] = ((/* implicit */unsigned char) (-(((arr_9 [i_0] [i_6 - 1] [i_7 + 2] [i_8 - 1]) ? (arr_22 [i_0] [i_6]) : (arr_7 [i_0] [23U] [i_7] [i_8])))));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -12008941834400152LL)) || (((/* implicit */_Bool) 144956669)))))));
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((((/* implicit */int) arr_1 [i_0] [i_6 - 1])) - (var_10))) > ((-(((/* implicit */int) arr_32 [i_0] [i_0] [i_6] [(_Bool)1])))))))));
            var_22 ^= var_12;
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_15 [i_6] [i_6])))) || (((/* implicit */_Bool) ((unsigned short) arr_4 [7U] [7U] [i_6])))));
        }
        var_24 = ((/* implicit */unsigned int) min((var_24), ((-(arr_33 [i_0])))));
    }
}
