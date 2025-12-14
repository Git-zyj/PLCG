/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243096
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
    for (unsigned int i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        var_10 ^= 10222847293935532078ULL;
        var_11 = ((/* implicit */signed char) ((((var_8) - (((/* implicit */long long int) arr_2 [i_0 - 4])))) / (((/* implicit */long long int) ((((/* implicit */_Bool) 8223896779774019537ULL)) ? (3320144334U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1 + 1])) ? (((/* implicit */long long int) (-(max((2147481600U), (67108832U)))))) : (((max((((/* implicit */long long int) arr_2 [i_0])), (var_7))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_5)) != (120U)))))))));
            arr_5 [i_0] [i_0] = ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (3862336452U)))), (8223896779774019551ULL))) & (((/* implicit */unsigned long long int) ((((var_3) != (((/* implicit */long long int) arr_2 [i_1 - 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 2] [i_0 - 1]))) : (max((((/* implicit */unsigned int) var_5)), (144U)))))));
            var_13 = ((/* implicit */unsigned long long int) ((var_8) / (((/* implicit */long long int) ((arr_1 [i_0 + 1] [i_0]) * (4294967146U))))));
        }
        for (long long int i_2 = 1; i_2 < 23; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_3 = 3; i_3 < 23; i_3 += 4) 
            {
                var_14 = ((/* implicit */unsigned int) min((var_14), (max((((((/* implicit */unsigned int) var_5)) / (((((/* implicit */unsigned int) ((/* implicit */int) (short)-26207))) & (144U))))), (((/* implicit */unsigned int) arr_6 [i_0 - 1]))))));
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967159U)) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 120U)), (11240931695986379324ULL)))) ? ((~(4294967176U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_4)) : (-897044925)))))))));
                var_16 = ((/* implicit */unsigned int) max((((arr_3 [i_3 - 3] [i_3 - 1] [i_3 + 1]) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (var_8)))) : (((((/* implicit */_Bool) 58720256)) ? (((/* implicit */unsigned long long int) 1015808U)) : (8223896779774019537ULL))))), (((/* implicit */unsigned long long int) -1LL))));
            }
            /* vectorizable */
            for (unsigned int i_4 = 1; i_4 < 23; i_4 += 4) 
            {
                var_17 = arr_2 [i_0];
                /* LoopSeq 4 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_16 [(_Bool)1] [i_5] [22LL] [i_5] [i_0] = ((((/* implicit */_Bool) 10222847293935532078ULL)) ? (((/* implicit */long long int) arr_1 [i_0 + 1] [i_2 + 1])) : (var_8));
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((((/* implicit */_Bool) var_1)) ? (arr_10 [i_0] [i_2] [i_4 - 1] [i_4 + 1]) : (arr_10 [i_0 + 1] [i_0 + 1] [i_4] [i_4 + 1])))));
                    var_19 += ((/* implicit */unsigned char) ((897044906) & (((/* implicit */int) var_9))));
                }
                for (unsigned int i_6 = 1; i_6 < 21; i_6 += 2) 
                {
                    arr_20 [9LL] [i_2] = ((/* implicit */signed char) -897044917);
                    arr_21 [i_0] [i_0] [i_4] [i_6 + 3] = ((/* implicit */signed char) var_0);
                }
                for (unsigned int i_7 = 1; i_7 < 21; i_7 += 3) 
                {
                    var_20 = ((/* implicit */unsigned int) var_9);
                    arr_24 [i_7] [i_7] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_2 + 1] [i_2])) ? ((-(var_7))) : (((/* implicit */long long int) var_2))));
                }
                for (long long int i_8 = 1; i_8 < 23; i_8 += 3) 
                {
                    arr_27 [3U] [i_2] [i_8] [i_8] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_8] [i_4 - 1] [8U] [i_2]))) | (arr_26 [i_2] [i_8] [i_8] [i_2]));
                    var_21 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 728678059U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)106))) : (63U)))));
                }
                var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) 897044906)))));
                var_23 *= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-16)) - (((/* implicit */int) var_0))));
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (arr_15 [i_4 + 1] [i_0] [i_0] [i_0 - 4]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) (_Bool)1)))))));
            }
            arr_28 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_0);
        }
        for (int i_9 = 1; i_9 < 23; i_9 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_10 = 1; i_10 < 23; i_10 += 4) 
            {
                for (int i_11 = 1; i_11 < 20; i_11 += 3) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) max(((~(((var_8) * (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_11]))))))), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)195)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_35 [i_11 - 1] [i_10 - 1] [i_9])))))));
                        var_26 ^= ((/* implicit */unsigned char) var_6);
                    }
                } 
            } 
            var_27 &= ((/* implicit */unsigned int) 33554431LL);
            arr_38 [i_9] [(_Bool)1] [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */long long int) max((arr_31 [i_9 + 1]), (max((1248984388U), (((/* implicit */unsigned int) (short)7373))))))) - ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((long long int) (short)-7355))))));
        }
    }
    var_28 = ((/* implicit */signed char) max((((/* implicit */long long int) -1609057252)), (3LL)));
}
