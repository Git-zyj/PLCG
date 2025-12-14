/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236501
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
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned char) (unsigned short)65535);
                                arr_13 [i_4] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_10 [i_0 + 3] [i_0 - 2] [i_3] [i_0 - 2] [i_3] [i_3])) / (var_0)));
                                var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((arr_9 [i_2]) ? (((/* implicit */int) arr_9 [i_0 - 1])) : (((/* implicit */int) (unsigned char)156))))), (((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 20; i_6 += 1) 
                        {
                            {
                                arr_19 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_2]))))))))));
                                arr_20 [i_0 - 1] [i_0 - 1] [i_2] [i_5] [i_6 - 3] [i_2] [i_6 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)140)) | (((((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */int) arr_0 [i_1] [i_5])))) & (((/* implicit */int) var_4))))));
                                arr_21 [i_0 - 2] [i_2] [i_0 - 2] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)116)) / ((-((-(((/* implicit */int) var_7))))))));
                                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned char)156))))))) ? ((-(((/* implicit */int) (short)5424)))) : (((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_1] [i_1] [i_1] [i_6 - 2])) ? (((/* implicit */int) arr_0 [i_6 + 2] [i_2])) : ((~(((/* implicit */int) var_7))))))));
                            }
                        } 
                    } 
                    arr_22 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0 - 2] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 3] [i_0])) ? (((/* implicit */int) arr_11 [i_0 - 3] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 3] [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_0 + 2] [i_0 + 1] [i_0] [i_0] [i_0 + 3] [i_0]))))), (min((((/* implicit */long long int) (short)-5425)), (4215423261805503058LL)))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 2; i_8 < 20; i_8 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) max(((+(((/* implicit */int) arr_11 [i_8 + 1] [i_8 - 2] [i_8 - 1] [i_8 + 2] [i_8 - 1] [i_0 - 1] [i_0 - 1])))), (((/* implicit */int) var_4))));
                                arr_31 [i_8] [i_0] [i_7] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) max((var_1), (((/* implicit */long long int) ((arr_15 [i_2] [i_2] [i_2] [i_0 + 2]) ? (arr_27 [i_7] [i_1] [i_2] [i_8] [i_8] [i_2]) : (((/* implicit */int) arr_30 [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_0 + 3] [i_0 - 1])))))));
                                arr_32 [i_0] [i_1] [i_1] [i_8 + 3] [i_8] [i_8 + 3] = ((/* implicit */int) ((unsigned int) ((_Bool) (unsigned char)15)));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            arr_36 [i_0 - 1] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((((/* implicit */int) (unsigned char)99)) << (((((/* implicit */int) (unsigned char)252)) - (245))))) : ((~(((/* implicit */int) (unsigned char)4))))));
            arr_37 [i_0] [i_0] [i_0 - 3] = ((/* implicit */unsigned long long int) (~(-1205370876942221153LL)));
        }
        for (unsigned long long int i_10 = 3; i_10 < 21; i_10 += 1) 
        {
            var_14 &= ((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_3))))))), (((unsigned char) var_6))));
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 3) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        arr_46 [i_0] [i_12] [i_11] [i_12] = ((/* implicit */unsigned int) (_Bool)1);
                        arr_47 [i_0] [i_10] [i_10] [i_12] = ((/* implicit */int) -5877761487916047427LL);
                        var_15 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((unsigned long long int) (_Bool)1)))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_13 = 0; i_13 < 23; i_13 += 3) 
            {
                for (unsigned char i_14 = 1; i_14 < 22; i_14 += 2) 
                {
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        {
                            arr_56 [i_13] [i_10 - 2] [i_15] [i_15] [i_13] = ((/* implicit */long long int) ((((((/* implicit */int) ((unsigned short) var_5))) - ((-(var_2))))) ^ (((/* implicit */int) arr_39 [i_0 - 3]))));
                            arr_57 [i_15] [i_10] = ((/* implicit */long long int) ((((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_13]))) : (18446744073709551615ULL))) == (((/* implicit */unsigned long long int) (-(min((arr_10 [i_0 + 2] [i_0] [i_0 + 2] [i_13] [i_14] [i_15]), (((/* implicit */unsigned int) var_5)))))))));
                        }
                    } 
                } 
            } 
            arr_58 [i_0 - 1] = (unsigned char)27;
            /* LoopNest 2 */
            for (short i_16 = 0; i_16 < 23; i_16 += 4) 
            {
                for (long long int i_17 = 0; i_17 < 23; i_17 += 4) 
                {
                    {
                        arr_63 [i_0] [i_0 - 2] [i_0 + 3] [i_0 + 3] = ((/* implicit */int) 14403630837502865613ULL);
                        var_16 = ((/* implicit */unsigned long long int) ((unsigned char) arr_55 [i_0 + 2] [i_10] [i_16]));
                        var_17 = ((/* implicit */unsigned int) arr_34 [i_0] [i_17]);
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 23; i_18 += 3) 
        {
            for (unsigned long long int i_19 = 2; i_19 < 22; i_19 += 4) 
            {
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    {
                        arr_74 [i_0 - 2] [i_19] [i_19 - 1] [i_0 - 2] |= ((arr_35 [i_0 + 3]) ^ (((/* implicit */unsigned long long int) ((int) arr_35 [i_20]))));
                        arr_75 [i_20] [i_19 - 2] = ((var_4) ? (3738339058178170489ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_71 [i_0 + 3]) != (14708405015531381127ULL))))));
                        arr_76 [i_20] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) min((arr_50 [i_0 - 1] [i_18]), (((/* implicit */unsigned int) arr_27 [i_0] [i_0] [i_19] [i_18] [i_18] [i_18]))))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (arr_43 [i_0] [i_0 - 2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_20] [i_18] [i_19] [i_18] [i_18] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */long long int) var_2)))))))));
                    }
                } 
            } 
        } 
        arr_77 [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((arr_48 [i_0 + 3] [i_0 - 2] [i_0 - 2] [i_0]) != (((/* implicit */int) arr_1 [i_0 + 3])))))));
    }
    var_18 = ((/* implicit */long long int) var_3);
}
