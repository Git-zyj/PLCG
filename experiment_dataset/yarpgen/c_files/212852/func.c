/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212852
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned char) (+(min((((/* implicit */long long int) 2589846462U)), (arr_3 [i_0 - 2] [i_0 - 1] [i_3])))));
                                var_12 = ((/* implicit */unsigned int) (-(min((((arr_13 [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10)))))))));
                                var_13 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_2] [i_1])) ? (((/* implicit */int) (unsigned short)4621)) : (((/* implicit */int) min((var_10), (arr_0 [i_1])))))), (min(((+(((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_4])) ? (arr_2 [11ULL] [i_2] [i_3]) : (var_0)))))));
                                var_14 = ((((/* implicit */int) ((((arr_13 [i_2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4647))))) < (((unsigned long long int) (unsigned short)4621))))) | ((+(((/* implicit */int) ((((/* implicit */int) arr_12 [i_0 + 3] [i_0 + 1] [i_0] [i_0] [i_0 + 2] [(signed char)11] [i_0 + 3])) >= (((/* implicit */int) arr_12 [i_0] [i_2 - 1] [i_2] [i_3] [i_2] [i_1 + 2] [(short)16]))))))));
                                var_15 |= ((/* implicit */unsigned int) ((6226012600416708293LL) + (((((/* implicit */_Bool) ((signed char) arr_6 [i_4]))) ? ((-(var_9))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_1] [i_2 + 2] [i_3])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        for (short i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            {
                                arr_22 [i_1] [i_1] [i_6] = ((/* implicit */int) (-((+(arr_3 [i_1 + 2] [i_1 + 2] [i_1 - 1])))));
                                var_16 = ((((/* implicit */int) (short)-25099)) & ((+(((/* implicit */int) arr_21 [i_7] [i_6] [i_1] [i_1] [i_0 - 2] [i_0 - 2])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (long long int i_9 = 2; i_9 < 16; i_9 += 1) 
                    {
                        {
                            var_17 += ((/* implicit */signed char) max((arr_1 [(signed char)9] [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_23 [i_0]), (((/* implicit */unsigned char) arr_12 [i_0] [i_0 - 1] [i_1] [i_1 + 2] [i_8] [i_8] [i_9 - 1]))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((signed char) arr_10 [i_9] [i_9] [i_8] [i_8] [8U] [8U]))))))));
                            var_18 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 194576577)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) arr_26 [i_0] [i_1] [i_1] [i_9 + 2])))) != (((((/* implicit */int) arr_9 [i_0 + 2] [i_1] [i_1 - 1] [i_1 - 1])) | (((/* implicit */int) arr_6 [4LL]))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_10 = 2; i_10 < 15; i_10 += 3) 
                {
                    for (long long int i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 18; i_12 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((min((max((arr_29 [i_10] [(unsigned short)11] [i_0]), (((/* implicit */unsigned long long int) arr_23 [i_0])))), (((/* implicit */unsigned long long int) ((unsigned short) arr_24 [i_0 - 2] [i_10] [i_11] [i_1]))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (-(((/* implicit */int) arr_8 [i_0] [17LL] [i_10 - 1] [i_1] [7U])))))))));
                                var_20 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) ((2589846462U) != (((/* implicit */unsigned int) -1199747057))))) >= (((/* implicit */int) ((unsigned short) arr_18 [i_1] [i_10] [i_11] [i_12]))))))));
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((max((6226012600416708314LL), (arr_33 [i_12] [i_10] [i_0] [i_0]))), (((/* implicit */long long int) min((var_3), (arr_10 [i_0 + 3] [i_0 + 3] [i_0 + 3] [1LL] [i_11] [i_12]))))))) ? (((/* implicit */int) arr_30 [i_12] [i_11] [i_10 - 1] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4619)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_4)))), (((((/* implicit */_Bool) -1LL)) ? (((var_1) ^ (((/* implicit */int) (_Bool)1)))) : (max((((/* implicit */int) var_4)), (var_0)))))));
    /* LoopNest 2 */
    for (unsigned int i_13 = 1; i_13 < 15; i_13 += 3) 
    {
        for (int i_14 = 2; i_14 < 15; i_14 += 3) 
        {
            {
                var_23 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-6332))) & (arr_38 [i_13 + 3])))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_38 [i_13]) == (((/* implicit */long long int) 1998834932)))))) : (max((arr_37 [9]), (((/* implicit */long long int) arr_41 [i_13] [i_13]))))))));
                var_24 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((arr_41 [i_13 - 1] [i_14 + 2]) ? (2088912717782402026LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) >= (((/* implicit */long long int) (-(2147483647)))))))) != ((~(max((arr_40 [i_14 - 2]), (((/* implicit */unsigned int) arr_39 [i_14] [i_13]))))))));
                /* LoopNest 2 */
                for (unsigned char i_15 = 3; i_15 < 18; i_15 += 3) 
                {
                    for (unsigned char i_16 = 3; i_16 < 18; i_16 += 2) 
                    {
                        {
                            arr_46 [i_13 + 3] [i_14 + 4] [i_14 + 4] [i_13] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_43 [i_13 + 4] [i_14] [i_15 + 1] [i_15 + 1])) ? (arr_43 [i_16 - 3] [i_13] [i_13] [i_13]) : (arr_43 [i_13] [5] [i_13] [16]))) == (((arr_43 [7U] [i_14 + 3] [i_15 + 1] [i_16 - 3]) ^ (arr_43 [(_Bool)1] [i_14] [i_15] [i_16 + 1])))));
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (min(((~(arr_38 [i_13]))), (((/* implicit */long long int) min((((/* implicit */int) arr_39 [i_14] [i_16])), (var_8)))))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                            arr_47 [i_13] [i_13 + 2] [i_13] [i_13] [i_15 - 3] [i_16 - 3] = ((/* implicit */unsigned int) max((((arr_44 [i_13] [i_13 + 4] [i_15]) < ((-(arr_44 [i_13] [i_14] [(unsigned char)11]))))), (((((/* implicit */_Bool) ((((/* implicit */long long int) var_1)) - (arr_37 [i_16])))) && (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (-6226012600416708319LL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
