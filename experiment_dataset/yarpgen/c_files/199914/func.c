/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199914
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
    var_18 = ((/* implicit */_Bool) (-(-6682144928304577183LL)));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)4048)) && (((/* implicit */_Bool) -6682144928304577183LL))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_20 = (+(min((((/* implicit */unsigned int) var_0)), (var_15))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_21 -= ((/* implicit */unsigned char) ((signed char) 9767272756698464268ULL));
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) var_6);
                            arr_15 [20LL] [i_1] [20LL] |= ((/* implicit */unsigned char) var_5);
                            arr_16 [i_4] [i_3] [(unsigned short)1] [(unsigned short)1] [i_3] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 6682144928304577183LL))));
                            var_23 += ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
                        }
                    } 
                } 
                arr_17 [(signed char)10] [i_1] [i_0] = ((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) var_15)))));
            }
            for (long long int i_5 = 3; i_5 < 22; i_5 += 1) 
            {
                var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
                arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(((var_16) >> (((((/* implicit */int) var_12)) - (53)))))));
            }
            for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_12))));
                var_26 -= ((/* implicit */short) ((unsigned char) var_1));
            }
            var_27 = ((/* implicit */unsigned char) var_5);
        }
        for (unsigned char i_7 = 1; i_7 < 21; i_7 += 3) 
        {
            var_28 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) var_11))))));
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 23; i_8 += 3) 
            {
                for (unsigned short i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    {
                        arr_32 [i_7] [7ULL] [i_8] [i_9] = ((/* implicit */signed char) (~((~(var_17)))));
                        var_29 -= ((/* implicit */unsigned long long int) (-(((((/* implicit */int) ((signed char) var_1))) ^ (((((/* implicit */int) var_0)) | (((/* implicit */int) var_9))))))));
                        arr_33 [(unsigned char)14] [i_9] [i_7] [i_7] [(short)10] [12U] = ((/* implicit */signed char) (+(var_10)));
                        var_30 = ((/* implicit */unsigned short) (~(((long long int) var_13))));
                    }
                } 
            } 
            var_31 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_1))))), (((var_17) % (var_13)))));
        }
        arr_34 [16] [16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)114)) || ((_Bool)1)));
    }
    /* vectorizable */
    for (long long int i_10 = 2; i_10 < 20; i_10 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_11 = 0; i_11 < 21; i_11 += 1) 
        {
            arr_39 [i_10] [i_11] [i_10] = ((/* implicit */long long int) (-(((/* implicit */int) var_12))));
            /* LoopNest 2 */
            for (long long int i_12 = 0; i_12 < 21; i_12 += 1) 
            {
                for (signed char i_13 = 0; i_13 < 21; i_13 += 1) 
                {
                    {
                        arr_46 [2ULL] [i_11] = ((/* implicit */long long int) (+((+(((/* implicit */int) (_Bool)1))))));
                        arr_47 [i_10] [(unsigned short)3] [7LL] [i_13] |= ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
                    }
                } 
            } 
        }
        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (-(((/* implicit */int) var_9)))))));
        /* LoopSeq 1 */
        for (unsigned int i_14 = 4; i_14 < 20; i_14 += 1) 
        {
            arr_50 [i_14 - 1] [i_10] [i_10 - 1] = ((/* implicit */short) (~(((/* implicit */int) var_5))));
            arr_51 [i_10] = (-(var_7));
            var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_14))));
            /* LoopNest 3 */
            for (unsigned char i_15 = 0; i_15 < 21; i_15 += 1) 
            {
                for (unsigned char i_16 = 3; i_16 < 20; i_16 += 3) 
                {
                    for (unsigned char i_17 = 0; i_17 < 21; i_17 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */int) (~(7630544618651285990ULL)));
                            arr_62 [i_10 - 1] [i_10] [i_10 - 2] [i_10 - 1] [7LL] = ((/* implicit */short) ((unsigned char) (~(((/* implicit */int) var_3)))));
                            var_35 = ((/* implicit */long long int) var_0);
                            var_36 -= ((/* implicit */unsigned char) ((((var_7) + (9223372036854775807LL))) << (((((/* implicit */int) var_5)) - (60151)))));
                            arr_63 [(unsigned short)18] [(unsigned short)18] [i_15] [i_10] [i_17] [i_17] = ((/* implicit */unsigned long long int) (-(var_4)));
                        }
                    } 
                } 
            } 
            var_37 = ((/* implicit */signed char) (+(((/* implicit */int) var_1))));
        }
    }
    /* vectorizable */
    for (unsigned char i_18 = 3; i_18 < 10; i_18 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_19 = 4; i_19 < 13; i_19 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned char i_20 = 0; i_20 < 14; i_20 += 1) 
            {
                for (signed char i_21 = 1; i_21 < 13; i_21 += 1) 
                {
                    for (unsigned short i_22 = 0; i_22 < 14; i_22 += 1) 
                    {
                        {
                            arr_79 [i_18] [(short)3] [(short)3] [(short)3] [i_18] = ((/* implicit */unsigned int) ((int) (+(((/* implicit */int) var_0)))));
                            arr_80 [i_20] [i_18] [i_20] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0)))))));
                        }
                    } 
                } 
            } 
            arr_81 [i_18] = ((/* implicit */unsigned long long int) (+((-(var_16)))));
            var_38 ^= ((/* implicit */unsigned char) (-(-1721402666)));
        }
        for (unsigned char i_23 = 2; i_23 < 12; i_23 += 1) /* same iter space */
        {
            arr_86 [i_18] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
            arr_87 [i_18] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) var_17)))));
        }
        for (unsigned char i_24 = 2; i_24 < 12; i_24 += 1) /* same iter space */
        {
            var_39 = ((/* implicit */unsigned short) (+(var_10)));
            arr_91 [i_18] [i_24] = ((/* implicit */unsigned long long int) var_6);
            var_40 = ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) | (var_15)));
        }
        arr_92 [i_18] = var_3;
        /* LoopNest 3 */
        for (unsigned int i_25 = 0; i_25 < 14; i_25 += 3) 
        {
            for (unsigned char i_26 = 0; i_26 < 14; i_26 += 1) 
            {
                for (int i_27 = 0; i_27 < 14; i_27 += 1) 
                {
                    {
                        var_41 = ((/* implicit */unsigned short) ((long long int) (-(var_7))));
                        var_42 = ((/* implicit */long long int) var_14);
                        arr_102 [(_Bool)1] [i_25] [i_18] = ((/* implicit */unsigned short) (~(var_13)));
                        /* LoopSeq 1 */
                        for (signed char i_28 = 0; i_28 < 14; i_28 += 3) 
                        {
                            arr_105 [2LL] [2LL] &= var_2;
                            arr_106 [i_18] [(unsigned short)6] [(_Bool)1] [i_26] [(unsigned char)13] [i_27] [i_18] = ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) var_8)))));
                            arr_107 [i_18] [12LL] [i_26] [9] [i_18] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
                        }
                    }
                } 
            } 
        } 
        arr_108 [i_18] = ((/* implicit */unsigned long long int) (((+(var_13))) != (((/* implicit */unsigned long long int) ((long long int) var_11)))));
        var_43 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))));
    }
}
