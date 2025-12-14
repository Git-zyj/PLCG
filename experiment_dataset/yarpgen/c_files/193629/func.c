/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193629
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
    var_17 = ((/* implicit */signed char) var_9);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            arr_5 [i_0] [i_1] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))) % (1257643264U)));
            var_18 = ((/* implicit */int) arr_2 [i_0]);
            /* LoopSeq 1 */
            for (long long int i_2 = 3; i_2 < 22; i_2 += 3) 
            {
                var_19 = ((/* implicit */unsigned long long int) arr_1 [i_2]);
                arr_10 [i_0] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)40)), ((unsigned short)65535))))));
            }
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    {
                        arr_15 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((unsigned int) (signed char)-82)) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-106)))))));
                        arr_16 [i_1] [i_0] = ((/* implicit */unsigned char) arr_4 [i_0]);
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (+(((/* implicit */int) var_3)))))) ? (((/* implicit */int) arr_11 [i_0] [i_0])) : (((/* implicit */int) ((unsigned short) var_2)))));
                        var_20 -= (~(((arr_12 [i_0] [i_1]) & (arr_12 [12] [i_1]))));
                        arr_18 [i_0] [i_0] [i_0] [i_0] [(signed char)18] = ((/* implicit */unsigned char) var_3);
                    }
                } 
            } 
        }
        for (short i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            arr_21 [i_0] [i_0] = ((/* implicit */signed char) var_16);
            var_21 = ((int) (~(((/* implicit */int) (unsigned short)45764))));
            arr_22 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-24403)) ? (arr_8 [i_0] [i_5] [(signed char)21]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))), (((/* implicit */unsigned int) ((var_5) / (((/* implicit */int) var_13)))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (2359604557190918744ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [i_0]))))));
            /* LoopNest 2 */
            for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                for (short i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    {
                        var_22 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_9 [i_7]) >> (((((/* implicit */int) (short)-25513)) + (25539))))))))) - (((/* implicit */int) ((arr_1 [i_7]) < (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-84)))))))));
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((((arr_13 [(short)12] [(short)12] [i_6] [i_7] [(short)12] [i_7]) ? (((/* implicit */unsigned long long int) arr_9 [19ULL])) : (arr_4 [i_0]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) >= (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))) ? (((((/* implicit */_Bool) (short)496)) ? (((/* implicit */long long int) 1053280226U)) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (-3704627632556033471LL))))) : (arr_1 [6U]))))));
                        arr_27 [(short)22] [(short)22] [i_6] [(short)22] [(short)22] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) | (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) var_12))))) ? (max((((/* implicit */unsigned long long int) var_0)), (1173253942014800730ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)8648)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_5] [i_6] [i_7] [i_0]))) : (3033079167U))))))));
                        arr_28 [(short)18] [(short)18] [i_0] [i_0] [(short)18] [(short)18] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [14U])) ? (((/* implicit */int) (_Bool)1)) : (var_11)))) ? ((-(var_7))) : (var_10))), (((/* implicit */unsigned int) min((arr_23 [i_0] [i_5] [i_5]), (((/* implicit */int) arr_13 [i_0] [i_5] [(_Bool)1] [i_7] [(unsigned short)0] [i_0])))))));
                        var_24 = ((/* implicit */int) max((((/* implicit */long long int) var_9)), (((long long int) (-(16U))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_8 = 3; i_8 < 22; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 24; i_9 += 3) 
            {
                for (unsigned int i_10 = 1; i_10 < 21; i_10 += 4) 
                {
                    {
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [(short)2] [i_10] [i_10 + 3] [i_10 + 2])) ? (arr_36 [(signed char)0] [(signed char)0] [i_10 + 2] [i_10 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_10] [i_0] [i_10 + 2] [i_10 + 3])))));
                        arr_37 [i_0] [i_0] [i_9] [i_10 + 3] = ((/* implicit */int) var_10);
                        var_26 = ((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_9] [i_9]);
                    }
                } 
            } 
            var_27 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) - (((/* implicit */int) var_2))))) ? (arr_9 [i_8 - 3]) : (((arr_7 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
            arr_38 [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_4 [22])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_7 [i_8 + 1])))));
            arr_39 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967291U)) ? (((/* implicit */int) ((_Bool) arr_24 [i_0] [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
        }
        arr_40 [i_0] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (short)5208)) ? (((/* implicit */int) (unsigned char)98)) : (((/* implicit */int) var_15)))));
    }
    for (unsigned int i_11 = 0; i_11 < 16; i_11 += 3) 
    {
        arr_44 [i_11] = ((/* implicit */_Bool) arr_33 [i_11] [i_11] [i_11] [i_11]);
        var_28 = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (arr_14 [i_11] [21U])));
    }
    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_0)) ? (((int) var_15)) : ((+(((/* implicit */int) (short)30720))))))));
}
