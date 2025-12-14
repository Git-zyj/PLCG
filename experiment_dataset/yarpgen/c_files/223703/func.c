/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223703
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((2414674713U), (((/* implicit */unsigned int) var_13))))) ? (((((/* implicit */_Bool) (unsigned char)224)) ? (12468580519257902476ULL) : (((((/* implicit */_Bool) (unsigned char)224)) ? (0ULL) : (4477535471710907134ULL))))) : (14431330567230608964ULL)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1]))) : (1880292564U)))) ? (((/* implicit */int) arr_6 [i_0] [i_2])) : (((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_8 [i_0] [i_2] [(unsigned char)12] [i_0]))))));
                        arr_11 [(_Bool)1] [i_1] [i_0] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [(unsigned short)18] [i_3])) + (((/* implicit */int) arr_0 [i_0]))))) : ((~(var_0)))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 2; i_4 < 21; i_4 += 4) 
                        {
                            arr_14 [i_2] [i_1] [i_0] [i_1] [i_4 - 1] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_2]))) + (1880292610U)));
                            var_16 = ((/* implicit */unsigned int) arr_0 [i_0]);
                        }
                        arr_15 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (arr_1 [i_0])));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [8] [8])) : (((/* implicit */int) arr_5 [i_0]))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 4; i_5 < 7; i_5 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_0)))) ? (arr_12 [(short)1] [i_5] [i_5 - 2] [i_5 + 3] [i_5]) : (((/* implicit */int) ((short) var_0)))));
        var_19 = ((/* implicit */signed char) (-(((/* implicit */int) arr_3 [i_5] [i_5] [i_5]))));
        var_20 = ((/* implicit */unsigned long long int) ((arr_4 [i_5 - 4]) ? ((-(arr_12 [i_5] [9ULL] [i_5 - 2] [i_5] [i_5]))) : (arr_1 [i_5])));
    }
    for (int i_6 = 2; i_6 < 11; i_6 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_6 - 1] [(_Bool)1] [18] [(unsigned short)8])) ? (((/* implicit */int) arr_4 [8ULL])) : ((~(((/* implicit */int) arr_6 [i_6 + 1] [i_6 - 2]))))));
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (short i_8 = 0; i_8 < 12; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_6 - 2] [i_6 - 2] [i_6] [i_6 + 1] [i_6 - 2])) ? (min((((/* implicit */int) arr_7 [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6 + 1])), (arr_12 [i_6 - 2] [i_6 - 2] [i_6 - 1] [i_6 + 1] [i_6 - 2]))) : (((((/* implicit */int) arr_27 [i_6 - 2] [(short)1] [i_6] [i_6 + 1])) * (((/* implicit */int) arr_7 [i_6 - 2] [i_6 - 2] [i_6 - 1] [i_6 + 1]))))));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_7])), (arr_28 [(signed char)7] [i_8] [i_7] [i_6])))) ? (((/* implicit */int) arr_13 [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_5 [i_7]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_27 [i_6] [i_7] [i_8] [i_9]), (((/* implicit */unsigned char) max((arr_8 [i_6] [(unsigned char)4] [i_7] [i_7]), ((signed char)(-127 - 1))))))))) : (((((((/* implicit */_Bool) 3603602533U)) ? (17658479174754307307ULL) : (((/* implicit */unsigned long long int) 948882387)))) | (((/* implicit */unsigned long long int) ((1804302250U) ^ (3869857111U))))))));
                        var_24 = ((/* implicit */long long int) arr_2 [(unsigned char)20]);
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) arr_1 [20ULL])) ? (arr_30 [i_6 - 2] [(short)1] [i_6 - 1] [2ULL]) : (((/* implicit */int) arr_23 [i_6] [i_6] [10])))), (((/* implicit */int) arr_27 [i_6 - 2] [(signed char)0] [(signed char)0] [i_6 - 1])))), ((-(((/* implicit */int) arr_0 [(unsigned char)2]))))));
        var_26 = ((/* implicit */unsigned char) ((((((arr_23 [(_Bool)0] [i_6] [(short)8]) ? (12468580519257902460ULL) : (((/* implicit */unsigned long long int) var_0)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6 + 1]))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [16]))) * (arr_28 [i_6] [(short)6] [10LL] [10LL])))))));
    }
    var_27 = ((/* implicit */signed char) (~(((12468580519257902460ULL) * (min((((/* implicit */unsigned long long int) -1084444836)), (788264898955244338ULL)))))));
}
