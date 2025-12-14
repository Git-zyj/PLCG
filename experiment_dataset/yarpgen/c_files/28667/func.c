/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28667
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
    for (int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_13 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0])) || (var_8))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_7)))) : (max((((/* implicit */unsigned long long int) var_12)), (var_2)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [(signed char)15] [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) min((var_5), (arr_4 [i_0] [i_1 + 1]))))));
                    var_14 = ((/* implicit */unsigned long long int) (-((~(var_12)))));
                }
            } 
        } 
        var_15 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (10014709187189833686ULL) : (8432034886519717929ULL))) - (((/* implicit */unsigned long long int) ((min((var_4), (((/* implicit */long long int) 760578882)))) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))));
        var_16 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) -7045503204236197104LL)) ? (((/* implicit */int) arr_8 [i_0 + 2] [i_0 + 2] [i_0] [i_0])) : (2147483647))), (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)15)), (0)))) ? (((((/* implicit */_Bool) arr_7 [i_0 + 3] [14LL] [10LL])) ? (0) : (370271430))) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (unsigned int i_3 = 2; i_3 < 9; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 3) 
        {
            for (short i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                {
                    var_17 = min((((/* implicit */unsigned long long int) ((int) 8432034886519717929ULL))), (var_3));
                    arr_18 [i_5] [i_4] [i_4] [i_4] = ((/* implicit */long long int) (~(((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) & (var_3))) | (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_6 [i_3 + 1] [i_4] [i_3 + 1])), (0LL))))))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)61401)) ? (((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) 2866590389038476677ULL))))), (((((/* implicit */_Bool) var_4)) ? (-1) : (arr_2 [i_3])))))) : (min((((/* implicit */unsigned int) 0)), (var_6)))));
                }
            } 
        } 
        arr_19 [i_3] [i_3 - 2] = ((/* implicit */long long int) min((max((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (8432034886519717930ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_8)), (-13)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned char)30)))))))));
        arr_20 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_3 + 1])), (var_4)))) ? (max((((((/* implicit */_Bool) arr_17 [i_3] [0LL] [i_3 - 2])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)171))))), (((/* implicit */unsigned long long int) max((-1608455126), (((/* implicit */int) (signed char)126))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_6)))) ? (((375177590052291165LL) * (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((long long int) -760578882))))) ? (((max((((/* implicit */unsigned long long int) var_12)), (var_3))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) <= (2441800056U))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
    }
    for (long long int i_6 = 4; i_6 < 19; i_6 += 3) 
    {
        arr_23 [i_6] [i_6] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2075720296U)) ? (var_7) : (((/* implicit */long long int) var_9))))) ? (((((/* implicit */_Bool) var_12)) ? (15955967083153053838ULL) : (((/* implicit */unsigned long long int) 0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_6] [i_6 - 2] [i_6 - 4] [(unsigned char)12])))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_1)), (760578904)))) ? (var_7) : (((/* implicit */long long int) (-(((((/* implicit */_Bool) 5224508267498892404LL)) ? (-130309324) : (((/* implicit */int) (_Bool)0)))))))));
        arr_24 [i_6] = ((/* implicit */long long int) ((var_0) >= (var_12)));
    }
    var_21 = ((/* implicit */long long int) min((5626732366927133021ULL), (((/* implicit */unsigned long long int) var_1))));
    var_22 = ((/* implicit */signed char) max((var_10), (((/* implicit */short) ((((/* implicit */_Bool) 536870896LL)) || (((/* implicit */_Bool) ((unsigned char) var_1))))))));
}
