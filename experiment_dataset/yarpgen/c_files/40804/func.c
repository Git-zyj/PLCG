/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40804
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))));
    var_12 = ((/* implicit */unsigned char) max((((((/* implicit */int) var_10)) % (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)236))));
    var_13 ^= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (~((~(arr_0 [i_0]))))))));
        var_15 = ((/* implicit */long long int) max(((_Bool)0), ((_Bool)1)));
        var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)101))) : (2583942839274457240LL)));
    }
    for (unsigned int i_1 = 1; i_1 < 15; i_1 += 3) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */long long int) ((_Bool) (+(max((1322940950000660678LL), (((/* implicit */long long int) arr_2 [i_1] [i_1])))))));
        var_17 = min((((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_1] [i_1])))))))), (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) % (7616838359930572714LL))));
        arr_5 [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (signed char)70)), (((unsigned long long int) min((var_7), (6403019159342231201LL))))));
        arr_6 [(short)14] |= ((/* implicit */_Bool) arr_3 [i_1 + 3] [(signed char)2]);
        var_18 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_3 [i_1] [i_1])) || (((/* implicit */_Bool) (unsigned char)69))))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_19 = ((unsigned char) arr_8 [i_2]);
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (+(2185498585U))))));
        var_21 = ((/* implicit */_Bool) 2583942839274457230LL);
        /* LoopSeq 4 */
        for (unsigned char i_3 = 3; i_3 < 19; i_3 += 4) /* same iter space */
        {
            var_22 -= ((/* implicit */long long int) arr_9 [i_3] [10] [i_3]);
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) var_4))));
            var_24 = ((/* implicit */int) ((short) (_Bool)1));
        }
        for (unsigned char i_4 = 3; i_4 < 19; i_4 += 4) /* same iter space */
        {
            arr_14 [i_2] [(short)0] [i_2] = ((/* implicit */long long int) ((_Bool) (signed char)-87));
            var_25 = var_10;
        }
        for (unsigned char i_5 = 3; i_5 < 19; i_5 += 4) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_15 [i_2] [20LL] [i_5])) >= (((/* implicit */int) var_3))))))))));
            arr_18 [i_2] = var_6;
        }
        for (unsigned char i_6 = 3; i_6 < 19; i_6 += 4) /* same iter space */
        {
            arr_21 [i_2] [i_2] = ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) arr_11 [i_2] [i_2])))));
            arr_22 [i_2] [i_2] = ((/* implicit */short) (!(((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) > (-2583942839274457246LL)))));
        }
    }
    var_27 = var_10;
}
