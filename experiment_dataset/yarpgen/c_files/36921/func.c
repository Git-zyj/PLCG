/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36921
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned char) min((((unsigned short) ((656867892) >> (((((/* implicit */int) var_0)) + (9424)))))), (((/* implicit */unsigned short) (short)31))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) max(((unsigned short)31), ((unsigned short)31)));
                var_15 = ((/* implicit */unsigned int) ((short) ((unsigned char) max((arr_4 [i_0]), (((/* implicit */int) var_5))))));
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */short) max(((-(((/* implicit */int) arr_3 [i_0] [i_1])))), ((~(var_4)))));
                var_16 += ((/* implicit */short) var_9);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        for (int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            {
                var_17 = ((/* implicit */int) arr_10 [i_2]);
                arr_14 [i_3] = ((/* implicit */signed char) ((arr_11 [i_2] [i_3]) % (((/* implicit */long long int) (((!(var_8))) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
                arr_15 [i_2] = ((/* implicit */short) (-(((/* implicit */int) (signed char)-1))));
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((((/* implicit */_Bool) ((int) (+(((/* implicit */int) (unsigned short)28)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2]))) : (var_7)))));
                var_19 = (-(((/* implicit */int) arr_13 [i_2] [i_2])));
            }
        } 
    } 
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-1)))) ? (max((((/* implicit */unsigned long long int) var_11)), (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_9))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max((((/* implicit */int) (short)27186)), (var_4)))))) : (((((/* implicit */_Bool) max((((/* implicit */short) var_8)), (var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)25300), (((/* implicit */unsigned short) var_2)))))) : (var_7)))));
}
