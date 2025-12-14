/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226132
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)37488)) ? (((((/* implicit */_Bool) 3999357284U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (signed char)53)) ? (((/* implicit */int) (_Bool)0)) : (2130706432)))));
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) max((1847322633664550021ULL), (((/* implicit */unsigned long long int) (unsigned short)22772))))))), ((!(((/* implicit */_Bool) max((((/* implicit */short) var_7)), ((short)-1142)))))))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */int) arr_1 [i_0]);
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) -1276730122)), (5302556528639924661LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)-32753)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_7 [i_1] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [10ULL])))))) ? (((/* implicit */int) (signed char)-53)) : (((/* implicit */int) (!(((/* implicit */_Bool) 12867484447040010314ULL)))))));
        arr_9 [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (5905057711786795055ULL))) / (arr_7 [15] [i_1])));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3847381482U)) && (((/* implicit */_Bool) (signed char)(-127 - 1)))));
            arr_16 [i_2] [0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) (signed char)-20))));
        }
        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) arr_7 [i_2] [i_6 - 1]);
                            arr_29 [(unsigned short)1] [i_2] [(signed char)1] [i_2] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3963250731009541754ULL))));
                        }
                    } 
                } 
            } 
            var_15 = ((/* implicit */signed char) arr_3 [i_4]);
        }
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) 25U))));
        arr_30 [i_2] = ((/* implicit */unsigned char) arr_6 [i_2]);
    }
    for (int i_8 = 0; i_8 < 23; i_8 += 4) 
    {
        arr_33 [i_8] |= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) - (-1202068185))))));
        var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_8])) | (((/* implicit */int) arr_31 [i_8])))))));
        /* LoopSeq 2 */
        for (signed char i_9 = 0; i_9 < 23; i_9 += 4) 
        {
            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_10))));
            arr_36 [i_9] [(short)12] [i_8] = arr_34 [i_9];
        }
        for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 3) 
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3847381482U)) && (((/* implicit */_Bool) -1980724503))));
            /* LoopNest 2 */
            for (unsigned short i_11 = 0; i_11 < 23; i_11 += 4) 
            {
                for (short i_12 = 1; i_12 < 21; i_12 += 4) 
                {
                    {
                        arr_47 [i_8] [i_8] [i_10] [i_12] = ((/* implicit */long long int) (signed char)104);
                        arr_48 [(unsigned char)5] [i_10] [i_11] [18ULL] = ((/* implicit */signed char) max((((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) > (((((/* implicit */_Bool) arr_45 [i_11] [i_10] [i_8])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-115)))))))), (arr_38 [i_10] [i_11] [i_10])));
                    }
                } 
            } 
            var_20 -= ((/* implicit */unsigned short) arr_39 [i_8] [i_8]);
            /* LoopNest 3 */
            for (unsigned long long int i_13 = 2; i_13 < 20; i_13 += 3) 
            {
                for (short i_14 = 3; i_14 < 22; i_14 += 3) 
                {
                    for (signed char i_15 = 1; i_15 < 20; i_15 += 3) 
                    {
                        {
                            var_21 *= ((/* implicit */signed char) ((((arr_52 [i_13 - 2] [i_14 + 1] [i_8]) << (((((/* implicit */int) arr_31 [i_13])) - (26310))))) & (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)-33)), (-1327086201244163842LL))))));
                            var_22 = ((/* implicit */unsigned short) arr_42 [21ULL] [i_13 + 3] [i_15 + 3]);
                            arr_56 [i_8] [i_8] [i_8] [i_10] = ((/* implicit */_Bool) max(((unsigned short)65518), (((/* implicit */unsigned short) (signed char)63))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2263244590879757311LL)) ? (-9223372036854775802LL) : (((/* implicit */long long int) -1))));
                            var_24 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)16909)), (2147483647)))), (min((arr_52 [i_13 + 2] [i_14 - 1] [i_10]), (arr_52 [i_13 - 1] [i_14 + 1] [i_10])))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */int) (signed char)-72);
        }
    }
    var_26 = ((/* implicit */int) max((((/* implicit */long long int) var_8)), (var_6)));
}
