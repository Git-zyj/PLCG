/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35831
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
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_4 [i_0] [3] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))) : (((long long int) arr_0 [i_1]))));
                var_10 = ((/* implicit */short) arr_3 [i_0]);
            }
        } 
    } 
    var_11 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_8)) ? (var_3) : (var_6)))))) | (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (var_2)))) ? (((long long int) 1348679855196700310LL)) : (((/* implicit */long long int) var_4))))));
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        for (long long int i_3 = 1; i_3 < 17; i_3 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((int) var_6))))) ? ((-(4738455261827789062LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)68)) - (((/* implicit */int) (unsigned char)105)))))))));
                var_13 = ((/* implicit */signed char) var_9);
                /* LoopNest 2 */
                for (long long int i_4 = 2; i_4 < 16; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(var_6)))), (min((-1348679855196700311LL), (7199027328611842507LL)))));
                            var_15 &= ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) (signed char)71))) + (max((-956954027), (((/* implicit */int) (_Bool)1))))));
                            var_16 &= arr_2 [i_5] [i_3 + 1];
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    for (int i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        for (long long int i_8 = 3; i_8 < 16; i_8 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) min((((/* implicit */int) (signed char)-2)), (-1584794542))))) >> (((var_2) - (351242585U)))));
                                var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((arr_16 [i_8 - 1] [i_7] [i_6] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)71))) : (6508717129434620955LL))) >> (((((/* implicit */int) arr_15 [i_3 + 1] [i_3 - 1])) - (32286))))))));
                                var_19 &= ((/* implicit */int) ((unsigned short) ((arr_3 [20LL]) + (((/* implicit */int) arr_14 [i_2 + 1] [(unsigned char)15] [i_2 + 1] [i_2])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_9 = 0; i_9 < 14; i_9 += 3) 
    {
        for (long long int i_10 = 0; i_10 < 14; i_10 += 3) 
        {
            {
                arr_26 [i_10] &= var_3;
                var_20 &= arr_19 [i_10];
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (signed char i_12 = 0; i_12 < 14; i_12 += 3) 
                    {
                        {
                            arr_32 [i_11] [i_11] = ((/* implicit */int) ((short) (+(arr_19 [i_11]))));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_9] [i_10] [i_12])) ? (arr_31 [(signed char)12] [i_10] [i_11] [i_12]) : (((/* implicit */int) arr_20 [7ULL] [(signed char)10]))))) ? (((/* implicit */long long int) (-(var_4)))) : (7199027328611842507LL)))) ? (min((((/* implicit */unsigned int) (signed char)15)), (4059257101U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_29 [8LL] [8LL] [8LL] [i_12]))))))))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_9] [i_9] [i_9] [i_12])) ? (((/* implicit */int) arr_22 [i_11] [i_12])) : (((/* implicit */int) arr_22 [i_10] [i_9]))))) >= (min((arr_27 [i_9]), (((/* implicit */long long int) arr_22 [i_11] [i_12]))))));
                            var_23 &= ((/* implicit */short) arr_3 [i_9]);
                            var_24 = ((((/* implicit */_Bool) ((int) arr_19 [i_12]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((((/* implicit */int) arr_21 [i_12] [i_11] [i_10] [(signed char)2])) >> (((((/* implicit */int) (unsigned char)127)) - (102))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 21; i_13 += 3) 
    {
        for (signed char i_14 = 1; i_14 < 19; i_14 += 3) 
        {
            {
                arr_39 [i_13] [(unsigned char)20] [i_14 + 1] &= ((/* implicit */signed char) (+(min((-357350592), (((/* implicit */int) (_Bool)1))))));
                var_25 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 502340744)) ? (207978627) : (((/* implicit */int) (signed char)64))))) ? (((((/* implicit */_Bool) 511U)) ? (((/* implicit */long long int) 956954027)) : (-1348679855196700325LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1345385612))))))))));
                /* LoopNest 3 */
                for (int i_15 = 0; i_15 < 21; i_15 += 3) 
                {
                    for (unsigned long long int i_16 = 2; i_16 < 19; i_16 += 3) 
                    {
                        for (short i_17 = 0; i_17 < 21; i_17 += 3) 
                        {
                            {
                                arr_48 [i_16] [13ULL] [(unsigned char)18] [5] [i_16] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))));
                                var_26 = ((/* implicit */unsigned int) ((int) ((arr_38 [i_14 - 1] [i_14 - 1]) & (arr_38 [i_14 - 1] [i_14 - 1]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
