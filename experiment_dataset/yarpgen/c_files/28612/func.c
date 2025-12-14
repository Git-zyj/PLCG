/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28612
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
    for (long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            arr_7 [i_0] [(unsigned char)11] = ((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_0] [i_0]))));
            arr_8 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) (short)-3493));
            arr_9 [i_0] [i_0] = (~(var_2));
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
        {
            var_10 = ((/* implicit */long long int) min((var_10), ((+(arr_13 [i_0] [i_0])))));
            var_11 = ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
        }
        for (short i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
        {
            var_12 = ((/* implicit */long long int) max((var_12), (((((/* implicit */_Bool) ((((arr_12 [i_0 - 1]) + (9223372036854775807LL))) << (((((arr_12 [i_0 + 2]) + (869280281578735683LL))) - (53LL)))))) ? (((((/* implicit */_Bool) (short)-3493)) ? (arr_12 [i_0 + 2]) : (arr_12 [i_0 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
            arr_16 [i_0] [i_3] [i_3] = ((/* implicit */short) max((((((/* implicit */_Bool) (short)29333)) ? (arr_5 [i_0 - 1] [i_0]) : (-3153999886826939882LL))), (-8537827122851099536LL)));
            arr_17 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_15 [i_0] [i_3] [i_3])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) ? ((+(arr_5 [i_0 + 2] [i_0]))) : (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) -6299841800954731600LL)) || (((/* implicit */_Bool) (short)-3508))))), (((((/* implicit */int) (short)3493)) >> (((((/* implicit */int) (unsigned char)91)) - (63)))))))));
            var_13 *= ((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [10LL]))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_15 [8LL] [0LL] [8LL])) : (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_14 [i_0 + 1])))) < ((+(((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1] [i_0]))))));
        }
        for (short i_4 = 2; i_4 < 17; i_4 += 4) 
        {
            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3502)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [(unsigned char)8] [i_0 + 2]))) : (var_1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)67))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_0])))))))))));
            var_15 = ((/* implicit */short) min((var_15), (var_9)));
            var_16 = (((-(arr_5 [i_0 - 1] [i_0]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) 268435455LL)) ? (((/* implicit */int) ((unsigned char) var_4))) : (((/* implicit */int) ((short) arr_11 [i_0])))))));
            arr_21 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3316179300435538505LL)) ? (var_1) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_2) : ((~(-5019748904890929098LL)))))));
        }
        arr_22 [i_0] = (~(max((max((8537827122851099536LL), (((/* implicit */long long int) (short)0)))), (((((/* implicit */_Bool) var_3)) ? (7933057994980904988LL) : (var_1))))));
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                for (unsigned char i_7 = 1; i_7 < 16; i_7 += 3) 
                {
                    {
                        var_17 -= ((/* implicit */unsigned char) max((((arr_28 [i_7 + 1] [i_7] [i_7] [4LL] [i_7]) >> (((17179869183LL) - (17179869140LL))))), (((((/* implicit */_Bool) arr_3 [i_7 + 2] [i_7 + 1] [i_0 - 1])) ? ((+(arr_5 [i_0] [i_5]))) : (((long long int) 16LL))))));
                        arr_30 [4LL] [i_0] [i_6] [i_0] [i_6] = ((/* implicit */unsigned char) min(((~(((((/* implicit */_Bool) arr_24 [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_1))))), ((~(-1LL)))));
                        arr_31 [i_0 - 1] [(unsigned char)16] [5LL] [i_0] = ((long long int) -268435452LL);
                        arr_32 [i_0] [i_5] [i_0] [(unsigned char)12] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_28 [i_0 + 1] [i_5] [i_6] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0 + 1] [i_0])))))) ? ((+(-7635934749116538017LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)-20337))));
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_6))))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_20 [(unsigned char)16] [i_5])) * (((/* implicit */int) var_6))))) : (arr_5 [i_6] [i_5]))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_8 = 2; i_8 < 17; i_8 += 1) /* same iter space */
    {
        arr_35 [i_8] = ((/* implicit */short) arr_33 [i_8] [i_8]);
        var_19 *= var_5;
        arr_36 [i_8] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_34 [i_8] [16LL])) ? (-1431253863696250075LL) : (arr_33 [i_8] [i_8]))));
    }
    for (unsigned char i_9 = 2; i_9 < 17; i_9 += 1) /* same iter space */
    {
        var_20 *= ((/* implicit */unsigned char) (((-(arr_33 [14LL] [i_9 - 1]))) ^ (((((-3242075980517318016LL) <= (var_1))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)16231))) - (-3LL))) : (((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_9] [i_9]))) : (-1LL)))))));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (+(arr_33 [(unsigned char)8] [i_9 - 2]))))));
        /* LoopSeq 1 */
        for (long long int i_10 = 0; i_10 < 19; i_10 += 3) 
        {
            arr_41 [i_9] [i_10] = ((long long int) ((short) arr_39 [i_9]));
            var_22 ^= ((/* implicit */short) 1431253863696250083LL);
        }
    }
    /* vectorizable */
    for (unsigned char i_11 = 2; i_11 < 17; i_11 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_38 [17LL]))) % (var_1)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_38 [i_11]))) ^ (arr_40 [(short)12]))) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_11 - 2])))));
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (+(((/* implicit */int) (short)31803)))))));
        var_25 += ((/* implicit */long long int) (~(((/* implicit */int) arr_37 [i_11] [i_11 - 2]))));
    }
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((-(-13LL)))))) ? (min((((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (var_2))) : (((/* implicit */long long int) (+(((/* implicit */int) max(((short)-16556), ((short)-3502)))))))));
    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) 7876711466621769895LL))));
}
