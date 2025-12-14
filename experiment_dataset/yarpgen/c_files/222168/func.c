/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222168
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
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_15 [i_4] [i_4] [i_0] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) || ((_Bool)0)))) != (((((/* implicit */_Bool) arr_7 [i_4 - 3] [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)49181)))))) ? ((~(((/* implicit */int) ((arr_6 [i_3] [(unsigned char)2] [11LL] [i_3]) == (var_13)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_3] [1LL] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)31))) : (arr_4 [i_2] [i_1] [i_0]))) > (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4 - 2] [i_4 + 1] [i_4 + 1] [(signed char)14] [i_2 - 1]))))))));
                                arr_16 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)22)) ? (5962346648895990060ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_4))))))) ? (((((/* implicit */_Bool) arr_7 [i_3] [13] [i_1])) ? (((/* implicit */int) arr_10 [i_4] [i_2] [i_1] [i_0])) : (((/* implicit */int) var_6)))) : ((((_Bool)1) ? (var_16) : (((/* implicit */int) ((((/* implicit */int) arr_11 [i_3] [i_0])) != (((/* implicit */int) var_8)))))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_6);
                    arr_18 [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) ((((((/* implicit */long long int) ((/* implicit */int) var_12))) == (var_13))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) != (arr_2 [i_0])))) : (((/* implicit */int) ((((/* implicit */long long int) var_16)) > (var_15)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) var_1);
}
