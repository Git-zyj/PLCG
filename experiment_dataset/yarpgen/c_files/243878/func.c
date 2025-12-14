/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243878
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
    var_13 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) var_4)), (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) | (131071U))))) / (((/* implicit */unsigned int) min((var_3), (((/* implicit */int) (unsigned short)46650)))))));
    var_14 = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) var_7)) ? (-8053323974816172249LL) : (((/* implicit */long long int) var_7)))), (((((/* implicit */_Bool) 8053323974816172235LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-8053323974816172235LL))))) == (((/* implicit */long long int) 359104638))));
    var_15 = var_5;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) min(((short)28540), (((/* implicit */short) (signed char)111))))), (((arr_3 [i_0] [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_0 [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2121027192U)) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_2])), (var_2)))) : (((/* implicit */int) min(((unsigned char)192), (var_0))))))) : (((((arr_3 [i_0] [i_0] [i_2]) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)4))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (8053323974816172234LL))))))));
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) min(((unsigned char)64), (((/* implicit */unsigned char) var_10))))) : (((/* implicit */int) (short)1957))));
                    arr_7 [i_0] [i_0] [8LL] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) 359104621)), (4219206189U)));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_7);
}
