/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202459
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
    var_18 = ((/* implicit */int) var_5);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) 1805728394986111993ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4] [i_1] [i_0]))) : (arr_7 [i_3 + 1] [i_3] [i_3] [i_0]))), (((/* implicit */long long int) var_2)))) == (((/* implicit */long long int) ((arr_6 [i_0] [i_0] [i_2]) * (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))));
                                arr_11 [i_3] [i_3] [i_1] [i_2] [i_3 + 1] [i_3 + 1] [i_3 + 1] = ((/* implicit */unsigned int) ((((((((/* implicit */int) (short)-1)) != (((/* implicit */int) (short)-1)))) || (((/* implicit */_Bool) ((var_14) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4] [i_1] [i_1]))) : (arr_2 [i_0])))))) ? (((((/* implicit */_Bool) (short)1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_2] [i_2]))) - (arr_8 [i_3] [i_3])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_7 [i_3] [i_3] [i_3 - 1] [i_3])) : (var_1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (134217727U))))));
                                arr_12 [i_2] [i_2] [i_2] &= ((/* implicit */unsigned long long int) (+(min((min((var_5), (((/* implicit */long long int) arr_1 [i_0] [(signed char)7])))), (((/* implicit */long long int) ((((/* implicit */_Bool) 3112366254539197959ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_0 [i_4])))))))));
                                var_20 = ((/* implicit */int) ((var_7) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [(_Bool)0])) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)101))) >= (6178637275867947918LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_8)))) ^ ((+(0ULL)))));
                    arr_13 [(short)12] [i_1 - 2] = ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_2] [i_2])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) ((signed char) var_13)))))) : (max((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) (short)-12434)) ? (((/* implicit */unsigned long long int) -2718426929081250695LL)) : (5314287740788594469ULL))))));
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_7 [i_1 + 1] [i_0] [i_2] [(short)10])))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2]))))))) : (max((min((arr_6 [i_0] [i_1] [i_1]), (((/* implicit */int) (short)1)))), (((/* implicit */int) ((((/* implicit */_Bool) -1058526251888712988LL)) && (((/* implicit */_Bool) -301172130))))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
    {
        var_23 -= ((/* implicit */long long int) (unsigned short)65532);
        var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)1903))) <= (2987829222U)));
        arr_16 [i_5] &= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_0 [i_5])))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_5]))))) : (arr_10 [i_5] [i_5] [i_5] [i_5] [i_5])));
        var_25 = ((/* implicit */_Bool) -2718426929081250695LL);
    }
    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */int) arr_7 [i_6] [i_6] [i_6] [i_6]);
        /* LoopNest 2 */
        for (signed char i_7 = 3; i_7 < 15; i_7 += 2) 
        {
            for (unsigned int i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 1; i_9 < 15; i_9 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(unsigned short)16] [i_7] [i_7 - 1])))))));
                        arr_29 [i_6] [13U] [i_6] [13U] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14)) ? (((/* implicit */int) (_Bool)0)) : (-1388052391)))) ? (((((((/* implicit */_Bool) (unsigned char)255)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_9] [i_7] [0U]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [6LL]))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 540503449U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)65535)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_9 + 1] [i_9] [i_9 - 1])) && (((/* implicit */_Bool) var_17))))))))));
                    }
                    arr_30 [i_6] [i_7 + 1] [i_8] [i_7 + 1] &= ((/* implicit */long long int) var_8);
                }
            } 
        } 
    }
    for (signed char i_10 = 0; i_10 < 20; i_10 += 4) 
    {
        arr_35 [i_10] = ((/* implicit */signed char) var_17);
        arr_36 [i_10] = ((/* implicit */unsigned long long int) ((int) var_5));
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17722))) : (3944460399U)))))))) != (((((/* implicit */unsigned long long int) 96U)) * (((((/* implicit */_Bool) arr_3 [i_10])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_10] [i_10] [i_10])))))))));
    }
    var_29 = var_0;
}
