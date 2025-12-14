/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30438
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] [i_0] = var_8;
        arr_5 [i_0] [(signed char)16] &= ((/* implicit */unsigned long long int) var_12);
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 20; i_1 += 1) /* same iter space */
        {
            arr_9 [i_0] [i_0] [i_1] = var_11;
            /* LoopSeq 1 */
            for (signed char i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                var_13 = ((/* implicit */unsigned short) var_2);
                /* LoopNest 2 */
                for (unsigned char i_3 = 1; i_3 < 20; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) var_3);
                            arr_18 [i_0] [i_0] [i_1 + 2] [i_0] [i_0] [i_4 - 1] [i_4 + 1] = ((/* implicit */unsigned long long int) var_11);
                            arr_19 [i_0] [i_2] [i_0] [i_4 + 1] = ((/* implicit */long long int) (+(var_0)));
                            arr_20 [i_0 + 4] [(unsigned short)14] [i_0] [(unsigned short)14] [i_0] &= var_6;
                        }
                    } 
                } 
                var_15 *= ((/* implicit */unsigned short) (+(var_0)));
                var_16 = ((/* implicit */signed char) var_10);
            }
        }
        for (signed char i_5 = 1; i_5 < 20; i_5 += 1) /* same iter space */
        {
            var_17 *= ((/* implicit */signed char) var_0);
            arr_23 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))));
        }
    }
    for (unsigned short i_6 = 2; i_6 < 18; i_6 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) (~(max((((/* implicit */int) var_3)), ((-(((/* implicit */int) var_11))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                for (signed char i_9 = 3; i_9 < 19; i_9 += 3) 
                {
                    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
                            arr_38 [i_6] [i_7] [3ULL] [i_7] [i_7] [i_7] = ((/* implicit */short) (+((+((-(((/* implicit */int) var_8))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned char i_11 = 0; i_11 < 22; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 22; i_12 += 1) 
                {
                    for (unsigned short i_13 = 1; i_13 < 18; i_13 += 4) 
                    {
                        {
                            var_20 *= ((/* implicit */unsigned int) max((((/* implicit */long long int) var_6)), (max((var_5), (((/* implicit */long long int) max((var_2), (var_11))))))));
                            var_21 = var_1;
                        }
                    } 
                } 
                var_22 = ((/* implicit */signed char) (+(((/* implicit */int) var_6))));
                arr_46 [i_6] [i_6] = var_7;
                /* LoopSeq 1 */
                for (unsigned char i_14 = 0; i_14 < 22; i_14 += 2) 
                {
                    arr_50 [15ULL] [i_6] [(signed char)5] [i_14] = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) max((var_6), (var_3)))))), ((~(((/* implicit */int) var_6))))));
                    arr_51 [i_7] [i_6] [i_6] [i_6 + 2] = ((/* implicit */unsigned short) max(((+(var_9))), (((/* implicit */long long int) (-(((/* implicit */int) var_11)))))));
                    var_23 -= ((/* implicit */unsigned char) var_9);
                    /* LoopSeq 1 */
                    for (unsigned short i_15 = 2; i_15 < 21; i_15 += 4) 
                    {
                        arr_55 [i_15 + 1] [i_6] [i_14] [17ULL] [i_6 + 2] [i_6] [i_6 + 2] = ((/* implicit */unsigned int) max((var_7), (((/* implicit */unsigned char) min((var_11), (var_2))))));
                        var_24 &= ((/* implicit */unsigned short) min((max((((/* implicit */int) max(((unsigned short)37086), (((/* implicit */unsigned short) (unsigned char)96))))), ((-(((/* implicit */int) var_8)))))), (((/* implicit */int) var_6))));
                    }
                }
            }
            for (unsigned short i_16 = 1; i_16 < 20; i_16 += 3) 
            {
                arr_59 [i_6] [i_7] [i_7] = ((/* implicit */short) (-(((/* implicit */int) var_6))));
                arr_60 [20LL] [i_7] [i_16 + 1] |= ((/* implicit */unsigned short) min(((+(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (var_4)))))))));
            }
            for (unsigned long long int i_17 = 3; i_17 < 21; i_17 += 1) 
            {
                var_25 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))));
                arr_64 [i_6 + 1] [i_7] [i_6] = ((/* implicit */signed char) max((((/* implicit */long long int) var_3)), (var_9)));
            }
        }
        /* LoopSeq 1 */
        for (long long int i_18 = 1; i_18 < 19; i_18 += 1) 
        {
            arr_67 [(unsigned short)20] [i_6 + 2] [i_6] = ((/* implicit */signed char) min((((/* implicit */int) min((var_6), (var_10)))), ((+((-(((/* implicit */int) var_12))))))));
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (!(((/* implicit */_Bool) var_3)))))));
            var_27 = ((/* implicit */signed char) var_8);
        }
        var_28 = ((/* implicit */long long int) max(((+((-(((/* implicit */int) var_12)))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) var_2)), (var_6)))))))));
    }
    var_29 = ((/* implicit */unsigned long long int) (~(max(((-(var_5))), (((/* implicit */long long int) (+(((/* implicit */int) var_10)))))))));
    /* LoopSeq 2 */
    for (short i_19 = 2; i_19 < 16; i_19 += 2) /* same iter space */
    {
        arr_70 [i_19 - 1] [i_19] = ((/* implicit */short) var_6);
        var_30 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))));
        /* LoopNest 2 */
        for (short i_20 = 0; i_20 < 18; i_20 += 4) 
        {
            for (unsigned int i_21 = 2; i_21 < 16; i_21 += 1) 
            {
                {
                    var_31 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))));
                    arr_76 [1ULL] [i_20] [i_20] [i_19 - 2] = ((/* implicit */unsigned short) (+(min((max((var_0), (var_4))), (((/* implicit */unsigned long long int) var_6))))));
                    var_32 -= ((/* implicit */signed char) var_8);
                }
            } 
        } 
        arr_77 [i_19] [(unsigned char)11] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_7)))))))));
        var_33 = ((/* implicit */short) var_5);
    }
    /* vectorizable */
    for (short i_22 = 2; i_22 < 16; i_22 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_23 = 4; i_23 < 17; i_23 += 1) 
        {
            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_8)))))))));
            var_35 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-44))));
        }
        var_36 -= ((/* implicit */signed char) var_6);
        arr_82 [i_22] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)37086))));
    }
}
