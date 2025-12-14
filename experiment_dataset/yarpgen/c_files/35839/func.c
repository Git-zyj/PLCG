/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35839
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
    var_15 -= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) min((var_4), (var_4)))) : (((/* implicit */int) var_5))))), ((~(3942952803U)))));
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 352014500U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32536))) : (352014463U)))) ? ((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (max((((/* implicit */unsigned long long int) var_11)), (var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    var_17 = ((/* implicit */unsigned short) ((min((((long long int) (signed char)-40)), (((/* implicit */long long int) (short)20)))) / (((/* implicit */long long int) 922064806U))));
                    var_18 -= (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_0] [i_0])) ? (14710022566911268698ULL) : (((/* implicit */unsigned long long int) var_7))))) ? (((((/* implicit */int) var_8)) % (((/* implicit */int) arr_5 [i_2] [i_0] [i_0] [i_0])))) : (((/* implicit */int) var_8)))));
                    var_19 = ((/* implicit */unsigned char) var_11);
                    var_20 = ((/* implicit */signed char) ((((((/* implicit */int) arr_5 [i_2 - 1] [i_2 + 2] [(unsigned short)9] [i_2 + 3])) ^ (((/* implicit */int) arr_5 [i_2 - 1] [i_2 + 2] [i_2] [i_2])))) >> (((-1278602355) + (1278602385)))));
                }
                var_21 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) * (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)33)) << (((((/* implicit */int) (short)16206)) - (16189)))))) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (signed char)-40))))));
                var_22 &= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) (!(arr_0 [9LL])))) * (((/* implicit */int) arr_0 [i_0]))))) / (min((((/* implicit */long long int) arr_4 [i_0] [(short)15] [i_0])), ((~(var_3)))))));
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-25))))) ? (arr_6 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))))))));
                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((min((arr_0 [i_1]), (arr_0 [(short)0]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (arr_1 [i_1]) : (arr_1 [i_1])))) : (min((var_1), (((/* implicit */unsigned int) var_11)))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) % (((((/* implicit */_Bool) (unsigned short)27633)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65514))) : (var_1)))))) ? (((/* implicit */unsigned int) var_2)) : (var_7)));
}
