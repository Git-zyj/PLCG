/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45195
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
    var_19 |= ((/* implicit */unsigned char) min((((/* implicit */long long int) var_13)), (((((/* implicit */long long int) (+(((/* implicit */int) var_17))))) / (((((/* implicit */_Bool) (unsigned short)21273)) ? (4225916251636427039LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
    var_20 = ((/* implicit */unsigned char) var_16);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((unsigned short) arr_1 [i_1 + 1] [i_0]))) : (min(((-(arr_4 [i_0] [(unsigned short)0] [i_1]))), (((/* implicit */int) (_Bool)1))))));
            arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)58598))))), (3345847586U)))));
            var_21 = ((/* implicit */unsigned int) min((max((((/* implicit */int) arr_2 [i_0])), (min((((/* implicit */int) (short)12969)), (var_16))))), (((((/* implicit */int) (unsigned short)26414)) << (((/* implicit */int) (_Bool)0))))));
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) 663007488)), ((+(3455182834U)))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (min((((/* implicit */unsigned int) (_Bool)1)), (284841476U)))))))))));
            arr_8 [i_1] = ((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_5 [i_1] [i_1 + 1] [i_1]))));
        }
        for (int i_2 = 1; i_2 < 21; i_2 += 1) 
        {
            var_23 *= ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) arr_11 [16LL] [16LL] [i_2 + 1]))) < (((int) ((((arr_10 [i_0] [i_0]) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0] [i_2])) - (32220))))))));
            var_24 += ((/* implicit */unsigned short) var_14);
            var_25 *= ((/* implicit */_Bool) max((((/* implicit */long long int) var_18)), (max(((-(9223372036854775807LL))), (((var_12) & (((/* implicit */long long int) ((/* implicit */int) var_14)))))))));
        }
        var_26 = ((/* implicit */unsigned int) var_6);
        arr_12 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (-909108424))) : (((/* implicit */int) (unsigned short)51793)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) * (-6LL))))))));
        var_27 = ((/* implicit */unsigned short) (~(arr_0 [i_0])));
        arr_13 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-12971)) ? (max((0), (((/* implicit */int) (unsigned char)14)))) : (((/* implicit */int) (unsigned short)22403))))), (min((min((((/* implicit */long long int) (_Bool)1)), (-1544641458065413134LL))), (((/* implicit */long long int) (unsigned short)3584))))));
    }
}
