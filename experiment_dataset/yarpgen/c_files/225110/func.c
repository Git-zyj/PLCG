/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225110
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
        var_18 = ((/* implicit */unsigned long long int) var_4);
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */long long int) arr_2 [i_1])) == (8589934464LL)))), (max((-517092862), (((/* implicit */int) (signed char)105))))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_1 [i_1]), (arr_1 [i_1])))) && (((/* implicit */_Bool) ((((/* implicit */int) ((5027525521606921458LL) == (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1])))))) ^ (((/* implicit */int) arr_6 [i_1])))))));
        var_20 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) arr_6 [i_1])), (((((/* implicit */_Bool) (signed char)-37)) ? (1984887069U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)57))))))), (((/* implicit */unsigned int) (-(((arr_7 [i_1]) ? (((/* implicit */int) var_14)) : (var_9))))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            arr_11 [i_1] [i_2] = var_17;
            /* LoopSeq 1 */
            for (unsigned int i_3 = 2; i_3 < 9; i_3 += 1) 
            {
                arr_15 [i_3] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1])) / (((/* implicit */int) arr_13 [i_2] [i_2] [i_3 - 2] [i_2]))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 3; i_4 < 10; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) min(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (max((var_0), (10393198997247304671ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3 - 2])))))) ? (arr_17 [i_3 - 1] [i_3 - 1] [i_4 - 2] [i_3 - 1]) : (((((/* implicit */_Bool) 1016)) ? (((((/* implicit */int) (unsigned short)46689)) + (-1016))) : (((((/* implicit */_Bool) (short)-18018)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)1402))))))));
                            arr_20 [i_4] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)1))) : (var_6)))))) ? (4265485116U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                        }
                    } 
                } 
            }
            arr_21 [i_1] = ((/* implicit */int) (_Bool)1);
            var_23 = ((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_2]);
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 3; i_6 < 9; i_6 += 2) 
            {
                for (signed char i_7 = 1; i_7 < 10; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) 6144415003568934935LL);
                            arr_32 [i_6] [i_6] [i_6] [i_2] [i_6] = ((/* implicit */unsigned int) min(((+(var_3))), (min((var_3), (((/* implicit */long long int) -2147483619))))));
                            arr_33 [i_1] [i_2] [i_1] [i_7] [i_2] [i_6] [i_6] = ((/* implicit */_Bool) (unsigned short)12288);
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 1 */
        for (signed char i_9 = 2; i_9 < 10; i_9 += 4) 
        {
            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_29 [i_9] [i_9] [i_9])))) ? (max((((/* implicit */unsigned long long int) 2080374784U)), (9220033096248298703ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1] [i_9 - 1])))))) ? (((/* implicit */long long int) -2048675192)) : (max((0LL), (0LL)))));
            arr_38 [i_1] [i_9 - 1] [i_1] = ((/* implicit */long long int) min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_23 [i_9] [i_9 + 1] [i_9] [i_9])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_23 [i_9] [i_9 + 1] [i_9] [i_9]))))));
        }
    }
    var_26 = ((/* implicit */int) max((((/* implicit */long long int) min(((+(((/* implicit */int) (short)-3109)))), (min((var_9), (((/* implicit */int) var_14))))))), (var_6)));
}
