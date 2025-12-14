/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44211
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            arr_14 [(unsigned char)5] [(short)0] [i_2] [i_3] = ((/* implicit */signed char) min((((/* implicit */int) var_10)), ((+((+(((/* implicit */int) (unsigned char)126))))))));
                            arr_15 [i_0] [i_1] [(_Bool)1] [i_2] [i_2] [i_3] = ((/* implicit */signed char) 17592118935552ULL);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        {
                            arr_23 [14] [i_4] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_4 [i_5])))) ? (((/* implicit */int) min((((/* implicit */short) var_9)), (arr_22 [i_0] [9U] [i_4] [i_5])))) : (((/* implicit */int) var_6))));
                            var_11 = ((/* implicit */long long int) (-(min((arr_20 [i_0] [16ULL] [i_0] [i_0] [i_0] [i_0]), (arr_20 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0])))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 22; i_8 += 2) 
                        {
                            {
                                arr_33 [i_7] [i_6] [i_7] [i_8] = ((/* implicit */_Bool) arr_1 [i_1]);
                                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((signed char) (unsigned char)90))))))))));
                                var_13 = (~((~(arr_32 [i_0] [i_0] [i_6] [i_7] [i_8]))));
                                var_14 = ((/* implicit */signed char) var_9);
                                var_15 = ((/* implicit */short) ((((((/* implicit */int) max((((/* implicit */short) (unsigned char)45)), (arr_8 [(short)4] [i_6] [i_1] [i_0])))) >= (((/* implicit */int) var_9)))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_0] [i_1] [i_8])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_25 [16ULL] [i_7] [8U]))))), (min((((/* implicit */unsigned long long int) arr_27 [i_0] [i_1] [i_1] [i_6] [i_7] [i_8])), (arr_6 [i_1] [12ULL]))))) : (max((((/* implicit */unsigned long long int) var_2)), (arr_30 [i_0] [i_1] [i_6] [i_0] [i_8])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    for (signed char i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
                                var_17 = ((/* implicit */long long int) var_10);
                                var_18 -= ((/* implicit */signed char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_28 [11LL] [i_1] [15ULL] [i_10])), (var_1)))) || (((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_11])))), (((arr_24 [i_1] [i_9]) > (((/* implicit */unsigned long long int) arr_10 [i_0] [(short)20] [i_11] [i_10] [i_9] [i_0]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_12 = 0; i_12 < 14; i_12 += 4) 
    {
        for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 2) 
        {
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_15 = 0; i_15 < 14; i_15 += 4) 
                    {
                        for (unsigned long long int i_16 = 4; i_16 < 10; i_16 += 1) 
                        {
                            {
                                arr_53 [i_12] [i_13] [i_14] [i_15] [i_16] = ((/* implicit */unsigned short) var_0);
                                var_19 = ((/* implicit */_Bool) var_0);
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (~(((/* implicit */int) (signed char)107)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_17 = 0; i_17 < 14; i_17 += 3) 
                    {
                        for (short i_18 = 2; i_18 < 11; i_18 += 3) 
                        {
                            {
                                var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-107)), (max((((/* implicit */long long int) var_2)), (arr_21 [i_12] [i_12] [i_18] [i_17])))))) || (((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_56 [i_18 + 3])) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) var_10))))))));
                                var_22 = ((/* implicit */unsigned char) max(((~(arr_21 [i_14 - 1] [i_14] [i_18 + 2] [i_18 - 2]))), (((/* implicit */long long int) ((arr_21 [i_14 - 1] [i_14] [i_18 - 2] [i_18 - 2]) != (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_14 - 1] [i_14] [i_18 + 2] [i_18 + 2] [i_14]))))))));
                                arr_60 [(short)6] [(signed char)0] [i_12] [i_12] [0LL] [i_12] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)45)) ? (max((var_3), (((/* implicit */unsigned int) var_6)))) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_7 [i_12])) << (((((/* implicit */int) (unsigned char)81)) - (58))))) & (((/* implicit */int) max((((/* implicit */short) arr_46 [i_12])), ((short)-27478)))))))));
                                arr_61 [i_14] [i_13] [i_14 - 1] [3LL] [i_18 + 2] [i_18] = ((/* implicit */short) (!(var_10)));
                                arr_62 [4LL] [i_14] [(short)5] [i_17] [i_18] = ((/* implicit */int) var_10);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
