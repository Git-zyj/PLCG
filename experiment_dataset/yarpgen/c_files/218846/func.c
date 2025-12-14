/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218846
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 96)) && (((/* implicit */_Bool) 35184372088831LL))));
    var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)121)) && (((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned short) (short)-20735)))))))), (var_5)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) var_12);
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) 12198758349692388085ULL))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121)))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                for (unsigned int i_3 = 2; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_16 ^= ((/* implicit */unsigned short) (+(((var_2) / (((/* implicit */unsigned long long int) arr_4 [i_0] [i_3]))))));
                        var_17 = arr_9 [i_3 + 2] [i_3] [i_3 + 2] [i_3] [i_3 + 2] [i_3 + 1];
                    }
                } 
            } 
        } 
        var_18 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)28))));
        arr_10 [(unsigned char)12] |= ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_7 [i_0]))))));
    }
    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        arr_14 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned int) var_4))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (15025929523245081635ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)102))) - (3420814550464469989ULL)))) ? (((/* implicit */long long int) ((int) var_2))) : (9223372036854775795LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_3 [i_4]))))));
        arr_15 [i_4] = ((/* implicit */signed char) max((((/* implicit */int) (_Bool)1)), (var_8)));
        var_19 = ((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (-2011949611) : (((/* implicit */int) var_4))))))));
        var_20 = max((((3420814550464469989ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33976))))), (9223372036854775808ULL));
        arr_16 [i_4] = ((/* implicit */_Bool) var_7);
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            for (unsigned int i_7 = 1; i_7 < 16; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    {
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_7 - 1] [i_7 - 1] [i_5] [i_5])))))));
                        arr_25 [i_8] [i_7] [i_6] [i_5] = ((/* implicit */signed char) var_11);
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned short) (short)10130);
        arr_26 [i_5] = ((/* implicit */int) ((_Bool) arr_13 [i_5]));
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_18 [i_5])) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)65521)) : (((/* implicit */int) (_Bool)1))))));
    }
    /* LoopNest 2 */
    for (signed char i_9 = 2; i_9 < 11; i_9 += 4) 
    {
        for (unsigned long long int i_10 = 1; i_10 < 13; i_10 += 2) 
        {
            {
                var_24 = ((/* implicit */long long int) (short)-17428);
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) var_3))));
                var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)0)) : (-16)))) ? (132120576) : (((/* implicit */int) ((((/* implicit */int) arr_19 [i_9 + 2])) > (((/* implicit */int) arr_19 [i_9 + 3]))))));
            }
        } 
    } 
}
