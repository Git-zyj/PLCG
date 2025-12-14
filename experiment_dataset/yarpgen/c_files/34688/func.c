/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34688
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (signed char)42);
        var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */int) var_1)) < (var_8)))) : (arr_0 [i_0]))) + (min(((~(((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) ((unsigned short) (short)(-32767 - 1))))))));
        var_20 *= ((/* implicit */_Bool) var_17);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (262143LL))) < (((/* implicit */long long int) ((/* implicit */int) min(((signed char)42), (((/* implicit */signed char) (_Bool)1)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)42))) : ((+(((((/* implicit */long long int) ((/* implicit */int) (signed char)-43))) / (var_7)))))));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) (_Bool)1);
        var_21 = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) 14770359382559331821ULL)) ? (var_3) : (var_3))), (((/* implicit */long long int) min((((/* implicit */unsigned short) arr_5 [i_1])), (var_0)))))) / (min((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-41))))), ((-(262143LL)))))));
    }
    for (long long int i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) 3102672278081706052LL))));
                        var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)42))));
                    }
                } 
            } 
        } 
        arr_18 [i_2] = ((/* implicit */unsigned char) var_7);
        var_24 = min(((~(-262144LL))), (((/* implicit */long long int) (~(((/* implicit */int) var_13))))));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 21; i_6 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_2))));
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            for (int i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                {
                    arr_27 [i_6] [i_6] [i_6] [i_8] |= ((/* implicit */short) ((((/* implicit */int) (signed char)-43)) != (((/* implicit */int) (unsigned char)164))));
                    var_26 = ((/* implicit */unsigned char) arr_9 [i_6] [i_6]);
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_9 = 1; i_9 < 14; i_9 += 3) 
    {
        arr_30 [i_9] = ((/* implicit */signed char) ((int) ((arr_17 [i_9 + 1] [i_9] [18U]) % (var_16))));
        arr_31 [i_9] [i_9 + 3] = ((/* implicit */unsigned short) (~(((((-262166LL) + (9223372036854775807LL))) >> (((arr_8 [i_9] [(signed char)11]) + (7389872252957785934LL)))))));
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) arr_29 [i_9] [i_9 - 1]))));
        var_28 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_9 - 1])) ? (((/* implicit */int) arr_28 [i_9 + 1])) : (((/* implicit */int) var_9))));
    }
    var_29 = ((/* implicit */int) var_17);
    var_30 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_17))))) : (-262143LL));
}
