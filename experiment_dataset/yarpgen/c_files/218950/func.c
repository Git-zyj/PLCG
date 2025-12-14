/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218950
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
    var_16 = ((/* implicit */int) var_7);
    var_17 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)145)), (var_8)))) ? (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) (unsigned short)31814)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)65535))))))), (var_11)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_1 [i_1 + 2])) : (((/* implicit */int) arr_4 [(_Bool)1] [i_0]))))) ? (min((arr_2 [i_0] [2]), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) var_14))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 2] [6])) ? (arr_5 [i_0] [i_1 + 2] [22ULL]) : (arr_5 [i_0] [i_1 + 2] [i_1 + 2]))) : (arr_2 [i_0] [i_0]))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_17 [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */int) (unsigned short)65531)) : (((/* implicit */int) (unsigned char)28))))) ? (((/* implicit */int) arr_1 [i_1 + 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                                var_19 = ((/* implicit */_Bool) ((((arr_10 [i_0] [i_0] [i_1] [(signed char)6] [i_0]) + (2147483647))) << (((((var_1) + (803738128))) - (30)))));
                                arr_18 [i_4] [i_3] [i_2 - 1] [i_0] [i_1 + 3] [i_4] &= ((/* implicit */unsigned int) ((_Bool) arr_7 [4] [i_1] [i_2] [i_3]));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 21; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_20 |= ((/* implicit */unsigned char) (signed char)(-127 - 1));
                            arr_25 [(signed char)17] [i_0] [12LL] [i_5 - 3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_6] [i_1] [i_5 - 3] [9])) << (((((/* implicit */int) ((short) (unsigned short)65531))) + (18)))));
                            var_21 = ((/* implicit */long long int) max((13829139647044355204ULL), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_14 [i_0] [i_1 + 1] [i_5 + 2] [i_6] [i_6])), ((unsigned short)3))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_7 = 1; i_7 < 20; i_7 += 4) 
                {
                    for (unsigned short i_8 = 1; i_8 < 21; i_8 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (signed char)5)), (4251324654321247671ULL))), (((/* implicit */unsigned long long int) var_12))));
                            var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_27 [i_8 - 1] [i_8] [i_8 - 1] [i_8])) ? (274877904896ULL) : (((/* implicit */unsigned long long int) 15)))) << ((~(((/* implicit */int) (signed char)-36))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */_Bool) ((((_Bool) (unsigned short)65526)) ? (((/* implicit */int) arr_28 [i_1 + 3] [i_1 - 1] [i_1 - 1] [i_1 + 2])) : ((((_Bool)1) ? (((/* implicit */int) arr_28 [i_1 + 3] [i_1] [i_1 + 2] [i_1 - 1])) : (((/* implicit */int) arr_28 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 2]))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) max((var_3), (((/* implicit */unsigned int) (unsigned short)28180))));
}
