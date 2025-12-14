/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29752
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
    var_14 ^= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) 1767911997)) ? (1767911987) : (-1767911974))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) (~(((/* implicit */int) var_13))));
                                var_16 ^= ((/* implicit */unsigned long long int) 1767911974);
                                var_17 = ((/* implicit */unsigned short) ((((arr_13 [1U] [3] [6U] [i_3] [5U] [i_4]) ? (arr_15 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 2] [i_2] [i_4]) : (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)17832))))))) == (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1] [i_6]))));
                                arr_25 [i_1] [i_1] [i_5] [i_6] [i_7] [i_6] [i_6] = ((/* implicit */unsigned int) var_7);
                                var_19 = ((/* implicit */unsigned long long int) ((_Bool) 1825204531U));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        for (unsigned short i_10 = 1; i_10 < 10; i_10 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((unsigned char) ((arr_20 [i_1 - 1] [i_1 - 1] [i_8 - 1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_1 + 1]))))));
                                var_21 = arr_17 [i_0] [i_8 - 1] [i_1];
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 912407833U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(unsigned short)7] [i_10] [(_Bool)1] [i_8] [i_0] [i_0]))) : (((((((/* implicit */_Bool) -1767911987)) ? (((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [i_1] [6ULL])) : (arr_11 [i_0] [i_1] [i_8 - 1] [9U] [0U] [(_Bool)1]))) >> (((var_3) - (9270366939565091464ULL)))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_11 [7LL] [i_1 - 2] [i_1 - 2] [i_1 - 1] [1ULL] [7LL])) ? (arr_11 [i_1 - 2] [i_1 - 2] [i_1] [5ULL] [i_1] [i_1 - 2]) : (arr_11 [(_Bool)1] [i_1 + 1] [i_1] [i_1] [i_1 + 1] [(signed char)7]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)448)))));
            }
        } 
    } 
}
