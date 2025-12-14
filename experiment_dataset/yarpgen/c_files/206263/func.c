/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206263
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 4; i_1 < 7; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 7; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        arr_10 [7] [i_1 + 3] [i_0] = ((/* implicit */_Bool) (-(((3364631541U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-59)))))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            arr_14 [i_0] [3LL] [i_0] [i_2] [i_3] [i_4] = arr_4 [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1 + 3];
                            arr_15 [9U] [i_1] [9U] [i_0] [8] [i_3] [10] = ((/* implicit */unsigned int) arr_6 [i_0 - 1] [i_0]);
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            arr_19 [i_5] [i_1 - 1] [i_1 - 1] [i_0] [i_3] = ((/* implicit */unsigned short) (signed char)-59);
                            var_14 ^= ((/* implicit */unsigned char) arr_6 [i_0] [i_5]);
                            var_15 -= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_0 [7LL]) : (((/* implicit */int) arr_12 [i_0] [i_1 + 1] [i_2] [i_3] [i_3] [i_5])))));
                        }
                        var_16 = ((/* implicit */signed char) arr_4 [6LL] [i_1 - 2] [i_2 + 3] [i_3]);
                        arr_20 [3ULL] [i_1] [i_0] [3ULL] [i_2 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_0 - 1] [i_1 - 2] [i_0] [i_3])) ? (var_13) : (((/* implicit */long long int) arr_5 [i_0])))) != (((/* implicit */long long int) 1988751259))));
                    }
                } 
            } 
        } 
        var_17 ^= ((/* implicit */long long int) ((_Bool) (unsigned char)245));
        arr_21 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7609)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) (+(0)))) : (arr_5 [i_0 - 1])));
        var_18 = ((/* implicit */long long int) ((arr_12 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [10LL] [10LL]) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_9 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1]))))));
    }
    for (signed char i_6 = 0; i_6 < 24; i_6 += 4) 
    {
        var_19 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 1389898747U)), (var_8)));
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            for (long long int i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                {
                    arr_31 [i_6] = ((/* implicit */unsigned char) var_8);
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_6] [i_7] [i_8])) ? (arr_30 [i_6] [i_6] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) min((arr_25 [(unsigned short)6]), (var_2))))))));
                }
            } 
        } 
    }
    for (signed char i_9 = 0; i_9 < 15; i_9 += 2) 
    {
        arr_34 [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_32 [12U])))) ? (2284099452U) : (((((/* implicit */_Bool) arr_33 [i_9] [i_9])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)130)))))))) / (((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (-417129979215447636LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
        arr_35 [i_9] [i_9] = ((/* implicit */unsigned short) (+(-187667065540961138LL)));
    }
    var_21 = ((/* implicit */short) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(var_12)))) : (((/* implicit */int) max((var_11), (var_11)))))))));
}
