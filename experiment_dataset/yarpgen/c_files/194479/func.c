/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194479
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
    var_15 -= var_0;
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) ((long long int) max((((/* implicit */unsigned short) ((signed char) (_Bool)1))), (arr_0 [i_0]))));
        arr_3 [i_0] [15ULL] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */int) arr_0 [i_0]))))) ? (arr_1 [i_0]) : (((unsigned int) arr_2 [i_0]))));
    }
    for (unsigned short i_1 = 1; i_1 < 23; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_2 = 1; i_2 < 22; i_2 += 2) 
        {
            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) max((((/* implicit */long long int) min((arr_5 [i_1 + 2]), (((/* implicit */unsigned int) (_Bool)1))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-13431))) : (-8890734506590130398LL))))))));
            arr_8 [(short)10] = ((/* implicit */short) (_Bool)1);
        }
        for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            arr_11 [i_3] [6LL] = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_4 [i_1])), (var_11)));
            var_18 = ((/* implicit */unsigned short) var_5);
        }
        var_19 = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) ((unsigned char) 2095598757))), (min((((/* implicit */unsigned int) var_1)), (arr_5 [19]))))), (((/* implicit */unsigned int) (_Bool)1))));
        /* LoopSeq 4 */
        for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            arr_14 [13ULL] [13ULL] = ((((/* implicit */_Bool) ((min((((/* implicit */long long int) arr_4 [i_1])), (var_5))) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_5 [i_1 - 1]))))))) ? (((((/* implicit */_Bool) (+(15ULL)))) ? (((/* implicit */unsigned long long int) ((int) arr_4 [i_1 + 2]))) : (min((1627114724244049697ULL), (((/* implicit */unsigned long long int) 473128101)))))) : (((/* implicit */unsigned long long int) (~(-482174995917309368LL)))));
            var_20 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (arr_6 [(unsigned short)2] [i_4])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)31))))) : ((~(arr_5 [i_1 + 1]))))));
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                for (long long int i_6 = 1; i_6 < 23; i_6 += 2) 
                {
                    {
                        var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned short) arr_6 [i_1 + 2] [i_1 + 2]))), (max((arr_6 [i_1 + 2] [i_4]), (arr_6 [i_1 + 1] [i_4])))));
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_12 [i_5]))))))) ? (((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (max((var_9), (((/* implicit */unsigned long long int) arr_4 [i_1])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_18 [i_1 - 1] [i_1])))))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_7 = 4; i_7 < 22; i_7 += 2) 
        {
            var_23 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (((((/* implicit */_Bool) var_7)) ? (arr_18 [(_Bool)1] [i_7]) : (((/* implicit */unsigned int) arr_7 [i_1] [i_1]))))));
            var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_16 [i_1] [i_7])) ? (((/* implicit */unsigned long long int) arr_22 [i_1])) : (16819629349465501918ULL))) < (((/* implicit */unsigned long long int) ((var_13) ^ (268369920))))));
            var_25 = ((/* implicit */short) ((((arr_15 [i_1]) + (var_9))) - (((/* implicit */unsigned long long int) (+(arr_20 [i_7] [i_1] [i_1]))))));
            var_26 &= ((/* implicit */short) (~(arr_16 [i_1] [i_7 - 2])));
        }
        /* vectorizable */
        for (short i_8 = 0; i_8 < 25; i_8 += 2) 
        {
            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) -1033780375701923112LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) (signed char)8)) ? (-5698572358412140097LL) : (((/* implicit */long long int) arr_22 [i_1 + 2])))))))));
            var_28 = ((/* implicit */unsigned char) ((signed char) arr_22 [i_8]));
            arr_27 [i_1 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_1 - 1] [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_21 [i_1] [6LL] [i_1 - 1]))));
        }
        for (unsigned long long int i_9 = 1; i_9 < 22; i_9 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 25; i_10 += 3) 
            {
                for (int i_11 = 0; i_11 < 25; i_11 += 3) 
                {
                    {
                        arr_36 [i_1] [i_1 + 2] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_25 [i_1] [i_1 + 1] [i_9 - 1])) ? (arr_5 [i_1 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) var_8)) | (var_4))) >= (((((/* implicit */_Bool) arr_25 [i_1] [i_9] [i_11])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))))))));
                        var_29 = (((-((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)47974)))))) + (((/* implicit */int) (!(((/* implicit */_Bool) (short)-13430))))));
                        arr_37 [i_10] [i_10] [i_10] [(unsigned short)8] [i_10] [i_10] |= ((/* implicit */_Bool) ((short) min((arr_9 [i_9 + 3] [i_9 + 1]), (((/* implicit */unsigned char) arr_29 [14ULL] [i_9 - 1])))));
                    }
                } 
            } 
            var_30 = ((/* implicit */unsigned short) 7910306917198601196ULL);
            var_31 += ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_9])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)10955))))) ? (((/* implicit */long long int) (~(var_13)))) : (((long long int) var_6))));
            arr_38 [i_9] = arr_18 [i_1] [(unsigned short)0];
            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((((arr_7 [i_1] [i_9]) * (((/* implicit */int) arr_21 [i_1] [i_9 + 3] [i_1])))), (((int) arr_21 [i_1] [i_1] [i_1]))))), ((~(max((((/* implicit */unsigned int) var_4)), (arr_10 [i_1] [i_9] [i_9 + 3]))))))))));
        }
        var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [(_Bool)1] [i_1] [(_Bool)1] [i_1] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1 + 2] [i_1 + 1] [(signed char)11] [i_1 + 2] [i_1] [i_1 + 2]))) : (arr_17 [i_1 - 1] [i_1 + 2]))))));
    }
    var_34 = ((/* implicit */unsigned short) max(((+(max((var_5), (var_5))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6))))))))));
    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-10961))) : (30786325577728LL)));
    var_36 = ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (short)-13434)), (var_11)))))));
}
