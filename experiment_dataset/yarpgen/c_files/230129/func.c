/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230129
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) var_7);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_18 *= ((/* implicit */unsigned short) ((unsigned int) (unsigned char)28));
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((_Bool) (+(((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */int) var_12)) : (arr_2 [i_0]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_3] [(short)16] [i_4] [i_5]))));
                    var_20 ^= ((/* implicit */unsigned char) ((signed char) ((unsigned long long int) (-9223372036854775807LL - 1LL))));
                    var_21 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_3])) >= (((/* implicit */int) var_3))));
                }
            } 
        } 
        var_22 = ((/* implicit */int) arr_17 [i_3] [i_3] [6LL]);
        arr_18 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3])) ? (-1996356961) : (((/* implicit */int) (unsigned char)64))))) ? (((((/* implicit */int) var_13)) + (((/* implicit */int) var_12)))) : (((/* implicit */int) var_13))));
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 17; i_6 += 2) 
        {
            for (signed char i_7 = 2; i_7 < 17; i_7 += 2) 
            {
                {
                    var_23 -= ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) | ((~(((/* implicit */int) arr_20 [(unsigned short)10] [i_6]))))));
                    arr_27 [i_3] [i_3] [i_3] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_24 [i_7] [i_7 + 2] [i_7 - 2]))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_8)))) ? (min((((/* implicit */unsigned long long int) ((unsigned int) 3358883797113677897ULL))), (((unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)64)) & (((/* implicit */int) (unsigned char)151)))))));
    var_25 = ((/* implicit */signed char) var_10);
    var_26 *= ((/* implicit */unsigned int) max((min((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4037590004640663458ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_10)))))), (((/* implicit */unsigned long long int) ((var_10) * (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)21200)))))))));
    var_27 = ((/* implicit */signed char) max((((/* implicit */unsigned char) var_14)), (var_12)));
}
