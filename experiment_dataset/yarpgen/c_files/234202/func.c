/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234202
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
    var_10 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)0)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */unsigned long long int) 3295097843U)) : (18196187022662624349ULL))))))), (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned long long int) var_0)))) : ((((_Bool)1) ? (var_8) : (((/* implicit */unsigned long long int) var_3))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                for (unsigned short i_3 = 1; i_3 < 22; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            arr_10 [i_3] [i_1] [i_2] [i_3 - 1] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (short)-27295)) ? (arr_7 [19LL] [i_3]) : (((/* implicit */long long int) 2147483647)))));
                            var_11 |= ((/* implicit */short) arr_9 [i_0] [i_2 - 2] [(signed char)12] [8ULL] [i_4]);
                        }
                        for (short i_5 = 0; i_5 < 23; i_5 += 1) 
                        {
                            var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(arr_4 [i_1] [i_1] [i_1 + 1])))) % (((/* implicit */int) (_Bool)1)))))));
                            var_13 = ((/* implicit */unsigned short) 6901747967323897751LL);
                            var_14 = ((/* implicit */signed char) arr_4 [i_2] [4ULL] [i_2 - 1]);
                            var_15 += ((/* implicit */short) max((max((var_2), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) -1329043457)) : (var_0)))) ? (((/* implicit */int) ((18446744073709551614ULL) <= (((/* implicit */unsigned long long int) 421153223))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_2] [i_5])) || (((/* implicit */_Bool) arr_2 [i_5] [i_3]))))))))));
                        }
                        for (long long int i_6 = 3; i_6 < 20; i_6 += 1) 
                        {
                            var_16 = ((/* implicit */int) min((var_16), (((arr_13 [i_0] [i_0] [i_0] [i_0] [9ULL]) ? (((/* implicit */int) ((signed char) ((var_3) + (var_5))))) : (((/* implicit */int) arr_2 [i_1 - 1] [10ULL]))))));
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) 1186137098)) : (-5256622105231087638LL)))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))))) : ((+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))))));
                        }
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) arr_14 [(signed char)16] [i_1] [i_2] [i_3] [i_3 + 1]);
                        var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_3] [i_3] [i_2] [i_2] [i_1] [i_1] [i_0]))));
                        arr_16 [i_3] [i_1 + 1] [i_0] [i_3] [8U] [(unsigned char)10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((/* implicit */int) (!((_Bool)1))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            var_19 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)53)) ^ (((/* implicit */int) (_Bool)1))));
                            var_20 = ((/* implicit */unsigned long long int) var_6);
                            arr_19 [i_0] [i_1 - 1] [i_2] [i_0] [i_3] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_11 [i_0] [i_1 - 1] [i_2 - 3] [i_3] [(unsigned char)0] [i_3]) : (((/* implicit */unsigned long long int) var_1))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (-6) : (((/* implicit */int) (short)-22312)))))))));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_2 [i_0] [i_1 + 1]))));
                        }
                    }
                } 
            } 
            var_22 = max((((((/* implicit */_Bool) 992652201)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))) : (arr_3 [(short)19] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) (short)12379))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)88))) : (3324890114791982888LL)))));
            var_23 = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) arr_0 [i_1 - 1])))), (((((/* implicit */_Bool) 1118207493U)) || (((/* implicit */_Bool) (signed char)(-127 - 1)))))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)9843)) ? (((/* implicit */long long int) 59236294)) : (-3600578636829040143LL)))) * (((((/* implicit */_Bool) 2147483645)) ? (arr_0 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
            var_25 |= ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_8])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) << (((((/* implicit */_Bool) 3054454469613189379ULL)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (unsigned short)2))))));
        }
        arr_22 [i_0] [i_0] = arr_7 [(short)6] [(short)6];
    }
    var_26 = (_Bool)1;
    /* LoopNest 3 */
    for (long long int i_9 = 0; i_9 < 10; i_9 += 1) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 1) 
        {
            for (unsigned int i_11 = 2; i_11 < 9; i_11 += 1) 
            {
                {
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_13 [i_11] [i_11 - 2] [i_11 + 1] [i_11 - 1] [i_11 - 2]) ? (((/* implicit */int) arr_13 [i_11] [i_11 + 1] [i_11] [i_11] [i_11 + 1])) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_13 [i_11] [i_11 - 1] [i_11] [i_11] [i_11 - 2])) : (((/* implicit */int) arr_13 [i_11] [i_11 - 2] [i_11] [i_11] [i_11 - 2])))) : (((/* implicit */int) var_7))));
                    var_28 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_26 [i_10])) ? (arr_26 [i_9]) : (((/* implicit */long long int) arr_6 [i_9] [i_10] [(_Bool)1] [i_9] [i_11] [i_10])))) | (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_9] [i_9]))) | (arr_6 [i_9] [i_9] [12] [i_10] [i_10] [i_11 - 2]))))));
                    arr_29 [i_9] [i_10] [i_11] [i_11] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_0)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_9] [i_9]))) : (arr_7 [i_9] [(signed char)16]))) : (arr_18 [i_11] [i_11 - 2] [i_11 - 2] [i_11 - 2] [i_11] [i_11] [i_11])))) ? (((/* implicit */long long int) ((/* implicit */int) ((1174137327) >= (1440502801))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_11 + 1] [i_11 + 1]))) : ((~(arr_17 [i_9] [i_10] [i_11 - 1])))))));
                    arr_30 [i_9] [(short)7] [i_11 - 1] [i_11 - 1] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_9] [i_10] [16ULL])) ? ((+(arr_17 [i_9] [i_9] [i_11 - 2]))) : ((+(var_1)))));
                }
            } 
        } 
    } 
}
