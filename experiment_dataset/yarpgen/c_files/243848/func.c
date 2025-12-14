/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243848
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_19 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3634555902U)) ? (((/* implicit */int) (signed char)51)) : (((/* implicit */int) (unsigned char)250))))), (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (((((/* implicit */_Bool) var_2)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_15))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) (+((-(arr_0 [(signed char)14])))));
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_20 = ((((/* implicit */_Bool) arr_4 [i_1])) ? (((int) arr_4 [i_1])) : (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) - (((/* implicit */int) (signed char)61))))) ? (((int) arr_4 [i_1])) : (((/* implicit */int) ((signed char) arr_3 [i_1] [i_1]))))));
        /* LoopNest 2 */
        for (short i_2 = 4; i_2 < 21; i_2 += 4) 
        {
            for (unsigned int i_3 = 1; i_3 < 22; i_3 += 4) 
            {
                {
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((unsigned short) (short)3768))) : (((/* implicit */int) min((arr_6 [i_1] [i_2 - 4]), (((/* implicit */short) var_11))))))))));
                    var_22 = ((/* implicit */_Bool) max((var_22), (((((/* implicit */_Bool) arr_5 [i_2])) && (((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_3))))))));
                }
            } 
        } 
    }
    var_23 -= ((/* implicit */signed char) (~((-(((var_6) % (((/* implicit */unsigned long long int) var_14))))))));
    var_24 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            for (signed char i_6 = 0; i_6 < 17; i_6 += 4) 
            {
                {
                    arr_19 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-27706)))))));
                    var_25 = ((/* implicit */long long int) ((short) arr_16 [3LL] [i_5] [i_6]));
                }
            } 
        } 
    } 
    var_26 &= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-29931))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)6)) || (((/* implicit */_Bool) var_6))))) : (((((((/* implicit */int) var_1)) + (2147483647))) >> (((var_12) - (5314930222968911545ULL))))))))));
}
