/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22900
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
    var_19 &= ((/* implicit */unsigned int) var_2);
    var_20 = ((/* implicit */long long int) max((((/* implicit */int) (!((!(((/* implicit */_Bool) var_10))))))), ((~(((/* implicit */int) (unsigned short)31976))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 6139817105023300153LL)) ? (((/* implicit */int) (unsigned short)31968)) : (0)));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((8U) * (((/* implicit */unsigned int) var_10)))) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        /* LoopSeq 3 */
        for (short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            arr_7 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 0))));
            arr_8 [i_0] [i_0] [i_0] = var_3;
        }
        for (int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    {
                        arr_16 [i_4] [i_0] [i_2] = var_6;
                        arr_17 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)31976)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_5 = 2; i_5 < 15; i_5 += 2) 
            {
                for (signed char i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-7759)) : (((/* implicit */int) arr_24 [i_0] [i_2] [i_0] [i_0 + 1] [i_0] [i_5] [i_0]))));
                            var_23 = ((/* implicit */signed char) var_10);
                            arr_25 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((long long int) arr_13 [i_0] [i_0] [i_0] [i_0 - 1]));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_8 = 1; i_8 < 18; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    {
                        arr_33 [i_0 - 1] [i_2] [i_8] [i_9] [i_0] = ((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) (unsigned short)31996)) : (((/* implicit */int) var_6))));
                        arr_34 [i_0] = ((/* implicit */unsigned int) (unsigned short)31976);
                    }
                } 
            } 
            arr_35 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (23U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0])))));
        }
        for (unsigned short i_10 = 1; i_10 < 18; i_10 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (short i_12 = 1; i_12 < 17; i_12 += 1) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) (~(var_0)));
                            arr_45 [i_0] [i_10] [i_11] [i_12 + 2] [i_0] [i_12 + 2] = var_10;
                        }
                    } 
                } 
            } 
            arr_46 [i_0 + 1] [i_0] [i_10 - 1] = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((((((/* implicit */_Bool) var_1)) ? (arr_42 [i_0] [i_0] [i_0] [i_10]) : (((/* implicit */unsigned long long int) -639860376)))) - (3085016617342551273ULL)))))) : (((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((((((((/* implicit */_Bool) var_1)) ? (arr_42 [i_0] [i_0] [i_0] [i_10]) : (((/* implicit */unsigned long long int) -639860376)))) - (3085016617342551273ULL))) - (7516695217925926911ULL))))));
        }
    }
    /* vectorizable */
    for (long long int i_14 = 0; i_14 < 14; i_14 += 4) 
    {
        var_25 = ((/* implicit */signed char) var_4);
        arr_49 [i_14] = var_4;
        var_26 = (unsigned short)31987;
    }
    for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 1) /* same iter space */
    {
        arr_53 [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1090095708418633828LL) / (var_15)))) ? (min((((/* implicit */long long int) var_9)), (1090095708418633828LL))) : (((/* implicit */long long int) -1))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_15] [i_15] [i_15] [10LL]))))) : (min((((/* implicit */unsigned long long int) var_11)), (((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_0)))))));
        /* LoopNest 3 */
        for (int i_16 = 2; i_16 < 15; i_16 += 3) 
        {
            for (signed char i_17 = 2; i_17 < 16; i_17 += 4) 
            {
                for (short i_18 = 0; i_18 < 18; i_18 += 3) 
                {
                    {
                        var_27 = ((/* implicit */int) (short)-7647);
                        arr_62 [1ULL] [1ULL] [i_16] [i_17] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)33549)) ? (((/* implicit */unsigned int) -2)) : (47U)))))) ? (min((min((((/* implicit */unsigned long long int) 3386736890U)), (2225419138708466916ULL))), (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_14), ((_Bool)1)))))));
                        var_28 = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned long long int) var_2)));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_19 = 0; i_19 < 18; i_19 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */int) var_6);
        var_30 = ((/* implicit */unsigned long long int) (-(15LL)));
        arr_67 [i_19] = ((/* implicit */unsigned int) var_14);
    }
    var_31 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max(((_Bool)0), ((_Bool)1))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) 16222523523341185637ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)31976)))) : (((/* implicit */int) var_4)))) : (((((/* implicit */int) ((short) var_9))) * (var_12)))));
    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4108164531U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 753400953)))))))) : (var_0)));
}
