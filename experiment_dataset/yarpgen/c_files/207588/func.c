/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207588
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
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) var_3))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) 12484882709006834132ULL))));
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)65535))))), ((short)32765))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 2; i_3 < 9; i_3 += 2) 
                {
                    for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) ((var_0) != (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0]))))))) / (((((/* implicit */long long int) var_9)) + (var_3))))) * (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 3]))) / (var_3))))))));
                            var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)234))))) : (var_9))))));
                        }
                    } 
                } 
            } 
            var_16 = ((unsigned short) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_10)), ((unsigned short)52527))))));
            var_17 = ((/* implicit */signed char) (!(((var_2) < (-1180783784420763779LL)))));
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))))) | (((/* implicit */int) ((var_0) > ((-(var_3)))))))))));
        }
        /* vectorizable */
        for (unsigned char i_5 = 2; i_5 < 9; i_5 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                arr_18 [i_6] [i_5] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_0] [i_5 - 1] [i_6])) : (((/* implicit */int) (signed char)122))))));
                var_19 = ((/* implicit */unsigned char) var_1);
                /* LoopNest 2 */
                for (unsigned short i_7 = 1; i_7 < 8; i_7 += 2) 
                {
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((var_0) ^ (((/* implicit */long long int) ((/* implicit */int) ((var_0) > (((/* implicit */long long int) ((/* implicit */int) (signed char)83))))))))))));
                            var_21 = ((/* implicit */unsigned char) var_0);
                            arr_27 [i_0 + 3] [i_0] [i_7] = ((/* implicit */_Bool) (unsigned short)52509);
                            arr_28 [i_7] [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_10)))))));
                            var_22 = ((/* implicit */unsigned int) ((6439190558650032300ULL) < (((/* implicit */unsigned long long int) var_9))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    for (signed char i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        {
                            var_23 -= ((/* implicit */signed char) (-((-(((/* implicit */int) var_6))))));
                            arr_35 [i_10] [i_9] [i_6] [i_5] [i_0] = ((/* implicit */unsigned short) (signed char)-1);
                        }
                    } 
                } 
                var_24 = ((/* implicit */long long int) (~(((/* implicit */int) var_1))));
            }
            for (unsigned short i_11 = 0; i_11 < 10; i_11 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 10; i_12 += 2) 
                {
                    for (long long int i_13 = 1; i_13 < 9; i_13 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))));
                            var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)254)) : (arr_15 [i_0] [i_0]))))));
                            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (short)-1))));
                            arr_43 [i_0] [i_5] [i_11] [9ULL] [i_13] [i_13 - 1] = ((signed char) (+(arr_31 [i_13] [i_13] [i_13])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 10; i_14 += 3) 
                {
                    for (unsigned long long int i_15 = 4; i_15 < 6; i_15 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned char) ((((var_4) > (var_2))) ? (((/* implicit */unsigned long long int) arr_31 [i_0 - 1] [i_5 + 1] [i_5 - 1])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (arr_8 [i_11] [i_11])))));
                            arr_50 [i_15] [i_5] [i_11] [i_0] [i_15] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                            var_29 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (var_9)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5)))))));
                        }
                    } 
                } 
                arr_51 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_5);
            }
            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)0) ? (arr_31 [i_0] [i_0] [i_5 - 1]) : (((/* implicit */int) var_10))))) ? (1448392532U) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)-83)))))))));
            /* LoopSeq 3 */
            for (unsigned short i_16 = 0; i_16 < 10; i_16 += 3) 
            {
                var_32 = var_7;
                var_33 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) var_3))));
            }
            for (unsigned short i_17 = 0; i_17 < 10; i_17 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 2) 
                {
                    for (short i_19 = 0; i_19 < 10; i_19 += 2) 
                    {
                        {
                            arr_62 [i_0] [i_0] [i_5] [i_5] [i_5] [i_17] [i_19] = ((/* implicit */int) ((((/* implicit */_Bool) (-(var_4)))) && (((/* implicit */_Bool) (-(0U))))));
                            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)36)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2441)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                            var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (63U))))));
                            var_37 &= ((/* implicit */short) (!(((/* implicit */_Bool) (+(var_3))))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */short) var_3);
                var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4)))))));
                var_40 = ((/* implicit */unsigned long long int) (unsigned short)13009);
                var_41 = ((((/* implicit */_Bool) arr_48 [i_0 + 1] [(signed char)2] [i_0] [i_5 - 2] [i_5] [i_5])) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_0))) : (((/* implicit */long long int) (+(((/* implicit */int) var_6))))));
            }
            for (int i_20 = 3; i_20 < 9; i_20 += 3) 
            {
                var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) (_Bool)1))));
                arr_65 [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_3)))) ? (((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65055)))))));
                var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) (signed char)-124))));
                arr_66 [i_0] &= ((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_0 + 3]))));
            }
        }
        for (signed char i_21 = 0; i_21 < 10; i_21 += 2) 
        {
            arr_71 [i_0 + 3] [i_0 + 3] [i_21] = ((/* implicit */signed char) (((-(var_4))) + (((/* implicit */long long int) (((-(var_9))) ^ (((/* implicit */unsigned int) ((int) var_3))))))));
            /* LoopSeq 2 */
            for (short i_22 = 0; i_22 < 10; i_22 += 1) 
            {
                arr_76 [i_21] = min(((-((+(var_3))))), (((/* implicit */long long int) (~(((/* implicit */int) var_10))))));
                var_44 = ((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))))), (arr_30 [i_0] [3U]))))));
            }
            for (unsigned char i_23 = 0; i_23 < 10; i_23 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_24 = 1; i_24 < 9; i_24 += 2) 
                {
                    for (unsigned char i_25 = 0; i_25 < 10; i_25 += 2) 
                    {
                        {
                            var_45 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-23963))));
                            var_46 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(18446744073709551615ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : ((+(var_7))))))));
                        }
                    } 
                } 
                arr_89 [i_23] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65065)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_64 [i_23] [i_21] [i_23]))))) && (((/* implicit */_Bool) (+(var_3))))));
            }
        }
    }
    /* LoopSeq 1 */
    for (unsigned int i_26 = 1; i_26 < 13; i_26 += 2) 
    {
        var_47 = ((/* implicit */_Bool) var_8);
        arr_92 [i_26] [i_26 + 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
    }
}
