/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39706
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
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) 4050205779936241967LL))));
    var_13 = ((/* implicit */unsigned char) var_11);
    var_14 |= var_8;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((short) (_Bool)1))), (min((var_11), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1 - 1]))))));
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) min((arr_0 [i_0] [i_1 + 2]), (((/* implicit */unsigned short) arr_3 [i_1]))))), (((var_2) ? (var_7) : (((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (min((((/* implicit */unsigned short) var_2)), ((unsigned short)60713))))))) : (min((((/* implicit */unsigned int) (_Bool)1)), ((+(var_1))))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_17 = ((/* implicit */int) max((((/* implicit */long long int) ((unsigned short) arr_8 [i_2]))), (max((((/* implicit */long long int) arr_8 [i_2])), (-5728723244524673951LL)))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_7 [i_2] [i_2])))) ? (((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_6 [i_2]) : (((/* implicit */int) var_5)))) : (max((arr_6 [i_2]), (((/* implicit */int) (unsigned short)45659)))))))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            var_19 = ((/* implicit */short) max((((/* implicit */int) var_4)), (arr_6 [i_2])));
            var_20 = ((/* implicit */unsigned char) var_5);
        }
        var_21 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)192))))) ? (arr_7 [i_2] [i_2]) : (3502424874U))));
    }
    for (long long int i_4 = 4; i_4 < 9; i_4 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_5 = 3; i_5 < 7; i_5 += 3) 
        {
            var_22 = ((/* implicit */unsigned char) arr_7 [i_4 - 1] [i_4 - 1]);
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((var_1) - (((/* implicit */unsigned int) var_10))))) ? ((-(arr_4 [i_4 - 4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))), (((((/* implicit */_Bool) (-(var_1)))) ? (arr_4 [i_5 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25475))))))))));
        }
        for (signed char i_6 = 2; i_6 < 6; i_6 += 3) 
        {
            var_24 = ((/* implicit */signed char) ((unsigned int) ((_Bool) max((var_9), (((/* implicit */unsigned long long int) arr_8 [i_6]))))));
            var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6] [(unsigned char)9] [3ULL])) ? (((/* implicit */int) (short)-12029)) : (((/* implicit */int) arr_10 [i_4] [i_6] [i_6 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) 1388791982)) ? (2434618252U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) != (max((min((18446744073709551604ULL), (((/* implicit */unsigned long long int) arr_12 [i_6])))), (((/* implicit */unsigned long long int) arr_19 [i_4] [i_4]))))));
            /* LoopNest 2 */
            for (unsigned char i_7 = 1; i_7 < 6; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    {
                        var_26 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) 2147483639)), (arr_7 [i_4 - 1] [i_6 + 4])))) ? (((/* implicit */int) max((arr_21 [(signed char)0] [i_7 + 3]), (((/* implicit */short) (signed char)48))))) : (((/* implicit */int) arr_26 [i_4] [i_4] [i_4 - 4] [i_4] [i_4]))));
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_7] [i_8])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) max((arr_25 [i_4 - 4] [i_4 - 4] [i_4] [i_6] [i_4]), (arr_25 [i_4 - 4] [5ULL] [i_4] [i_6] [i_4 - 4]))))));
                        var_28 = ((/* implicit */signed char) max(((+((((_Bool)1) ? (((/* implicit */int) (unsigned char)26)) : (0))))), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)45659)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) (short)14234))))))));
                        /* LoopSeq 1 */
                        for (int i_9 = 2; i_9 < 9; i_9 += 4) 
                        {
                            var_29 += ((/* implicit */signed char) max((min((var_9), (arr_4 [i_7 - 1]))), (arr_4 [i_7 + 2])));
                            var_30 = ((/* implicit */unsigned char) arr_21 [i_6] [i_7 + 1]);
                        }
                    }
                } 
            } 
            var_31 = ((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */unsigned short) (short)-12317)), ((unsigned short)19876)))), (((((/* implicit */_Bool) 2756034923U)) ? (((/* implicit */int) arr_10 [i_6 + 3] [i_6 + 4] [i_4 - 4])) : (((/* implicit */int) arr_10 [i_4 - 4] [i_4 - 1] [i_4 - 2]))))));
            var_32 = ((/* implicit */_Bool) 35184338534400ULL);
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_33 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)16))))), (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_2)), (var_1)))), (max((15957815727081984188ULL), (((/* implicit */unsigned long long int) arr_21 [i_10] [i_10]))))))));
            var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((signed char) 2147483646)))));
            var_35 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */int) (unsigned short)49152)) : (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) 0ULL)) ? (arr_9 [i_4 - 4] [i_10] [i_4 - 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65527)))))));
            /* LoopSeq 1 */
            for (unsigned char i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                var_36 += max((min((var_0), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_4 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [2]))))));
                var_37 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) 7899200493215371962ULL)) || (((/* implicit */_Bool) arr_28 [i_11] [i_10] [i_4] [i_4 - 3] [i_4 - 3] [i_10] [8U])))))));
            }
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_12 = 0; i_12 < 10; i_12 += 2) 
        {
            var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) var_8))));
            var_39 = ((((/* implicit */_Bool) var_7)) ? (arr_24 [i_4] [i_4 - 3] [i_4]) : (((/* implicit */int) var_8)));
        }
    }
}
