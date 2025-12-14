/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222272
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (-8661776734683459261LL)));
                    var_15 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-24LL)))))) ? (((((((/* implicit */int) (signed char)73)) >> (((-24LL) + (55LL))))) ^ (((/* implicit */int) var_11)))) : (((/* implicit */int) var_1))));
                }
                var_16 &= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */long long int) arr_4 [i_1 + 2] [i_1 - 3] [i_1 + 2])) + ((-(var_6))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_2)) : (var_8)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_10))))) : (((unsigned int) -24LL)))));
    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8144))) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)69)) >= (((/* implicit */int) var_0)))))))))));
    /* LoopSeq 3 */
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        var_19 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (unsigned char)71)) ? (((/* implicit */int) (signed char)69)) : (((/* implicit */int) (signed char)-45)))));
        arr_13 [i_3] = ((/* implicit */long long int) max((var_3), (arr_11 [i_3] [i_3])));
    }
    /* vectorizable */
    for (signed char i_4 = 1; i_4 < 19; i_4 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
            {
                for (int i_7 = 1; i_7 < 20; i_7 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) var_9))))))));
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_16 [i_4 + 1]))));
                        arr_26 [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_24 [i_5] [i_5] [i_7 + 1] [i_7 - 1] [i_5]))));
                    }
                } 
            } 
        } 
        arr_27 [i_4 - 1] = ((/* implicit */unsigned int) (-(var_4)));
        arr_28 [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_17 [i_4]))));
    }
    for (int i_8 = 1; i_8 < 21; i_8 += 4) 
    {
        arr_31 [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
        arr_32 [i_8 - 1] = ((/* implicit */unsigned char) ((int) min((((/* implicit */unsigned long long int) (signed char)69)), (12039898884738432487ULL))));
        var_22 = ((23LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44608))));
    }
}
