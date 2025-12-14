/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200313
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
    var_10 = var_1;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) var_8);
        var_11 = ((/* implicit */unsigned short) arr_1 [i_0]);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) % (((/* implicit */int) (signed char)-70))));
        arr_7 [i_1] [i_1] = ((/* implicit */int) ((unsigned char) 18446744073709551587ULL));
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((var_8) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (signed char)47)))))))));
    }
    /* LoopSeq 2 */
    for (long long int i_2 = 4; i_2 < 20; i_2 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((signed char) var_0)))));
        var_14 |= ((/* implicit */unsigned char) (((~(((/* implicit */int) var_7)))) * (((/* implicit */int) var_9))));
    }
    for (long long int i_3 = 4; i_3 < 20; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_4 = 1; i_4 < 21; i_4 += 4) 
        {
            arr_16 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (((((/* implicit */unsigned long long int) arr_9 [i_4])) / (((arr_12 [i_4]) | (((/* implicit */unsigned long long int) 0))))))));
            var_15 |= ((/* implicit */int) 4194303ULL);
        }
        for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            var_16 = ((/* implicit */int) max((var_1), ((!(((/* implicit */_Bool) var_5))))));
            var_17 = ((/* implicit */signed char) ((((0ULL) / (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3]))) / (var_4)))))) * (((/* implicit */unsigned long long int) -528313397))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_21 [i_3] = ((/* implicit */short) ((unsigned short) ((_Bool) (signed char)70)));
            var_18 = ((/* implicit */_Bool) arr_13 [i_3]);
            var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) var_7))))))), (((((((/* implicit */_Bool) arr_20 [i_6])) ? (((/* implicit */unsigned int) var_5)) : (var_4))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-119)))))));
            var_20 = ((/* implicit */signed char) (!((_Bool)0)));
        }
        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)70)))))));
        var_22 = (+(400626969));
        var_23 = ((/* implicit */signed char) min((var_23), (((signed char) max((arr_18 [i_3] [i_3] [i_3]), (((/* implicit */long long int) ((unsigned int) arr_18 [i_3] [i_3] [i_3]))))))));
        arr_22 [i_3] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)14)), (var_4)))) ? (((((/* implicit */_Bool) var_5)) ? (var_6) : (1206859672U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_6)))))), (((/* implicit */unsigned int) (((~(((/* implicit */int) var_3)))) < (((((/* implicit */int) var_1)) - (((/* implicit */int) var_8)))))))));
    }
    var_24 = ((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) var_5)) + ((~(var_6)))))));
}
