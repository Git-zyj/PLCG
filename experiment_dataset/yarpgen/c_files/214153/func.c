/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214153
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((((((/* implicit */_Bool) 16206755409425652673ULL)) ? (var_13) : (((/* implicit */unsigned long long int) 8725724278030336LL)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned char)8] [(unsigned char)8]))))) : (((/* implicit */unsigned long long int) max((arr_0 [2LL]), (((arr_0 [4U]) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [2]))))))))));
            arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 3883609963U)) != (2ULL))))));
        }
        arr_5 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 14893233186662603145ULL)) && ((!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))))));
        var_16 -= ((/* implicit */short) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)19546)), (3883609963U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)132)) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) arr_2 [0] [i_0])) ? (16513957250754290873ULL) : (((/* implicit */unsigned long long int) 411357332U)))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [(short)6] [i_0])))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                {
                    var_17 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min(((unsigned short)2079), (((/* implicit */unsigned short) (short)-26020))))), (6957382806652010888ULL)));
                    arr_13 [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) var_5);
                    arr_14 [i_2] [i_3] [i_2] = arr_10 [i_3];
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 10779297267208948578ULL)))) : (max((var_4), (((/* implicit */unsigned long long int) var_2)))))))));
}
