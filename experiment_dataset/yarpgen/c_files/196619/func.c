/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196619
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
    var_17 ^= ((/* implicit */long long int) var_13);
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            var_18 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) (signed char)1))))));
            var_19 = ((/* implicit */unsigned char) arr_3 [i_0 + 1] [i_1]);
        }
        for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) (+(var_13)))))));
            var_21 = ((6168877455834361177ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                arr_11 [i_0] [6LL] [(unsigned short)13] = ((/* implicit */unsigned int) max((((int) ((((/* implicit */_Bool) (short)29030)) && (((/* implicit */_Bool) -506417671))))), (((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) (short)(-32767 - 1)))))) ? (((var_8) - (((/* implicit */int) (signed char)69)))) : (((/* implicit */int) (_Bool)0))))));
                arr_12 [i_0] [i_0] [(short)5] = ((/* implicit */signed char) var_10);
            }
        }
        arr_13 [i_0] [i_0] = ((/* implicit */long long int) max(((-(max((((/* implicit */unsigned long long int) var_10)), (16893352197785527293ULL))))), (((/* implicit */unsigned long long int) ((short) (~(((/* implicit */int) var_6))))))));
        var_22 = ((/* implicit */unsigned char) max((0ULL), (((/* implicit */unsigned long long int) -506417656))));
    }
    for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
    {
        var_23 = ((/* implicit */long long int) (~(min((293488256), (((/* implicit */int) arr_15 [i_4]))))));
        var_24 = ((/* implicit */short) (~(((/* implicit */int) (short)-20378))));
        var_25 = ((/* implicit */long long int) var_7);
        var_26 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 8578277511197703805ULL)) && (((/* implicit */_Bool) -506417672))));
    }
    /* LoopNest 2 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            {
                var_27 ^= ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))) % (max((var_0), (((/* implicit */long long int) (signed char)-70)))))) ^ (((/* implicit */long long int) min((((/* implicit */int) (short)-15993)), (((int) (unsigned short)55074)))))));
                var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)40848))) / (arr_17 [i_5]))))));
                arr_20 [i_5] [(signed char)10] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_6] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_9 [i_5] [14LL] [(signed char)14])) : (((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */int) ((short) arr_10 [i_5] [i_5 - 1] [i_6]))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-110)) < (((/* implicit */int) (signed char)-69)))))))));
            }
        } 
    } 
}
