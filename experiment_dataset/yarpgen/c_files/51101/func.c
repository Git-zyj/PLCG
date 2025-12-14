/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51101
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
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */int) -831155358033133204LL);
                    var_13 = ((/* implicit */long long int) ((int) max((1245905786), (arr_6 [i_0] [17U]))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (int i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_3])), (((var_8) | (3638258360U))))))));
        var_15 = ((/* implicit */unsigned int) arr_9 [i_3]);
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) arr_3 [i_3])), (arr_9 [i_3]))))) < ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_3] [i_3])))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((_Bool) min((arr_11 [i_4]), (arr_11 [i_4])))))));
        var_18 = ((/* implicit */long long int) var_0);
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            for (unsigned short i_6 = 1; i_6 < 10; i_6 += 1) 
            {
                for (unsigned char i_7 = 4; i_7 < 12; i_7 += 3) 
                {
                    {
                        arr_18 [i_7] [i_6] [i_6] [i_7] = ((/* implicit */unsigned short) max((var_6), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4] [i_5] [i_6])) ? (((/* implicit */int) var_4)) : (var_2)))))))));
                        arr_19 [i_4] [i_5] [i_6] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                        arr_20 [i_4] [i_7] [i_4] [i_4] = ((/* implicit */_Bool) ((signed char) 3638258364U));
                    }
                } 
            } 
        } 
    }
    for (long long int i_8 = 1; i_8 < 23; i_8 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -831155358033133190LL)) ? (4ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [5LL])))))) ? (((/* implicit */long long int) ((int) arr_22 [i_8]))) : (max((((/* implicit */long long int) arr_23 [i_8] [i_8])), (4171561879181945301LL)))))) || (((/* implicit */_Bool) ((((unsigned long long int) arr_23 [i_8] [i_8])) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))))));
        /* LoopNest 3 */
        for (unsigned short i_9 = 4; i_9 < 22; i_9 += 4) 
        {
            for (unsigned int i_10 = 3; i_10 < 21; i_10 += 1) 
            {
                for (unsigned short i_11 = 0; i_11 < 24; i_11 += 3) 
                {
                    {
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((arr_26 [i_9]) * (((/* implicit */unsigned int) ((/* implicit */int) (short)9010))))))));
                        var_21 = ((/* implicit */int) ((_Bool) (!((!(((/* implicit */_Bool) arr_25 [i_8] [i_9] [i_8])))))));
                        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_8] [i_9] [i_10])) >> (((((/* implicit */int) (short)30575)) - (30554)))))) ? (((((/* implicit */int) (unsigned short)30211)) - (((/* implicit */int) arr_22 [i_10])))) : ((~(arr_23 [i_10] [i_11])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_8] [i_9] [i_10 - 2])) || (((((/* implicit */_Bool) (short)-30576)) || (((/* implicit */_Bool) var_10))))))) : (max((-517353814), (-129351837))));
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (long long int i_12 = 2; i_12 < 23; i_12 += 4) 
        {
            var_23 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_12])) ? (656708941U) : (((/* implicit */unsigned int) arr_23 [i_12 - 2] [i_12 - 2]))))) ? (max((arr_33 [(unsigned short)0] [i_8] [i_8] [i_8] [i_8] [i_8]), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_8] [i_8 - 1] [i_8]))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) (unsigned short)65518)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
            var_24 = ((/* implicit */short) (unsigned short)0);
        }
        for (int i_13 = 2; i_13 < 23; i_13 += 4) 
        {
            arr_39 [i_8] [i_13] &= ((/* implicit */_Bool) min((min((arr_26 [i_13]), (arr_26 [i_13]))), (((/* implicit */unsigned int) max((arr_32 [i_13] [i_13 - 1] [i_13 - 1] [i_13] [i_13 - 1] [i_8 - 1]), (arr_24 [i_13]))))));
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)29)) >> (((((/* implicit */int) arr_22 [i_8])) + (21435)))));
            /* LoopNest 3 */
            for (unsigned short i_14 = 2; i_14 < 23; i_14 += 1) 
            {
                for (int i_15 = 0; i_15 < 24; i_15 += 1) 
                {
                    for (unsigned short i_16 = 2; i_16 < 23; i_16 += 4) 
                    {
                        {
                            arr_48 [i_8] [i_13] [i_8] [18] = ((/* implicit */int) (!(((/* implicit */_Bool) (((((_Bool)1) || (((/* implicit */_Bool) arr_31 [i_8] [i_8] [i_8])))) ? (4548806427876479894LL) : (((((/* implicit */long long int) ((/* implicit */int) var_9))) / (arr_30 [i_8] [i_13] [i_14] [i_15]))))))));
                            arr_49 [i_8 + 1] [i_8 - 1] [i_8] [i_8 + 1] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1950586806)) ? (((/* implicit */int) (signed char)86)) : ((~(((/* implicit */int) (short)30575))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_17 = 0; i_17 < 24; i_17 += 1) 
        {
            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) -8992251890772628360LL))));
            var_27 = ((/* implicit */unsigned long long int) arr_40 [i_8] [i_8] [i_8]);
            arr_53 [i_8] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_8] [(_Bool)1] [i_8 - 1])) ? (((arr_42 [i_8] [i_8] [i_8] [i_8 - 1] [21]) ? (arr_43 [i_8] [i_17] [i_17] [i_8] [i_17] [i_17]) : (((/* implicit */long long int) 703078702)))) : (((/* implicit */long long int) ((/* implicit */int) ((4294967295U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_8])))))))))) || (((/* implicit */_Bool) ((unsigned long long int) min(((short)-30576), (((/* implicit */short) (signed char)114))))))));
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_1)) < (arr_21 [i_8])))) - (arr_23 [i_8 + 1] [i_8])));
        }
        for (unsigned long long int i_18 = 1; i_18 < 20; i_18 += 1) 
        {
            var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(min((((/* implicit */long long int) var_2)), (-8992251890772628360LL))))))));
            arr_56 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (max((((((arr_43 [i_8] [i_18 + 4] [17] [i_8] [i_18 + 2] [i_18]) + (9223372036854775807LL))) << (((/* implicit */int) var_9)))), (((((-6822495072529765287LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)35318)) - (35313))))))) : (((((/* implicit */long long int) arr_35 [i_8] [i_18])) | (((long long int) var_9))))));
        }
    }
    var_30 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((1950586806), (((/* implicit */int) (unsigned short)39219))))) || (((/* implicit */_Bool) ((unsigned int) var_4))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((unsigned short) var_8)))));
}
