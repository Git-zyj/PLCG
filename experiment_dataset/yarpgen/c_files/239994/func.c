/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239994
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
                {
                    arr_10 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) (_Bool)1))))) > (min((((((/* implicit */_Bool) var_0)) ? (arr_7 [i_0] [i_1] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) var_8))))));
                    var_11 &= ((/* implicit */unsigned char) min((-3026488095955350714LL), (-3026488095955350706LL)));
                }
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
                {
                    arr_14 [i_3] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_11 [(_Bool)1] [i_1] [i_1] [i_0]))))));
                    arr_15 [i_3] [i_1] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)58))) | (129207498U)))) ? ((~(3026488095955350705LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_3] [i_1])))))), ((~(arr_6 [i_0] [(_Bool)1])))));
                }
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
                {
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) >> (((arr_5 [9U] [9U]) - (939872380U)))))) & (((arr_5 [i_4] [i_4]) | (arr_5 [i_0] [i_1])))));
                    arr_19 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) -3026488095955350703LL);
                }
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
                {
                    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5)))))));
                    arr_23 [i_0] [i_1] [i_5] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_18 [i_0] [i_1] [i_5]))));
                    arr_24 [12LL] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (arr_5 [i_5] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (~(3026488095955350705LL))))));
                }
                arr_25 [i_0] [i_1] = ((/* implicit */unsigned char) 15924122250749941034ULL);
                arr_26 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_1])) < (((/* implicit */int) min((arr_1 [(unsigned char)12] [i_1]), (var_7)))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_3))));
}
