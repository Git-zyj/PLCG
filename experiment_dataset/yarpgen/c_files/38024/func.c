/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38024
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) min(((-(((/* implicit */int) (unsigned short)57344)))), (((/* implicit */int) (short)1539)))))));
                    var_18 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_5 [i_1 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43124)))))))) ? ((~(((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1 - 2] [i_1 - 2])) || (((/* implicit */_Bool) arr_8 [i_1 - 2] [i_1 - 3])))))));
                    arr_9 [i_2] [i_1 + 1] [i_2] = max((25165824U), (((((((/* implicit */unsigned int) ((/* implicit */int) var_16))) + (1U))) * (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-16384))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) var_8);
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max((var_16), (((((/* implicit */_Bool) 8016935361824914220LL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -8016935361824914200LL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_10))))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_3 = 3; i_3 < 23; i_3 += 3) 
    {
        arr_12 [i_3 - 1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(10U)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)38))))) ? (((/* implicit */int) ((signed char) 4294967295U))) : (((/* implicit */int) max((arr_11 [i_3 - 3]), (min((((/* implicit */unsigned short) var_0)), ((unsigned short)30423))))))));
        arr_13 [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_11))));
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_3])) ? ((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) var_7))))) : (((/* implicit */int) (signed char)-124))));
    }
    for (signed char i_4 = 1; i_4 < 9; i_4 += 3) 
    {
        arr_17 [i_4] [i_4 + 2] = ((/* implicit */int) var_10);
        arr_18 [i_4 + 3] = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-53)) + (2147483647))) >> (((((/* implicit */int) (signed char)-35)) + (45)))));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) (signed char)-10)))))));
    }
}
