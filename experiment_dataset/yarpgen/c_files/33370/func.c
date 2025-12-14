/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33370
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */short) (_Bool)1)), (min((arr_0 [i_0]), (arr_0 [i_0])))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(862889785))))));
            arr_6 [i_0] [i_1] &= ((/* implicit */unsigned char) ((((((/* implicit */int) ((unsigned short) var_14))) | (((/* implicit */int) var_9)))) >= (((((/* implicit */_Bool) 862889785)) ? (597248448) : (((/* implicit */int) (unsigned char)164))))));
            var_19 ^= ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_10)) > (597248448))));
        }
        arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) << (((var_14) - (3437635263U)))));
    }
    for (int i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
    {
        var_20 += ((/* implicit */short) (((-(597248448))) > ((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-14964)) : (((/* implicit */int) (_Bool)0))))))));
        var_21 &= min((((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-1))))) % (((((/* implicit */_Bool) -886362021)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 15861413612313655992ULL))))));
    }
    for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 4) 
    {
        arr_13 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((long long int) (signed char)-121)) : (((/* implicit */long long int) ((((/* implicit */int) var_4)) >> (((4878136768935015218LL) - (4878136768935015193LL))))))));
        var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) var_2)) ? (var_3) : (-597248449))) > (((/* implicit */int) ((((/* implicit */int) arr_0 [i_3 - 1])) <= (((/* implicit */int) arr_0 [i_3 + 3])))))));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            for (int i_6 = 0; i_6 < 23; i_6 += 2) 
            {
                {
                    var_23 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)203))) * (914952058U)))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (914952055U) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) ? (min((((/* implicit */long long int) (_Bool)1)), (-3443924339689480843LL))) : (((/* implicit */long long int) 142581425))))));
                    arr_24 [i_4 - 1] [11] [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) min((arr_15 [i_5]), (((/* implicit */unsigned short) arr_22 [1] [i_5] [i_4 - 1] [i_5])))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_24 = ((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (short)-7909)) + (2147483647))) >> (((/* implicit */int) (_Bool)0)))))))), (((long long int) 914952055U))));
            var_25 = ((/* implicit */unsigned int) min((((1876680239) % (((/* implicit */int) arr_19 [i_4 - 1] [i_4 - 1])))), ((-(1876680243)))));
        }
    }
    var_26 = ((/* implicit */unsigned int) (((!((!(((/* implicit */_Bool) (unsigned short)57223)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (!(var_5)))))))));
}
