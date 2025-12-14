/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201382
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
    for (long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned short) var_8);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (_Bool)0))))))))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) arr_8 [i_0])), (min((((int) (_Bool)1)), ((-(-1697684149)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 13; i_4 += 2) 
                {
                    for (unsigned short i_5 = 1; i_5 < 13; i_5 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) min((((/* implicit */int) (signed char)106)), ((~(((/* implicit */int) (_Bool)1)))))))));
                            arr_18 [i_0] [i_1 - 2] [i_0] [i_1 - 2] [i_5] = ((/* implicit */unsigned char) (!((_Bool)1)));
                            var_16 = ((/* implicit */signed char) min((((/* implicit */int) max((var_11), (arr_8 [i_0])))), (max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_0] [i_1 - 1])) : (((/* implicit */int) (_Bool)0))))))));
                            var_17 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)129)) ? (((var_3) << (((var_12) - (983806883U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32654)) ? (((/* implicit */int) var_6)) : (var_8))))))) ? ((+(arr_17 [(unsigned char)2]))) : (((/* implicit */unsigned int) max(((+(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) 488692426U)) ? (((/* implicit */int) arr_15 [i_0] [i_1])) : (((/* implicit */int) var_11)))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 1; i_7 < 14; i_7 += 1) 
                    {
                        for (long long int i_8 = 1; i_8 < 16; i_8 += 1) 
                        {
                            {
                                var_18 |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (signed char)-82)), (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_5 [i_0 + 2] [i_6] [i_7 + 3] [i_7 + 3])))));
                                var_19 = ((/* implicit */short) (_Bool)1);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) (_Bool)1);
                }
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) (~(var_8)));
    /* LoopNest 3 */
    for (long long int i_9 = 3; i_9 < 20; i_9 += 2) 
    {
        for (unsigned int i_10 = 0; i_10 < 21; i_10 += 2) 
        {
            for (unsigned char i_11 = 1; i_11 < 19; i_11 += 2) 
            {
                {
                    var_22 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27490))) ^ (arr_30 [i_10] [i_11 + 2] [i_10])))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (arr_34 [i_11 - 1] [i_11] [i_11] [i_10])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_34 [i_9 - 3] [(signed char)14] [(signed char)14] [i_10]))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        for (long long int i_13 = 0; i_13 < 21; i_13 += 1) 
                        {
                            {
                                arr_42 [i_9 - 3] [i_11] [i_11] [i_12] [i_13] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32638))) : (0ULL)));
                                var_23 = ((/* implicit */unsigned long long int) arr_29 [i_9 - 2]);
                                arr_43 [i_9] [i_10] [15LL] [i_11] [i_10] = ((/* implicit */unsigned char) ((_Bool) max((arr_30 [i_9 + 1] [i_11 + 2] [i_13]), (arr_30 [i_9 + 1] [i_11 + 2] [i_13]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 0; i_14 < 21; i_14 += 1) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) var_5);
                                arr_51 [i_9] [i_9] [i_11] [i_14] [i_15] [i_14] = ((/* implicit */int) (_Bool)1);
                                arr_52 [i_9] [i_10] [i_10] [i_14] [i_11] = ((/* implicit */unsigned short) min(((-2147483647 - 1)), (((/* implicit */int) ((arr_34 [i_9] [i_9 - 2] [i_9 + 1] [i_11]) < (((/* implicit */long long int) ((/* implicit */int) (short)-17650))))))));
                                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) var_9))))) ? ((+(arr_40 [i_10] [i_10] [12] [i_9 - 2] [i_15] [i_11] [i_11 - 1]))) : (arr_40 [i_10] [i_10] [i_14] [i_14] [i_15] [i_15] [i_11 + 1])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */long long int) min((var_11), (((/* implicit */unsigned short) var_2))));
}
