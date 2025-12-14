/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239744
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [(signed char)22] = ((/* implicit */unsigned char) (signed char)-12);
        var_20 += ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) (unsigned char)227)))));
    }
    for (unsigned char i_1 = 1; i_1 < 23; i_1 += 3) 
    {
        arr_5 [i_1] [(short)15] = (signed char)-40;
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) || (((/* implicit */_Bool) (signed char)-1))))), (max(((~(((/* implicit */int) (unsigned char)2)))), (((((/* implicit */_Bool) arr_4 [(unsigned short)10])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_17)))))))))));
        var_22 = ((/* implicit */_Bool) arr_3 [i_1 + 1]);
        var_23 *= ((/* implicit */unsigned int) ((((min((((/* implicit */unsigned int) (_Bool)1)), (var_2))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)27843)) ? (((/* implicit */int) arr_3 [(unsigned char)16])) : (((/* implicit */int) (unsigned char)248))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_13), (((/* implicit */signed char) (_Bool)1)))))))) : ((+(((/* implicit */int) var_10))))));
    }
    for (int i_2 = 2; i_2 < 18; i_2 += 4) 
    {
        arr_9 [i_2] [i_2] &= ((/* implicit */long long int) max((2842232163U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (_Bool)1)))))));
        arr_10 [i_2] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2 - 2])) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) (signed char)0))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) arr_4 [i_2 - 2])) : (((/* implicit */int) var_7)))))));
        arr_11 [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [22])) ? (10748313905829229122ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)230)))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)29))) / (6446573568858307575LL)))))))));
        var_24 += ((/* implicit */unsigned char) (signed char)-8);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            var_25 *= ((/* implicit */unsigned long long int) min((arr_0 [i_3] [20]), ((signed char)21)));
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) max((min((((/* implicit */int) arr_14 [i_3])), (-1076010216))), ((~(((/* implicit */int) arr_15 [i_3] [i_4])))))))));
        }
        arr_19 [i_3] [i_3] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (~(-6446573568858307574LL)))) ? (((/* implicit */long long int) ((var_9) / (((/* implicit */int) arr_15 [i_3] [i_3]))))) : (((((/* implicit */_Bool) (unsigned short)3)) ? (452571663759733814LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-116)))))))));
        var_27 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) ((_Bool) arr_17 [i_3] [i_3]))), (((unsigned char) arr_15 [i_3] [i_3]))));
    }
    var_28 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) max((var_10), (max((var_19), ((signed char)-55))))))));
}
