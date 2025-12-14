/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196707
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
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
                    {
                        arr_10 [i_3] [i_2 - 3] [i_1] [i_0] = ((/* implicit */unsigned short) ((short) max((arr_2 [i_1]), (arr_2 [i_1]))));
                        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) arr_5 [(signed char)10]))));
                        var_15 = min((((/* implicit */unsigned long long int) ((signed char) arr_4 [i_0 + 1] [i_2 - 2] [i_3]))), (max((max((arr_0 [i_0]), (((/* implicit */unsigned long long int) (unsigned char)179)))), (((((/* implicit */_Bool) (unsigned short)61026)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 - 1] [i_1] [i_3] [i_3]))) : (var_4))))));
                        var_16 = ((/* implicit */unsigned long long int) ((signed char) arr_6 [i_3] [0LL] [i_1] [15ULL]));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
                    {
                        var_17 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) / ((+(((/* implicit */int) (short)-18339))))));
                        var_18 = ((/* implicit */short) (+(-1LL)));
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_11) > (((/* implicit */int) var_12))))) * (((/* implicit */int) arr_8 [i_2] [i_2] [i_2] [i_2 - 2] [i_2] [i_2 - 2])))))));
                        var_20 = ((/* implicit */short) ((signed char) 2891201446U));
                        arr_13 [i_0] [i_0] [9] [i_4] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) ((unsigned short) arr_7 [i_0 - 2] [i_2 - 1] [7LL] [i_4]));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
                    {
                        var_21 |= ((/* implicit */unsigned short) ((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 - 1]))) : (var_8)));
                        arr_16 [i_5] [i_5] = (i_5 % 2 == zero) ? (((/* implicit */unsigned short) ((((((/* implicit */int) arr_12 [i_5] [(unsigned short)14] [i_5] [i_5] [i_5] [i_5])) + (2147483647))) >> (((((/* implicit */int) arr_4 [i_0] [i_0 + 1] [i_2 - 1])) - (2764)))))) : (((/* implicit */unsigned short) ((((((((/* implicit */int) arr_12 [i_5] [(unsigned short)14] [i_5] [i_5] [i_5] [i_5])) - (2147483647))) + (2147483647))) >> (((((/* implicit */int) arr_4 [i_0] [i_0 + 1] [i_2 - 1])) - (2764))))));
                        arr_17 [i_0] [i_5] = ((/* implicit */unsigned short) arr_8 [i_0] [14LL] [i_1] [i_0] [i_2 - 3] [i_5]);
                    }
                    arr_18 [i_0] = ((/* implicit */unsigned long long int) var_10);
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [10ULL] [i_1] [(unsigned short)5] [i_0 - 1])) ? (max((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)61027)), (-2147483634)))), (arr_15 [i_2] [2ULL] [i_1] [14LL]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        for (short i_7 = 0; i_7 < 19; i_7 += 4) 
        {
            for (int i_8 = 3; i_8 < 17; i_8 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) (~((((~(arr_26 [i_8]))) / (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_5)))))))));
                    var_24 = (i_8 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */_Bool) min((((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_5)))))))) ? (((/* implicit */long long int) ((unsigned int) arr_25 [i_6] [i_7] [i_8]))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) arr_25 [i_8] [i_8] [i_8])) + (1306)))))) ? (min((((/* implicit */long long int) var_2)), (576390383559245824LL))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))) : (((/* implicit */short) ((((/* implicit */_Bool) min((((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_5)))))))) ? (((/* implicit */long long int) ((unsigned int) arr_25 [i_6] [i_7] [i_8]))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((((((/* implicit */int) arr_25 [i_8] [i_8] [i_8])) + (1306))) + (818)))))) ? (min((((/* implicit */long long int) var_2)), (576390383559245824LL))) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                    arr_27 [12ULL] [i_7] [12ULL] [i_8] = ((/* implicit */unsigned long long int) ((short) ((int) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_8 - 1] [i_8] [i_6])))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */int) var_5);
}
