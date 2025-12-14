/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207043
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
    for (int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)26546))))), (((long long int) max((((/* implicit */unsigned long long int) 2147221504LL)), (8260404623282830733ULL))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (-(8260404623282830733ULL)));
            arr_5 [10U] [i_0] [i_0] = ((/* implicit */int) (+((-(10186339450426720883ULL)))));
            var_13 *= (unsigned short)32640;
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                arr_9 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((long long int) (~(1371306973U))));
                var_14 = ((/* implicit */int) (short)147);
            }
            for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                var_15 = ((/* implicit */long long int) -153192367);
                var_16 *= ((/* implicit */_Bool) (unsigned char)145);
                var_17 = ((/* implicit */unsigned short) min((30ULL), (((/* implicit */unsigned long long int) 1371306969U))));
                var_18 &= (short)14320;
            }
            /* LoopSeq 1 */
            for (unsigned int i_4 = 2; i_4 < 9; i_4 += 1) 
            {
                arr_15 [i_0] [i_1] [i_4] [i_0] = ((/* implicit */unsigned long long int) (+(((long long int) ((unsigned int) (unsigned short)8160)))));
                arr_16 [i_0] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (_Bool)0)), (((unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)8160)))))));
            }
        }
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        arr_20 [(_Bool)1] = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) 2773039314U)))));
        var_19 = ((/* implicit */unsigned char) ((long long int) ((unsigned char) -2470100517053164582LL)));
        var_20 = ((/* implicit */unsigned short) 1683865113);
        var_21 &= ((/* implicit */unsigned char) (-(1521927979U)));
    }
    var_22 = ((/* implicit */unsigned short) ((unsigned int) -1327746541));
    /* LoopNest 2 */
    for (unsigned int i_6 = 4; i_6 < 21; i_6 += 2) 
    {
        for (unsigned char i_7 = 2; i_7 < 20; i_7 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned short) ((long long int) 8260404623282830749ULL));
                /* LoopSeq 2 */
                for (unsigned short i_8 = 0; i_8 < 22; i_8 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned long long int) ((int) (short)17813));
                    arr_30 [i_7] [i_7] = max((1371306973U), (((/* implicit */unsigned int) 1683865113)));
                    var_25 = ((/* implicit */int) ((signed char) ((unsigned int) (!(((/* implicit */_Bool) (signed char)117))))));
                }
                for (unsigned short i_9 = 0; i_9 < 22; i_9 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        arr_35 [i_6] [i_6] = (+(((/* implicit */int) ((unsigned short) (unsigned short)8160))));
                        var_26 &= ((/* implicit */short) (~(((/* implicit */int) ((_Bool) (signed char)0)))));
                        arr_36 [(short)17] [i_6] [8LL] [i_6] [i_6 - 1] [i_6] = (unsigned char)215;
                    }
                    /* vectorizable */
                    for (unsigned int i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_12 = 0; i_12 < 22; i_12 += 2) 
                        {
                            var_27 = ((/* implicit */long long int) 1683865107);
                            var_28 = ((/* implicit */long long int) max((var_28), (((long long int) (+(((/* implicit */int) (unsigned char)16)))))));
                            var_29 = ((/* implicit */_Bool) (~((+(((/* implicit */int) (signed char)5))))));
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) -1706378314))));
                        }
                        for (unsigned char i_13 = 0; i_13 < 22; i_13 += 4) 
                        {
                            arr_45 [i_13] [i_13] [i_13] [i_7 + 1] [i_13] [i_11] = ((/* implicit */_Bool) (~((~(((/* implicit */int) (short)17813))))));
                            arr_46 [i_13] [i_13] [i_9] [i_11] [i_13] &= ((/* implicit */unsigned char) 8260404623282830740ULL);
                            arr_47 [i_6 - 1] [i_7] [i_11] [i_13] = ((/* implicit */unsigned char) ((short) (~(((/* implicit */int) (short)17813)))));
                        }
                        for (signed char i_14 = 3; i_14 < 21; i_14 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)17813)))))));
                            var_32 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)8160))));
                            var_33 = ((/* implicit */unsigned int) (-2147483647 - 1));
                            arr_52 [i_6] [i_11] [i_9] [i_6] [(short)17] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) (short)12288)))));
                            arr_53 [i_6] [i_6] [i_6] [i_11] = ((/* implicit */short) 2773039314U);
                        }
                        var_34 -= (unsigned short)8160;
                    }
                    for (long long int i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        var_35 = ((/* implicit */unsigned int) (signed char)-124);
                        /* LoopSeq 1 */
                        for (short i_16 = 0; i_16 < 22; i_16 += 1) 
                        {
                            var_36 = ((/* implicit */unsigned long long int) ((short) (~(((/* implicit */int) (short)16384)))));
                            arr_59 [i_6] [i_6] [(signed char)5] [i_6] = ((/* implicit */unsigned short) 16325892338594470010ULL);
                            arr_60 [(short)5] [i_7 + 1] [i_7 - 2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((short) (unsigned short)43046))), (max((-6656551378983779903LL), (((/* implicit */long long int) (unsigned char)169))))))), (16325892338594470015ULL)));
                            var_37 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((int) (unsigned short)65535)), (1683865107)))), (((long long int) max((2907346726767770879LL), (((/* implicit */long long int) -188468315)))))));
                        }
                        arr_61 [i_6] [i_7 - 2] [i_7 - 2] = ((/* implicit */short) (unsigned char)255);
                        arr_62 [i_6] [i_6] [i_9] [(signed char)0] [i_15] = ((/* implicit */signed char) min((1977902315), (max(((+(((/* implicit */int) (unsigned char)168)))), (max((1965674361), (((/* implicit */int) (short)1859))))))));
                        var_38 ^= ((/* implicit */unsigned long long int) min((((long long int) max((8897924236178575362LL), (((/* implicit */long long int) (unsigned char)169))))), ((~((-(3222226028650541480LL)))))));
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 2; i_17 < 19; i_17 += 3) 
                    {
                        for (unsigned int i_18 = 0; i_18 < 22; i_18 += 2) 
                        {
                            {
                                var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) ((unsigned char) max(((~(2581654386U))), (((/* implicit */unsigned int) ((unsigned char) (signed char)-106)))))))));
                                var_40 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) max((((/* implicit */int) (short)-20699)), (2123144130)))))));
                                arr_68 [(unsigned char)1] [i_9] [i_17] [i_17 - 2] [i_17] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) (_Bool)0)))));
                                arr_69 [i_6] [i_6] [i_17] [i_6 - 4] = ((/* implicit */int) ((short) (~(((/* implicit */int) (signed char)95)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_19 = 0; i_19 < 22; i_19 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) 457406597))));
                        var_42 = ((/* implicit */short) 6268510219499049381LL);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_20 = 0; i_20 < 22; i_20 += 4) 
                        {
                            var_43 = ((/* implicit */_Bool) ((unsigned char) ((_Bool) (unsigned short)255)));
                            var_44 = ((/* implicit */unsigned short) (_Bool)1);
                            arr_75 [i_6] [i_7] [i_9] [i_19] [i_20] = ((/* implicit */_Bool) (-((+(1874306647923263461LL)))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_21 = 3; i_21 < 21; i_21 += 4) 
                        {
                            var_45 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(1488548535U))))));
                            arr_78 [i_6 - 4] [(_Bool)1] [i_6 - 1] [i_21] [i_6] [(_Bool)1] = ((/* implicit */int) max((508863890673120610LL), (((/* implicit */long long int) ((short) -902699937)))));
                        }
                    }
                }
                arr_79 [i_6] [i_7 + 2] = ((/* implicit */unsigned char) 1683865111);
            }
        } 
    } 
}
