/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213007
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
    var_18 = ((/* implicit */unsigned int) var_12);
    var_19 = ((/* implicit */_Bool) min(((+(6600235345172291469ULL))), (max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (8964772408654891127ULL))), (((/* implicit */unsigned long long int) var_8))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-4)) | (((/* implicit */int) (unsigned char)222))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_21 = ((/* implicit */long long int) ((arr_2 [i_1] [i_1] [i_0]) || (((/* implicit */_Bool) ((arr_2 [i_1] [i_0] [i_0]) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_0])) : ((-2147483647 - 1)))))));
            var_22 = ((/* implicit */unsigned short) arr_0 [i_0]);
            var_23 = ((/* implicit */unsigned long long int) (-2147483647 - 1));
            var_24 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))) % (max((arr_0 [i_0]), (arr_0 [i_1])))));
        }
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_5 [i_0] [i_2] [i_0]))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                for (short i_4 = 2; i_4 < 14; i_4 += 2) 
                {
                    {
                        var_26 ^= ((/* implicit */unsigned char) var_1);
                        var_27 = arr_0 [i_0];
                        var_28 = ((/* implicit */short) (+(((((((min((((/* implicit */int) var_9)), ((-2147483647 - 1)))) + (2147483647))) + (2147483647))) << (((((/* implicit */int) (unsigned char)121)) - (121)))))));
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 457358809U)) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) == (var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)224)))))));
                    }
                } 
            } 
            var_30 = ((/* implicit */unsigned char) min((var_0), (max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_2 [i_0] [i_2] [i_2])) : (((/* implicit */int) var_17)))), (((/* implicit */int) var_2))))));
        }
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            var_31 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_5] [i_5] [i_0]))));
            var_32 &= ((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0]);
            var_33 = ((/* implicit */signed char) ((_Bool) var_7));
        }
        var_34 = ((/* implicit */unsigned int) ((576456354256912384ULL) & (((/* implicit */unsigned long long int) max((min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) (signed char)16)))), (((/* implicit */long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_7))))))))));
        var_35 = ((/* implicit */_Bool) (+(var_10)));
    }
}
