/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46379
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_15 = (!(((/* implicit */_Bool) (unsigned short)56362)));
        var_16 = ((/* implicit */unsigned short) (~(((max((2849725497U), (((/* implicit */unsigned int) 2147483625)))) >> (((/* implicit */int) (unsigned char)1))))));
        var_17 &= ((/* implicit */long long int) (short)-32756);
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)247)) || (((/* implicit */_Bool) 17923954186391630887ULL)))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((2849725522U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1644))))))))) : (((((/* implicit */_Bool) ((long long int) var_2))) ? (((((/* implicit */_Bool) 2849725517U)) ? (((/* implicit */unsigned long long int) 1445241802U)) : (var_12))) : (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */unsigned int) (unsigned short)49622)))))))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((unsigned int) 2849725521U)))));
    }
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 24; i_1 += 3) 
    {
        for (int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 4; i_3 < 24; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 1; i_4 < 24; i_4 += 3) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_20 &= ((/* implicit */unsigned long long int) (+(570499300U)));
                                var_21 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((-6291557128853102999LL), (((/* implicit */long long int) (unsigned char)245))))) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2638409747060103058LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)186))) : (1379221833U)))))), ((-(((unsigned long long int) (unsigned short)7))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) 783651709U))) && (((/* implicit */_Bool) arr_15 [i_1] [i_1 + 1] [i_1] [i_1]))));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(arr_5 [i_2]))) << (((min((var_4), (((/* implicit */unsigned int) (unsigned short)49604)))) - (49593U)))))) ? (((unsigned long long int) ((var_4) < (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) : ((-(12008885376160918434ULL)))));
                                var_24 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)163)) - (150)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((4294967292U), (((/* implicit */unsigned int) (unsigned short)15893))))) ? ((~(((/* implicit */int) (unsigned short)51774)))) : (((/* implicit */int) (unsigned char)246))))) : (max((arr_6 [i_1] [i_1 - 2] [9ULL]), (((((/* implicit */_Bool) 1445241775U)) ? (2849725495U) : (4294967294U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
