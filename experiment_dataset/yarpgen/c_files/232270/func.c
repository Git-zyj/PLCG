/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232270
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
    var_17 = var_4;
    var_18 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [12LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (((/* implicit */int) arr_5 [i_0 - 1])) : (((/* implicit */int) arr_5 [i_0 + 1]))))) ? ((+(arr_7 [i_0 - 1] [i_0 - 1]))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_0] [i_0])))) / ((+(((/* implicit */int) var_0)))))))));
                    var_19 ^= ((((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)55))) % (13117983040356262844ULL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) * (((/* implicit */int) arr_5 [i_0]))))) ? (((/* implicit */int) arr_3 [i_1] [i_0 + 2])) : (((/* implicit */int) ((short) arr_0 [7LL])))))) : (((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (arr_0 [i_0 - 1]))));
                    var_20 -= ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) < (((((/* implicit */_Bool) (unsigned char)141)) ? (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) var_0)))) : (((/* implicit */int) max(((unsigned char)141), (((/* implicit */unsigned char) (_Bool)0)))))))));
                    arr_9 [i_0 - 1] [i_1] [i_2] [i_2] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_3 [i_2] [i_1]))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)-74)) * (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) && (((/* implicit */_Bool) arr_2 [i_1])))))))) : (max((((/* implicit */long long int) (unsigned short)62119)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65522))) : (arr_7 [i_0] [i_1])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            {
                arr_18 [i_3] [i_3] [i_3] = ((/* implicit */signed char) (!(max(((_Bool)1), ((!(((/* implicit */_Bool) (unsigned short)65535))))))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_3 - 3] [i_3 - 3]))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_3] [(unsigned short)14])) / (((/* implicit */int) arr_5 [i_3]))))) ? (((((/* implicit */_Bool) arr_14 [i_3] [i_4])) ? (arr_7 [i_4] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-7516)))))))));
                arr_19 [i_3] [i_4] [i_3] = ((/* implicit */_Bool) (~(((unsigned int) max((((/* implicit */unsigned int) var_12)), (arr_6 [i_4]))))));
            }
        } 
    } 
}
