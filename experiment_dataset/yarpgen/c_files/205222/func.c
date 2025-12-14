/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205222
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
        var_10 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 268435455)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 6909671554873560005LL)) ? (((/* implicit */unsigned int) -942483039)) : (3850795849U)))) ? (max((((/* implicit */unsigned long long int) var_2)), (var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_2)))))) : (((/* implicit */unsigned long long int) (~((+(arr_3 [i_1] [i_1]))))))));
        arr_8 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((_Bool) arr_5 [i_1]))), (((15435566474318353045ULL) / (((/* implicit */unsigned long long int) arr_1 [i_1]))))));
        arr_9 [8LL] [i_1] = ((/* implicit */short) var_3);
    }
    for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        var_11 += ((/* implicit */unsigned int) ((unsigned long long int) 13561450753825294269ULL));
        /* LoopSeq 2 */
        for (long long int i_3 = 2; i_3 < 24; i_3 += 2) 
        {
            arr_15 [20U] = ((((((/* implicit */_Bool) (~(13561450753825294269ULL)))) ? (((/* implicit */int) arr_12 [i_3 - 1] [i_3 + 1] [i_3 + 1])) : (-942483039))) % ((+((+((-2147483647 - 1)))))));
            arr_16 [i_3] [i_2] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_2] [i_3 - 2] [i_3]))))) * (((/* implicit */int) var_3)));
        }
        /* vectorizable */
        for (unsigned int i_4 = 1; i_4 < 22; i_4 += 3) 
        {
            arr_21 [i_2] [i_4] = ((/* implicit */unsigned int) var_3);
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                arr_25 [i_2] [i_2] [i_2] = ((/* implicit */short) 3850795849U);
                arr_26 [i_5] [i_2] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) arr_23 [4LL] [i_4] [i_5])))));
                arr_27 [i_5] [i_4 - 1] [(unsigned char)7] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((arr_23 [i_4] [i_4] [i_4]) != (((/* implicit */long long int) 0U))))) : (((/* implicit */int) arr_20 [13LL] [i_4 - 1] [i_4 - 1]))));
                arr_28 [11U] = ((/* implicit */long long int) arr_19 [i_5]);
            }
            arr_29 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_4 + 2] [i_4 - 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((_Bool) (short)32767)))));
            arr_30 [i_2] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) -646290381)) ? (((/* implicit */unsigned long long int) arr_18 [i_2] [i_4] [i_4])) : ((+(13561450753825294265ULL)))));
        }
        var_12 += ((/* implicit */int) ((((((/* implicit */_Bool) arr_24 [i_2] [19LL] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) max((var_4), (var_4))))) : (max((((/* implicit */long long int) var_3)), (2532217856046867885LL))))) + (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_2] [i_2] [i_2])))));
        arr_31 [i_2] [i_2] |= ((/* implicit */long long int) arr_11 [i_2]);
    }
    for (unsigned int i_6 = 2; i_6 < 18; i_6 += 3) 
    {
        arr_34 [i_6] = ((/* implicit */signed char) ((max((((/* implicit */long long int) arr_24 [i_6] [i_6] [i_6 + 1] [i_6])), ((-(var_5))))) <= (((/* implicit */long long int) arr_24 [i_6] [i_6] [i_6] [(signed char)12]))));
        arr_35 [i_6] [i_6] = ((/* implicit */unsigned char) ((long long int) ((22ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
    }
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((15022908207552648746ULL), (((/* implicit */unsigned long long int) 272740329U)))), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)167))) : (var_8)));
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (min((max((((/* implicit */unsigned long long int) (-(-6469868719183857866LL)))), (min((((/* implicit */unsigned long long int) 3950372663U)), (22ULL))))), (((/* implicit */unsigned long long int) 4294967282U))))));
    var_15 = var_9;
    var_16 = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15225))) * (3100362818439980635ULL))), (((/* implicit */unsigned long long int) (signed char)-16))));
}
