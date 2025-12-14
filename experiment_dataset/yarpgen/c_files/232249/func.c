/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232249
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 18446744073709551600ULL)))) ? (((/* implicit */long long int) max((var_4), (((/* implicit */unsigned int) (unsigned char)108))))) : (var_9)))) ? (var_1) : (((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) 2387178818U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) > (var_2))))) : (var_2)))));
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (max((((/* implicit */long long int) (_Bool)1)), (2243607047858223568LL))) : (((/* implicit */long long int) (+(var_6))))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
                {
                    arr_8 [i_1] = max((((var_2) ^ (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) (-(arr_5 [i_0])))));
                    arr_9 [i_1] [i_1] [8LL] [i_1] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_0]))))), (((((/* implicit */_Bool) arr_4 [6U] [i_1] [i_2])) ? (arr_4 [15LL] [i_1] [i_2]) : (arr_4 [i_0] [i_1] [i_2])))));
                    var_12 = ((/* implicit */_Bool) ((long long int) min((arr_5 [i_0]), (((/* implicit */long long int) (_Bool)0)))));
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) arr_0 [i_0] [1U]))));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
                {
                    var_14 = ((/* implicit */int) var_6);
                    var_15 = ((/* implicit */long long int) ((arr_1 [i_1]) > (arr_12 [i_0] [i_0] [i_0] [i_0])));
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_4 [i_0] [i_3] [i_3]))));
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 907565335U)) ? (((/* implicit */unsigned int) -1)) : ((+(3387401960U)))));
                        var_18 = arr_5 [(_Bool)1];
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_3 [i_3] [i_4] [i_3])))))));
                    }
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 4) 
                        {
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [13U] [i_6]))) : (arr_1 [i_3])))) ? (((/* implicit */int) (unsigned short)39105)) : (((/* implicit */int) ((arr_6 [i_0] [i_0] [i_0] [i_0]) || (((/* implicit */_Bool) var_8))))))))));
                            arr_19 [i_0] [i_1] [i_1] [i_5] [(_Bool)1] = ((/* implicit */long long int) ((short) 5369180909567224294LL));
                            arr_20 [15U] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_6)))) < (((((/* implicit */_Bool) (unsigned short)39105)) ? (var_8) : (2387178817U)))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((arr_17 [i_5]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5] [i_6 - 1] [i_6] [i_6 + 1] [i_6 + 1]))))))));
                        }
                        arr_21 [(short)19] [i_1] [5U] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(3387401960U)))) ? ((~(((/* implicit */int) arr_10 [i_5] [i_3] [14LL] [i_0])))) : (arr_4 [i_5] [i_3] [i_1])));
                    }
                }
                for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (2854288453U)))) | ((+(arr_24 [i_0] [i_0] [(unsigned char)5] [i_1]))))));
                    arr_26 [i_1] = ((/* implicit */long long int) ((unsigned int) max((arr_3 [i_0] [i_1] [i_7]), (arr_3 [i_7] [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 4) 
                        {
                            {
                                arr_32 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_1] [i_7] [i_8] [i_9] [i_9])) ? (((/* implicit */unsigned long long int) arr_0 [i_8] [i_8])) : (arr_29 [i_9] [i_8] [i_1] [i_7] [i_1] [i_1] [i_0]))))));
                                var_23 ^= ((/* implicit */unsigned int) ((arr_2 [i_0]) > (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_0]) > (arr_2 [i_0])))))));
                            }
                        } 
                    } 
                }
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_14 [i_0] [i_0] [17LL] [1LL]))) ? (((/* implicit */unsigned long long int) (-(arr_14 [i_0] [i_0] [i_0] [i_0])))) : (((unsigned long long int) 1440678843U))));
            }
        } 
    } 
    var_25 = var_1;
    var_26 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_2)));
}
