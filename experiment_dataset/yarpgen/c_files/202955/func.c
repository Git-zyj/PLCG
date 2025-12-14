/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202955
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_7))) ? (14193314693943681257ULL) : (((4253429379765870358ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)41)))))));
    var_17 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_10), (var_4)))) ? (((((/* implicit */int) var_13)) | (((/* implicit */int) var_13)))) : ((+(((/* implicit */int) (unsigned short)10912))))))), (max(((-(4253429379765870355ULL))), (((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned int) ((signed char) min((((/* implicit */int) (unsigned short)10912)), (arr_1 [i_0]))));
                var_19 += ((/* implicit */signed char) min((((((/* implicit */_Bool) 2886923672U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-103))) : (15ULL))), (((/* implicit */unsigned long long int) -168733464))));
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_0])))), ((-(min((((/* implicit */int) var_7)), (var_6)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 12; i_2 += 4) 
    {
        for (int i_3 = 3; i_3 < 12; i_3 += 3) 
        {
            {
                arr_13 [0ULL] [i_2 + 2] [i_2] = ((/* implicit */signed char) arr_8 [i_2]);
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((((((/* implicit */int) (unsigned short)54623)) == (((/* implicit */int) (unsigned short)24802)))) ? (((/* implicit */unsigned long long int) arr_2 [i_3 - 2] [i_2 + 2])) : (min((2387988743340012238ULL), (((/* implicit */unsigned long long int) (unsigned short)55933)))))) >> (((((/* implicit */int) arr_0 [(signed char)4])) - (61213))))))));
            }
        } 
    } 
    var_21 = ((signed char) (-(max((var_3), (((/* implicit */long long int) var_15))))));
}
