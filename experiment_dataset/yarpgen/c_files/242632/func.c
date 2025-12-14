/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242632
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
    var_11 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        var_12 = var_10;
        var_13 = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) (_Bool)0)), (7528013319075129074ULL)))));
        arr_2 [i_0] = ((/* implicit */_Bool) (-(var_5)));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 3) 
        {
            var_14 = ((/* implicit */signed char) ((unsigned short) var_0));
            arr_7 [i_2] = var_0;
            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-55)))))));
        }
        for (signed char i_3 = 1; i_3 < 20; i_3 += 3) 
        {
            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))));
            /* LoopSeq 2 */
            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
            {
                arr_14 [i_1] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)27198)) ? (2416936119U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                arr_15 [i_1] [i_3] [i_3] [i_3] = ((/* implicit */signed char) var_9);
                var_17 = ((/* implicit */signed char) ((int) 11811775051882045610ULL));
            }
            for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned int) ((unsigned long long int) var_5));
                arr_18 [i_3] [i_3] = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) var_6)) : (14603490822918926780ULL)));
            }
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
            {
                arr_21 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))));
                /* LoopSeq 3 */
                for (short i_7 = 4; i_7 < 20; i_7 += 1) 
                {
                    arr_25 [i_3] [i_3] [i_6] [i_6] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3877563494469642436ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))));
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        arr_29 [i_3] [i_7] [i_6] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_3))));
                        var_19 ^= ((/* implicit */unsigned int) ((_Bool) var_5));
                        arr_30 [18] [18] [20LL] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (-(-317473880)));
                    }
                }
                for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 2) 
                {
                    arr_33 [i_3] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)101))));
                    var_20 = ((/* implicit */int) (-(var_1)));
                }
                for (int i_10 = 0; i_10 < 23; i_10 += 1) 
                {
                    arr_36 [i_6] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((long long int) (_Bool)1));
                    arr_37 [(signed char)19] [i_3] [i_6] [(signed char)19] = ((/* implicit */unsigned int) ((unsigned char) (unsigned char)0));
                    /* LoopSeq 3 */
                    for (short i_11 = 2; i_11 < 20; i_11 += 3) 
                    {
                        var_21 -= ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (+(10ULL))))));
                        var_23 = ((signed char) var_9);
                    }
                    for (unsigned char i_12 = 1; i_12 < 21; i_12 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((_Bool) 1388525197U));
                        arr_45 [i_3] [(_Bool)1] [i_3] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)184))));
                    }
                    for (signed char i_13 = 0; i_13 < 23; i_13 += 3) 
                    {
                        arr_48 [i_10] [i_3] [i_1] [i_3] [i_1] = ((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_5));
                        var_25 = ((/* implicit */unsigned char) (-(var_5)));
                    }
                    arr_49 [i_3] [i_3] [i_10] = ((/* implicit */signed char) (-(((long long int) var_7))));
                }
                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) 958605183638882674ULL)) ? (((/* implicit */unsigned long long int) var_6)) : (16414121630654018196ULL)));
                arr_50 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))));
            }
        }
        var_27 = ((/* implicit */_Bool) min((var_27), ((!(((/* implicit */_Bool) 16383LL))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_15 = 0; i_15 < 20; i_15 += 4) 
        {
            for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
            {
                for (unsigned char i_17 = 0; i_17 < 20; i_17 += 4) 
                {
                    {
                        var_28 *= ((/* implicit */long long int) (unsigned short)4537);
                        /* LoopSeq 4 */
                        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                        {
                            var_29 = ((/* implicit */short) (~(((/* implicit */int) var_4))));
                            var_30 = ((/* implicit */_Bool) ((unsigned char) var_7));
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) -122448656439354819LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_9))))) : (0U)));
                            var_32 = ((/* implicit */unsigned int) (unsigned short)1);
                        }
                        for (signed char i_19 = 0; i_19 < 20; i_19 += 4) /* same iter space */
                        {
                            arr_66 [(signed char)14] [17ULL] [(signed char)14] [3LL] [(unsigned char)5] = ((/* implicit */unsigned short) var_1);
                            var_33 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)49))));
                        }
                        for (signed char i_20 = 0; i_20 < 20; i_20 += 4) /* same iter space */
                        {
                            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)-83)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                            var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) var_9))));
                            var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 2147483647)) : (402279210008735467ULL))))));
                            arr_70 [i_20] [i_20] [(_Bool)0] [(signed char)9] [i_15] [i_14] = ((/* implicit */signed char) (+(((/* implicit */int) var_2))));
                        }
                        for (signed char i_21 = 0; i_21 < 20; i_21 += 4) /* same iter space */
                        {
                            var_37 += ((/* implicit */signed char) ((unsigned long long int) 17341497121682727366ULL));
                            var_38 = ((/* implicit */unsigned long long int) ((unsigned int) 13570451286409271436ULL));
                        }
                    }
                } 
            } 
        } 
        var_39 = ((/* implicit */unsigned short) (unsigned char)0);
    }
    for (short i_22 = 0; i_22 < 25; i_22 += 1) 
    {
        arr_75 [i_22] = ((/* implicit */signed char) ((_Bool) var_4));
        var_40 -= ((/* implicit */signed char) ((unsigned int) ((var_9) ? (-1298096054) : (((/* implicit */int) (unsigned char)6)))));
        arr_76 [i_22] [i_22] = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) 1369416563U)))));
    }
    /* vectorizable */
    for (int i_23 = 0; i_23 < 15; i_23 += 4) 
    {
        var_41 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
        arr_79 [i_23] [i_23] = ((/* implicit */unsigned int) (_Bool)0);
    }
}
