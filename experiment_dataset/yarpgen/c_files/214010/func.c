/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214010
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((_Bool) 4243565980891720732LL)) ? (max((((/* implicit */unsigned long long int) (-(-4243565980891720747LL)))), (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_2 [i_0])))))))));
        var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_2 [i_0]))), (((/* implicit */unsigned int) ((-4243565980891720742LL) != (562949951324160LL))))))), (var_8)));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            var_20 = ((/* implicit */signed char) (((+(((unsigned long long int) arr_10 [i_1] [(unsigned short)14] [i_2])))) | (((unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)61547)), (arr_11 [i_1] [i_1] [i_2]))))));
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_5))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                for (long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    for (unsigned int i_6 = 2; i_6 < 18; i_6 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (min((((((/* implicit */_Bool) (+(arr_7 [i_3])))) ? (var_14) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_20 [i_4] [i_3] [i_3] [i_5] [i_4]))))))), (((/* implicit */unsigned long long int) ((long long int) ((signed char) arr_10 [i_1] [i_3] [i_1]))))))));
                            var_23 = ((/* implicit */signed char) (unsigned short)56235);
                            var_24 = ((/* implicit */signed char) ((min((max((((/* implicit */long long int) (unsigned char)252)), (-4243565980891720742LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)58801)) - (((/* implicit */int) (signed char)-110))))))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (signed char)-102)))))))));
                            var_25 ^= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (unsigned short)56238))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (signed char i_7 = 2; i_7 < 18; i_7 += 4) 
            {
                arr_26 [i_1] = ((/* implicit */unsigned long long int) ((arr_7 [i_1]) & ((-(((unsigned int) arr_24 [i_1] [18ULL] [i_1] [i_1]))))));
                var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (+((((-(arr_22 [i_7] [(signed char)10] [i_7]))) / (((/* implicit */long long int) (+(((/* implicit */int) arr_19 [i_1] [14LL] [14LL] [14LL]))))))))))));
            }
            for (long long int i_8 = 0; i_8 < 19; i_8 += 4) 
            {
                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_21 [5LL] [i_8] [(unsigned short)4] [i_3] [i_1]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [(unsigned short)16] [i_3] [i_1] [17ULL] [i_1])) ? (((/* implicit */int) arr_20 [i_8] [i_3] [i_1] [i_1] [(signed char)10])) : (((/* implicit */int) (unsigned short)27022))))) : ((+(8558562512772742787LL)))));
                var_28 = ((/* implicit */unsigned long long int) var_17);
                var_29 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)4088)), (arr_17 [i_1] [i_1] [i_8])))), (min((((/* implicit */unsigned long long int) (signed char)-15)), (((unsigned long long int) arr_27 [i_1] [17ULL]))))));
                var_30 = ((/* implicit */long long int) max((var_30), (arr_18 [i_1] [i_3] [i_8] [i_3] [i_1])));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 2) 
            {
                var_31 = ((/* implicit */unsigned short) (((+(arr_28 [(signed char)4] [i_1]))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_9])))));
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 1; i_11 < 18; i_11 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((unsigned long long int) ((unsigned char) arr_16 [i_1] [8U] [i_10] [i_10]))))));
                            var_33 |= ((/* implicit */unsigned short) ((((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-110))) < (arr_17 [i_1] [i_3] [i_9]))) ? (min((((/* implicit */long long int) 2807840981U)), (562949951324159LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_11] [i_11] [i_9] [i_11 + 1] [i_11 + 1]))))) != (((/* implicit */long long int) 3534563474U))));
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_13 = 0; i_13 < 19; i_13 += 2) 
                {
                    for (unsigned short i_14 = 0; i_14 < 19; i_14 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_3] [i_12]))));
                            var_35 = 15713429779513827573ULL;
                            arr_46 [i_13] &= (unsigned short)2047;
                            var_36 = ((/* implicit */unsigned short) var_9);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 1) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 4) 
                    {
                        {
                            var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) (+(var_7))))));
                            var_38 = ((/* implicit */long long int) max((var_38), (((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)17849))))) : (min((-2481481279467668284LL), (((/* implicit */long long int) arr_44 [i_3] [12LL] [i_16]))))))));
                            var_39 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */int) arr_33 [i_1] [12ULL] [i_16])) | (((/* implicit */int) (signed char)64)))), (((/* implicit */int) ((unsigned short) arr_42 [i_1] [i_3] [i_12]))))))));
                        }
                    } 
                } 
                var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) ((((/* implicit */_Bool) min(((-(var_0))), (min((((/* implicit */unsigned long long int) arr_32 [i_3])), (var_15)))))) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) -562949951324175LL)) ? (((/* implicit */int) (unsigned short)17854)) : (((/* implicit */int) (_Bool)1))))))) : (((((_Bool) arr_8 [i_1] [2LL])) ? (max((562949951324143LL), (((/* implicit */long long int) arr_21 [i_1] [12LL] [12LL] [i_3] [i_1])))) : (((/* implicit */long long int) ((arr_16 [i_1] [i_3] [i_3] [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_24 [i_1] [i_1] [9LL] [i_1])))))))))));
            }
            for (unsigned short i_17 = 1; i_17 < 17; i_17 += 4) 
            {
                var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) arr_36 [i_1] [i_1] [i_1] [i_1] [i_3] [i_17]))));
                var_42 = ((/* implicit */unsigned short) ((long long int) (+(max((((/* implicit */long long int) arr_33 [i_1] [i_3] [i_1])), (arr_6 [i_1] [i_1]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_18 = 0; i_18 < 19; i_18 += 1) 
                {
                    var_43 ^= arr_24 [i_1] [(signed char)8] [i_17] [i_18];
                    var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) ((long long int) arr_41 [i_17])))));
                }
            }
        }
        /* LoopSeq 1 */
        for (long long int i_19 = 0; i_19 < 19; i_19 += 1) 
        {
            var_45 = ((/* implicit */unsigned int) 7812797291790056007LL);
            var_46 &= ((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) -1637875607262569516LL))))), (max(((signed char)(-127 - 1)), (((/* implicit */signed char) (_Bool)1))))));
        }
        arr_59 [i_1] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (-((-(((/* implicit */int) var_16))))))), (((arr_18 [i_1] [i_1] [i_1] [i_1] [i_1]) & (arr_18 [i_1] [i_1] [i_1] [i_1] [i_1])))));
    }
    for (long long int i_20 = 0; i_20 < 10; i_20 += 4) 
    {
        var_47 = ((unsigned int) 0LL);
        var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (arr_18 [(unsigned short)4] [(unsigned short)4] [i_20] [i_20] [i_20]) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_21 = 1; i_21 < 11; i_21 += 4) 
    {
        for (unsigned long long int i_22 = 0; i_22 < 14; i_22 += 4) 
        {
            for (signed char i_23 = 3; i_23 < 10; i_23 += 2) 
            {
                {
                    var_49 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)18))))))))));
                    arr_71 [i_21] [i_21] [i_22] [i_23 - 3] = ((/* implicit */unsigned int) var_3);
                }
            } 
        } 
    } 
}
