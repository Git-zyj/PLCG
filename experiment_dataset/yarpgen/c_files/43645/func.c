/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43645
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */unsigned short) ((arr_9 [i_0] [i_1 + 1] [i_2] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4093921634484352562ULL))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (long long int i_4 = 3; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_0] [9])) << (((/* implicit */int) (_Bool)1))));
                                arr_18 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((4093921634484352562ULL) >> (((/* implicit */int) arr_14 [(signed char)6] [(signed char)6]))))) ? (max((((/* implicit */int) (_Bool)1)), (265052891))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1178460703))))))) << (((((-4324035533375531257LL) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) arr_8 [i_0] [i_1]))))))) - (4LL)))));
                                arr_19 [i_0] [i_0] = min((((/* implicit */unsigned long long int) (unsigned char)222)), (14352822439225199049ULL));
                                var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) arr_12 [i_2] [i_1] [(signed char)8] [(unsigned char)4] [(unsigned char)4] [i_1 + 1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            {
                                arr_25 [i_0] [i_0] [i_2] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (arr_6 [i_0]) : (((/* implicit */int) ((signed char) arr_6 [i_6])))));
                                arr_26 [i_0] [i_5] [i_5] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) 28ULL);
                                var_11 |= ((/* implicit */signed char) (-(((((/* implicit */int) var_2)) % (((/* implicit */int) arr_12 [i_2] [i_2] [i_1 + 2] [i_1] [i_1 + 1] [i_2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 3) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 21; i_11 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (((((~(3001587243662684522ULL))) << (((((((/* implicit */_Bool) arr_30 [i_7])) ? (arr_30 [i_7 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) - (17039843527044423384ULL))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_34 [i_10] [i_10] [i_7 + 2]), (arr_34 [i_10] [i_9 - 1] [i_7 + 2]))))))))));
                                var_13 = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) * (var_0)))));
                            }
                        } 
                    } 
                    arr_40 [i_7] [i_7] [i_7] = arr_32 [i_7] [i_7];
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (int i_13 = 4; i_13 < 17; i_13 += 3) 
                        {
                            {
                                arr_47 [i_8] [i_7] = ((long long int) (unsigned short)32704);
                                var_14 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_38 [i_7 - 1])))) ^ (arr_32 [i_7] [i_7])));
                                arr_48 [i_13 + 2] [i_8] [i_7] [i_8] [i_7] = ((/* implicit */_Bool) min((140737488355327LL), (((/* implicit */long long int) min((((var_8) - (((/* implicit */int) (unsigned short)0)))), (arr_27 [i_7] [i_7]))))));
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)126)) ? (268173312) : (-946307163)));
                                arr_49 [i_7] [i_8] [i_7] [(_Bool)1] [i_12] [i_7] [i_13] = ((/* implicit */int) max((arr_42 [10LL] [i_8] [i_9]), (((/* implicit */unsigned long long int) var_2))));
                            }
                        } 
                    } 
                    arr_50 [i_7] [i_8] [i_8] [i_7] = ((/* implicit */unsigned char) min((2103526213557991169LL), (((/* implicit */long long int) (!(((((/* implicit */int) arr_34 [i_7] [2ULL] [i_9 - 1])) > (((/* implicit */int) arr_46 [i_7] [i_8] [i_7])))))))));
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 21; i_14 += 2) 
                    {
                        for (int i_15 = 0; i_15 < 21; i_15 += 4) 
                        {
                            {
                                var_16 &= var_4;
                                arr_55 [i_7] [i_8] [i_8] [i_14] [i_7] [i_8] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (signed char)34)), (var_0)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (unsigned char)75))))), (max((var_5), (((/* implicit */long long int) var_9)))))));
    /* LoopNest 2 */
    for (unsigned char i_16 = 0; i_16 < 18; i_16 += 1) 
    {
        for (unsigned long long int i_17 = 3; i_17 < 15; i_17 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) arr_30 [i_16])) ? (var_9) : (1964088468))), (max((1969697825), (1782353097))))), ((+(var_8)))));
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) min(((signed char)19), (((/* implicit */signed char) arr_56 [(unsigned short)7] [i_17]))))), (arr_58 [i_16] [i_17]))))));
                var_20 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (signed char)-35)))));
                /* LoopNest 2 */
                for (unsigned short i_18 = 1; i_18 < 16; i_18 += 2) 
                {
                    for (signed char i_19 = 0; i_19 < 18; i_19 += 3) 
                    {
                        {
                            arr_69 [i_18] [i_19] [i_18 + 1] [i_17 - 2] [i_18] [i_18] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_8)), (arr_58 [i_17 - 3] [i_18 + 1])));
                            var_21 = ((/* implicit */short) min((min((((((/* implicit */_Bool) arr_38 [i_16])) ? (((/* implicit */unsigned long long int) arr_43 [i_16] [i_17] [(unsigned short)19] [i_19] [i_19] [i_16] [i_19])) : (4093921634484352548ULL))), (((/* implicit */unsigned long long int) 1782353097)))), (((/* implicit */unsigned long long int) arr_68 [(signed char)16] [i_17] [i_18 - 1] [i_18 + 2] [i_18] [i_17 - 2]))));
                            arr_70 [i_16] [i_17] [i_17] [i_18] [i_19] [i_19] = ((/* implicit */unsigned char) (-((-(arr_58 [i_17 + 2] [i_17 - 3])))));
                            var_22 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-54)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)34)))))) || (((/* implicit */_Bool) (signed char)43))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
