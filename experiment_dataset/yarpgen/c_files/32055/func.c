/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32055
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) max((((unsigned short) var_0)), (((/* implicit */unsigned short) var_17)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((int) ((unsigned int) var_6)));
        arr_3 [i_0] = ((/* implicit */unsigned int) var_7);
    }
    for (unsigned char i_1 = 1; i_1 < 15; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) ((unsigned char) (+(arr_4 [i_1 + 1]))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? ((~(((/* implicit */int) var_1)))) : (((((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1])) ^ (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1]))))));
        var_20 = ((/* implicit */long long int) (((-(var_14))) > (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_5 [i_1] [i_1 + 1]))))));
        arr_7 [i_1] [i_1 + 1] = (+(var_14));
    }
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (_Bool)1))));
    /* LoopSeq 4 */
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
    {
        var_22 &= ((/* implicit */short) ((long long int) arr_9 [i_2]));
        var_23 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((short) arr_9 [i_2]))), (((arr_9 [i_2]) ^ (arr_9 [i_2])))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
    {
        var_24 &= ((/* implicit */unsigned int) var_10);
        var_25 = ((/* implicit */unsigned char) ((unsigned int) ((15492169096333048813ULL) % (15492169096333048790ULL))));
    }
    for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 2) 
    {
        arr_16 [i_4] [i_4] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) 15492169096333048813ULL)) ? ((-(var_14))) : (((/* implicit */long long int) ((/* implicit */int) var_17))))));
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(max((2954574977376502834ULL), (((/* implicit */unsigned long long int) var_16))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((unsigned char) (~(arr_9 [i_4])))))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 2; i_5 < 16; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_6 = 1; i_6 < 16; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_27 = ((/* implicit */short) (-(((/* implicit */int) var_11))));
                    arr_23 [i_5] [i_6 + 2] [i_5] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) -7131268955234697975LL)) ? (-548663965246170693LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))));
                    arr_24 [8LL] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(15492169096333048790ULL)))) ? ((-(var_9))) : (((/* implicit */unsigned long long int) ((int) arr_10 [i_6] [i_6])))));
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned char) var_5);
        var_29 = ((/* implicit */signed char) arr_20 [7U] [i_5]);
    }
    var_30 = var_0;
}
