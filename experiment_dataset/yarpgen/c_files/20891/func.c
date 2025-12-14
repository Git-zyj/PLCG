/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20891
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) ((((/* implicit */_Bool) (short)-12340)) ? (-5445668689213275132LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-6105))))))));
                                var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) (!(((/* implicit */_Bool) ((short) var_0))))))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0 + 2]))))))));
                    arr_13 [i_2] = ((/* implicit */long long int) min((((/* implicit */int) max((var_9), (var_6)))), ((-(((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (short)6113)))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) -1LL))))))))));
    var_14 = var_9;
    var_15 = ((/* implicit */long long int) ((unsigned char) (~(((((((/* implicit */int) var_6)) + (2147483647))) >> (((-5522844888384613100LL) + (5522844888384613112LL))))))));
    /* LoopSeq 4 */
    for (unsigned char i_5 = 3; i_5 < 18; i_5 += 2) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_5]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) var_6))));
        arr_19 [i_5] = ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-6098)) - (((/* implicit */int) (short)-6109))))) : ((-(var_0))));
        var_16 = (((+((~(var_0))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) -7659860188644276179LL))))))));
        var_17 += ((/* implicit */long long int) var_2);
    }
    for (short i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (short i_7 = 3; i_7 < 19; i_7 += 2) 
        {
            for (long long int i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                {
                    var_18 *= ((/* implicit */short) ((((long long int) max((var_4), (var_6)))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2971702392456773836LL)) && (((/* implicit */_Bool) (short)-11475))))))));
                    arr_27 [i_6] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) > ((~((+(((/* implicit */int) var_4))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */long long int) min((var_19), ((~(((long long int) (unsigned char)229))))));
        var_20 = ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) (short)12)))));
        var_21 *= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) max((var_3), (var_5))))))));
    }
    /* vectorizable */
    for (short i_9 = 0; i_9 < 22; i_9 += 3) 
    {
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (-(((/* implicit */int) arr_28 [i_9] [16LL])))))));
        /* LoopSeq 3 */
        for (unsigned char i_10 = 3; i_10 < 21; i_10 += 2) /* same iter space */
        {
            arr_32 [i_9] = ((/* implicit */unsigned char) var_1);
            arr_33 [i_9] [i_10] [i_9] = ((/* implicit */unsigned char) var_0);
        }
        for (unsigned char i_11 = 3; i_11 < 21; i_11 += 2) /* same iter space */
        {
            arr_37 [i_9] [i_9] [i_9] = ((/* implicit */long long int) ((short) var_3));
            /* LoopNest 2 */
            for (short i_12 = 0; i_12 < 22; i_12 += 4) 
            {
                for (short i_13 = 0; i_13 < 22; i_13 += 4) 
                {
                    {
                        arr_42 [i_12] [i_11 - 3] [i_11] [i_12] [i_12] [i_13] |= ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (2971702392456773836LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_9)))));
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)7)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_13] [i_13])) && (((/* implicit */_Bool) 2249055217766006597LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)3938))))))))));
                        arr_43 [i_9] [(unsigned char)8] [i_12] [i_13] |= ((/* implicit */unsigned char) arr_31 [i_13] [i_13]);
                    }
                } 
            } 
        }
        for (unsigned char i_14 = 3; i_14 < 21; i_14 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (~(((/* implicit */int) (short)-30080)))))));
            arr_48 [i_9] [i_9] [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_30 [i_9]))));
        }
        arr_49 [i_9] [i_9] = ((/* implicit */unsigned char) ((long long int) (short)11));
    }
    for (short i_15 = 0; i_15 < 21; i_15 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_16 = 2; i_16 < 19; i_16 += 2) 
        {
            arr_55 [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (~(((/* implicit */int) (short)-25323))))) ? (((((/* implicit */_Bool) -4LL)) ? (-7659860188644276153LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))))) : (((/* implicit */long long int) ((/* implicit */int) (short)24956))))), (min((min((((/* implicit */long long int) var_3)), (var_0))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_3)))))))));
            /* LoopNest 2 */
            for (short i_17 = 1; i_17 < 20; i_17 += 3) 
            {
                for (unsigned char i_18 = 0; i_18 < 21; i_18 += 4) 
                {
                    {
                        arr_62 [i_15] [i_15] [i_15] [5LL] [i_18] = ((/* implicit */long long int) (+((+(((/* implicit */int) var_7))))));
                        arr_63 [i_16 - 2] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)189))) & (arr_31 [i_18] [i_17])))) ? (((((/* implicit */int) arr_17 [i_17 - 1] [i_16 - 1])) ^ (((/* implicit */int) var_5)))) : (((/* implicit */int) max((((/* implicit */short) arr_14 [i_15])), (var_9))))));
                    }
                } 
            } 
        }
        arr_64 [i_15] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_38 [i_15] [i_15])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)242)))), (((/* implicit */int) (unsigned char)123))));
    }
}
