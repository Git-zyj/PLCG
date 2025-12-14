/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219603
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
    var_15 = ((/* implicit */int) max((((/* implicit */long long int) ((int) var_11))), (var_1)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] &= ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((long long int) arr_1 [i_0]))))) : ((+(arr_1 [i_0]))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (unsigned int i_3 = 1; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (arr_0 [i_1 + 2] [i_1 + 2])))) - (((long long int) arr_0 [i_0] [i_1])))))));
                        arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (short)4356)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4356))) : (2669388830233810906ULL)));
                        var_17 -= ((/* implicit */signed char) ((((((arr_3 [i_0] [i_0] [i_0]) ? (12255214450013103323ULL) : (((/* implicit */unsigned long long int) arr_1 [13LL])))) >= (((/* implicit */unsigned long long int) (+(arr_6 [(signed char)18] [(signed char)18] [i_0])))))) ? (8046238194187801138LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) -4716475611638124555LL)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) (short)-28956)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 2; i_4 < 9; i_4 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            var_18 = ((/* implicit */int) max((max((((/* implicit */long long int) ((int) (short)28956))), (((((/* implicit */_Bool) arr_9 [i_5] [i_5] [(short)15] [i_4])) ? (arr_6 [i_5] [i_4] [4U]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)39))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_12 [10ULL])), (arr_13 [i_4] [(_Bool)1])))) ? (((((/* implicit */long long int) ((/* implicit */int) var_0))) / (8979642935062044241LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 6191529623696448293ULL)) ? (2089582848) : (arr_12 [10ULL]))))))));
            arr_17 [i_4] [0ULL] = ((/* implicit */signed char) arr_13 [i_4] [i_4]);
            /* LoopSeq 1 */
            for (long long int i_6 = 1; i_6 < 9; i_6 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_20 [i_6 + 1] [i_6] [(short)0] [i_6 + 1]))) ? ((+(((unsigned long long int) (unsigned short)15872)))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-125)) + (2147483647))) << (((2560460946U) - (2560460946U)))))))))));
                    arr_23 [i_4 + 3] [i_5] [i_4] [(_Bool)1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_4] [i_5] [i_4] [i_7])) ? (((/* implicit */int) (short)-4356)) : (((/* implicit */int) arr_22 [0ULL] [i_5] [i_5] [i_4] [i_5]))))) ? (((/* implicit */int) arr_22 [i_7] [i_4] [i_5] [i_4] [i_4])) : (((/* implicit */int) ((short) arr_11 [i_4 + 1] [i_4])))))));
                    arr_24 [i_4] [i_4] [i_4] [4LL] &= ((/* implicit */unsigned short) (_Bool)1);
                    var_20 = ((/* implicit */_Bool) (+((+(arr_13 [i_4 + 2] [i_4 + 3])))));
                }
                /* vectorizable */
                for (short i_8 = 2; i_8 < 10; i_8 += 3) 
                {
                    var_21 -= ((/* implicit */signed char) (~(arr_21 [(short)9] [i_6 + 2] [i_8 - 2] [i_8 - 1] [11LL])));
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_5] [i_5]))))) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-3)) ? (arr_13 [i_6] [i_5]) : (arr_26 [i_8] [(unsigned short)6] [i_4 + 2] [(unsigned short)6] [i_4 + 2])))))))));
                }
                for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) ((int) 4152253723983032337ULL)))) ? (max((max((15777355243475740706ULL), (((/* implicit */unsigned long long int) arr_8 [i_4])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_4 - 2] [i_4] [6LL] [i_6 + 3] [6LL])) ? (arr_28 [i_5] [2ULL] [i_5] [11U] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (short)-4356)))))))) : (((/* implicit */unsigned long long int) ((int) arr_26 [i_6 + 3] [i_4] [i_4 + 1] [i_4] [i_4 - 2])))));
                    arr_29 [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_4 [i_5]))));
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 3; i_10 < 11; i_10 += 3) 
                    {
                        arr_32 [(short)8] [i_5] [i_6] [4ULL] [(short)8] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7299397740218874740LL)) ? (746649405) : ((~(1327170471)))))) ? (((/* implicit */int) min(((short)-28956), (((short) var_1))))) : (((int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8))) ^ (arr_14 [(unsigned short)6])))));
                        var_24 = ((/* implicit */unsigned char) max((max((arr_22 [i_4] [i_6 - 1] [i_6] [i_4] [i_10]), (arr_22 [i_4] [i_6 - 1] [i_9] [i_4] [i_4]))), (((/* implicit */unsigned short) ((signed char) arr_12 [i_4])))));
                        arr_33 [i_4 + 1] [i_4] [i_5] [i_6] [i_9] [i_4] [i_10 - 1] = ((int) (-(var_5)));
                    }
                    for (long long int i_11 = 3; i_11 < 10; i_11 += 1) 
                    {
                        arr_36 [i_4] [i_9] [i_6] [i_6 + 1] [i_6] [i_5] [i_4] = ((/* implicit */unsigned char) ((unsigned int) (~(arr_13 [i_11 + 1] [i_9]))));
                        arr_37 [i_4 + 3] [i_4] [i_9] [i_9] = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) arr_15 [i_4])), (arr_1 [i_11 - 2]))) | (((/* implicit */long long int) ((/* implicit */int) min((arr_20 [i_6 + 3] [i_6 + 3] [i_4] [i_11 + 1]), (arr_20 [i_6 + 1] [i_5] [i_4] [i_11 - 3])))))));
                    }
                    var_25 &= ((/* implicit */_Bool) 15777355243475740702ULL);
                }
                arr_38 [i_4] [i_5] [i_6] [i_4] = ((/* implicit */_Bool) arr_20 [i_4 - 2] [(short)11] [i_4] [i_6]);
            }
        }
        for (long long int i_12 = 0; i_12 < 12; i_12 += 3) 
        {
            arr_42 [i_4] = ((/* implicit */short) var_3);
            var_26 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_39 [i_12])) ? (max((((/* implicit */unsigned int) arr_5 [i_4] [i_4] [7ULL] [i_4])), (var_6))) : (((/* implicit */unsigned int) -2147483621)))), (((/* implicit */unsigned int) ((_Bool) -921203979)))));
            /* LoopSeq 2 */
            for (short i_13 = 1; i_13 < 9; i_13 += 2) 
            {
                var_27 -= ((/* implicit */int) arr_31 [10] [10]);
                var_28 -= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_4] [i_12])) ? (((/* implicit */unsigned int) arr_12 [8])) : (1148297888U)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_3))))) : (arr_6 [(unsigned char)2] [i_13 - 1] [(unsigned char)2])))));
                /* LoopNest 2 */
                for (short i_14 = 1; i_14 < 9; i_14 += 3) 
                {
                    for (unsigned long long int i_15 = 2; i_15 < 9; i_15 += 3) 
                    {
                        {
                            arr_51 [3ULL] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_39 [i_15]))))) >= (max((-7689844480937050866LL), (((/* implicit */long long int) 1365378515))))));
                            var_29 &= ((/* implicit */unsigned int) (unsigned short)20);
                        }
                    } 
                } 
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_30 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_18 [2U] [i_4 - 2] [i_4 + 3])))));
                var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49664))) : (var_1))))));
                var_32 = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) min((arr_7 [i_4] [i_4] [i_12] [i_12] [i_4]), (((/* implicit */unsigned int) (unsigned short)65521))))))));
            }
            var_33 = ((/* implicit */unsigned short) (_Bool)1);
        }
        for (unsigned short i_17 = 4; i_17 < 10; i_17 += 4) 
        {
            arr_58 [i_4] [i_17] [i_4] &= ((/* implicit */signed char) arr_22 [i_17] [i_17] [i_4 + 3] [i_17] [i_4 - 1]);
            /* LoopNest 2 */
            for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 3) 
            {
                for (int i_19 = 0; i_19 < 12; i_19 += 1) 
                {
                    {
                        var_34 &= ((/* implicit */long long int) arr_4 [i_18]);
                        var_35 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4])) ? (((long long int) var_12)) : (((/* implicit */long long int) ((int) (unsigned short)0))))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-1)) != (((/* implicit */int) min((((/* implicit */unsigned short) (short)-4377)), ((unsigned short)56954))))))))));
                        var_36 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_0 [i_4] [i_4 - 2]), (((/* implicit */int) ((short) arr_52 [i_18])))))) ? (((((/* implicit */_Bool) (signed char)68)) ? (((/* implicit */int) arr_22 [i_4] [i_17] [i_17] [i_17] [i_17])) : ((~(((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) arr_43 [i_17])) ? (var_10) : (((/* implicit */int) (short)-4358))))));
                        var_37 = ((/* implicit */short) ((((/* implicit */int) arr_50 [i_4] [i_19])) - (((/* implicit */int) arr_52 [9LL]))));
                    }
                } 
            } 
        }
        arr_63 [i_4] = ((/* implicit */signed char) ((unsigned long long int) var_9));
    }
}
