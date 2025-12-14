/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47236
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
    var_11 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_12 ^= ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
        {
            var_13 &= ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_1])));
            var_14 = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_1])) == (var_10)));
        }
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [(signed char)6] [i_2] [i_2])) != (((/* implicit */int) arr_5 [i_0] [i_2] [i_2]))));
            var_16 = ((/* implicit */unsigned short) ((arr_4 [i_2] [i_0]) / (((/* implicit */long long int) (-(arr_7 [i_2]))))));
            var_17 = ((/* implicit */unsigned short) ((signed char) arr_3 [i_0]));
        }
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            var_18 -= ((/* implicit */long long int) var_6);
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((unsigned long long int) (unsigned char)0)) : (((/* implicit */unsigned long long int) arr_11 [i_4] [i_3] [i_4]))));
                var_20 = ((/* implicit */unsigned short) (+(((unsigned long long int) var_0))));
                var_21 = ((/* implicit */unsigned short) ((signed char) arr_12 [i_0] [i_3] [i_3]));
            }
            for (signed char i_5 = 1; i_5 < 14; i_5 += 4) 
            {
                var_22 = ((/* implicit */int) (~(arr_1 [13LL] [i_5 + 1])));
                var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
            }
            var_24 = ((/* implicit */signed char) ((int) var_7));
        }
        var_25 = ((/* implicit */int) ((unsigned int) arr_1 [i_0] [i_0]));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 4) 
        {
            for (unsigned int i_8 = 2; i_8 < 14; i_8 += 4) 
            {
                for (unsigned int i_9 = 0; i_9 < 16; i_9 += 3) 
                {
                    {
                        arr_29 [i_6] [i_9] = ((/* implicit */long long int) arr_0 [i_8]);
                        var_26 = arr_28 [i_9] [i_9] [i_9] [i_6];
                        var_27 = var_0;
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) arr_23 [i_6] [11LL] [i_6] [i_6])) <= (((/* implicit */int) var_9)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 3; i_10 < 18; i_10 += 4) 
    {
        var_29 = ((/* implicit */unsigned long long int) var_1);
        /* LoopNest 3 */
        for (unsigned int i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            for (unsigned int i_12 = 0; i_12 < 20; i_12 += 3) 
            {
                for (unsigned int i_13 = 0; i_13 < 20; i_13 += 4) 
                {
                    {
                        var_30 = ((/* implicit */unsigned char) ((unsigned int) arr_39 [i_10 + 2] [i_10 - 2] [i_10 + 1] [i_10]));
                        var_31 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((var_3) >= (((/* implicit */unsigned long long int) var_0)))))));
                        var_32 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) < (((unsigned long long int) var_10))));
                    }
                } 
            } 
        } 
    }
    var_33 = ((/* implicit */unsigned short) var_10);
    var_34 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_10)) : (1730991634272504715LL)))))) ? (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (0ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_5)))), (((/* implicit */int) var_1)))))));
    var_35 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) ((unsigned char) (signed char)-16))))));
}
