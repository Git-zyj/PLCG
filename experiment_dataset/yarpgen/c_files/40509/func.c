/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40509
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) 4294967295U)), (-1LL)))) ? (((((/* implicit */long long int) (~(4250946)))) / (((var_2) << (((var_0) - (1528054020))))))) : (((/* implicit */long long int) min((var_0), (max((-509596170), (-509596187))))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [i_3 + 1] [i_3] [i_3 - 1] [i_3] [i_3 - 1])) ? (var_9) : (arr_8 [i_3] [i_3] [i_3 + 1] [10] [i_3 + 1]))) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 4250946)))))))));
                        arr_10 [i_1] [i_0] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) >= (7463024954390486418ULL)))), (arr_7 [2ULL] [i_3 - 1])))), (((((_Bool) 10983719119319065202ULL)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_6))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) & (268435455LL)))))));
                    }
                }
                for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    var_12 = ((/* implicit */unsigned int) max((((/* implicit */long long int) 0U)), (268435455LL)));
                    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) 268435467LL)) ? (max((arr_0 [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1])))) : ((+(arr_0 [i_0] [i_4])))));
                    var_14 = ((/* implicit */long long int) var_9);
                    var_15 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 23U)) ? (((/* implicit */int) (short)29880)) : (((/* implicit */int) (signed char)22))))) ? (((/* implicit */unsigned long long int) ((long long int) var_4))) : (((((/* implicit */_Bool) arr_13 [i_0])) ? (arr_0 [i_0] [5]) : (((/* implicit */unsigned long long int) 509596164)))))) * (((4503599627370495ULL) - (((/* implicit */unsigned long long int) 7387755052697440245LL)))));
                }
                for (signed char i_5 = 1; i_5 < 10; i_5 += 2) 
                {
                    var_16 = ((min((((((/* implicit */_Bool) 18442240474082181123ULL)) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned long long int) arr_3 [5U])))), (((/* implicit */unsigned long long int) arr_13 [i_0])))) - (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-1)) <= (((/* implicit */int) arr_12 [i_0] [7])))) ? (((/* implicit */unsigned int) arr_4 [i_0])) : (((((/* implicit */_Bool) (unsigned char)255)) ? (3U) : (var_9)))))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            {
                                var_17 *= ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (((~(-1LL))) <= (((((/* implicit */_Bool) -3746942727200915052LL)) ? (-1007332677562318667LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))))) : (((unsigned int) (-(4294967273U))))));
                                arr_23 [i_0] [i_6] [i_5 + 2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (signed char)-1);
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) -1753367180))));
                                arr_24 [i_0] [i_1] [i_0] [i_5] [i_6] [i_5] = max((((/* implicit */long long int) ((unsigned int) var_7))), (max((1007332677562318662LL), (((/* implicit */long long int) arr_17 [i_0] [i_6] [i_0] [i_0] [(short)9] [i_0])))));
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)36))) >= (18442240474082181115ULL))))));
                            }
                        } 
                    } 
                    arr_25 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_15 [i_0] [i_1] [i_0]) << (((/* implicit */int) (_Bool)0))))) ? (max((var_2), (((/* implicit */long long int) arr_15 [i_0] [i_0] [i_5 - 1])))) : (max((((/* implicit */long long int) var_1)), (-1LL)))));
                    var_20 -= ((/* implicit */int) ((((/* implicit */int) ((unsigned short) 453809238U))) >= (max((-1381502058), (-1381502056)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 3; i_8 < 9; i_8 += 2) 
                    {
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((var_4) % (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) ((((/* implicit */long long int) 21537770)) <= (var_7))))))) && ((!(((/* implicit */_Bool) -1872955934))))));
                        var_22 = ((/* implicit */unsigned int) var_8);
                        arr_29 [11LL] [i_0] = ((/* implicit */_Bool) ((int) max((min((0LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) var_8)))));
                        var_23 += ((/* implicit */int) min((-13LL), (((/* implicit */long long int) (_Bool)1))));
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    arr_34 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [i_0] [i_0])) ? (25705587U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        for (signed char i_11 = 1; i_11 < 10; i_11 += 2) 
                        {
                            {
                                var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_11] [i_1] [i_9] [i_9] [i_1] [i_0])) || (((4139530075U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [(unsigned short)6] [i_9] [i_10] [(signed char)11])))))));
                                var_25 = ((/* implicit */unsigned long long int) arr_37 [i_0] [(unsigned short)8] [(signed char)11]);
                                arr_40 [i_0] [i_1] [i_1] [(signed char)9] [i_1] = ((/* implicit */unsigned int) -1);
                            }
                        } 
                    } 
                }
                arr_41 [i_0] [i_0] [i_0] = ((/* implicit */long long int) 5885954620457365800ULL);
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) var_6);
}
