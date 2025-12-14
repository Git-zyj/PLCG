/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227096
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
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) var_13)))) & (((((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) (unsigned char)231)))) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) (unsigned short)18054))))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)9538)))))));
        var_19 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -9107728627300416703LL))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 10; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_1 - 1] [i_1])))))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7280))) : ((+(arr_4 [i_1])))));
    }
    var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((14292753100690960758ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2)))))), (var_12)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (var_0) : (arr_5 [i_2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) : (-9223372036854775804LL)))) : (((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */unsigned long long int) arr_5 [i_2])) : (274877906943ULL)))));
        var_24 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) (unsigned char)241))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-10))) : (9107728627300416702LL));
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) 274877906944ULL))));
        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((arr_8 [(unsigned short)8]) > (arr_9 [i_3]))))));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            var_27 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_15 [i_4] [i_5])))) / (min((var_6), (((/* implicit */long long int) (unsigned char)244)))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_4] [i_5] [i_4])) ? (((/* implicit */int) arr_14 [i_4] [i_5] [i_4])) : (((/* implicit */int) arr_14 [i_4] [i_5] [i_4])))))));
            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) arr_10 [i_4] [i_5])), (((((/* implicit */_Bool) arr_13 [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) arr_10 [i_4] [i_4 - 1])) : (var_2))))) + (min(((-(-1LL))), (((/* implicit */long long int) arr_13 [i_5] [i_4 - 1] [i_4])))))))));
            arr_16 [i_4] = ((/* implicit */long long int) arr_10 [i_4 - 1] [i_4 - 1]);
        }
        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            arr_19 [i_6] [i_4] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_4 - 1] [i_4 - 1])) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) arr_11 [i_4] [i_4]))))), (min((arr_13 [i_4] [i_6] [i_4]), (((/* implicit */unsigned int) (unsigned char)254)))))))));
            arr_20 [i_4] = ((/* implicit */unsigned char) arr_13 [i_4] [i_4] [i_4]);
            var_29 = ((/* implicit */signed char) ((short) var_12));
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((274877906943ULL), (((/* implicit */unsigned long long int) 6149480645899864192LL))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_13 [i_4] [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_12) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))) : (var_2))) : (((/* implicit */long long int) arr_13 [i_4] [i_4 - 1] [i_6]))));
        }
        var_31 -= ((/* implicit */unsigned char) arr_15 [i_4] [i_4]);
    }
    var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) var_15))));
}
