/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192574
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
    var_14 = ((/* implicit */unsigned short) min((var_14), (((unsigned short) ((((/* implicit */_Bool) 4294967267U)) ? ((+(var_7))) : (var_7))))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_12))) ? (min((((/* implicit */int) var_10)), ((+(((/* implicit */int) (unsigned short)17005)))))) : (((/* implicit */int) var_13))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_16 = ((/* implicit */long long int) ((unsigned int) min((((unsigned char) var_13)), (((unsigned char) 32767U)))));
        arr_2 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) min(((~(((/* implicit */int) arr_0 [i_0])))), ((+(((/* implicit */int) (unsigned char)251))))))), (max((((/* implicit */long long int) 32764U)), (arr_1 [i_0])))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) -4523203091682571261LL))))), ((-(arr_1 [i_0])))))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((32745U), (((/* implicit */unsigned int) (short)-15396))))))))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_18 = ((int) (+(((/* implicit */int) arr_6 [(_Bool)1]))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_1]))))) ? (((unsigned int) min((arr_0 [i_1]), (((/* implicit */unsigned short) var_8))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) var_7)) ? (32767U) : (var_0)))))));
    }
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        arr_11 [(_Bool)1] [i_2] = ((/* implicit */long long int) ((unsigned int) (+((+(arr_9 [i_2] [i_2]))))));
        arr_12 [i_2] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17175674880ULL)) ? (var_1) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((signed char) var_7))) : (((/* implicit */int) (short)-22017)))));
    }
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 4294967253U)), ((~(var_4)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))) ? (((unsigned int) var_10)) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_10)))))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            {
                var_21 = ((((/* implicit */_Bool) (unsigned short)16993)) ? (max((min((3986667658U), (var_0))), (((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_13 [(signed char)12]))))) : ((+(((((/* implicit */_Bool) (signed char)-93)) ? (((/* implicit */unsigned int) var_9)) : (3486421528U))))));
                var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))))), ((unsigned short)63004))))));
                arr_19 [i_3] [i_4] = ((/* implicit */unsigned short) arr_17 [i_4] [i_4] [4ULL]);
                var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(1U)))) ? (((((/* implicit */_Bool) arr_16 [i_4] [(unsigned short)3])) ? (max((((/* implicit */unsigned long long int) 3274972950U)), (arr_15 [6U]))) : (((/* implicit */unsigned long long int) (~(arr_13 [i_3])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_13 [i_3]))) ? ((~(arr_17 [i_3] [i_4] [i_4]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))))))));
            }
        } 
    } 
}
