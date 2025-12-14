/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212899
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
    var_18 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_2 [i_0] [i_0] [7ULL]), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-102)) || (((/* implicit */_Bool) (short)-29223)))))))) && (((/* implicit */_Bool) (~(arr_1 [i_0] [11ULL]))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) (short)-22430);
                                arr_13 [i_0] [i_0] = ((/* implicit */short) arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4]);
                                var_21 = ((((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [3] [i_0])) ? (((/* implicit */int) (short)29222)) : (((/* implicit */int) (short)29214))))), (arr_6 [i_1])))) & (((((/* implicit */_Bool) arr_2 [i_4] [i_2] [i_1])) ? (arr_2 [i_1] [9] [i_4]) : (arr_2 [i_1] [i_2] [i_4]))));
                                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-29236)) ? (((/* implicit */long long int) -794788087)) : (-8185301636193661154LL)));
                                var_23 -= ((/* implicit */signed char) (~(((((/* implicit */_Bool) -794788088)) ? (-794788088) : (((/* implicit */int) (unsigned short)29836))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) max((var_16), (var_17)));
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_7), (max((((/* implicit */unsigned char) var_1)), (var_7)))))) ? ((+(((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (var_17)))))) : ((-(((/* implicit */int) var_7))))));
    /* LoopNest 3 */
    for (short i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                {
                    arr_21 [9ULL] [i_5] [i_5] [i_6] = ((/* implicit */long long int) (((+(((/* implicit */int) (unsigned char)255)))) >> (((((max((arr_19 [i_7] [i_6] [(_Bool)1] [(_Bool)1]), (((/* implicit */unsigned int) (short)29235)))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_5] [i_6] [i_6] [i_7]))))) - (2635488002U)))));
                    var_26 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_15 [(short)0])) - (9457101225123534972ULL)))) ? ((~(((long long int) (_Bool)1)))) : (max((max((arr_1 [(unsigned char)5] [i_6]), (((/* implicit */long long int) (short)-29212)))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_1 [i_5] [i_5])) <= (arr_7 [i_5] [i_6] [2ULL] [i_5]))))))));
                    var_27 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)18945)) ? (((/* implicit */int) (signed char)-27)) : (((/* implicit */int) (short)-29223)))) - (((/* implicit */int) ((unsigned short) min((arr_16 [7]), (((/* implicit */int) var_11))))))));
                }
            } 
        } 
    } 
}
