/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33919
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned int) ((short) min((min((arr_3 [i_0] [i_0]), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))))))));
                arr_5 [i_0] [i_1 - 1] [i_1] = ((/* implicit */_Bool) arr_2 [i_0]);
            }
        } 
    } 
    var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+((+(-5159575233770879822LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : ((~(var_16)))));
    var_21 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_2)))) & (((((/* implicit */_Bool) max((-5159575233770879822LL), (((/* implicit */long long int) var_6))))) ? (6256196795027079616ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
    var_22 = var_10;
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            {
                arr_10 [i_2] [i_2] [(unsigned char)3] = (((-(-3522126350193570140LL))) >= (((/* implicit */long long int) ((/* implicit */int) ((short) ((arr_7 [i_3] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_2]))) : (var_10)))))));
                arr_11 [i_2] [i_3] &= ((/* implicit */long long int) (((-((-(var_2))))) >> (((min(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20611))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) arr_9 [(unsigned short)12] [i_2] [i_3])))) - (10678652784376137024ULL)))));
                arr_12 [i_2] [i_3] = ((/* implicit */unsigned short) max((((24ULL) ^ (((/* implicit */unsigned long long int) var_14)))), ((~(((var_6) ? (arr_6 [9LL] [9LL]) : (((/* implicit */unsigned long long int) -9054868791087760510LL))))))));
            }
        } 
    } 
}
