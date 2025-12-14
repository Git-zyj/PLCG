/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205583
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
    var_16 *= min((max(((~(-290120950))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_15)) : (var_9))))), (max((min((var_7), (var_7))), (((/* implicit */int) var_10)))));
    var_17 &= ((/* implicit */int) var_15);
    var_18 = ((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)72))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) var_6);
                arr_4 [i_1] = ((/* implicit */short) ((min((((/* implicit */int) (unsigned char)255)), (arr_2 [i_1] [i_0] [i_1]))) / ((~(((/* implicit */int) var_5))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
    {
        arr_8 [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) > (((/* implicit */int) arr_7 [i_2]))));
        var_20 = ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_13))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2]))));
        var_21 += ((/* implicit */int) ((((((var_12) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))) > ((+(((/* implicit */int) (signed char)80))))));
    }
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) (unsigned char)0);
        arr_11 [(_Bool)0] = ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) (signed char)82)) ? (12986596660813790438ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)33))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)255)) : (0)))))), (((/* implicit */unsigned long long int) (((~(arr_10 [i_3]))) > (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
        var_23 |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (signed char)33))))))), (var_2)));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)87)) ? (1558327313) : (1220858795)));
        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
        var_26 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (signed char)80))))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_27 *= ((/* implicit */unsigned char) ((2345320386706081680LL) << (((1048575) - (1048574)))));
        var_28 = ((/* implicit */int) var_8);
    }
}
