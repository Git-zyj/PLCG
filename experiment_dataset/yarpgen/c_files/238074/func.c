/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238074
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */long long int) 7668596476922419289ULL);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 10778147596787132327ULL)))))) : (((arr_4 [i_0]) ? (var_6) : (var_1)))))));
                                arr_16 [i_0] [21U] [i_4] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) (-(var_0)))) < (max((7595825934045922192ULL), (((/* implicit */unsigned long long int) var_1)))))))));
                                var_15 = ((/* implicit */signed char) ((((unsigned long long int) max((var_7), (((/* implicit */unsigned int) (unsigned short)44215))))) << (((7668596476922419289ULL) - (7668596476922419227ULL)))));
                                var_16 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 8ULL)) ? ((~(7668596476922419301ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)61)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 2; i_6 < 20; i_6 += 2) 
                        {
                            var_17 -= ((/* implicit */signed char) 8713432383524176771LL);
                            var_18 -= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_9)))) + (max((arr_2 [i_2 - 1]), (((/* implicit */long long int) arr_3 [i_2 - 1] [i_6 + 3]))))));
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_19 [i_2] [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1])))) ? (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (unsigned char)61)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_1]))))))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))))), (min((-3922178612528955216LL), (((/* implicit */long long int) (unsigned char)82)))))))))));
                            var_20 -= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((long long int) var_7))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) var_5)) / (((/* implicit */int) (signed char)-39))))))));
                        }
                        arr_21 [i_2] = ((/* implicit */long long int) max(((+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (var_7))))), (((/* implicit */unsigned int) ((((/* implicit */long long int) 1073900699U)) <= (7878406275072149730LL))))));
                    }
                    for (long long int i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 4) 
                        {
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((arr_4 [i_7]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_4))))));
                            var_22 += ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) != (((/* implicit */int) arr_7 [i_2] [i_1] [i_2] [i_7]))));
                        }
                        for (short i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            arr_29 [7U] [7U] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_1)))) ? (min((((/* implicit */unsigned long long int) var_5)), (4676415847068413812ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((17448030344382346596ULL) != (((/* implicit */unsigned long long int) 0U)))))))))));
                            arr_30 [i_0] [i_0] [i_0] [i_7] [i_9] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_5 [i_2 - 1]))))));
                        }
                        var_23 = var_10;
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((7668596476922419289ULL), (((/* implicit */unsigned long long int) 84118068U))))) ? (((/* implicit */long long int) (-(arr_25 [i_0] [i_2 - 1] [i_2] [i_0] [i_2])))) : (((((/* implicit */_Bool) (short)-9191)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3779741413073455022LL)))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        arr_33 [(unsigned short)18] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_1] [i_2] [i_10] [i_10] [i_2 - 1]))) ^ (max((((/* implicit */long long int) 0U)), (-432872980764363934LL)))));
                        var_25 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))));
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned int) max(((-(max((var_11), (((/* implicit */long long int) var_5)))))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65535)))))));
}
