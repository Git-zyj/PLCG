/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52193
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */short) (~(((int) (short)-1))));
                var_18 *= ((/* implicit */unsigned int) ((int) (_Bool)1));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) (unsigned char)101);
    var_20 ^= ((/* implicit */unsigned char) var_3);
    var_21 *= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) 3616378875U)), (var_16)));
    /* LoopSeq 3 */
    for (long long int i_2 = 2; i_2 < 15; i_2 += 4) 
    {
        arr_6 [i_2] &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) 509913529)))) && (((((/* implicit */_Bool) arr_1 [i_2] [i_2])) && (((/* implicit */_Bool) 9223372036854775804LL)))))))) - (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))) - (arr_0 [i_2] [i_2])))));
        arr_7 [i_2 - 1] = ((/* implicit */_Bool) -9223372036854775805LL);
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (unsigned short)56188))));
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65528)) - (((/* implicit */int) (unsigned short)9348))))) : (arr_1 [i_2] [i_2])))))))));
    }
    /* vectorizable */
    for (long long int i_3 = 2; i_3 < 23; i_3 += 2) 
    {
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) 9223372036854775804LL)) * ((~(var_15))))))));
        /* LoopNest 3 */
        for (long long int i_4 = 1; i_4 < 24; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    {
                        arr_19 [i_4] [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)60925)))) ? (((/* implicit */unsigned long long int) arr_17 [i_3] [i_3] [i_5] [i_6])) : ((-(var_15)))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) + (2080374784U)));
                        var_26 ^= ((/* implicit */short) (+(arr_15 [i_4 + 1] [i_4 - 1] [1LL])));
                        var_27 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)253)) != (((/* implicit */int) (unsigned char)23)))))));
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (+(((-9223372036854775784LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)18))))))))));
                    }
                } 
            } 
        } 
        arr_20 [i_3 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 7017032807346529687ULL)) && (((/* implicit */_Bool) -9223372036854775785LL))));
        arr_21 [(_Bool)1] &= arr_10 [(_Bool)1] [i_3] [20LL];
        /* LoopNest 3 */
        for (long long int i_7 = 2; i_7 < 24; i_7 += 3) 
        {
            for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) 
            {
                for (short i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    {
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [i_3 + 2] [(_Bool)1] [i_7 - 1])))))));
                        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((unsigned long long int) arr_15 [(unsigned char)1] [i_7 + 1] [i_3 + 2])))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) min(((~(9223372036854775807LL))), (min((arr_18 [i_10] [i_10] [i_10] [(_Bool)1]), (arr_10 [i_10] [i_10] [i_10]))))))));
        var_32 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) (unsigned char)153))), ((~(((/* implicit */int) var_14)))))))));
        var_33 = ((/* implicit */unsigned int) (short)(-32767 - 1));
        arr_31 [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((arr_13 [(short)5] [(short)5] [i_10]) >= (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_10] [i_10] [i_10])))))) << (((((arr_4 [i_10]) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) (short)-30231)))) + (30247))))))));
    }
}
