/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21950
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) arr_0 [i_0]);
        /* LoopSeq 2 */
        for (int i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            var_10 = ((/* implicit */unsigned char) var_5);
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    var_11 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(233821972325348227LL))))));
                    var_12 = ((/* implicit */signed char) var_8);
                }
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    arr_17 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) 233821972325348227LL);
                    arr_18 [i_0] [15ULL] [i_2] [i_2] [i_1] = ((/* implicit */long long int) (+(((unsigned int) var_7))));
                    var_13 ^= ((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)3890)) ? (-233821972325348252LL) : (((/* implicit */long long int) (-2147483647 - 1))))));
                    arr_19 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_1 - 3] [i_1] [i_1 - 3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))));
                }
                var_14 *= ((/* implicit */short) ((unsigned int) -233821972325348223LL));
                arr_20 [i_2] [i_1] [i_1] [i_0] = (~(((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) arr_9 [i_1] [i_1] [i_2] [i_2])), (0ULL))))));
            }
            for (int i_5 = 0; i_5 < 22; i_5 += 2) 
            {
                var_15 ^= ((/* implicit */unsigned int) ((_Bool) ((short) 2ULL)));
                var_16 = ((/* implicit */int) max((var_16), (max(((-(((/* implicit */int) var_4)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_4))))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) var_1))))))));
                arr_25 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((15ULL), (((/* implicit */unsigned long long int) -233821972325348223LL)))) - (min((15ULL), (18446744073709551613ULL)))))) ? (max((((/* implicit */unsigned int) var_2)), (arr_13 [i_0] [i_0] [i_0] [i_5] [i_5]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_8)))))));
            }
            var_17 = ((/* implicit */unsigned short) ((int) (!((!(((/* implicit */_Bool) arr_22 [i_1])))))));
            arr_26 [i_1] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
        }
        for (unsigned short i_6 = 1; i_6 < 20; i_6 += 2) 
        {
            var_18 ^= ((/* implicit */_Bool) min((((/* implicit */int) (short)31362)), ((+(((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (var_7))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                var_19 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) var_1))));
                var_20 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))));
            }
            for (short i_8 = 0; i_8 < 22; i_8 += 3) 
            {
                var_21 *= ((/* implicit */signed char) min(((~(((((/* implicit */_Bool) (short)32017)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_13 [i_0] [i_0] [i_6] [i_6] [(short)4]))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) - ((+(((/* implicit */int) (_Bool)1)))))))));
                var_22 = ((/* implicit */_Bool) var_8);
            }
            var_23 = ((/* implicit */signed char) (~(((/* implicit */int) (short)-21268))));
            var_24 = ((/* implicit */unsigned char) ((short) ((unsigned short) ((((/* implicit */int) var_2)) >= (var_0)))));
        }
    }
    var_25 = max(((~(((((/* implicit */int) var_1)) & (((/* implicit */int) var_5)))))), (min((((/* implicit */int) (signed char)30)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (var_0))))));
}
