/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209500
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) ((short) var_4))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (var_6)))))));
        var_13 -= ((/* implicit */signed char) ((long long int) ((_Bool) ((((/* implicit */int) (signed char)1)) > (1815664062)))));
        var_14 &= ((/* implicit */int) var_9);
    }
    for (unsigned int i_1 = 1; i_1 < 9; i_1 += 2) /* same iter space */
    {
        var_15 &= ((/* implicit */short) ((max((((/* implicit */long long int) (_Bool)1)), (arr_4 [i_1 + 2]))) / (((/* implicit */long long int) ((unsigned int) ((72057594037925888LL) ^ (arr_0 [i_1])))))));
        var_16 = ((/* implicit */unsigned short) ((((unsigned int) ((short) 1453875996))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
    }
    for (unsigned int i_2 = 1; i_2 < 9; i_2 += 2) /* same iter space */
    {
        var_17 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_2] [i_2 + 1])) - (((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1]))))) || (((/* implicit */_Bool) ((var_4) ? (((1261431784) - (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_4))))));
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_1))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_3 = 3; i_3 < 17; i_3 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_8)))) || (((/* implicit */_Bool) var_7)))))));
        var_20 ^= ((/* implicit */signed char) (~(((long long int) -1LL))));
        arr_11 [1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) == (var_2))))) - (var_10)));
        /* LoopNest 3 */
        for (signed char i_4 = 2; i_4 < 17; i_4 += 3) 
        {
            for (int i_5 = 2; i_5 < 16; i_5 += 2) 
            {
                for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    {
                        var_21 = ((/* implicit */long long int) var_5);
                        var_22 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) var_0)) % (((arr_16 [i_3] [i_4] [i_5 - 2] [i_5 - 2]) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) arr_19 [i_6] [i_4] [12] [(unsigned char)13]))));
                        arr_20 [i_4] [i_3] [(unsigned char)1] [13] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_4] [i_4])) > (((/* implicit */int) var_4))));
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */long long int) var_8);
    /* LoopSeq 1 */
    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 3) 
    {
        var_25 &= ((/* implicit */unsigned int) ((int) 13771627869827265805ULL));
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (min((arr_22 [i_7]), (arr_22 [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (short)-24797)))))))));
        var_27 = var_7;
    }
}
