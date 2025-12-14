/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208126
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
    var_14 ^= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) min((var_6), (var_6))))))));
    var_15 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) < (var_3)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) var_10))));
                    var_16 = ((/* implicit */short) (~(max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2] [i_2])), (arr_5 [i_1] [i_2])))));
                }
                var_17 = ((/* implicit */long long int) var_2);
                /* LoopNest 3 */
                for (long long int i_3 = 1; i_3 < 8; i_3 += 3) 
                {
                    for (long long int i_4 = 1; i_4 < 9; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_1] [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_5)))) : (((((/* implicit */_Bool) (short)32612)) ? (536868864U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) < (((((/* implicit */_Bool) -4947557966324931764LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [9ULL]))) : (arr_6 [i_1] [i_1])))))));
                                arr_16 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)34)), (arr_1 [i_3 + 1]))))) : (((((var_4) ? (((/* implicit */unsigned long long int) 1152921504573292544LL)) : (576460752303423488ULL))) & (((/* implicit */unsigned long long int) (((_Bool)1) ? (4947557966324931763LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))))));
                                arr_17 [i_0] |= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)221))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))));
                                var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)16141)) || (((/* implicit */_Bool) (unsigned char)4)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)68)) || (((/* implicit */_Bool) (unsigned short)25918)))) || (((/* implicit */_Bool) 6414126019687908024ULL))))) : (((/* implicit */int) (unsigned short)39617))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
