/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199133
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
    var_18 = ((/* implicit */unsigned short) ((_Bool) var_0));
    var_19 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 2199023255550ULL)) ? (12445066161115774309ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43646))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 6; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)43623)) : (((/* implicit */int) var_8)))) | (((/* implicit */int) ((_Bool) (unsigned char)128))))) >> (((/* implicit */int) ((unsigned short) 216172782113783808ULL)))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    var_21 = ((((((/* implicit */_Bool) 14212929191434274411ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((unsigned int) var_11)))) >= (((/* implicit */unsigned int) ((var_7) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)77))))));
                    var_22 *= (~(((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 1986144946U)))) - (((var_14) % (137438953408ULL))))));
                    var_23 = ((/* implicit */unsigned short) (+(((long long int) (unsigned char)128))));
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (arr_2 [i_0] [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_2] [i_2] [i_2])))))))) ? (((unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_2]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)15360)))))) & ((~(arr_7 [(short)6] [i_2] [i_0] [i_0]))))))))));
                    arr_8 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32766)))))))) : (2305772640469516288LL)));
                }
                arr_9 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) var_1))))) ^ (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (2905419620U)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)55376))))) : ((((~(var_14))) << (((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_1 + 1])) ? (((/* implicit */int) (unsigned short)2823)) : (((/* implicit */int) var_3)))) - (2762)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2823)) ? (((/* implicit */int) (short)-29161)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((var_7) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))))) : (var_14)));
}
