/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37614
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
    var_11 = ((/* implicit */signed char) var_2);
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) var_5);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((5939084592548718401LL), (((/* implicit */long long int) 1442376759))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (var_1))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 2) 
    {
        var_12 = ((/* implicit */unsigned long long int) var_5);
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (short i_3 = 2; i_3 < 13; i_3 += 3) 
            {
                {
                    arr_12 [i_2] [i_2] [i_3] [i_3] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (max((10597596024070141683ULL), (((/* implicit */unsigned long long int) (short)504))))))) ? (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_5)))))) : (((/* implicit */unsigned long long int) var_9)));
                    arr_13 [i_2] [i_2] [i_2] = ((/* implicit */int) var_5);
                }
            } 
        } 
    }
    for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        arr_17 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_7))))) : (((/* implicit */unsigned long long int) var_2))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) var_4))));
            arr_21 [i_5] [i_4] [i_4] = ((/* implicit */unsigned long long int) (-((-(var_1)))));
            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (-(var_2))))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 13; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_9))));
                        var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
                        var_17 = (+(var_10));
                    }
                } 
            } 
            arr_29 [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
            /* LoopNest 2 */
            for (unsigned short i_9 = 1; i_9 < 14; i_9 += 4) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_37 [1] [i_4] [i_4] [(unsigned short)2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_5)) : (var_4)))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_1)) : (var_5))))) : (((/* implicit */long long int) var_1))));
                        arr_38 [i_4] [i_6] [i_9] [i_4] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (var_5) : (var_5)));
                        arr_39 [i_4] [i_6] [i_9 + 2] [i_4] [i_4] [i_10] = ((/* implicit */_Bool) var_6);
                    }
                } 
            } 
        }
        for (long long int i_11 = 0; i_11 < 17; i_11 += 3) 
        {
            arr_42 [i_4] [1ULL] = (-(((/* implicit */int) var_6)));
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_1))));
            var_19 = ((/* implicit */unsigned long long int) max((var_19), ((-(((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_7))) : (var_10)))))));
        }
    }
}
