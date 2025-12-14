/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242137
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
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_10 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) <= (arr_4 [i_0 + 2] [i_0 - 1] [i_0 - 1])));
            var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)224)) & (((((/* implicit */int) (unsigned short)18782)) >> (((-8216679865150856264LL) + (8216679865150856275LL)))))));
        }
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            var_12 = ((/* implicit */signed char) (-(((/* implicit */int) arr_3 [i_2]))));
            arr_8 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) & (var_6)));
            arr_9 [i_0] [i_0] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) var_5))));
            var_13 = ((/* implicit */unsigned char) ((short) arr_6 [i_0 + 1] [i_0 + 2]));
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                arr_13 [i_0] [2LL] [i_0] &= ((/* implicit */int) arr_1 [i_0]);
                var_14 = ((/* implicit */unsigned short) var_6);
                var_15 = (signed char)117;
                var_16 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 8216679865150856263LL))));
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    arr_16 [i_0] [i_4] [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) -8216679865150856264LL)))));
                    arr_17 [i_0] [i_4] [i_3] = ((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_3]);
                    arr_18 [i_4] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)39407)) != (((/* implicit */int) (short)-8512))));
                    arr_19 [i_3] [i_3] [i_3] [i_4] |= (~(((/* implicit */int) arr_7 [i_0 + 1])));
                }
            }
        }
        arr_20 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [i_0] [(signed char)2] [i_0] [i_0 - 1]))));
    }
    for (unsigned short i_5 = 3; i_5 < 11; i_5 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (arr_23 [(signed char)8])));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_5] [i_5] [i_5] [(unsigned char)10] [i_5 + 1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(unsigned char)15] [i_5] [i_5 - 2] [7])) ? (((/* implicit */int) arr_22 [i_5] [i_5 - 2])) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) min(((signed char)(-127 - 1)), (arr_1 [i_5])))) : ((+(((/* implicit */int) (unsigned short)37218)))))))));
        arr_24 [i_5] [i_5] = ((/* implicit */unsigned char) max(((+(arr_2 [i_5 - 2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_5])) ? ((~(((/* implicit */int) arr_7 [i_5])))) : (((((/* implicit */int) (unsigned char)64)) & (((/* implicit */int) var_4)))))))));
    }
    for (unsigned char i_6 = 2; i_6 < 18; i_6 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) arr_26 [i_6] [(short)13])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56698))) : (8216679865150856263LL))), (((/* implicit */long long int) min(((signed char)40), (arr_3 [i_6])))))) | (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_6 + 2])))))));
        /* LoopSeq 1 */
        for (int i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            arr_29 [i_6 + 1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_6 - 2])) <= (((/* implicit */int) (short)-8512))))), (max((arr_2 [i_6 + 2]), (arr_2 [i_6 + 1])))));
            var_20 = ((/* implicit */unsigned char) var_5);
        }
    }
    for (unsigned char i_8 = 2; i_8 < 18; i_8 += 4) /* same iter space */
    {
        arr_33 [i_8] [i_8 + 1] = ((/* implicit */long long int) var_8);
        arr_34 [19LL] = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) max((-5551698156437711151LL), (((/* implicit */long long int) (short)15040)))))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (8216679865150856241LL)))) ? ((-(((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) arr_12 [i_8] [i_8] [i_8] [i_8])))))))));
        var_21 *= (short)-8512;
    }
    var_22 = ((/* implicit */unsigned short) ((short) min((((/* implicit */int) var_9)), ((-(((/* implicit */int) var_3)))))));
}
