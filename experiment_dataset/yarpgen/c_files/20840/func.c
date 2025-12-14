/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20840
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))));
        var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 *= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)51201)) ? (arr_3 [i_1]) : (var_8))), (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))), ((~(min((((/* implicit */long long int) var_0)), (var_5)))))));
        arr_5 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 4991021628964216279LL)))))))) ? (((/* implicit */unsigned long long int) ((((_Bool) (unsigned short)51203)) ? (((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */int) arr_4 [(_Bool)1])))) : (max((var_13), (((/* implicit */int) var_3))))))) : (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)51463))))), (((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16347))) : (17347837254860705198ULL)))))));
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */int) (unsigned short)53660)) : (959436470)));
        var_19 = ((/* implicit */unsigned short) arr_4 [i_1]);
    }
    for (long long int i_2 = 3; i_2 < 19; i_2 += 1) 
    {
        var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_7 [i_2] [i_2 + 1]), (arr_7 [i_2] [i_2 + 2])))) ? (((((/* implicit */_Bool) var_15)) ? (max((15642396511554065977ULL), (((/* implicit */unsigned long long int) (unsigned short)7917)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)12)), ((short)32760))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_2 - 1] [i_2 + 3])) >> (((((/* implicit */int) arr_8 [12ULL])) - (51397))))))));
        var_21 -= ((/* implicit */_Bool) (~(((/* implicit */int) (short)-24616))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 1) 
        {
            for (long long int i_4 = 2; i_4 < 20; i_4 += 1) 
            {
                {
                    arr_14 [i_2] [i_2] [i_4 + 1] = ((/* implicit */unsigned long long int) var_1);
                    arr_15 [i_2] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3584)) ? (arr_12 [i_2] [i_2]) : (((/* implicit */int) arr_8 [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (min((((/* implicit */unsigned long long int) arr_8 [i_2])), (var_15))))), (((/* implicit */unsigned long long int) ((unsigned char) arr_13 [i_2 + 3])))));
                    var_22 = ((/* implicit */long long int) arr_13 [i_2 - 2]);
                }
            } 
        } 
    }
    var_23 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((((/* implicit */short) var_12)), (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_3)))) : (var_15)))));
    var_24 += max(((+((+(((/* implicit */int) var_3)))))), (((/* implicit */int) ((unsigned short) var_5))));
}
