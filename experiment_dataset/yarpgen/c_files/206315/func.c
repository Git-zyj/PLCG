/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206315
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
    var_13 = ((/* implicit */_Bool) max(((~(((/* implicit */int) ((unsigned short) var_6))))), (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_7 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)0))))) : ((((+(arr_6 [i_0] [i_0]))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [(_Bool)1] [i_1])) >= (((/* implicit */int) var_5)))))))));
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (~(((int) arr_2 [i_0 + 1] [i_0 + 1])))))));
                arr_8 [i_1] = ((/* implicit */_Bool) (~(arr_3 [i_1])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            {
                var_15 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */long long int) arr_1 [i_3])), (min((((/* implicit */long long int) arr_12 [i_2] [i_2] [i_3])), (2632865176938154612LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                arr_14 [i_2] [i_2] [i_2] = (~(((/* implicit */int) arr_2 [i_2] [i_3 + 1])));
                /* LoopNest 2 */
                for (unsigned int i_4 = 2; i_4 < 14; i_4 += 4) 
                {
                    for (unsigned char i_5 = 4; i_5 < 13; i_5 += 1) 
                    {
                        {
                            var_16 ^= ((/* implicit */long long int) var_12);
                            /* LoopSeq 2 */
                            for (unsigned short i_6 = 0; i_6 < 15; i_6 += 3) 
                            {
                                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_6] [i_4] [i_4] [i_3 + 1] [i_2])) ? (((/* implicit */unsigned long long int) ((-2632865176938154602LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (max((((/* implicit */unsigned long long int) var_6)), (806805450594653009ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) max((2147483647), (((/* implicit */int) (unsigned char)0))))))) : (min((((/* implicit */long long int) arr_12 [i_3] [i_3] [i_3 + 1])), (min((((/* implicit */long long int) var_7)), (-2632865176938154612LL))))))))));
                                var_18 = ((/* implicit */short) 2147483647);
                                var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) 726813834))))))));
                                var_20 += ((/* implicit */signed char) (~(((var_3) ? (((/* implicit */int) ((arr_5 [i_2 + 1]) && (arr_11 [i_2 + 1] [i_5] [i_6])))) : (arr_13 [i_2] [i_2 + 1])))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(2632865176938154612LL)))) ? (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [1] [i_2]))) & (3741003106U))) ^ (((/* implicit */unsigned int) ((arr_20 [i_2] [i_3] [i_4] [i_3] [i_6]) ? (((/* implicit */int) var_5)) : (2147483647))))))) : (((var_11) + (((/* implicit */long long int) ((var_3) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))))))));
                            }
                            /* vectorizable */
                            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                            {
                                var_22 -= ((/* implicit */unsigned int) var_2);
                                var_23 = ((/* implicit */unsigned int) (~(806805450594653009ULL)));
                            }
                            var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-14103)) && (((/* implicit */_Bool) 806805450594653024ULL)))) ? (((/* implicit */int) var_4)) : (min(((~(((/* implicit */int) arr_5 [i_4])))), (((/* implicit */int) var_2))))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_12 [i_2] [i_3] [i_3])))) ? (min((-2632865176938154630LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) arr_13 [i_4] [i_4]))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 3; i_9 < 13; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) ((unsigned short) (+(2632865176938154629LL))));
                                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_3] [i_8] [i_8 + 1] [i_8] [i_8] [i_9])) ? (((((/* implicit */_Bool) arr_33 [i_2 + 1] [i_2 + 1] [i_10])) ? ((~(2632865176938154629LL))) : (max((2632865176938154612LL), (((/* implicit */long long int) var_1)))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_30 [i_2] [i_2] [i_2 + 1] [i_2])))))));
                            }
                        } 
                    } 
                    var_28 = ((_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_2]))))), (arr_6 [i_2] [i_2 + 1])));
                }
                /* vectorizable */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (-(((unsigned int) 7)))))));
                    var_30 *= ((/* implicit */short) (+(-2147483647)));
                }
            }
        } 
    } 
}
