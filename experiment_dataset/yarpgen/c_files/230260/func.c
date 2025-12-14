/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230260
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_10 [i_0] [i_0] |= (((!(((/* implicit */_Bool) ((long long int) var_5))))) ? (((/* implicit */int) (unsigned short)43987)) : (((/* implicit */int) ((arr_9 [i_0] [i_0] [i_1] [i_2]) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63)))))));
                    arr_11 [i_1 + 4] [(_Bool)1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) % (7182429969975969245LL))) + (((/* implicit */long long int) ((/* implicit */int) (short)-1)))));
                    var_13 = ((/* implicit */unsigned char) max((min((-7182429969975969249LL), (((/* implicit */long long int) (unsigned short)5096)))), (7182429969975969245LL)));
                }
                for (unsigned char i_3 = 1; i_3 < 23; i_3 += 4) 
                {
                    arr_16 [i_1] [i_3 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) var_6)))))) : ((((+(arr_14 [i_1]))) % (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) << (((8523764864302910077LL) - (8523764864302910055LL))))))))));
                    var_14 &= ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) && (((/* implicit */_Bool) (-(var_0)))));
                }
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            {
                                arr_26 [i_6] [i_6] [i_6] [i_6] [16LL] [i_6] [(unsigned short)2] = ((/* implicit */long long int) var_8);
                                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_1 + 4] [i_1 + 2] [i_1 - 1] [i_5]))))))))));
                                arr_27 [i_6] [i_5] = ((/* implicit */unsigned int) (!(((((((/* implicit */_Bool) arr_5 [i_5])) ? (-1067601334799851608LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0U))))))))));
                                var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (((-(((/* implicit */int) (unsigned short)48226)))) / (((/* implicit */int) (short)-1))))), (max((var_0), (((/* implicit */unsigned long long int) ((int) (_Bool)1)))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned short) ((_Bool) arr_0 [i_1 + 1] [i_1 + 3]));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_7 = 1; i_7 < 11; i_7 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */long long int) ((unsigned int) var_8));
            arr_34 [i_7] [i_8] = ((/* implicit */unsigned short) ((unsigned char) arr_1 [21U] [i_8]));
            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_7 + 1])) ? (((/* implicit */long long int) (+(var_5)))) : (arr_25 [i_7] [i_7] [i_7 - 1] [i_7] [i_7] [i_7 + 1]))))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) 3653867308066773839LL))));
            var_21 = ((/* implicit */unsigned char) (-((-(var_12)))));
        }
        arr_37 [i_7] = ((/* implicit */short) (+(arr_13 [i_7] [i_7 + 1] [i_7 - 1] [i_7])));
        arr_38 [i_7] [i_7] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_2))));
        arr_39 [i_7] [10U] = ((/* implicit */unsigned short) ((unsigned int) var_10));
    }
    for (int i_10 = 3; i_10 < 23; i_10 += 4) 
    {
        var_22 ^= ((/* implicit */long long int) (((~(((/* implicit */int) arr_1 [i_10 + 1] [i_10 - 3])))) - (((/* implicit */int) max(((unsigned char)66), (arr_1 [i_10 - 1] [i_10 + 1]))))));
        arr_42 [i_10] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_10 - 2] [i_10 - 3] [i_10 - 2])) && (((/* implicit */_Bool) (~(arr_14 [i_10])))))))));
        var_23 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))));
    }
    for (long long int i_11 = 0; i_11 < 10; i_11 += 4) 
    {
        arr_45 [i_11] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [(short)20] [(short)20] [4LL] [(short)20] [(short)20])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (4245911205U)))) >= (9792098665486916338ULL)));
        arr_46 [i_11] |= ((/* implicit */_Bool) var_7);
    }
}
