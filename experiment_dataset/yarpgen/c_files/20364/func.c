/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20364
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                    var_17 += (((+(arr_2 [i_2 - 4]))) < (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_1 - 1]))))));
                    var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)37610))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_3 = 2; i_3 < 19; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    {
                        arr_18 [i_0 - 1] [i_0] [i_4] = ((/* implicit */signed char) (((~(14609910705343021390ULL))) / (((/* implicit */unsigned long long int) (+((((_Bool)1) ? (((/* implicit */int) arr_8 [i_3 - 1])) : (((/* implicit */int) (signed char)111)))))))));
                        arr_19 [i_0] [i_0] [4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)15)), (((((/* implicit */int) var_15)) / (((/* implicit */int) var_0))))))) : ((((+(var_11))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))));
                        arr_20 [i_0] [i_3 - 1] [i_4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((signed char)-96), ((signed char)-103))))))) : (((arr_15 [i_0] [i_3 - 1] [i_3 + 1] [(_Bool)1] [i_5]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1]))) : (var_7)))));
                        var_19 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_6 [i_3 + 1])) && (((18446744073709551615ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113)))))))));
                    }
                } 
            } 
        } 
        arr_21 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0 - 1])) ? ((~(arr_14 [i_0] [i_0 - 1]))) : (((arr_14 [i_0 - 1] [i_0 - 1]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_6 = 4; i_6 < 17; i_6 += 3) 
    {
        for (unsigned long long int i_7 = 2; i_7 < 17; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)11))));
                    var_21 += ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) -1)) ? (8388607U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)93))))) : (8388618U)))), (((((/* implicit */_Bool) arr_4 [i_6 - 4])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_6 + 2])))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) 
    {
        for (short i_10 = 1; i_10 < 21; i_10 += 2) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) (_Bool)1);
                    arr_36 [i_11] [i_11] [i_9] [i_11] = ((/* implicit */unsigned int) (signed char)89);
                    arr_37 [i_9] [i_10 + 1] [i_11] [i_11] = ((/* implicit */int) (~((~(arr_32 [i_10 + 1] [i_10 + 1])))));
                }
            } 
        } 
    } 
}
