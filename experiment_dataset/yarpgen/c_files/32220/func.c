/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32220
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
    var_11 = ((/* implicit */signed char) max((min((((/* implicit */int) var_3)), ((~(var_1))))), (((/* implicit */int) min(((!(((/* implicit */_Bool) var_1)))), ((!(((/* implicit */_Bool) var_5)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */short) max(((!(((/* implicit */_Bool) arr_4 [4ULL] [4ULL])))), ((!(((/* implicit */_Bool) (unsigned char)78))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (signed char i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (+(((/* implicit */int) var_7)))))));
                                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (-(((((/* implicit */_Bool) 1028357026347473436ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)123))) : (16923010840697269683ULL))))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */unsigned char) var_2);
                var_15 = ((/* implicit */unsigned char) (~(((((8448056699302022084LL) | (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_1]))))) ^ (((/* implicit */long long int) ((/* implicit */int) max(((short)-7145), (((/* implicit */short) var_9))))))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_5 = 3; i_5 < 8; i_5 += 4) 
                {
                    arr_18 [i_0] [i_0] = ((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */unsigned long long int) var_1)) : ((~(var_2))));
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_5])) : (((/* implicit */int) (unsigned char)66))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5 - 2])))));
                }
                /* vectorizable */
                for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    arr_22 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_0] [i_6] [i_6])) > (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))));
                    var_17 -= ((/* implicit */signed char) (~(var_6)));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)23959)) : (((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */int) arr_2 [i_6] [i_1]))))));
                    var_19 = ((/* implicit */unsigned char) var_0);
                    arr_23 [(unsigned char)5] [i_1] [i_1] = (+(((((/* implicit */_Bool) 1523733233012281932ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14715604493006910170ULL))));
                }
                /* vectorizable */
                for (unsigned short i_7 = 2; i_7 < 7; i_7 += 1) 
                {
                    arr_26 [i_0] [i_1] [i_1] [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) var_3))));
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [8U] [i_0] [i_1] [i_7])) ? ((-(((/* implicit */int) var_5)))) : (var_1)));
                    var_21 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)22579)) ? (((/* implicit */int) (unsigned char)156)) : (((/* implicit */int) (short)16677)))) ^ (((/* implicit */int) var_8))));
                    arr_27 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 8448056699302022084LL)) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) var_10)))) * (((/* implicit */int) arr_10 [i_0] [3U] [i_0] [i_0] [(signed char)5] [i_1] [i_0]))));
                }
                for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    var_22 = ((/* implicit */signed char) ((unsigned long long int) max(((-(((/* implicit */int) arr_19 [i_1] [i_1] [i_1])))), ((~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 10; i_9 += 3) 
                    {
                        for (unsigned long long int i_10 = 1; i_10 < 7; i_10 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */int) min(((~(var_2))), (arr_33 [i_1] [3LL] [i_8] [i_1])));
                                arr_38 [i_10] [i_9] [i_8] [8LL] [i_1] [2LL] [i_0] &= ((/* implicit */unsigned char) max((4793368435136857752ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)46)) ? (3110266652U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16677))))))));
                                arr_39 [(unsigned short)7] [(unsigned short)7] [i_9] [(short)5] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_10]))))) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) arr_10 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10] [i_10] [i_10] [(_Bool)1]))))) ? (((/* implicit */int) arr_8 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) arr_5 [i_0]))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */long long int) var_7)), (var_4))))), (16923010840697269701ULL)));
                    arr_40 [i_0] [i_1] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)77)), (arr_34 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [(signed char)3])))) ? ((~(((/* implicit */int) arr_34 [i_0] [6ULL] [i_1] [i_1] [i_1] [(unsigned char)4])))) : (((/* implicit */int) max((arr_34 [i_0] [i_1] [i_8] [i_8] [i_1] [i_1]), (arr_34 [i_8] [i_8] [i_1] [i_1] [i_0] [i_0]))))));
                }
            }
        } 
    } 
    var_25 = var_5;
    var_26 = ((/* implicit */unsigned int) var_7);
}
