/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39364
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [(unsigned short)16] |= ((/* implicit */long long int) arr_0 [(unsigned char)9] [i_1]);
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_12 += ((/* implicit */unsigned char) min((((long long int) (short)-4718)), (((/* implicit */long long int) min(((-(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) arr_7 [i_1])))))));
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) arr_0 [i_0] [2LL]))))))));
                    var_14 = ((/* implicit */unsigned long long int) max((((unsigned char) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0]))))), (((/* implicit */unsigned char) arr_3 [i_1] [i_1]))));
                }
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    arr_10 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) arr_4 [(unsigned char)10] [i_1] [i_3]);
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 2; i_4 < 17; i_4 += 3) 
                    {
                        for (int i_5 = 4; i_5 < 18; i_5 += 3) 
                        {
                            {
                                arr_17 [(unsigned short)7] [i_5] [i_1] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (+((-((+(arr_15 [1U] [i_1] [1U])))))));
                                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned int) 13083503445947564230ULL))), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)0))))), (min((arr_16 [i_0] [(_Bool)1] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_1]))))))));
                }
                /* LoopSeq 1 */
                for (long long int i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        for (short i_8 = 1; i_8 < 18; i_8 += 3) 
                        {
                            {
                                arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [(_Bool)0] [i_7] [(_Bool)0] [(_Bool)0]))));
                                var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_1 + 2] [i_6] [i_8 + 1]))))), (max((max((((/* implicit */unsigned long long int) arr_13 [(signed char)6] [(unsigned short)0] [i_7] [(short)5])), (5363240627761987385ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_20 [i_6] [i_6] [(signed char)10])))))))));
                            }
                        } 
                    } 
                    arr_27 [i_1] = arr_0 [i_0] [i_1];
                    var_18 = ((/* implicit */int) arr_1 [i_0]);
                }
                /* LoopSeq 1 */
                for (signed char i_9 = 1; i_9 < 17; i_9 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 3; i_10 < 18; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 19; i_11 += 3) 
                        {
                            {
                                arr_38 [i_0] [i_1] [i_9] [4U] [i_11] |= ((/* implicit */unsigned char) min((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_29 [(unsigned short)6] [(short)2]))))))), (max(((~(((/* implicit */int) arr_36 [i_0] [i_1 + 1] [17ULL] [i_0] [(signed char)0] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [13ULL] [13ULL] [i_9])))))))));
                                arr_39 [(unsigned char)2] [5U] [i_9] [i_9] [i_1] = ((/* implicit */unsigned char) (~((-(min((((/* implicit */unsigned int) (short)32767)), (4294967295U)))))));
                                arr_40 [i_0] [i_0] [i_0] [i_0] [18LL] &= ((/* implicit */long long int) max((((/* implicit */unsigned short) ((unsigned char) ((int) 8257250493073247537LL)))), ((unsigned short)65535)));
                                var_19 = ((/* implicit */long long int) max((max((arr_15 [i_0] [i_1] [8]), (arr_15 [i_1] [i_1] [i_1]))), ((+((+(arr_16 [i_0] [i_0] [17LL] [i_0] [i_0])))))));
                            }
                        } 
                    } 
                    var_20 += ((/* implicit */unsigned char) (~(min(((-(((/* implicit */int) arr_30 [i_0] [(unsigned char)10] [13LL] [i_0])))), (((/* implicit */int) arr_11 [i_9 + 2] [i_9] [i_1] [i_1 - 2]))))));
                    var_21 &= ((/* implicit */long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned char) arr_3 [i_1] [4U])))))))), (max((((/* implicit */short) arr_37 [i_1] [i_1 + 2] [(unsigned char)18] [i_1])), (arr_13 [i_9 - 1] [i_9 - 1] [i_1 + 2] [(_Bool)1])))));
                    /* LoopSeq 3 */
                    for (long long int i_12 = 0; i_12 < 19; i_12 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 3) 
                        {
                            var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_9 + 2] [i_9]))));
                            arr_45 [i_0] [i_1] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) (~(((unsigned int) arr_42 [i_0] [i_9 + 2] [i_0] [i_0] [i_1 - 1]))));
                            arr_46 [i_13] [i_1] [i_9] [i_9] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned short) arr_41 [i_1 + 1] [i_1 - 3] [i_1 + 2] [i_9 + 2]));
                            arr_47 [i_1] [16LL] [(_Bool)1] [i_1] [i_0] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_19 [i_9 + 2] [i_9 + 2] [i_9 - 1] [i_9 - 1])), (arr_41 [i_9 + 1] [i_9 + 2] [i_9] [i_9]))))));
                        }
                        var_23 = ((/* implicit */short) (+((+(((/* implicit */int) arr_30 [i_12] [i_9 + 1] [i_1 - 1] [i_0]))))));
                    }
                    /* vectorizable */
                    for (signed char i_14 = 0; i_14 < 19; i_14 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (~(arr_44 [i_1 - 1] [(unsigned short)4] [i_1 + 1] [i_1 + 2]))))));
                        arr_52 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((signed char) 18165653314116663845ULL));
                    }
                    for (unsigned char i_15 = 0; i_15 < 19; i_15 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 1) 
                        {
                            arr_57 [i_15] [i_15] [i_15] [11ULL] [i_1] = ((/* implicit */long long int) arr_53 [i_16]);
                            arr_58 [i_0] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_4 [i_16] [i_1] [i_0]))))));
                            arr_59 [i_0] [i_0] [16U] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) max((((unsigned char) ((short) arr_51 [i_0] [i_1] [i_1] [i_15]))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)69)))))));
                        }
                        for (unsigned char i_17 = 0; i_17 < 19; i_17 += 3) 
                        {
                            var_25 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)0))));
                            arr_63 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_37 [i_1 - 3] [i_1] [12LL] [12LL])))))));
                        }
                        var_27 += ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) (~(0U)))))));
                        arr_64 [18ULL] &= ((/* implicit */int) min(((~((+(arr_60 [i_0] [i_0] [i_0] [(signed char)0] [i_0]))))), (((/* implicit */unsigned int) (+(max((((/* implicit */int) (signed char)99)), (-2052554917))))))));
                    }
                    arr_65 [i_0] [i_1] [i_1] [(signed char)6] = ((/* implicit */unsigned char) max((max((arr_16 [i_9] [i_9] [i_9 - 1] [i_9] [i_9 - 1]), (((/* implicit */unsigned long long int) (+(arr_18 [i_0] [i_1])))))), (((/* implicit */unsigned long long int) min((arr_28 [i_1] [i_1] [i_9 - 1]), (arr_28 [i_1] [i_1 - 3] [i_1 - 3]))))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_18 = 2; i_18 < 11; i_18 += 1) 
    {
        for (short i_19 = 0; i_19 < 12; i_19 += 4) 
        {
            for (unsigned short i_20 = 0; i_20 < 12; i_20 += 3) 
            {
                {
                    var_28 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) 1244494960612358547LL)), (13625226633686778571ULL)));
                    var_29 = ((/* implicit */unsigned char) (+((+((+(arr_22 [i_18] [i_18] [i_19] [i_19] [i_20])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_21 = 0; i_21 < 23; i_21 += 3) 
    {
        for (signed char i_22 = 0; i_22 < 23; i_22 += 4) 
        {
            {
                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (+(4294967295U))))));
                arr_79 [i_21] [i_22] &= (-((-(((/* implicit */int) arr_76 [i_21])))));
                var_31 |= (+(((/* implicit */int) arr_77 [i_22] [i_22])));
                /* LoopNest 3 */
                for (int i_23 = 3; i_23 < 21; i_23 += 4) 
                {
                    for (unsigned long long int i_24 = 0; i_24 < 23; i_24 += 4) 
                    {
                        for (unsigned short i_25 = 0; i_25 < 23; i_25 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned long long int) (+(((long long int) (-(arr_73 [i_21]))))));
                                arr_89 [i_21] [i_21] = ((/* implicit */_Bool) (-(((/* implicit */int) max((arr_77 [i_21] [i_21]), (arr_78 [i_23 - 3]))))));
                            }
                        } 
                    } 
                } 
                var_33 = ((/* implicit */short) (+(5545654253508692903ULL)));
            }
        } 
    } 
}
