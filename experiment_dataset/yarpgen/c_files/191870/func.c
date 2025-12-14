/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191870
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
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_12 = ((((/* implicit */_Bool) 3027291660U)) ? (((/* implicit */long long int) 3027291660U)) : (((((/* implicit */_Bool) 4294967278U)) ? (((/* implicit */long long int) var_4)) : (var_1))));
            arr_7 [(unsigned short)3] = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_10))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                for (unsigned char i_3 = 2; i_3 < 20; i_3 += 3) 
                {
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))));
                            var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */unsigned int) var_5))));
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) >= (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) : (((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */unsigned char) ((unsigned short) (-(((/* implicit */int) (unsigned char)250)))));
        }
        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_6 = 2; i_6 < 20; i_6 += 2) 
            {
                var_17 = var_10;
                var_18 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 16383)))) ? (((/* implicit */int) var_3)) : (((int) var_7))));
            }
            for (int i_7 = 4; i_7 < 21; i_7 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_8 = 1; i_8 < 19; i_8 += 1) 
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)188))))) : (((unsigned int) var_11))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_1)))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))));
                }
                for (unsigned char i_9 = 2; i_9 < 21; i_9 += 1) 
                {
                    var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (var_11) : (var_4)));
                    arr_31 [i_0] [i_5] [(unsigned char)15] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_1))))));
                    var_22 = ((/* implicit */unsigned char) ((unsigned int) var_1));
                }
                arr_32 [(unsigned char)17] [6] [i_7] = ((/* implicit */long long int) ((unsigned char) var_11));
                var_23 *= ((((((/* implicit */_Bool) var_8)) ? (var_2) : (var_2))) % (((/* implicit */unsigned int) ((/* implicit */int) var_8))));
                var_24 = var_7;
            }
            for (unsigned int i_10 = 0; i_10 < 22; i_10 += 1) 
            {
                var_25 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (var_7)));
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 22; i_11 += 1) 
                {
                    for (unsigned char i_12 = 3; i_12 < 20; i_12 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_4)) : (var_1))) : (((/* implicit */long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_6)))))));
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (-(var_7))))));
                        }
                    } 
                } 
                var_28 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((4294967277U) | (498827346U))))));
            }
            var_29 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_13 = 4; i_13 < 21; i_13 += 4) 
        {
            for (unsigned short i_14 = 1; i_14 < 20; i_14 += 4) 
            {
                {
                    arr_44 [i_0] [i_13] [i_13] [(unsigned char)14] = ((/* implicit */int) (+(((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                    var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */int) var_9)))) : (((((/* implicit */int) var_9)) << (((var_1) + (2773697860694522949LL))))))))));
                }
            } 
        } 
        arr_45 [i_0] = ((2804816564U) * (2147483648U));
    }
    for (long long int i_15 = 4; i_15 < 13; i_15 += 1) 
    {
        arr_50 [i_15] [12LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_7))) ? (var_5) : (((((/* implicit */int) ((unsigned short) (unsigned char)66))) % (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))))));
        arr_51 [i_15] [i_15] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((var_11) ^ (var_7)))) : (((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */long long int) var_7)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_4)))) ? (((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (min((2147483648U), (((/* implicit */unsigned int) (unsigned char)251)))))))));
        /* LoopSeq 1 */
        for (unsigned char i_16 = 2; i_16 < 12; i_16 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_17 = 0; i_17 < 14; i_17 += 4) 
            {
                for (unsigned int i_18 = 3; i_18 < 12; i_18 += 4) 
                {
                    for (unsigned char i_19 = 4; i_19 < 10; i_19 += 1) 
                    {
                        {
                            arr_64 [(unsigned char)6] [(unsigned char)8] [i_17] [(unsigned char)7] [(unsigned char)0] = var_4;
                            var_31 |= ((unsigned short) (unsigned char)251);
                            arr_65 [5U] [(unsigned char)7] [(unsigned short)12] [(unsigned char)12] [7U] [i_15] = ((/* implicit */unsigned short) var_8);
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_7)) : (var_1))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_1)))) ? ((+(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */unsigned char) var_2);
            var_34 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */long long int) var_4))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned int) var_5))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_4)))) ? (((var_11) ^ (((/* implicit */unsigned int) var_5)))) : (min((((/* implicit */unsigned int) var_10)), (var_2)))))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_20 = 0; i_20 < 14; i_20 += 1) /* same iter space */
        {
            arr_68 [i_15] [3U] [(unsigned short)7] = var_0;
            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */long long int) var_2))))) ? ((+((+(((/* implicit */int) var_6)))))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
        }
        for (unsigned char i_21 = 0; i_21 < 14; i_21 += 1) /* same iter space */
        {
            arr_71 [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -7996260555246237595LL))))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_4)))) ? (min((((/* implicit */int) var_6)), (var_5))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (min((((/* implicit */unsigned int) var_3)), (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) <= (268435440U)))))))));
            arr_72 [i_21] [i_21] = ((/* implicit */long long int) var_2);
            /* LoopNest 2 */
            for (unsigned int i_22 = 0; i_22 < 14; i_22 += 4) 
            {
                for (long long int i_23 = 1; i_23 < 12; i_23 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_24 = 0; i_24 < 14; i_24 += 1) 
                        {
                            var_36 |= ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_2))))));
                            var_37 += ((/* implicit */int) max((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (var_4)))) ? (min((((/* implicit */long long int) var_3)), (var_1))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_5)) : (var_4))))))));
                        }
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) min((((/* implicit */int) ((var_7) <= (((/* implicit */unsigned int) var_5))))), ((-(((/* implicit */int) var_6))))))) >= (max((var_7), (((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
                    }
                } 
            } 
            var_39 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36902)) ? (268435432U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)202)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_8), (var_8))))))) : ((+(((((/* implicit */int) var_10)) + (((/* implicit */int) var_8))))))));
        }
    }
    /* vectorizable */
    for (long long int i_25 = 0; i_25 < 13; i_25 += 4) 
    {
        var_40 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_0)) % (((/* implicit */int) var_10)))) >= (((/* implicit */int) var_3))));
        arr_82 [i_25] = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) var_0)) & (((/* implicit */int) var_8)))));
        var_41 = (~(var_4));
    }
    var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_11)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) max((var_6), (var_9))))))) : (((long long int) var_2)))))));
}
