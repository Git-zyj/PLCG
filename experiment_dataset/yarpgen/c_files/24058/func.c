/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24058
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
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */int) (short)-6420);
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) arr_5 [i_0 + 3] [i_1 - 1])) && (((/* implicit */_Bool) arr_5 [i_0 + 3] [i_1 - 1])));
            var_20 = ((/* implicit */unsigned int) ((5261546120117269852LL) % (((/* implicit */long long int) ((/* implicit */int) (short)6419)))));
            var_21 = ((/* implicit */unsigned char) (+(arr_4 [i_0] [i_0] [i_0])));
        }
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) || ((!(((/* implicit */_Bool) (short)6419))))));
        var_23 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_4 [i_0 + 3] [i_0 - 1] [i_0]))))) - (((((/* implicit */int) (short)-15983)) & (var_9))))) & ((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) var_16))))))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (short)6420)) : (var_9)))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) 2051650384)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (short)10915)))))) - (((/* implicit */int) var_16))));
            var_25 = ((/* implicit */unsigned short) (~((~((~(((/* implicit */int) var_16))))))));
            /* LoopSeq 2 */
            for (int i_3 = 1; i_3 < 24; i_3 += 3) 
            {
                var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_4 [i_2] [i_2] [i_2]) & (arr_8 [i_0] [i_2] [i_3])))) ? (((/* implicit */unsigned long long int) (~(arr_8 [i_3] [i_2] [i_0])))) : (((7109360309819492147ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) ? (((((/* implicit */_Bool) (short)15982)) ? (((/* implicit */long long int) ((/* implicit */int) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) 492828507U)))))) : (var_12))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_2 [i_0 + 1]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [(_Bool)1]))))) ? (((/* implicit */int) var_0)) : ((-(((/* implicit */int) var_5))))))));
                var_27 = ((/* implicit */_Bool) var_10);
                var_28 = (unsigned short)0;
                var_29 = ((/* implicit */unsigned long long int) (+((-(max((1902440242U), (((/* implicit */unsigned int) var_6))))))));
            }
            for (short i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                var_30 ^= ((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_0 + 3] [i_2] [1LL]))));
                arr_15 [i_0] [i_0] [i_0 + 3] = ((/* implicit */short) arr_13 [i_2] [i_2]);
                var_31 = ((/* implicit */signed char) ((min((((var_8) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))), ((((_Bool)0) ? (((/* implicit */int) (unsigned char)0)) : (arr_4 [i_0] [i_2] [i_0]))))) % (min((((/* implicit */int) ((((/* implicit */int) var_19)) <= (((/* implicit */int) var_16))))), (((((/* implicit */int) var_5)) + (((/* implicit */int) var_8))))))));
            }
            var_32 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))));
        }
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_33 = ((/* implicit */unsigned int) (_Bool)1);
        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(var_17))) - (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) - (-1124993293))))))) ? (((/* implicit */long long int) (+(-1553735540)))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (arr_17 [(signed char)2]))))))));
        var_35 = var_19;
    }
    var_36 = ((((((/* implicit */_Bool) (-(var_18)))) ? (((/* implicit */int) var_13)) : (var_9))) - (((/* implicit */int) var_14)));
    var_37 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (((_Bool)0) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))), (min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_9)) : (18446744073709551613ULL))), (((/* implicit */unsigned long long int) var_15))))));
}
