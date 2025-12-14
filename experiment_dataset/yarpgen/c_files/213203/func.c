/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213203
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
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_7 [i_0] [i_0 - 1] [i_0] [i_0 - 2])) - (((/* implicit */int) arr_7 [(_Bool)1] [i_0 - 2] [i_0] [i_0 + 1]))))));
                    var_13 = (i_0 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */_Bool) ((2827991729U) << (((((/* implicit */int) arr_5 [i_0])) - (136)))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) + (4398046511103LL)))) ? (max((2069994026018281733LL), (2069994026018281730LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0])) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))))))))))) : (((/* implicit */short) ((((/* implicit */_Bool) ((2827991729U) << (((((((/* implicit */int) arr_5 [i_0])) - (136))) - (12)))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) + (4398046511103LL)))) ? (max((2069994026018281733LL), (2069994026018281730LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0])) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0])))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(2U))))));
                                var_15 = ((((((/* implicit */long long int) 4294967292U)) / (-2069994026018281715LL))) + (((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_4 - 1] [i_4] [11LL]))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1]);
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */long long int) (unsigned char)251)), (-2069994026018281715LL))) > (((/* implicit */long long int) arr_6 [i_0] [i_0 + 2] [i_0 - 3])))))) + (((unsigned int) arr_0 [6ULL] [i_0 - 3]))));
                }
            } 
        } 
    } 
    var_18 &= ((/* implicit */signed char) (_Bool)0);
    var_19 = ((/* implicit */long long int) ((((/* implicit */int) var_4)) / (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        for (unsigned short i_6 = 2; i_6 < 9; i_6 += 2) 
        {
            {
                var_20 ^= ((/* implicit */signed char) min((((int) arr_13 [i_6 - 1] [i_6 - 1])), (arr_13 [i_6 - 1] [i_6 + 1])));
                var_21 &= ((max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)0)))) + ((-(((/* implicit */int) ((arr_6 [i_5] [i_5] [i_6]) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
}
