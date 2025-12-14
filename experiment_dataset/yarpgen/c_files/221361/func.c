/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221361
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] &= ((/* implicit */unsigned long long int) max((((((((/* implicit */_Bool) (short)-2748)) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) (unsigned char)36)))) <= (((/* implicit */int) (unsigned char)202)))), ((!(((/* implicit */_Bool) var_4))))));
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)228))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_12))))) : (min((var_0), (((/* implicit */unsigned long long int) (signed char)-43))))))));
        var_15 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) / (((/* implicit */unsigned long long int) (+(var_4))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 22; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 2; i_5 < 23; i_5 += 2) 
                        {
                            {
                                arr_17 [i_3] = ((/* implicit */signed char) ((min((((((/* implicit */long long int) ((/* implicit */int) var_12))) & (var_9))), (min((((/* implicit */long long int) var_12)), (var_5))))) & (((/* implicit */long long int) (~(var_7))))));
                                arr_18 [i_1] [i_2] [i_2] [i_3] [i_2] [i_4] [i_5 + 1] = ((/* implicit */unsigned char) (-(max((var_9), (((/* implicit */long long int) var_1))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */signed char) var_4);
                    arr_19 [i_1] [2LL] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_7) - (var_7))))));
                }
            } 
        } 
        arr_20 [i_1] = ((/* implicit */long long int) min((((/* implicit */int) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_13)))) && (((/* implicit */_Bool) var_7))))), ((((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (var_10)))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) -8093359748021749695LL)) ? (3604321099U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121)))));
        var_18 &= ((/* implicit */int) ((((/* implicit */_Bool) 0)) && (((/* implicit */_Bool) 1614197247808735018LL))));
        var_19 &= ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_11))) / (((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))));
    }
    var_20 &= var_12;
}
