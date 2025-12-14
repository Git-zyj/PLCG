/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226642
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_8 [i_0 + 1] [i_1] [i_0 + 1] = ((/* implicit */_Bool) ((int) (+(arr_0 [i_0 + 1] [i_1]))));
                    arr_9 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((arr_2 [i_0] [i_0]), (arr_7 [i_0 + 1] [i_1] [i_2] [i_1])))), (((((var_15) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 112967029)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_3 [i_0])))))))));
                    arr_10 [i_0] = ((/* implicit */unsigned long long int) var_6);
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_14 [i_0 + 1] [i_1] [i_2] [i_3] = max((((/* implicit */unsigned long long int) (signed char)-53)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-60))) : (var_15))));
                        arr_15 [i_0 + 1] [i_0 + 1] [i_3] [i_3] = ((/* implicit */long long int) (~(arr_0 [i_1] [i_0])));
                    }
                    arr_16 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(max((var_13), (-112967041)))))) ? ((+(((/* implicit */int) arr_2 [i_0] [i_1])))) : ((~(((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_2)))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (var_16)))), (((((/* implicit */_Bool) (signed char)-65)) ? (4960204990883367730LL) : (((/* implicit */long long int) 2147483635))))))) ? (var_11) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) (~(112967022)))) : (max((((/* implicit */unsigned int) 112967026)), (1486895967U))))))));
    var_20 |= ((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) var_4)))) : (((int) ((var_0) & (((/* implicit */long long int) var_13))))));
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                var_21 -= var_13;
                /* LoopNest 3 */
                for (unsigned int i_6 = 2; i_6 < 10; i_6 += 3) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (int i_8 = 4; i_8 < 11; i_8 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-53))));
                                arr_29 [i_4] [i_5] [i_6 - 2] [i_7] [i_7] [i_8 - 1] [i_6 + 1] = arr_17 [i_8 - 4] [i_8 + 1];
                                var_23 = ((/* implicit */long long int) var_13);
                                var_24 = ((/* implicit */int) min((var_24), (max((((/* implicit */int) ((short) ((signed char) -1023783511)))), ((+(((/* implicit */int) arr_17 [i_8 - 3] [i_8 - 3]))))))));
                            }
                        } 
                    } 
                } 
                var_25 ^= ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_4] [i_4]))))), (((((/* implicit */_Bool) arr_23 [i_4] [i_4] [i_5])) ? (((/* implicit */int) arr_23 [i_4] [i_4] [i_5])) : (-2054857247)))));
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) ((int) ((((((/* implicit */_Bool) var_6)) ? (-2054857247) : (((/* implicit */int) var_2)))) >= ((-(((/* implicit */int) var_8)))))));
}
