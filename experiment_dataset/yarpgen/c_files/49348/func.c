/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49348
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 733566636U)) ? (((((/* implicit */_Bool) (short)26627)) ? (1916597702U) : (((/* implicit */unsigned int) (-2147483647 - 1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))) ? (((/* implicit */unsigned long long int) -255546224253575257LL)) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) var_1))))), (var_9)))))));
    var_15 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_2)), (var_9)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) arr_2 [i_0] [15LL] [18]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) (unsigned short)61935);
                                var_18 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) ^ (arr_3 [i_4 + 1])))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)-124)))) ? (arr_1 [i_4 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19782)))))) : (((((/* implicit */_Bool) arr_6 [i_4 - 1] [i_4 + 3] [i_4 + 3])) ? (min((7812238555550289254ULL), (((/* implicit */unsigned long long int) var_13)))) : (arr_6 [i_0] [i_0] [i_0])))));
                                var_19 ^= ((/* implicit */unsigned short) max((arr_11 [i_0] [i_3] [i_2] [i_4 + 3] [i_4 - 1]), (((/* implicit */unsigned int) (unsigned char)85))));
                                arr_14 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (-((~(((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_3] [i_4 + 3])) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_2]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 ^= ((/* implicit */signed char) var_10);
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) -1728454844)) && (((/* implicit */_Bool) var_10)))))) ? ((~(((/* implicit */int) min((var_11), ((unsigned short)45717)))))) : (((/* implicit */int) ((unsigned char) var_11)))));
}
