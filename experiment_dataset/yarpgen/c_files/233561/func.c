/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233561
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
    for (short i_0 = 2; i_0 < 16; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)153)) : (((/* implicit */int) (unsigned short)2651)))) != (((/* implicit */int) var_1)))))) != (((((/* implicit */_Bool) var_11)) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 2])))));
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            var_12 = ((((/* implicit */int) ((short) arr_3 [i_0 + 3] [i_0 - 1]))) != (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1])));
            var_13 = ((/* implicit */short) arr_4 [i_0 + 2] [i_1] [i_1 - 2]);
            var_14 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) ((unsigned char) var_3))) != (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) (_Bool)1))))))));
        }
        /* LoopSeq 1 */
        for (long long int i_2 = 1; i_2 < 16; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                var_15 = ((/* implicit */signed char) min(((short)-61), ((short)60)));
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_4)))) ? (12590552123176971316ULL) : (((/* implicit */unsigned long long int) (+(arr_6 [i_2]))))));
            }
            /* LoopSeq 2 */
            for (unsigned int i_4 = 1; i_4 < 16; i_4 += 3) 
            {
                arr_15 [i_4] [i_4 + 1] [i_2] = ((/* implicit */short) ((int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
                var_17 = ((/* implicit */long long int) 17091241046224695686ULL);
                var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_4 + 2]))));
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((((/* implicit */_Bool) ((short) var_7))) ? (((arr_4 [i_0 - 2] [(unsigned char)16] [i_2 - 1]) - (arr_4 [i_0 + 1] [18] [i_2 + 2]))) : (arr_4 [i_0 + 2] [(short)16] [i_2 - 1])))));
            }
            /* vectorizable */
            for (int i_5 = 1; i_5 < 16; i_5 += 3) 
            {
                var_20 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_9)))) >= ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)60))) : (3411185598733836727ULL)))));
                var_21 = arr_0 [(short)0];
            }
        }
    }
    for (short i_6 = 2; i_6 < 16; i_6 += 3) /* same iter space */
    {
        arr_24 [i_6] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_16 [i_6] [i_6 - 2] [i_6 - 2])) ? (5856191950532580299ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ^ (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (var_4))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_7 = 2; i_7 < 17; i_7 += 3) 
        {
            arr_27 [i_7] = ((/* implicit */short) (_Bool)1);
            var_22 = ((/* implicit */unsigned short) ((short) arr_13 [i_6 - 1] [i_6] [i_6 - 2]));
            var_23 = ((/* implicit */short) var_6);
            arr_28 [i_6] = ((/* implicit */long long int) ((int) 12590552123176971316ULL));
            var_24 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_6 + 3] [i_7] [i_7 - 2] [i_7])) ? (((((/* implicit */_Bool) var_9)) ? (1073733632) : (((/* implicit */int) arr_20 [i_6 + 2] [i_6 + 2])))) : ((((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)60))))));
        }
        var_25 = ((/* implicit */short) min((5399341895144698192ULL), (((/* implicit */unsigned long long int) (short)-19899))));
    }
    var_26 = ((/* implicit */int) var_5);
}
