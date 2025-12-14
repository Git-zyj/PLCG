/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23654
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_13 -= ((/* implicit */unsigned int) ((((((/* implicit */int) var_5)) & (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (-1))))) << (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_11)))))));
        var_14 -= ((/* implicit */long long int) arr_2 [2LL]);
    }
    var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned short)7872)) ? ((~(((/* implicit */int) (unsigned char)255)))) : (((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-124))))))));
    var_16 = ((/* implicit */signed char) var_3);
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) > (5126709956504022200ULL)));
        var_18 = ((/* implicit */unsigned char) max((var_18), (max((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) == (((/* implicit */int) arr_3 [i_1]))))), ((unsigned char)255)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] [i_1] [i_1] = arr_8 [i_1] [i_1] [i_2];
            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1])) || (((/* implicit */_Bool) arr_7 [i_1]))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */_Bool) arr_5 [(short)17]);
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (+(((unsigned long long int) 13614121033199601561ULL)))))));
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned int) (unsigned char)255);
            var_23 &= ((/* implicit */unsigned long long int) var_9);
        }
        arr_14 [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-8)), (max((((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_12 [i_1])) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1])))), (((/* implicit */int) ((unsigned short) 4832623040509950080ULL)))))));
        arr_15 [i_1] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */short) var_12)), (((short) var_9))));
    }
    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        var_24 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) (short)26979))) : (-688072511952228368LL))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (min((463637688U), (((/* implicit */unsigned int) (unsigned char)247)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_8))))))))));
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) min((arr_7 [(short)20]), (((/* implicit */short) ((((/* implicit */int) arr_7 [i_5])) > (((/* implicit */int) arr_7 [i_5]))))))))));
    }
    var_26 ^= ((/* implicit */int) var_9);
}
