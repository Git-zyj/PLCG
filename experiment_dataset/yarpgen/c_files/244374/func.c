/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244374
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
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                var_10 = ((((/* implicit */_Bool) ((var_0) | (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (unsigned short)65521)))))))) ? (min((((1506783604U) * (((/* implicit */unsigned int) 2046)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */int) (unsigned short)11403)) : (((/* implicit */int) var_6))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))));
                var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((unsigned int) ((((unsigned int) 7067976281059672183LL)) >> (((((/* implicit */int) (unsigned short)18019)) - (18010)))))))));
                var_12 = ((/* implicit */long long int) ((254643651) ^ (((((/* implicit */_Bool) 3482419987U)) ? (((((/* implicit */_Bool) var_5)) ? (916981181) : (1410530057))) : (1079584851)))));
            }
        } 
    } 
    var_13 = ((unsigned int) 4554936643078626627LL);
    /* LoopNest 3 */
    for (unsigned short i_2 = 2; i_2 < 22; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                {
                    arr_17 [i_2] [i_3] [i_4] = ((/* implicit */int) max((((long long int) ((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3219)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_2])))))));
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)48142)) ? (max((((/* implicit */long long int) 3072323853U)), (min((-4554936643078626625LL), (((/* implicit */long long int) (unsigned short)39584)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 8796093022207LL)) ? (692629503U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65533))))))));
                    arr_18 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))))), (var_7))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (int i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            for (long long int i_7 = 1; i_7 < 20; i_7 += 1) 
            {
                for (unsigned short i_8 = 4; i_8 < 19; i_8 += 1) 
                {
                    {
                        arr_32 [i_5] [(unsigned short)6] [i_6] [i_6] [i_8] &= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)29606))));
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (unsigned short)65526)) - (((/* implicit */int) (unsigned short)11403)))))) ? ((-(((long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) arr_28 [i_8 - 3] [i_8] [i_8]))))))));
                        var_16 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) ((4294967279U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17363)))))), (((unsigned int) 1410530041)))), (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) (unsigned short)42509))))))));
                        arr_33 [2U] [i_6] [i_5] [i_8] [i_7] = ((/* implicit */unsigned int) ((((-8616460462968066960LL) | (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)19)), (3482419987U)))))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35929)))));
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((unsigned short) (unsigned short)65533))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned int) ((unsigned short) (unsigned short)3434));
        var_19 *= ((/* implicit */unsigned short) -1410530042);
    }
    for (unsigned short i_9 = 2; i_9 < 22; i_9 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((long long int) min((((/* implicit */long long int) 1410530057)), (((((/* implicit */long long int) 676623131)) - (var_2)))))))));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 1079584842)), (7659745219305704602LL)))) ? (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)29135)) >= (((/* implicit */int) var_3))))), (min((((/* implicit */long long int) var_4)), (7659745219305704609LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)23006)) ? ((+(((/* implicit */int) (unsigned short)52136)))) : (((/* implicit */int) arr_15 [i_9] [i_9 + 1] [i_9] [i_9 - 1])))))));
    }
}
