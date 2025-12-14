/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53117
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((arr_1 [i_0]) <= (((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        var_17 = var_1;
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
        var_18 = ((/* implicit */int) arr_0 [i_1]);
        arr_7 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-54))));
    }
    for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        arr_11 [(unsigned char)8] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */unsigned long long int) ((unsigned int) arr_10 [i_2]))) ^ (((((/* implicit */unsigned long long int) var_15)) * (arr_1 [i_2]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 3) 
        {
            for (unsigned char i_4 = 2; i_4 < 10; i_4 += 2) 
            {
                {
                    arr_17 [i_4] [i_3] [i_3 + 2] [i_2] = ((/* implicit */unsigned long long int) arr_2 [i_3 + 2]);
                    arr_18 [i_2] = ((/* implicit */unsigned short) (short)-30741);
                    arr_19 [11ULL] [i_3 + 1] [i_2] = ((/* implicit */unsigned short) (-(((long long int) ((((/* implicit */_Bool) arr_0 [(signed char)10])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24160))))))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */signed char) (short)30741);
    /* LoopSeq 1 */
    for (int i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) arr_3 [23] [i_5]);
        var_21 = ((/* implicit */unsigned int) ((long long int) (~(min((((/* implicit */unsigned long long int) arr_2 [i_5])), (arr_1 [i_5]))))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_29 [i_5] [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) arr_26 [i_5]);
                    arr_30 [i_5] = ((/* implicit */unsigned int) ((signed char) min(((signed char)-91), (arr_20 [i_5] [i_6]))));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned int) (signed char)-8);
}
