/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245774
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [0LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(16756330417347806784ULL)))) ? (((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned short) (short)2122))))) ? (arr_3 [i_1 - 2] [i_1 - 3] [i_1 - 1]) : (((((/* implicit */_Bool) 3475081050359874105LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (3475081050359874105LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 2]))) > (((((/* implicit */_Bool) -3475081050359874093LL)) ? (((/* implicit */long long int) 4294967295U)) : (-3475081050359874093LL)))))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((983040U) >= (((/* implicit */unsigned int) ((/* implicit */int) ((4293984255U) >= (983040U)))))))), ((+(arr_2 [i_1 + 3] [i_1 - 4] [i_1])))));
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (15130612774073894239ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43896)))))) == (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) >= (3475081050359874105LL))))) <= (arr_3 [(short)14] [i_0] [i_0]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_10);
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)5068)) ? (((/* implicit */long long int) (+(1327253718U)))) : (min((var_8), (-3475081050359874105LL)))));
    var_18 = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned short)27886)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (var_8)))))));
}
