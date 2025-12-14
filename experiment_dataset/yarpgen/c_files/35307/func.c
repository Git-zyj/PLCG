/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35307
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [i_0] = var_13;
                    var_17 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])))) ? (((unsigned long long int) (_Bool)0)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((-2091471504250342146LL), (((/* implicit */long long int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) var_11)), (var_4))))) : ((~(var_1))))))));
                    arr_10 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (+(var_13)))) ? (17415755911563414277ULL) : (max((17415755911563414292ULL), (((/* implicit */unsigned long long int) var_4)))))), (((/* implicit */unsigned long long int) -2091471504250342160LL))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        arr_14 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-49))))) != (var_13)))) ^ (((/* implicit */int) ((_Bool) var_3)))));
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_17 [i_3] [i_4] = ((/* implicit */short) ((_Bool) (!(arr_15 [i_3] [i_4]))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_5 = 0; i_5 < 22; i_5 += 2) 
            {
                arr_22 [i_3] [i_5] = ((((/* implicit */int) arr_18 [i_5] [i_5] [i_4] [i_3])) / ((+(((/* implicit */int) arr_18 [i_4] [i_4] [i_4] [i_4])))));
                arr_23 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_14) ? (var_0) : (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (var_6))))) : (2091471504250342145LL)));
            }
        }
    }
    for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
    {
        var_18 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_6] [i_6])))))) ? (7571293037988498626LL) : (((/* implicit */long long int) var_7))))));
        arr_27 [i_6] [i_6] = ((/* implicit */long long int) 173889365U);
    }
    for (short i_7 = 0; i_7 < 20; i_7 += 1) 
    {
        var_19 -= ((/* implicit */long long int) max((((((/* implicit */_Bool) max((arr_13 [i_7]), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_26 [i_7])) < (((/* implicit */int) var_9)))))) : (max((arr_19 [i_7] [i_7] [i_7]), (arr_21 [i_7] [i_7] [i_7]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_7] [i_7] [i_7])) && (((/* implicit */_Bool) arr_11 [i_7])))))));
        arr_31 [i_7] = ((/* implicit */int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */long long int) (-(var_13)))) : ((~(arr_28 [i_7])))))));
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_16))))) < (arr_13 [i_7])))), ((-((-(var_13))))))))));
    }
}
