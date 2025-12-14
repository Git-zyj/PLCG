/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53983
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) max(((unsigned short)4625), (((/* implicit */unsigned short) (unsigned char)29))));
                    var_19 = ((/* implicit */_Bool) (unsigned char)29);
                    var_20 -= ((/* implicit */short) (~((-(((/* implicit */int) arr_5 [i_2 - 1]))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_22 = ((/* implicit */signed char) arr_10 [i_3]);
        arr_12 [i_3] = ((/* implicit */unsigned long long int) var_10);
    }
    for (short i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        arr_16 [i_4] = ((/* implicit */short) ((unsigned char) ((arr_13 [i_4]) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) arr_13 [i_4])))));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                {
                    arr_23 [i_5] [(short)4] = ((/* implicit */short) (+(min((-8447258553881571952LL), (((/* implicit */long long int) (unsigned char)226))))));
                    var_23 = ((/* implicit */_Bool) ((short) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_19 [i_5])))), (((/* implicit */int) var_14)))));
                    var_24 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) 1220565423)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)226))) : (8699842969315904037ULL))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned char) ((max(((-(((/* implicit */int) var_9)))), (((((/* implicit */int) (short)23114)) / (-623290955))))) <= (((/* implicit */int) arr_19 [4LL]))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 2) 
    {
        arr_26 [(unsigned char)14] = ((/* implicit */short) ((unsigned long long int) ((short) arr_11 [i_7])));
        var_26 = ((/* implicit */signed char) ((((/* implicit */int) ((var_6) >= (var_0)))) % (((/* implicit */int) arr_11 [i_7]))));
    }
}
