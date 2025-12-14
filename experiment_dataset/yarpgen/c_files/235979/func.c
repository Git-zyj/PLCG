/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235979
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
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [(_Bool)1] [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))) | (((10803069709835812326ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) (((+(arr_0 [i_0]))) | (((/* implicit */unsigned int) (-(((/* implicit */int) var_16))))))));
                        var_19 &= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(6327978343603369331ULL)))))))) == (((unsigned int) ((int) (unsigned char)240)))));
                    }
                    arr_12 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) var_8);
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (+(((long long int) arr_3 [i_1 + 2] [4] [i_1 - 1])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        arr_15 [15U] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_17))));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (-(arr_13 [i_4] [i_4]))))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        arr_20 [10ULL] = ((/* implicit */long long int) (~(2386903871977066901ULL)));
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_24 [i_5] [i_5] [i_6] = ((arr_22 [i_5]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))));
            arr_25 [i_6] [(short)12] [i_6] = ((/* implicit */_Bool) var_9);
            /* LoopSeq 2 */
            for (unsigned int i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (_Bool)1))));
                var_23 += ((((/* implicit */_Bool) arr_23 [i_5] [i_6] [i_6])) && (((/* implicit */_Bool) 659291760U)));
                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) var_3))));
                arr_29 [i_5] [i_5] &= ((long long int) arr_3 [i_7] [i_5] [i_5]);
            }
            for (unsigned int i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_9 = 2; i_9 < 14; i_9 += 2) 
                {
                    for (long long int i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        {
                            arr_37 [6U] [i_6] [i_8] [i_6] [i_10] = ((/* implicit */unsigned int) (unsigned short)33189);
                            arr_38 [i_5] [i_5] [i_5] [i_5] [i_5] [i_6] [i_5] = ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) var_9)))));
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241))))) * (((/* implicit */unsigned long long int) ((unsigned int) 7899180627394584199ULL))))))));
                            var_26 = ((/* implicit */long long int) (((+(7U))) + (3647151433U)));
                        }
                    } 
                } 
                arr_39 [1ULL] [i_5] [i_6] = ((/* implicit */int) 10803069709835812341ULL);
                var_27 = ((/* implicit */int) min((var_27), ((~(((1627366107) % (((/* implicit */int) (unsigned char)108))))))));
            }
            var_28 = ((/* implicit */unsigned int) (((+(4867263709459780469ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5] [i_6] [i_5])))));
        }
        /* LoopNest 2 */
        for (unsigned int i_11 = 3; i_11 < 13; i_11 += 4) 
        {
            for (signed char i_12 = 3; i_12 < 12; i_12 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 3; i_13 < 14; i_13 += 4) 
                    {
                        arr_48 [i_5] [i_5] [i_12] [i_5] [i_5] = ((/* implicit */int) (((~(18446744073709551606ULL))) | (((unsigned long long int) var_14))));
                        arr_49 [i_5] [i_12] [i_12] [i_13] = ((/* implicit */unsigned long long int) ((((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) var_18))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_11] [i_13]) == (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))));
                    }
                    arr_50 [i_11 + 1] [i_12] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))));
                    arr_51 [i_12] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) -4)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
        {
            for (long long int i_15 = 0; i_15 < 15; i_15 += 3) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_17 = 1; i_17 < 13; i_17 += 4) 
                        {
                            arr_62 [i_5] [8U] [i_15] [i_16] [i_5] &= ((/* implicit */unsigned int) ((unsigned char) var_10));
                            arr_63 [(signed char)8] [i_16] [i_14] [i_14] [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)197))));
                            var_29 = ((/* implicit */unsigned int) ((_Bool) arr_22 [i_5]));
                        }
                        for (unsigned short i_18 = 0; i_18 < 15; i_18 += 3) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned long long int) ((arr_53 [i_5] [i_5]) * (((/* implicit */unsigned int) ((int) var_7)))));
                            arr_66 [i_5] [i_5] [i_14 - 1] [i_14] [0ULL] [i_18] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1758929366U))));
                        }
                        for (unsigned short i_19 = 0; i_19 < 15; i_19 += 3) /* same iter space */
                        {
                            var_31 += ((/* implicit */short) (-((~(304905373U)))));
                            var_32 = (~(1758929352U));
                            arr_69 [i_14] [(signed char)3] [i_16] = ((/* implicit */unsigned long long int) (unsigned char)179);
                            var_33 = ((/* implicit */short) (-(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_68 [i_5] [i_5] [i_14] [i_15] [i_16] [i_19]))))));
                            arr_70 [i_5] [i_14] [i_15] [i_14] [i_14] [3ULL] [i_15] = ((/* implicit */unsigned int) 8672002120826643593LL);
                        }
                        arr_71 [i_5] [2ULL] [i_14] [i_16] = ((/* implicit */unsigned long long int) (~(var_10)));
                        arr_72 [i_14] [i_14] [i_15] [i_16] = ((/* implicit */signed char) (~(2536037943U)));
                    }
                } 
            } 
        } 
        arr_73 [i_5] = (~(((/* implicit */int) var_6)));
    }
    /* vectorizable */
    for (signed char i_20 = 0; i_20 < 18; i_20 += 3) 
    {
        var_34 &= ((/* implicit */unsigned int) (~((~(18446744073709551615ULL)))));
        var_35 = ((/* implicit */unsigned long long int) min((var_35), (var_8)));
        /* LoopSeq 1 */
        for (short i_21 = 0; i_21 < 18; i_21 += 1) 
        {
            var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) ((short) ((unsigned long long int) (_Bool)1))))));
            var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) (~(((unsigned int) var_0)))))));
            var_38 += ((/* implicit */unsigned long long int) ((_Bool) 3206913020848653475ULL));
            var_39 = ((/* implicit */long long int) (unsigned short)65522);
        }
    }
    var_40 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) var_2))) | (var_3)));
}
