/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41107
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_20 *= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) var_14)), (var_19)))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8485483222518476436LL)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) var_13))))), (((unsigned long long int) (unsigned char)0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_6) >> (((-4385534789812000943LL) + (4385534789812000975LL)))))) || (((/* implicit */_Bool) 4385534789812000934LL))))))));
        var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_22 = ((/* implicit */unsigned long long int) (+(((3071692304U) >> (((4385534789812000942LL) - (4385534789812000920LL)))))));
        var_23 = ((((/* implicit */_Bool) ((((/* implicit */long long int) 1U)) / (4385534789812000959LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1165929558733832663ULL)) ? (((/* implicit */int) (unsigned short)3558)) : (((/* implicit */int) (short)32752))))) : (((var_5) ? (4385534789812000934LL) : (((/* implicit */long long int) ((/* implicit */int) var_14))))));
        var_24 = ((/* implicit */signed char) var_9);
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                {
                    var_25 *= ((_Bool) (_Bool)1);
                    arr_12 [i_1] [i_1] [(unsigned short)10] = ((/* implicit */unsigned short) min(((~(((/* implicit */int) (unsigned short)43818)))), (((/* implicit */int) min((var_19), (var_4))))));
                }
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_16 [i_4] = ((/* implicit */unsigned int) ((long long int) min((((/* implicit */long long int) var_17)), (4385534789812000935LL))));
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21717))) <= (18446744073709551609ULL)))) >> (((((var_18) << (((986565842) - (986565824))))) - (3434610674U)))));
    }
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        for (signed char i_6 = 1; i_6 < 9; i_6 += 2) 
        {
            {
                var_27 = ((/* implicit */unsigned short) 3678582016U);
                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16663)))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-7005)) + (2147483647))) >> (((((/* implicit */int) var_14)) - (96)))))) : (var_9)));
                arr_24 [i_5] [(unsigned char)1] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((var_16) * (((/* implicit */unsigned int) 470339963))))) * (min((((/* implicit */unsigned long long int) 1223274991U)), (var_15))))) * (((/* implicit */unsigned long long int) (+(var_9))))));
            }
        } 
    } 
}
