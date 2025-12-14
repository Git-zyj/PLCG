/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202802
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
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 7; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_12 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-19441))));
                    arr_7 [i_0] [(_Bool)1] [i_2] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (((/* implicit */long long int) 2467947321U)) : (2650799278649125443LL)))) ? (((((var_3) + (9223372036854775807LL))) >> (((/* implicit */int) (unsigned char)22)))) : ((~(2650799278649125440LL))))), (((/* implicit */long long int) 0U))));
                }
            } 
        } 
    } 
    var_13 = ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)54))) : (2650799278649125431LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) -6649713969260932711LL)) ? (6649713969260932712LL) : (3715589219128015613LL))))) : (((/* implicit */long long int) ((/* implicit */int) (((((_Bool)0) ? (-8102979167594838493LL) : (((/* implicit */long long int) 1706696350U)))) == (((/* implicit */long long int) ((/* implicit */int) min(((short)10393), (((/* implicit */short) var_0)))))))))));
    var_14 = var_2;
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -5539612130977643802LL)) ? (((/* implicit */int) (short)-31196)) : (((/* implicit */int) (_Bool)0))));
}
