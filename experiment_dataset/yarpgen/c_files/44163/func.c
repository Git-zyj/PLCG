/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44163
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */signed char) 539309515U);
                    arr_6 [i_2 + 1] [i_2] [i_1] = (signed char)-4;
                    var_12 += ((unsigned long long int) min((arr_3 [i_1 - 1] [i_1 + 1]), (min((((/* implicit */unsigned long long int) var_7)), (var_1)))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 21; i_3 += 2) /* same iter space */
    {
        var_13 |= ((/* implicit */unsigned int) var_1);
        var_14 = ((/* implicit */signed char) ((unsigned int) var_5));
        arr_9 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2047U)) ? (((unsigned long long int) 2082662407U)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-109)))));
    }
    for (signed char i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
    {
        arr_12 [i_4] = ((unsigned long long int) ((unsigned int) var_4));
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 3) 
        {
            var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3755657780U))));
            arr_15 [i_4] [i_4] [i_4] |= ((min((arr_14 [i_5 - 1] [i_5 + 1] [(signed char)20]), (var_4))) + (((unsigned int) ((unsigned long long int) 11861003681028789446ULL))));
            arr_16 [i_5] [i_4] = ((/* implicit */unsigned long long int) (((+(((((/* implicit */_Bool) arr_7 [i_4])) ? (((/* implicit */unsigned long long int) arr_14 [i_4] [i_5] [i_5])) : (arr_10 [8U]))))) != (6585740392680762169ULL)));
        }
        arr_17 [3U] = ((/* implicit */unsigned long long int) max(((signed char)64), (((/* implicit */signed char) ((max((((/* implicit */unsigned int) (signed char)-23)), (758819901U))) != (10U))))));
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 3; i_6 < 19; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 2) 
            {
                for (signed char i_8 = 1; i_8 < 18; i_8 += 3) 
                {
                    {
                        arr_25 [i_6] [i_6] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_4] [i_4] [i_4] [i_4]))) & (arr_13 [i_7] [i_6] [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [(signed char)9] [i_8] [(signed char)9] [(signed char)9] [i_8 + 2] [i_8])))))) : (((((/* implicit */_Bool) arr_10 [i_6])) ? (arr_11 [8U]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)55)))))))), (min(((-(arr_24 [19U] [(signed char)10] [i_4] [i_8] [i_8] [i_4]))), (((/* implicit */unsigned long long int) (+(var_6)))))));
                        var_16 = var_3;
                    }
                } 
            } 
        } 
    }
    for (signed char i_9 = 0; i_9 < 21; i_9 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) 2305843009213693951ULL);
        var_18 = ((min((((((/* implicit */_Bool) (signed char)65)) ? (arr_10 [(signed char)15]) : (((/* implicit */unsigned long long int) var_3)))), (((unsigned long long int) 0U)))) >> (((min((3052064823U), (((/* implicit */unsigned int) (signed char)67)))) - (48U))));
        /* LoopNest 3 */
        for (unsigned int i_10 = 0; i_10 < 21; i_10 += 1) 
        {
            for (unsigned int i_11 = 3; i_11 < 20; i_11 += 1) 
            {
                for (signed char i_12 = 2; i_12 < 19; i_12 += 3) 
                {
                    {
                        arr_36 [i_10] = ((signed char) 539309515U);
                        var_19 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) (signed char)-122))))) ? (min((((/* implicit */unsigned long long int) 4120706295U)), (var_1))) : (((var_8) + (var_8)))))));
                    }
                } 
            } 
        } 
    }
    var_20 = var_7;
    var_21 = (-(min((((/* implicit */unsigned long long int) (signed char)8)), (min((var_1), (((/* implicit */unsigned long long int) var_9)))))));
    var_22 = ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((unsigned int) var_3))) : ((+(var_0))))) : (min((min((var_0), (var_0))), (((/* implicit */unsigned long long int) max((539309515U), (((/* implicit */unsigned int) (signed char)92))))))));
}
