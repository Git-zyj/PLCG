/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38375
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
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), (((var_9) ? (298359671340119729LL) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */short) (~(((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_4 [23LL] [(signed char)0] [i_0]))) <= (((/* implicit */long long int) ((/* implicit */int) min(((short)-28376), (arr_0 [i_1] [(unsigned short)17]))))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            var_19 ^= ((/* implicit */unsigned long long int) arr_5 [(signed char)17] [i_1] [i_1 - 1] [i_3]);
                            arr_12 [(signed char)18] [i_2] [12U] [i_2] [i_2] [i_3] &= ((/* implicit */unsigned long long int) ((-1708741086218037156LL) ^ ((-(((-1708741086218037160LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)21)))))))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18004184010304326949ULL)) ? (((/* implicit */int) ((((/* implicit */int) ((arr_5 [i_0] [i_1] [i_2] [i_3]) <= (((/* implicit */long long int) arr_9 [i_0] [(unsigned short)21] [(signed char)19] [(signed char)19]))))) == (((/* implicit */int) ((arr_10 [i_0] [i_0] [i_0] [i_3]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248))))))))) : (((/* implicit */int) ((short) arr_5 [i_0] [i_0] [i_0] [i_0])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((((/* implicit */long long int) ((/* implicit */int) var_7))) + (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))))) : (1708741086218037169LL))));
    /* LoopNest 2 */
    for (unsigned short i_4 = 2; i_4 < 18; i_4 += 2) 
    {
        for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    for (unsigned short i_7 = 3; i_7 < 16; i_7 += 2) 
                    {
                        for (short i_8 = 1; i_8 < 18; i_8 += 4) 
                        {
                            {
                                arr_24 [i_6] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((arr_19 [16ULL] [i_5] [i_4 + 1] [i_5] [i_4 + 1] [i_4 + 1]) << (((((/* implicit */int) arr_17 [i_4 + 2] [i_4] [i_4] [i_4])) - (35)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_10 [i_4] [i_5] [i_6] [i_6])))));
                                var_22 ^= ((/* implicit */unsigned int) (+(((arr_21 [i_4 + 2] [i_4] [i_4] [i_4] [i_4 - 2]) ^ (((((/* implicit */long long int) ((/* implicit */int) (short)2942))) ^ (1708741086218037156LL)))))));
                                var_23 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_15 [i_8 + 2] [i_7] [i_4])) ? (((/* implicit */int) arr_15 [i_4 - 1] [i_5] [i_5])) : (((/* implicit */int) arr_15 [14LL] [i_5] [i_5])))));
                                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) arr_3 [i_4] [i_4] [i_6]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_9 = 3; i_9 < 18; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_25 = ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_30 [i_4] [(unsigned short)5] [5LL] [(unsigned char)14] [i_9] [i_10] [i_11])) ? (arr_8 [i_4] [(_Bool)1] [i_9] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_4] [i_4] [(unsigned short)0]))))) + (9223372036854775807LL))) << (((max((((/* implicit */unsigned long long int) arr_6 [24U] [i_5])), (var_10))) - (10995880126570399518ULL)))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)244))))) ? (((((/* implicit */_Bool) arr_9 [i_10] [i_4 - 1] [i_5] [i_4 - 1])) ? (((/* implicit */unsigned long long int) arr_16 [i_4] [i_5] [11ULL])) : (arr_10 [i_11] [i_9] [i_5] [(_Bool)1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_11] [i_11 - 1] [i_9 + 2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((-4931066136779918175LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))));
                                var_26 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((signed char) max((((/* implicit */unsigned int) (unsigned short)18545)), (var_0))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1708741086218037170LL)), (arr_31 [i_11] [i_10] [i_9 - 1] [i_4])))) ? ((+(arr_19 [i_11] [i_10] [i_9 - 2] [(signed char)14] [i_5] [5LL]))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_10] [i_5])))))));
                                arr_32 [i_11] [i_11] [i_9] [i_4] [i_11] [i_4] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_22 [15ULL] [15ULL] [i_9 + 2])) ^ (((/* implicit */int) arr_22 [i_5] [i_5] [i_9 + 2]))))));
                            }
                        } 
                    } 
                } 
                var_27 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_8 [i_5] [i_5] [i_5] [i_4 + 2])), ((-(var_2)))));
                arr_33 [i_4] = ((max((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) 2104328622U)) ? (var_8) : (((/* implicit */long long int) 2190638673U)))))) << (((1708741086218037176LL) - (1708741086218037176LL))));
                var_28 = -1708741086218037173LL;
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) (((((-(var_0))) == (((/* implicit */unsigned int) ((/* implicit */int) ((5739054646739897729ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) ((max((var_1), (var_3))) > (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 1821392083870949389LL))))))))))));
}
