/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38713
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
    var_16 *= ((/* implicit */unsigned short) var_11);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_5 [i_0] [i_0] [i_0]))));
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (((-(((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned long long int) arr_6 [i_0])))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */short) arr_4 [i_0] [i_2])), (var_3)))) / ((+(((/* implicit */int) var_8))))))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_13 [i_0] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))), (min((((/* implicit */int) (short)-1)), (1534519349))))))));
            arr_14 [i_0] = ((/* implicit */int) max(((+(arr_12 [i_0]))), (min((arr_12 [i_3]), (arr_12 [i_0])))));
            arr_15 [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_0]))))), (arr_2 [i_3]))))));
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                for (long long int i_5 = 3; i_5 < 18; i_5 += 1) 
                {
                    {
                        arr_20 [i_0] [i_0] [i_0] [11U] = ((/* implicit */long long int) var_2);
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (-(arr_19 [i_5 - 1] [i_5 - 1] [i_4] [i_5 - 1])))) : (max(((+(var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_4])) ? (arr_8 [i_0] [i_4] [i_4]) : (((/* implicit */long long int) var_15))))))))))));
                    }
                } 
            } 
        }
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_10 [i_0] [4ULL] [4ULL]))));
    }
    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 1) 
    {
        var_21 = ((/* implicit */int) max((var_21), ((+(((/* implicit */int) arr_22 [i_6]))))));
        arr_23 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_6])) ? (min((((/* implicit */unsigned long long int) var_8)), ((+(var_10))))) : (var_10)));
        var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((max((824996892U), (((/* implicit */unsigned int) (_Bool)1)))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
        var_23 = ((/* implicit */unsigned char) arr_22 [i_6]);
    }
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
    {
        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            for (short i_9 = 1; i_9 < 22; i_9 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((unsigned int) arr_29 [3LL] [3LL] [i_9 + 1] [3LL]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_15)))))) : ((-(var_9)))))));
                    arr_30 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_24 [15ULL])))) ? (((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))) : (((((/* implicit */int) var_7)) * (((/* implicit */int) var_5))))))) ? ((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)89)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_25 [i_7])), (var_8)))) ? (((/* implicit */int) arr_25 [i_9])) : (((((/* implicit */int) var_7)) + (((/* implicit */int) var_12))))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) var_1))));
}
