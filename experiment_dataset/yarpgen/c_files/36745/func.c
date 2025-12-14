/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36745
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        arr_2 [7U] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) max((var_12), (((/* implicit */signed char) var_7)))))))));
        var_14 = ((/* implicit */long long int) ((var_10) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        arr_6 [12] [(unsigned char)12] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) > (var_13)))), (max((((/* implicit */unsigned int) var_3)), (var_11)))));
        arr_7 [(unsigned char)8] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) > (((/* implicit */int) var_2))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned char i_3 = 1; i_3 < 21; i_3 += 2) 
        {
            var_15 = ((/* implicit */int) max((var_15), ((+(((/* implicit */int) var_12))))));
            arr_14 [i_2] [(_Bool)1] [(signed char)21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1805672857U)) + (0ULL))))));
        }
        for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 3) 
        {
            var_16 = ((/* implicit */unsigned char) var_5);
            /* LoopSeq 1 */
            for (unsigned int i_5 = 1; i_5 < 22; i_5 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 23; i_6 += 2) 
                {
                    /* LoopSeq 3 */
                    for (int i_7 = 2; i_7 < 22; i_7 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_3))));
                        var_18 -= ((/* implicit */short) ((var_4) <= (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        arr_29 [i_2] = ((/* implicit */unsigned long long int) var_4);
                        var_19 = var_5;
                        var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
                        var_21 = ((/* implicit */signed char) max((var_21), (var_2)));
                    }
                    for (unsigned int i_9 = 4; i_9 < 19; i_9 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) var_0))))));
                        arr_32 [(_Bool)0] [i_4] [i_9 - 4] [i_6] [i_2] [i_2] = ((/* implicit */_Bool) (~(((((/* implicit */int) var_12)) >> (((var_4) - (1031279129U)))))));
                    }
                    arr_33 [i_2] [i_2] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) var_3))));
                    /* LoopSeq 2 */
                    for (signed char i_10 = 1; i_10 < 21; i_10 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) | (var_10)));
                        var_24 = ((((/* implicit */long long int) ((/* implicit */int) var_7))) == (var_5));
                        arr_37 [i_2] [i_6] [(short)0] [12LL] [i_2] = ((/* implicit */int) var_0);
                        var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) var_7))));
                    }
                    for (signed char i_11 = 1; i_11 < 21; i_11 += 4) /* same iter space */
                    {
                        arr_40 [i_2] [i_4] [i_2] [i_6] [i_2] [i_2] [13LL] = ((/* implicit */unsigned int) var_2);
                        arr_41 [i_2] [i_4] = ((/* implicit */int) var_5);
                        arr_42 [i_2] = ((/* implicit */unsigned int) var_8);
                    }
                    var_26 = ((/* implicit */short) (+((+(((/* implicit */int) var_6))))));
                }
                arr_43 [i_2] [i_2] [12U] = ((/* implicit */int) var_3);
                var_27 = (-(0ULL));
                var_28 = ((/* implicit */_Bool) min((var_28), (((((/* implicit */int) var_2)) <= (((/* implicit */int) var_6))))));
            }
        }
        for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 1) 
        {
            arr_47 [i_2] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) + (var_5)));
            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (-(var_5))))));
            arr_48 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))) * ((+(16181360227098503591ULL)))));
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (-(var_8))))));
            var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) (!(var_9))))));
            arr_51 [i_2] = ((/* implicit */int) var_4);
        }
        arr_52 [i_2] = ((/* implicit */unsigned char) var_3);
    }
    for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 3) 
        {
            var_32 = var_9;
            var_33 = ((/* implicit */long long int) max((((((/* implicit */int) var_0)) | (((/* implicit */int) var_1)))), (((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_12))))));
            arr_60 [i_15] [i_15] = ((/* implicit */signed char) min((((((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (var_9))))) % (((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) == (var_13))))));
        }
        for (unsigned int i_16 = 2; i_16 < 22; i_16 += 1) 
        {
            var_34 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) (unsigned char)41)), ((+(8197388600442838701ULL))))) == (min((((/* implicit */unsigned long long int) var_5)), (min((var_8), (((/* implicit */unsigned long long int) var_5))))))));
            var_35 = ((/* implicit */_Bool) max((var_35), (var_7)));
            var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((2717352958U) >> (((/* implicit */int) (_Bool)0))))) >= ((~(var_10))))))));
        }
        arr_63 [i_14] = ((/* implicit */unsigned char) var_8);
    }
    var_37 -= ((/* implicit */signed char) var_1);
    var_38 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) | (max((((/* implicit */long long int) var_4)), (min((((/* implicit */long long int) var_11)), (var_5)))))));
    var_39 *= ((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (var_5)));
    var_40 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
}
