/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38671
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
    var_10 = ((/* implicit */int) ((max((((unsigned long long int) var_3)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -990117203)) ? (461021434U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) var_3))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)58191)))))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967284U)) ? (((/* implicit */long long int) 461021427U)) : (2096811308626486470LL)));
        var_12 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_5))))));
    }
    for (unsigned char i_1 = 2; i_1 < 10; i_1 += 4) 
    {
        var_13 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)9)))) ? (((/* implicit */int) (unsigned short)58176)) : (((/* implicit */int) (unsigned short)58187))));
        arr_6 [i_1] [i_1 - 2] = ((/* implicit */long long int) ((unsigned int) (unsigned char)235));
        var_14 ^= ((/* implicit */_Bool) (~((~(((/* implicit */int) var_5))))));
    }
    for (unsigned char i_2 = 1; i_2 < 9; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                {
                    arr_15 [i_2] [i_3] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) var_0)) || ((_Bool)0))))));
                    var_15 = ((/* implicit */signed char) var_6);
                    arr_16 [i_2] [i_4] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 551384712)) / (2096811308626486495LL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) : (6254527724897941166LL)));
                }
            } 
        } 
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */int) ((signed char) var_0))) : (max((((/* implicit */int) var_2)), (var_6)))));
        var_17 = ((/* implicit */long long int) 3833945870U);
        arr_17 [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned char) 3833945861U));
        arr_18 [i_2] = ((/* implicit */unsigned char) var_0);
    }
    for (unsigned char i_5 = 1; i_5 < 9; i_5 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (signed char)-64)) ? (((((/* implicit */int) arr_4 [i_5])) * (((/* implicit */int) (unsigned short)59903)))) : (((/* implicit */int) var_4))))));
        arr_22 [i_5] [i_5] = ((/* implicit */long long int) var_8);
        var_19 = ((/* implicit */signed char) ((max((-2096811308626486470LL), (((/* implicit */long long int) var_7)))) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-76)))));
    }
    var_20 = ((/* implicit */int) ((long long int) max((((((/* implicit */_Bool) -2096811308626486478LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)175)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)59914)))))));
    var_21 = ((/* implicit */int) var_4);
}
