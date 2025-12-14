/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243094
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
    var_19 = ((/* implicit */short) var_2);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)57012))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_0))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_3 [i_1]))))) & (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) min(((unsigned char)5), (arr_4 [i_1]))))))));
        var_22 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)127)) / (((/* implicit */int) (signed char)-22))))) : (((((/* implicit */_Bool) -1410625765724491323LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)139))) : (-7610022156399772240LL)))))));
        var_23 = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_3 [i_1])) | (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) (signed char)-60)))))))));
    }
    /* LoopSeq 3 */
    for (short i_2 = 1; i_2 < 11; i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */_Bool) ((max((((/* implicit */long long int) arr_8 [i_2 - 1] [i_2 + 1])), (var_5))) - (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 + 1])))));
        var_24 = ((/* implicit */unsigned int) (-(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)12402))) % (arr_2 [i_2 + 1] [i_2 + 4])))));
        var_25 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_2)) ? (6785956942435880569ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -3481619878856992571LL)) || (((/* implicit */_Bool) (unsigned short)6559)))))))) & (((/* implicit */unsigned long long int) min((arr_7 [i_2 + 3] [i_2]), (((/* implicit */unsigned int) arr_1 [9LL] [i_2])))))));
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                for (long long int i_5 = 1; i_5 < 14; i_5 += 3) 
                {
                    {
                        arr_18 [i_4] [i_5] |= ((/* implicit */unsigned long long int) var_7);
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 3; i_6 < 14; i_6 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)31322)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_2 + 3] [i_5 + 1] [(unsigned char)9] [i_6 + 1] [7ULL])) || (((/* implicit */_Bool) (short)-29432)))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4]))) / (arr_16 [i_2] [i_2] [i_4] [i_5] [i_6] [i_6]))))))));
                            var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2] [3LL] [i_4] [i_5] [i_6] [i_6])) ? (((((((/* implicit */int) arr_3 [i_3])) + (2147483647))) >> (((((/* implicit */int) (unsigned short)42294)) - (42267))))) : (((/* implicit */int) min((arr_14 [i_4]), (((/* implicit */unsigned short) var_3)))))))) && ((!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-31487))))))));
                        }
                        for (long long int i_7 = 2; i_7 < 14; i_7 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned short) var_7);
                            arr_26 [i_2] [i_3] [i_4] [i_3] [i_5 - 1] [11] [i_7] = ((/* implicit */unsigned short) arr_6 [i_4]);
                            arr_27 [i_2] [i_3] [i_4] [i_5] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)58977)) * (((/* implicit */int) (unsigned short)31457))));
                        }
                        for (long long int i_8 = 2; i_8 < 14; i_8 += 3) /* same iter space */
                        {
                            var_29 |= ((/* implicit */unsigned long long int) (((~(((((/* implicit */int) arr_17 [(unsigned short)5] [i_3] [i_3] [(_Bool)0] [i_5 + 1] [i_5 + 1])) >> (((((/* implicit */int) arr_17 [i_2] [i_3] [i_3] [i_4] [i_5] [i_8])) - (217))))))) / (((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) (signed char)26))))));
                            arr_31 [i_2 + 1] [5] [i_3] [i_4] [i_5] [i_5] [i_8] |= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_14 [i_2 + 2])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)-31)))), (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2] [(unsigned short)9]))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)255))))))));
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_2 + 2] [i_5 - 1]) > (arr_2 [i_2 + 4] [i_5 + 1]))))) + (((((/* implicit */_Bool) arr_2 [i_2 + 2] [i_5 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (arr_2 [i_2 + 2] [i_5 + 1])))));
                        }
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((short) (+(((/* implicit */int) arr_1 [i_2 + 4] [i_2 + 2]))))))));
    }
    for (short i_9 = 1; i_9 < 11; i_9 += 1) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) (((_Bool)1) ? (arr_16 [i_9] [i_9] [(signed char)14] [i_9] [i_9 + 4] [i_9]) : (var_14)))))));
        var_33 += ((/* implicit */unsigned short) 2935233749491633755ULL);
        var_34 = ((/* implicit */signed char) min((((/* implicit */int) var_17)), (var_15)));
    }
    for (short i_10 = 1; i_10 < 11; i_10 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_11 = 2; i_11 < 14; i_11 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_12 = 2; i_12 < 14; i_12 += 3) 
            {
                for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 3) 
                    {
                        {
                            arr_48 [i_10] [i_11] [i_10] [i_13] [i_10] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) arr_36 [i_10])) & (min((((/* implicit */long long int) (short)-12329)), (arr_13 [i_10] [i_11] [i_12] [(unsigned short)7]))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_14 [i_12 + 1])) : (((/* implicit */int) arr_40 [i_10] [i_12 + 1] [i_10]))))) || (((/* implicit */_Bool) max((var_1), (arr_8 [i_11] [i_13]))))))))));
                            arr_49 [i_10 + 4] [i_10] [i_11] [i_12] [i_12] [i_13 + 1] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-29432))) / (4611681620380876800LL)));
                            var_35 = ((/* implicit */unsigned short) max((min(((-(var_5))), (((/* implicit */long long int) (+(arr_39 [i_10] [i_12])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((/* implicit */int) arr_32 [i_10])) : (((/* implicit */int) min((var_18), (((/* implicit */short) arr_1 [i_11] [1]))))))))));
                        }
                    } 
                } 
            } 
            var_36 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) arr_14 [i_10])) + (((/* implicit */int) var_16)))));
        }
        for (long long int i_15 = 2; i_15 < 14; i_15 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (long long int i_17 = 0; i_17 < 15; i_17 += 4) 
                {
                    for (int i_18 = 2; i_18 < 14; i_18 += 3) 
                    {
                        {
                            var_37 = ((/* implicit */int) ((_Bool) arr_9 [i_10] [9ULL]));
                            arr_60 [i_10] [(short)7] [i_15] [i_16] [i_17] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) arr_52 [i_10]))))), (min((arr_13 [i_10] [i_15] [(unsigned short)12] [i_17]), (((/* implicit */long long int) var_15))))))) ? (((((/* implicit */_Bool) (short)-29653)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)622))) : (1975456340U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned char)147))))));
                            arr_61 [i_10] [10LL] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_24 [i_10 + 1] [i_10] [i_10] [i_10] [i_15 + 1] [i_18 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_10 + 4] [i_10] [i_18 - 1]))) : (arr_24 [i_10 + 3] [i_15] [i_15] [i_15] [i_15 - 1] [i_18 - 1])))));
                            arr_62 [i_10] [i_16] [i_18] = ((/* implicit */unsigned short) min((arr_16 [i_10] [i_15] [i_15] [i_16] [i_17] [i_18]), (((min((arr_24 [i_10] [i_10] [i_16] [i_17] [i_17] [i_18]), (((/* implicit */long long int) arr_4 [i_16])))) / (((/* implicit */long long int) (+(arr_6 [i_10]))))))));
                        }
                    } 
                } 
            } 
            arr_63 [i_10] [i_10 - 1] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-26153))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_10]))) : (var_6)));
            var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_52 [(signed char)14])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-103)))))) ? (arr_33 [0U] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
        }
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 15; i_19 += 1) 
        {
            for (unsigned long long int i_20 = 0; i_20 < 15; i_20 += 3) 
            {
                {
                    var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) var_12))));
                    arr_70 [i_10] [i_19] [i_10] [i_10] = ((/* implicit */unsigned char) arr_54 [i_10] [i_10] [(_Bool)1]);
                    arr_71 [i_10] [i_10] [i_19] [i_20] = ((/* implicit */int) var_17);
                }
            } 
        } 
    }
    var_40 = ((/* implicit */unsigned long long int) var_15);
}
