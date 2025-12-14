/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19210
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
    var_15 = ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)118)), (-1504353390)))) ? (var_6) : (((/* implicit */long long int) ((unsigned int) max((((/* implicit */unsigned short) var_1)), (var_8))))));
    var_16 = ((/* implicit */long long int) (unsigned char)31);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) (short)-1)) ? (arr_4 [i_3 + 1] [i_2] [i_1] [i_0]) : (((/* implicit */long long int) arr_2 [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_3 - 1])) ? (arr_4 [i_1] [i_1] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)71)))))));
                        var_18 *= (unsigned short)32768;
                        var_19 = ((/* implicit */short) var_9);
                    }
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */_Bool) min(((signed char)-112), ((signed char)-116)));
                        arr_13 [i_2] [i_2] = ((/* implicit */unsigned char) (signed char)95);
                    }
                    arr_14 [i_0] [i_1] [i_2] |= ((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))) : (var_2));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)64980))))) % (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((long long int) (unsigned short)32465)) : (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_2])))))))));
                    var_21 += ((/* implicit */signed char) (unsigned char)46);
                    var_22 = ((/* implicit */unsigned long long int) (unsigned char)31);
                }
            } 
        } 
    } 
}
