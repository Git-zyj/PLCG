/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212313
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
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_1))))))) ? ((((((~(2111548390))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_1])) : (var_9))) + (7495))))) : (((/* implicit */int) arr_3 [i_0] [i_1])));
                arr_5 [(unsigned short)14] = ((/* implicit */unsigned long long int) max((((-804358973780620979LL) * (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1]))))), (((/* implicit */long long int) var_10))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) var_7))) ^ ((~(((/* implicit */int) (unsigned short)47121))))))) || (((/* implicit */_Bool) ((var_9) / (((var_9) / (((/* implicit */int) var_0)))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 2) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_1 [i_2 + 1] [i_2 + 3])))) / (((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)(-127 - 1))))) ? (((var_9) & (var_15))) : (var_11)))));
        arr_9 [i_2] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) max((((/* implicit */long long int) arr_0 [20] [20])), (var_5)))))) * (var_8)));
    }
    for (unsigned int i_3 = 2; i_3 < 14; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (short i_4 = 4; i_4 < 14; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        for (int i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            {
                                arr_24 [i_3] [3] = ((/* implicit */_Bool) ((((((var_4) << (((1921566100) - (1921566100))))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)47128)))))))) ? (((((/* implicit */_Bool) ((int) var_4))) ? (((var_4) + (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_3] [i_3] [i_3] [i_3] [i_7]))))) : (((/* implicit */long long int) (~(var_11))))));
                                arr_25 [i_3 - 1] [i_5] [i_4] &= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_7])) ? (arr_21 [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) || (((/* implicit */_Bool) (-(7045960162913234810ULL)))))))));
                            }
                        } 
                    } 
                    arr_26 [i_3] [i_4] [i_4] [i_4] = arr_18 [i_5];
                    arr_27 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((_Bool) 2111548390)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16506))))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_7)))))) > (arr_13 [i_3 + 1])))) : (((/* implicit */int) arr_15 [i_3 - 2] [i_4] [i_4]))));
                }
            } 
        } 
        arr_28 [i_3] [i_3] = ((/* implicit */short) var_12);
    }
    for (unsigned int i_8 = 1; i_8 < 9; i_8 += 4) 
    {
        arr_32 [i_8] [i_8] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)47128)) : (((/* implicit */int) var_12))))));
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    arr_40 [i_8] [8ULL] [i_8 + 3] &= ((/* implicit */long long int) ((((((((/* implicit */_Bool) 2111548390)) ? (((/* implicit */int) (signed char)-53)) : (((/* implicit */int) (_Bool)0)))) + (2147483647))) << (((((((long long int) arr_38 [(signed char)6] [(unsigned short)0])) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_34 [4])) : (((/* implicit */int) arr_7 [i_8] [i_8 + 2]))))))) - (2508LL)))));
                    arr_41 [i_8] [(_Bool)0] [(signed char)8] &= ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_10 [0ULL]))))));
                    arr_42 [2] [i_10] [i_10] [i_10] = ((/* implicit */int) min((arr_22 [i_8 + 1]), (((/* implicit */unsigned long long int) arr_10 [10]))));
                }
            } 
        } 
    }
}
