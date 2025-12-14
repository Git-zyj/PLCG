/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29282
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) (-2147483647 - 1)))) ^ (((/* implicit */int) (((+(15818707033891503026ULL))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (2147483647) : (((/* implicit */int) var_4))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] = var_3;
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_13 = ((/* implicit */long long int) arr_4 [i_1]);
            arr_8 [i_1] = ((/* implicit */signed char) (~(2804030174U)));
            var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
            arr_9 [i_0] [i_1] [5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) / (var_8)))) ? ((-(((/* implicit */int) var_11)))) : (-1640695695)));
        }
        var_15 = ((/* implicit */int) (+(((((/* implicit */unsigned long long int) -1LL)) ^ (arr_1 [i_0] [i_0])))));
    }
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        arr_13 [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) var_11))));
        arr_14 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */int) var_4)) + (-2147483647))), (((((/* implicit */_Bool) -143047538791822617LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)62285))))))) ? (((/* implicit */int) (signed char)-38)) : (((2147483647) ^ ((~(((/* implicit */int) (signed char)-14))))))));
        var_16 = ((((/* implicit */_Bool) var_7)) ? (min(((+(var_7))), (((/* implicit */unsigned long long int) (unsigned char)0)))) : (((/* implicit */unsigned long long int) arr_10 [i_2] [i_2])));
        var_17 = ((/* implicit */unsigned char) ((arr_11 [i_2]) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)56440)) | (((/* implicit */int) (unsigned char)142))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)103)))))));
        arr_15 [i_2] [i_2] = ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65522)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-92)))))))) : (min((((/* implicit */unsigned long long int) var_3)), (max((arr_11 [i_2]), (var_7))))));
    }
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (max((var_7), (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_9)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        var_19 = (unsigned char)15;
        arr_19 [i_3] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)7184)) : (((/* implicit */int) (unsigned char)195)))));
    }
}
