/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193105
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
    var_16 = ((/* implicit */unsigned char) ((((((((/* implicit */unsigned long long int) var_1)) + (var_0))) & (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_5))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_0) == (((/* implicit */unsigned long long int) var_6))))) << (((((/* implicit */long long int) ((/* implicit */int) var_11))) * (var_9))))))));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)20853)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)5))))) : (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_0))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                            var_18 = ((/* implicit */int) min((((/* implicit */long long int) var_7)), (((((((var_15) + (9223372036854775807LL))) >> (((var_14) - (883451524U))))) << (min((((/* implicit */int) (unsigned char)181)), (0)))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [10ULL])) ? (arr_3 [i_1] [i_0]) : (((/* implicit */long long int) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) (unsigned short)20853))))) : (((var_12) - (((/* implicit */unsigned long long int) arr_7 [i_0] [11ULL] [i_0] [i_1] [i_1]))))))) ? (((((/* implicit */_Bool) ((var_10) / (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_1] [i_1]))))) ? (max((((/* implicit */long long int) arr_6 [i_0])), (var_4))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_4 [i_0] [i_0]) && (((/* implicit */_Bool) var_2)))))))) : (((/* implicit */long long int) var_13))));
                /* LoopNest 3 */
                for (short i_4 = 3; i_4 < 13; i_4 += 1) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_11) ? (((arr_3 [i_0] [i_0]) & (((/* implicit */long long int) var_7)))) : (min((var_15), (((/* implicit */long long int) arr_5 [i_1] [i_1] [i_4] [i_5]))))))) && (((/* implicit */_Bool) ((var_7) << (((((var_11) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_4))) - (760711644223331820LL))))))));
                                var_21 = (i_1 % 2 == zero) ? (((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_4] [i_5 - 1] [i_6])) || (((/* implicit */_Bool) var_5)))))) & (((var_15) / (arr_3 [i_6] [i_6]))))) << (((max((max((var_10), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_5 - 1])) : (((/* implicit */int) var_2))))))) - (18446744073709521376ULL)))))) : (((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_4] [i_5 - 1] [i_6])) || (((/* implicit */_Bool) var_5)))))) & (((var_15) / (arr_3 [i_6] [i_6]))))) << (((((max((max((var_10), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_5 - 1])) : (((/* implicit */int) var_2))))))) - (18446744073709521376ULL))) - (8033ULL))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (short i_9 = 0; i_9 < 11; i_9 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) > (((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) (unsigned short)20846)) : (((/* implicit */int) (unsigned short)44659)))))))));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_8] [i_7]) > (var_6))))) / (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_11 [i_9] [i_7])))))) ? (((((((/* implicit */_Bool) arr_18 [i_7])) ? (((/* implicit */unsigned long long int) var_15)) : (arr_20 [i_7]))) | (((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_0))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_7] [i_7])) / (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_8] [i_9] [(_Bool)1] [0U] [i_7] [i_7]))) : (((var_0) << (((arr_11 [i_7] [(unsigned char)13]) - (2913937380720743459ULL)))))))));
                }
            } 
        } 
    } 
}
