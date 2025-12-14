/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34915
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)218)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)8192))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) var_15);
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) var_3)) > (((((/* implicit */_Bool) var_15)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32219))))))) ? ((+(((/* implicit */int) ((0U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [(signed char)12] [i_2] [i_3] [i_3])))))))) : (((((/* implicit */_Bool) ((arr_6 [i_0] [i_0] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))))))));
                            var_19 = var_4;
                            arr_11 [i_3] [i_3 - 1] [(unsigned char)9] [1LL] [7LL] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) (unsigned char)106))))) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 3; i_4 < 12; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) ((arr_6 [i_0] [i_1 - 2] [i_5]) + (((/* implicit */long long int) ((/* implicit */int) arr_10 [(short)10])))));
                            var_21 = ((/* implicit */unsigned char) 3U);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */int) ((arr_15 [i_1 + 1] [(unsigned char)12] [3ULL] [(short)9] [i_1 - 1] [i_6]) != (((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) arr_18 [(unsigned char)8] [i_1] [i_6])))))))) : (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */unsigned long long int) var_0)) < (16933027150152558588ULL)))), (arr_8 [(unsigned char)9] [10ULL] [(unsigned char)9] [i_0] [i_1 - 1]))))));
                    var_23 ^= ((/* implicit */unsigned long long int) var_8);
                    /* LoopNest 2 */
                    for (short i_7 = 3; i_7 < 12; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            {
                                var_24 *= (+(((/* implicit */int) (!(((/* implicit */_Bool) var_11))))));
                                var_25 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)53790)) & (-269547225)));
                            }
                        } 
                    } 
                    var_26 ^= ((/* implicit */short) ((arr_6 [i_1] [i_1] [i_0]) % (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) 0U)) <= (18446744073709551615ULL)))))))));
                }
                var_27 *= ((/* implicit */unsigned int) ((unsigned char) 1513716923556993027ULL));
                /* LoopSeq 1 */
                for (long long int i_9 = 2; i_9 < 11; i_9 += 2) 
                {
                    var_28 = ((/* implicit */int) arr_6 [0] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        for (unsigned short i_11 = 3; i_11 < 12; i_11 += 1) 
                        {
                            {
                                var_29 *= ((/* implicit */short) var_13);
                                var_30 = ((/* implicit */unsigned short) ((((arr_26 [i_11]) ? (((/* implicit */int) ((unsigned char) var_15))) : (((var_9) % (((/* implicit */int) arr_20 [4LL] [12ULL] [i_10] [(signed char)7])))))) >= (((/* implicit */int) ((arr_19 [i_1 + 3] [i_9 + 1] [i_11] [i_11 + 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_0])) != (((/* implicit */int) arr_7 [0LL])))))))))));
                                var_31 += ((/* implicit */int) (unsigned char)90);
                                var_32 -= ((/* implicit */long long int) (((((-(((/* implicit */int) (unsigned char)248)))) + (2147483647))) >> ((((+(((long long int) (short)-5717)))) + (5730LL)))));
                                var_33 = ((/* implicit */unsigned int) var_9);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_0)) ? (16933027150152558584ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-9888)))));
    var_35 = ((/* implicit */long long int) var_2);
    var_36 += var_8;
}
