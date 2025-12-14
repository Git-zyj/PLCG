/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4078
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)32);
        var_11 = ((/* implicit */int) arr_1 [i_0] [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */int) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) (unsigned short)27504)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (var_1)))))));
        arr_6 [i_1] [i_1] = ((((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */int) arr_1 [i_1] [i_1])) == (((/* implicit */int) arr_4 [(unsigned char)1]))))), ((short)-1)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) || (((/* implicit */_Bool) arr_3 [i_1] [i_1]))))) : (var_4));
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (3318590602093805537ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_3 [i_1] [i_1])))) ? ((((_Bool)0) ? (236411410) : (((/* implicit */int) (short)-1)))) : (((/* implicit */int) ((_Bool) 1181891191))))))));
        var_13 = ((/* implicit */short) ((_Bool) ((unsigned int) var_7)));
    }
    /* LoopSeq 1 */
    for (unsigned int i_2 = 3; i_2 < 19; i_2 += 3) 
    {
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((unsigned short) (unsigned char)228)))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min((min((((/* implicit */int) min(((unsigned char)28), (((/* implicit */unsigned char) (signed char)-118))))), (arr_8 [i_2 - 2] [i_2 - 3]))), ((~(((((((/* implicit */int) (short)-18405)) + (2147483647))) >> (((((/* implicit */int) (short)-1)) + (18))))))))))));
    }
    var_16 = ((/* implicit */unsigned short) 3318590602093805537ULL);
    /* LoopSeq 4 */
    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        var_17 = ((/* implicit */short) ((min((664411329), (((/* implicit */int) arr_1 [i_3] [i_3])))) >= (((/* implicit */int) arr_1 [i_3] [i_3]))));
        var_18 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)11)) ? (((/* implicit */int) (_Bool)1)) : (376963497)))), (((((/* implicit */_Bool) ((int) arr_10 [i_3] [i_3]))) ? ((~(var_8))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) >> (((/* implicit */int) arr_0 [(_Bool)1])))))))));
        var_19 = ((/* implicit */int) ((min((((/* implicit */int) var_6)), (arr_10 [i_3] [i_3]))) < ((~(((/* implicit */int) min((var_9), (((/* implicit */short) arr_0 [i_3])))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_13 [i_4]))) * (((/* implicit */int) arr_1 [i_4] [i_4]))));
        var_21 = ((/* implicit */unsigned int) max((((/* implicit */int) var_10)), ((+(((((/* implicit */_Bool) var_0)) ? (1846568087) : (664411329)))))));
        var_22 = -664411329;
    }
    for (short i_5 = 1; i_5 < 11; i_5 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_5] [i_5 - 1])) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) (_Bool)0)), (4294967284U)))))) : (((((/* implicit */_Bool) ((var_6) ? (arr_16 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (max((((/* implicit */unsigned int) 674063670)), (var_1))) : (((/* implicit */unsigned int) ((var_4) - (var_4))))))));
        var_24 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) (((~(((/* implicit */int) var_7)))) * (((/* implicit */int) max((var_0), (arr_1 [i_5] [i_5]))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)6682)), (3858932972U)))) ? (min((arr_16 [i_5]), (((/* implicit */long long int) -664411330)))) : (((/* implicit */long long int) max((var_1), (((/* implicit */unsigned int) arr_11 [i_5]))))))));
        arr_17 [i_5] = ((/* implicit */short) arr_16 [9U]);
        arr_18 [i_5] = max((((((/* implicit */_Bool) 577654399)) ? (((/* implicit */int) (short)-32756)) : (0))), (((((/* implicit */int) arr_9 [i_5])) * (((/* implicit */int) arr_15 [i_5 - 1])))));
    }
    /* vectorizable */
    for (short i_6 = 1; i_6 < 11; i_6 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */int) min((var_25), (arr_19 [(short)8])));
        var_26 = ((/* implicit */short) arr_8 [i_6] [i_6 - 1]);
        arr_21 [i_6] = ((/* implicit */unsigned char) arr_4 [i_6 + 1]);
    }
}
