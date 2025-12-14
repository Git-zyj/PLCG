/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32955
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) (short)9455);
        arr_3 [i_0 + 1] = ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 1])));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((int) 7275027037835114079LL);
        /* LoopNest 3 */
        for (long long int i_2 = 2; i_2 < 13; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    {
                        arr_15 [i_1] [(_Bool)1] [i_1] [(_Bool)1] [i_1] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */int) var_3)) * (((/* implicit */int) arr_12 [i_2 - 2] [i_2 - 1] [i_2 - 2] [i_2 + 1]))));
                        arr_16 [i_1] [i_1] [i_1] [i_4] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(var_3))))) != (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10845))) : (var_12)))));
                    }
                } 
            } 
        } 
    }
    var_16 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)51)) ? (var_12) : (((/* implicit */long long int) var_8))))) ? (((/* implicit */long long int) ((var_4) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)31))))) : (((((/* implicit */_Bool) 562949953421311LL)) ? (var_2) : (((/* implicit */long long int) -1254849884)))))))));
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            {
                arr_23 [(unsigned short)10] = (!(((((/* implicit */int) arr_22 [i_6] [i_6] [i_6])) >= (((/* implicit */int) (_Bool)1)))));
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-9231))) : (2178430777U)))) ? (((/* implicit */int) ((arr_19 [i_6]) >= (arr_19 [i_5])))) : (((((((/* implicit */int) arr_18 [i_6])) + (2147483647))) >> (((((/* implicit */int) ((signed char) (unsigned short)49751))) - (59)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */long long int) 3793370869U)) : (var_10)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((signed char) var_6))))) * (var_0)));
}
