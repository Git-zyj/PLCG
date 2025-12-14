/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242538
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
    var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
    var_13 = ((/* implicit */unsigned char) var_3);
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (+(((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)73)) ^ (((/* implicit */int) (signed char)-92))))) ^ (max((((/* implicit */long long int) var_4)), (var_7))))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [13LL] = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(max((arr_1 [i_0] [i_0]), (((/* implicit */int) var_5))))))) && (((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (int i_3 = 1; i_3 < 20; i_3 += 2) 
            {
                for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) arr_14 [i_1]);
                        var_17 &= ((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_1] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_3] [i_4]))) : (max(((~(2992168289537142415LL))), (((/* implicit */long long int) (signed char)122)))));
                        arr_16 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) 5459938914498021963LL)) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (((((/* implicit */unsigned int) 851163949)) - (arr_6 [i_3] [i_4]))))))));
                    }
                } 
            } 
        } 
        arr_17 [i_1] = ((/* implicit */signed char) arr_6 [i_1] [i_1]);
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_7 [17] [17]) | (arr_7 [i_1] [1])))) ? (((402653184) / (((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */long long int) var_10)) < (2992168289537142418LL))))))) ? (arr_12 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) (+(var_8)))))))));
        var_19 = (+(((/* implicit */int) ((((/* implicit */long long int) var_9)) == (6932175197295765773LL)))));
    }
    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        var_20 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)126)) : (1791236096)));
        /* LoopSeq 2 */
        for (int i_6 = 4; i_6 < 8; i_6 += 1) 
        {
            arr_24 [i_5] [i_5] [1] = (+(955533325U));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                for (unsigned char i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    for (int i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        {
                            arr_33 [i_5] [i_6 - 3] [i_8] [i_6 - 3] [i_9] |= ((/* implicit */int) var_6);
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_25 [i_6 - 4] [i_7] [i_8])) * (((((/* implicit */int) arr_25 [i_6 - 3] [i_8] [i_9])) << (((((/* implicit */int) arr_25 [i_5] [i_7] [i_7])) - (60)))))));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */int) (unsigned char)255)) : ((-(((/* implicit */int) (signed char)19)))))))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)119)), ((unsigned char)145))))));
        }
        for (signed char i_10 = 0; i_10 < 11; i_10 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) 
            {
                for (unsigned char i_12 = 0; i_12 < 11; i_12 += 2) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) (signed char)20);
                        var_25 |= ((/* implicit */unsigned char) var_8);
                        /* LoopSeq 3 */
                        for (unsigned int i_13 = 0; i_13 < 11; i_13 += 3) 
                        {
                            var_26 += ((/* implicit */int) ((unsigned char) 134184960));
                            var_27 = ((/* implicit */long long int) min((((/* implicit */int) ((arr_39 [i_13] [i_12] [i_11] [i_10] [i_5] [i_5]) <= (((/* implicit */long long int) arr_1 [i_5] [i_10]))))), (arr_1 [i_5] [i_10])));
                        }
                        for (long long int i_14 = 2; i_14 < 10; i_14 += 4) 
                        {
                            var_28 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_44 [i_5] [i_10] [i_11] [i_12] [i_14]) >> (((var_7) + (1867424752475487279LL))))))))) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_5] [i_14 - 1] [i_5]))) != (3436155961U))))));
                            var_29 = ((/* implicit */signed char) min((((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 6824734751388428236LL))))), (max((arr_20 [i_10]), (((/* implicit */int) var_3))))))), ((+(((unsigned int) (unsigned char)16))))));
                        }
                        for (unsigned char i_15 = 3; i_15 < 8; i_15 += 2) 
                        {
                            var_30 = ((/* implicit */signed char) arr_11 [i_12] [i_15]);
                            arr_48 [i_5] [i_10] [i_5] [i_15] = ((/* implicit */signed char) (+(((/* implicit */int) var_3))));
                            var_31 = min((((((((/* implicit */long long int) arr_14 [i_11])) - (var_1))) + (arr_39 [i_5] [i_10] [i_15 - 1] [i_12] [2] [i_5]))), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-106))))));
                        }
                        arr_49 [i_10] [1] [i_10] [i_10] = ((/* implicit */long long int) max((max(((signed char)32), (((signed char) arr_20 [i_5])))), (((signed char) arr_4 [i_5]))));
                    }
                } 
            } 
            var_32 = ((/* implicit */signed char) ((((((long long int) arr_38 [i_10] [(signed char)7] [10LL] [i_5])) + (((/* implicit */long long int) (~(((/* implicit */int) arr_31 [i_10] [i_10]))))))) | (((/* implicit */long long int) arr_7 [i_5] [i_10]))));
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 11; i_16 += 3) 
            {
                for (long long int i_17 = 0; i_17 < 11; i_17 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_18 = 0; i_18 < 11; i_18 += 3) 
                        {
                            var_33 = ((/* implicit */signed char) (~((~(((/* implicit */int) ((signed char) var_6)))))));
                            var_34 = (-(((/* implicit */int) ((var_8) == (((/* implicit */int) var_5))))));
                            arr_57 [i_5] [i_10] [i_5] [i_17] [i_10] &= ((/* implicit */signed char) var_9);
                        }
                        var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) ((max((arr_21 [i_16] [10U]), (var_9))) << (((arr_21 [i_10] [i_5]) - (1414491269))))))));
                    }
                } 
            } 
        }
        arr_58 [i_5] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_39 [i_5] [i_5] [i_5] [i_5] [(signed char)5] [i_5])))))))));
    }
}
