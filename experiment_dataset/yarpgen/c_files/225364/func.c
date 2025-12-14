/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225364
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((arr_1 [i_0 - 1] [i_0 - 1]) * (((((/* implicit */_Bool) arr_1 [8LL] [i_0 - 1])) ? (arr_1 [(short)14] [i_0 - 1]) : (((/* implicit */unsigned long long int) 4294967283U)))))))));
        var_13 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 - 1])) - ((+(((/* implicit */int) arr_0 [i_0 - 1]))))))), (((((((/* implicit */_Bool) 9223372036854775808ULL)) ? (2859536883137319666LL) : (-2859536883137319699LL))) >> (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) var_4)))))))));
        var_14 = ((/* implicit */_Bool) ((signed char) arr_0 [i_0]));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)237)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_3 [i_0 - 1] [i_0 - 1]), (((/* implicit */int) arr_4 [i_3]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65472)) ? (arr_3 [i_0 - 1] [i_3]) : (((/* implicit */int) arr_4 [i_1]))))) : (((1300934905U) / (((/* implicit */unsigned int) arr_3 [i_0 - 1] [(_Bool)1]))))));
                                arr_17 [i_4] [i_4] &= ((/* implicit */long long int) (unsigned char)191);
                                arr_18 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2] [(unsigned char)20] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (arr_11 [i_1] [(unsigned short)1] [i_1] [i_1]))))))) & ((~(((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_4] [i_1] [i_2] [i_3] [i_1])) || (((/* implicit */_Bool) (unsigned char)3)))))))));
                            }
                        } 
                    } 
                    arr_19 [(_Bool)1] [(_Bool)1] [(short)8] &= ((/* implicit */_Bool) ((int) 1366890362U));
                }
            } 
        } 
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) 6770999655808909398ULL)))))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-32741)), (arr_0 [i_5 - 1]))))) < (((((/* implicit */_Bool) -2752099873856794325LL)) ? (2752099873856794335LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)247)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_6 = 4; i_6 < 20; i_6 += 2) /* same iter space */
        {
            arr_24 [i_5] = ((/* implicit */unsigned char) var_9);
            arr_25 [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (1300934900U)));
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((arr_14 [9LL] [i_5] [i_6 + 1] [(_Bool)1] [i_6] [(_Bool)1]) / (var_3)))) == (((((/* implicit */_Bool) arr_22 [i_5] [3LL] [3LL])) ? (((/* implicit */unsigned long long int) var_8)) : (var_7))))))));
        }
        for (unsigned char i_7 = 4; i_7 < 20; i_7 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */short) min((((unsigned int) 2994032395U)), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)235)) > (((/* implicit */int) (_Bool)1)))))));
            arr_28 [(unsigned short)19] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (2859536883137319688LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-8348)))))) ? (((/* implicit */unsigned int) min((min((((/* implicit */int) arr_16 [i_7])), (2095104))), (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) (-(-2859536883137319644LL)))) ? (min((((/* implicit */unsigned int) arr_8 [i_5] [i_5] [i_7 - 4])), (536346624U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-29))))))))));
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                for (unsigned int i_9 = 0; i_9 < 21; i_9 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (short)-16076))) - (-2859536883137319686LL))) >> (((((((/* implicit */_Bool) (signed char)-60)) ? (var_10) : (((/* implicit */int) (unsigned char)35)))) + (1409508885)))));
                        arr_34 [i_5] [i_7 - 4] [i_8] [i_9] = ((/* implicit */_Bool) (short)29656);
                        var_22 &= ((/* implicit */int) ((unsigned int) 8619095048701747049LL));
                        var_23 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((_Bool) 1ULL))), (arr_11 [5U] [i_7] [i_7] [(short)8])));
                    }
                } 
            } 
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_7])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_5] [i_5 - 1] [i_5 - 1])) ? (((/* implicit */unsigned long long int) var_5)) : (var_7))))))), (max((((/* implicit */long long int) min((((/* implicit */unsigned int) (short)20918)), (1300934883U)))), (((((/* implicit */_Bool) (signed char)52)) ? (16744448LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_7] [2LL] [(signed char)9]))))))))))));
        }
    }
    var_25 = ((/* implicit */_Bool) ((-2859536883137319693LL) / (8104073280153125046LL)));
}
