/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37448
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
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (-1781344959006415849LL) : (9135652996637531227LL))))) ? (max((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1])) << (((var_9) - (2063454476U)))))), (min((7LL), (((/* implicit */long long int) var_11)))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (var_7)))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [(short)23] [i_3] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (arr_4 [i_0] [i_2 + 3] [i_3])))) || (((/* implicit */_Bool) (-(-5854569938573683098LL))))));
                            arr_11 [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_2] [(unsigned char)15] [i_2 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_7 [i_2] [10LL] [i_2]))) != (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) -6893381765745020206LL)) ? (-2146273683) : (((/* implicit */int) (signed char)28)))) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2667055957U)));
    var_16 = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)217)))), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_13))))))) < (((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            {
                arr_18 [i_5] [i_4] [i_4] = ((((/* implicit */_Bool) (unsigned char)255)) ? (8191) : (((/* implicit */int) (unsigned char)255)));
                arr_19 [i_4] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned char)245)), (0ULL)));
                /* LoopSeq 2 */
                for (long long int i_6 = 1; i_6 < 7; i_6 += 4) 
                {
                    arr_23 [i_6] [i_5] [i_5] [i_4] = ((/* implicit */signed char) arr_5 [i_4] [i_4] [i_4] [i_4]);
                    var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)151))) : (arr_17 [i_5] [i_4])))) ? (arr_8 [i_4] [i_4] [i_6 - 1] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)86)))));
                }
                for (short i_7 = 1; i_7 < 7; i_7 += 4) 
                {
                    arr_27 [i_4] [i_5] [i_4] [i_4] = ((/* implicit */unsigned short) max((((/* implicit */long long int) 1593619885U)), (((((/* implicit */_Bool) var_2)) ? (((-5854569938573683098LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)39))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-100)))))));
                    var_18 = max(((_Bool)1), ((!(arr_1 [i_7 + 2]))));
                    arr_28 [i_4] [i_4] [i_4] |= ((/* implicit */unsigned char) var_10);
                }
            }
        } 
    } 
}
