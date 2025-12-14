/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243444
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
    var_18 = var_7;
    var_19 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) (_Bool)0)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_9))))) / (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_15)))) * (((((/* implicit */int) var_10)) / (((/* implicit */int) var_0)))))))));
    var_20 = ((/* implicit */_Bool) ((unsigned int) var_12));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) var_3);
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_1] [(unsigned char)9] = ((/* implicit */short) (((!(arr_6 [i_2 - 1] [i_1] [(short)7] [i_2]))) ? (arr_4 [(_Bool)1] [(signed char)1] [i_1 + 2]) : (((/* implicit */unsigned long long int) (-(arr_7 [i_1 + 2] [i_1 + 2] [i_2]))))));
                    arr_9 [i_2] [i_1] [i_2] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [i_0] [8LL] [i_2]))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_5 [8LL])))) : (((/* implicit */int) arr_6 [i_0] [i_1 + 1] [(unsigned char)2] [i_2])))));
                }
            } 
        } 
        var_21 = ((/* implicit */short) min((max((min((((/* implicit */long long int) var_12)), (arr_7 [(_Bool)1] [i_0] [8LL]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [(unsigned char)5])) : (((/* implicit */int) (short)22253))))))), (((/* implicit */long long int) var_5))));
        arr_10 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))));
    }
    for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    {
                        arr_22 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)11))))) ? (((/* implicit */int) arr_14 [i_3] [i_4])) : ((+(((/* implicit */int) ((((/* implicit */int) arr_21 [i_6])) <= (((/* implicit */int) (short)10366)))))))));
                        var_22 &= ((/* implicit */unsigned short) (short)12954);
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) max((13754883890266999748ULL), (((/* implicit */unsigned long long int) arr_20 [i_3] [i_4] [14ULL] [(unsigned short)13]))))))))))));
                        arr_23 [i_6] [i_3] [(unsigned short)8] [i_3] = ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)56652)))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_7 = 3; i_7 < 19; i_7 += 1) 
        {
            for (short i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                {
                    var_24 = ((/* implicit */short) min(((+(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_17))));
                    arr_29 [i_3] [i_7] [19LL] = (short)22260;
                    arr_30 [7ULL] [(signed char)1] = ((/* implicit */_Bool) arr_16 [i_3]);
                }
            } 
        } 
        arr_31 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (min((((/* implicit */long long int) (unsigned short)8896)), (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [12U] [(_Bool)1] [i_3])))));
        var_25 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned long long int) var_16))) ? (max((((/* implicit */unsigned long long int) arr_24 [i_3] [i_3])), (arr_19 [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2598992205U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-42))))))), (5872463472066257342ULL)));
    }
    for (long long int i_9 = 0; i_9 < 10; i_9 += 2) 
    {
        var_26 |= (!((!(((arr_33 [i_9] [(unsigned short)0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_9]))))))));
        arr_34 [i_9] [i_9] = ((/* implicit */long long int) min((((/* implicit */short) arr_14 [i_9] [i_9])), ((short)22261)));
        var_27 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_16)), (((((/* implicit */int) arr_1 [(short)10])) * (((/* implicit */int) (short)-26170))))))) ? (((((/* implicit */_Bool) 4691860183442551890ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34311))) : (17073309720278286225ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16476505745075095965ULL)) ? (((/* implicit */int) (short)10635)) : (((/* implicit */int) (unsigned char)159)))))));
    }
}
