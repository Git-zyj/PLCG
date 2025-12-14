/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225093
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
    var_18 = ((/* implicit */short) var_0);
    /* LoopSeq 4 */
    for (long long int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((short) max((2290263966546996031ULL), (max((((/* implicit */unsigned long long int) -1391126745)), (14048187382930100555ULL))))));
        var_20 = arr_2 [i_0 - 3];
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (16761009447992519083ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_4 [i_0] [i_0 + 1]))))));
            arr_5 [i_1] = ((((/* implicit */_Bool) arr_0 [i_0 - 3] [20])) ? (arr_0 [i_0 - 1] [i_0]) : (arr_0 [i_0 - 3] [i_0 - 3]));
        }
        var_22 = ((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) arr_3 [i_0])) - (((((/* implicit */_Bool) 1391126744)) ? (994696540U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)7521)))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        var_23 = ((/* implicit */int) arr_4 [12LL] [i_2]);
        /* LoopNest 2 */
        for (unsigned short i_3 = 4; i_3 < 11; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                {
                    arr_14 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_3] [i_3])) ^ (((/* implicit */int) arr_7 [i_2] [i_2])))))));
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(signed char)4] [i_3 - 4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_2]))) : (arr_12 [i_4] [i_3])))))))));
                }
            } 
        } 
    }
    for (int i_5 = 2; i_5 < 17; i_5 += 3) 
    {
        arr_17 [i_5 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned int) arr_16 [i_5 + 1])) % (arr_1 [i_5]))))) ? (((/* implicit */unsigned long long int) (~(arr_16 [i_5])))) : (min((((unsigned long long int) arr_3 [i_5])), (((/* implicit */unsigned long long int) ((unsigned int) -1243591055938305593LL)))))));
        var_25 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_2 [(unsigned char)7])), (11920049362955229195ULL)));
        var_26 |= ((/* implicit */short) (-((-(arr_15 [i_5])))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) 
    {
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_7 [i_6] [i_6])) ? (((/* implicit */unsigned int) arr_3 [i_6])) : (arr_9 [i_6] [i_6]))))) ? (((/* implicit */int) arr_4 [i_6] [i_6])) : (((((((/* implicit */int) arr_10 [13ULL] [13ULL] [i_6])) ^ (arr_15 [i_6]))) >> (((((arr_12 [i_6] [i_6]) % (arr_6 [i_6]))) + (3696167863763023157LL))))))))));
        var_28 = max(((+(arr_20 [i_6]))), ((~(((unsigned long long int) arr_6 [i_6])))));
        var_29 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)0)) ? (((int) 4398556690779451060ULL)) : (((/* implicit */int) (unsigned short)65535)))) < ((~(((((/* implicit */int) (unsigned short)52794)) >> (((/* implicit */int) (_Bool)1))))))));
    }
    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 13267518803200000789ULL)) ? (((/* implicit */int) (unsigned char)228)) : (((int) ((unsigned short) 12542994141263134722ULL))))))));
}
