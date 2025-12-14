/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236027
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
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) var_9);
                                var_16 = ((((((/* implicit */_Bool) arr_9 [i_0] [(_Bool)1] [(_Bool)1] [i_4])) ? (arr_9 [i_0] [i_0 + 2] [i_2 + 1] [i_3]) : (arr_9 [i_0] [i_4 - 1] [i_4] [i_4]))) & (arr_9 [i_0] [i_0] [i_3] [i_3 - 2]));
                                arr_16 [i_0 + 2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_0 + 1] [i_3 + 1])) ? (max((((/* implicit */unsigned long long int) arr_10 [i_2] [i_0 + 1] [i_2])), (arr_1 [i_3 + 2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551608ULL)) ? (-1) : (-1))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 2; i_6 < 13; i_6 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_0 - 1] [i_0] [i_5 - 1] [i_6 - 1])) ? (((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (arr_5 [i_0])))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [6LL] [i_1 + 1] [i_0] [i_0] [14])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))), (((arr_6 [i_0] [i_5] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0 + 2] [i_0 + 2] [i_1] [i_0 + 2] [i_5] [i_6 + 2]))))))))))));
                            var_18 = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) ((short) 1597810160)))), (min((arr_15 [7] [i_5 - 1] [i_6 + 2]), (((/* implicit */int) arr_11 [i_0] [i_0] [i_5] [i_5]))))));
                            var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_6 [i_0 + 2] [i_0 + 2] [i_0])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        for (int i_8 = 1; i_8 < 14; i_8 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 16; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        {
                            arr_31 [i_9] [i_9] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)8303))));
                            arr_32 [i_7] [i_8] [i_9] [i_8] = ((/* implicit */unsigned long long int) ((int) (unsigned char)105));
                            arr_33 [i_7] [i_8 + 1] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) var_1);
                            var_20 = ((/* implicit */unsigned short) var_2);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_11 = 0; i_11 < 16; i_11 += 4) 
                {
                    for (int i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 16; i_13 += 2) 
                        {
                            {
                                arr_43 [i_13] [i_12] [i_8 - 1] [i_12] [i_7] = ((/* implicit */signed char) (-(((arr_29 [i_8 + 1] [i_8 + 2] [i_11] [(_Bool)1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_8 + 1] [i_8 + 2] [i_13] [i_13]))) : (18446744073709551615ULL)))));
                                var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (unsigned short)2920))))))), ((~(arr_17 [i_7] [i_12])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (short i_14 = 0; i_14 < 16; i_14 += 3) 
                {
                    for (unsigned long long int i_15 = 3; i_15 < 12; i_15 += 3) 
                    {
                        for (unsigned char i_16 = 0; i_16 < 16; i_16 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) ((unsigned char) arr_24 [i_8 + 1] [(unsigned short)14] [(unsigned short)14]));
                                var_23 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (unsigned char)147)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)136), ((unsigned char)32))))) : (((((/* implicit */_Bool) 1926913310U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (49098883U))))), (((/* implicit */unsigned int) (((_Bool)1) ? (((((/* implicit */int) var_6)) * (((/* implicit */int) arr_48 [i_8] [i_8] [i_8] [i_14])))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (-1597810170) : (6))))))));
                                var_24 = ((/* implicit */short) ((((max((arr_17 [4ULL] [i_14]), (((/* implicit */unsigned long long int) (short)26070)))) < (((/* implicit */unsigned long long int) arr_12 [i_7] [i_8] [i_14] [i_14] [i_15 - 2] [i_15 + 4] [i_15])))) && (((max((((/* implicit */int) (unsigned short)63096)), (arr_12 [i_7] [i_7] [i_14] [i_7] [i_15 + 3] [i_16] [i_15 + 3]))) <= (((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1)))))))));
                                arr_54 [10ULL] [i_8] [i_14] [i_14] [i_16] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_8)), (var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_8 + 1] [i_8 + 1] [i_16]))) : (max((((/* implicit */unsigned long long int) -402683779)), (10182505498906329460ULL))))) & (arr_1 [i_8])));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_17 = 1; i_17 < 13; i_17 += 3) 
                {
                    for (unsigned int i_18 = 0; i_18 < 16; i_18 += 2) 
                    {
                        {
                            arr_61 [i_7] [i_8] [i_8] [i_17] [i_17 + 1] [i_17 + 1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_13)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) & (18446744073709551615ULL))))))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (16769024ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65531)))))));
                            var_25 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (_Bool)1)), (min((max((var_10), (((/* implicit */unsigned long long int) arr_52 [i_7] [i_7] [i_7] [i_8] [i_17] [i_8] [12ULL])))), (((/* implicit */unsigned long long int) ((unsigned short) 20)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
