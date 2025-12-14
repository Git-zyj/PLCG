/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205639
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned char i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_13 = ((((((var_1) || (((/* implicit */_Bool) arr_1 [i_0])))) ? (arr_8 [i_0] [i_0] [i_0]) : (((long long int) arr_5 [i_0] [i_0] [i_0] [i_0])))) != (((/* implicit */long long int) var_5)));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)1)) ^ (((/* implicit */int) (signed char)1))));
                            }
                        } 
                    } 
                } 
                var_14 *= ((/* implicit */_Bool) var_4);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_5 = 2; i_5 < 13; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                {
                    var_15 += ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5] [i_5] [i_5 - 1]))))))) || (((/* implicit */_Bool) (signed char)-1)));
                    arr_22 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (max((var_3), (((/* implicit */long long int) arr_15 [14])))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (max((9068515394743904674ULL), (((/* implicit */unsigned long long int) (signed char)-1)))) : (((/* implicit */unsigned long long int) ((((arr_21 [i_5 + 2]) + (2147483647))) << (((((/* implicit */int) arr_19 [i_5 + 2] [i_6] [i_7])) - (61137))))))));
                    arr_23 [i_6] |= ((/* implicit */unsigned short) var_4);
                    var_16 += ((/* implicit */_Bool) min((((/* implicit */int) var_0)), ((+(((/* implicit */int) ((((/* implicit */int) (signed char)1)) > (((/* implicit */int) var_6)))))))));
                }
            } 
        } 
        var_17 += ((/* implicit */unsigned short) arr_17 [(short)14]);
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (short i_9 = 2; i_9 < 14; i_9 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 16; i_10 += 4) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 16; i_11 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) ((int) ((_Bool) ((signed char) var_3))));
                                var_19 = ((/* implicit */unsigned long long int) ((short) min((((/* implicit */unsigned short) (signed char)-2)), ((unsigned short)65535))));
                                var_20 = min((((/* implicit */long long int) ((short) var_4))), (arr_24 [i_9] [i_10] [i_10]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 16; i_12 += 3) 
                    {
                        for (short i_13 = 4; i_13 < 15; i_13 += 4) 
                        {
                            {
                                arr_38 [i_13 - 2] = ((/* implicit */short) ((signed char) min((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)65535)), (509166294U)))), (var_9))));
                                var_21 += ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-24)) % (((/* implicit */int) (signed char)-10))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */long long int) var_8);
                }
            } 
        } 
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((_Bool) arr_26 [i_5 + 2] [i_5 + 3] [i_5 + 2] [i_5 + 1])) ? (((((/* implicit */_Bool) min((arr_17 [i_5]), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */int) max(((_Bool)0), ((_Bool)0)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (arr_30 [i_5] [i_5] [i_5] [i_5] [i_5])))))) : (arr_15 [(short)2]))))));
    }
}
