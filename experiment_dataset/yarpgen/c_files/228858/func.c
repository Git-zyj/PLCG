/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228858
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_16)) && (var_17))) && (((/* implicit */_Bool) var_5)))))));
        var_20 += ((/* implicit */int) (-((-(arr_1 [i_0])))));
    }
    for (unsigned short i_1 = 1; i_1 < 13; i_1 += 1) 
    {
        var_21 *= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_3 [i_1 + 3] [i_1 + 1])) ? (((long long int) var_0)) : ((-(5130475779694188645LL)))))));
        var_22 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) ^ ((-((+(0U)))))));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_23 &= ((/* implicit */long long int) arr_5 [i_2 - 1] [i_2 - 1]);
        var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_8 [i_2 - 1])))) ? (min((((/* implicit */long long int) var_4)), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)237))) / (-5130475779694188645LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_2 - 1] [i_2])))))));
    }
    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        var_25 |= ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_3)));
        var_26 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)142))));
        arr_11 [i_3] |= ((/* implicit */int) ((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) -5130475779694188645LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3362))) : (2871712087U)))));
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_9 [i_3]))));
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [i_3])) ? (var_1) : (((/* implicit */int) var_16)))) + ((-(((/* implicit */int) (_Bool)0))))))) ? (((((/* implicit */_Bool) (unsigned short)13328)) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) var_4)))) : ((~(((/* implicit */int) arr_12 [i_3] [i_3] [i_4]))))));
            var_29 ^= ((/* implicit */unsigned long long int) max((arr_13 [i_4] [i_3] [i_3]), (((/* implicit */long long int) var_0))));
            arr_14 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (1523310846955568213LL))) : (((/* implicit */long long int) (~(var_13))))))) ? (max((arr_13 [i_4] [i_3] [i_3]), (((/* implicit */long long int) arr_12 [i_3] [i_4] [i_4])))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)35499)))))));
        }
        for (int i_5 = 2; i_5 < 22; i_5 += 3) 
        {
            var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-42))))) ? (3315692323U) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [i_3] [i_5] [i_3]))))))))));
            var_31 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_3])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) var_0)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))))) ? (var_13) : (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (arr_10 [i_3])))) ? ((-(var_6))) : (max((var_13), (((/* implicit */int) var_12))))))));
        }
        var_32 &= ((/* implicit */unsigned char) var_18);
    }
    /* LoopSeq 2 */
    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
    {
        var_33 -= ((/* implicit */signed char) var_9);
        arr_21 [i_6] [i_6] = ((/* implicit */_Bool) arr_1 [i_6]);
    }
    for (int i_7 = 0; i_7 < 17; i_7 += 1) 
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            for (int i_9 = 1; i_9 < 15; i_9 += 4) 
            {
                for (short i_10 = 0; i_10 < 17; i_10 += 1) 
                {
                    {
                        var_34 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_18 [i_9 + 2] [i_9] [i_9 - 1])) ? (-5130475779694188667LL) : (((/* implicit */long long int) var_10))))));
                        var_35 -= ((/* implicit */unsigned short) arr_15 [i_7] [i_9 + 1] [i_9 + 2]);
                    }
                } 
            } 
        } 
        var_36 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((var_17) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_17))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_28 [i_7])) >> (((var_13) + (734688405)))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_6)) : (var_18))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) arr_31 [i_7] [14U] [i_7] [i_7])) ? (((/* implicit */int) arr_8 [i_7])) : (((/* implicit */int) var_15)))))))));
    }
}
