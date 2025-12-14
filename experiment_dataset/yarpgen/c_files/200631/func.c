/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200631
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_20 += ((/* implicit */unsigned char) (((-(-2292892222693908829LL))) <= (((/* implicit */long long int) (+(((/* implicit */int) var_17)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_11))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = arr_4 [i_1];
        arr_7 [(short)8] [i_1] |= ((/* implicit */short) (~(((/* implicit */int) arr_3 [i_1]))));
        var_21 = ((/* implicit */unsigned long long int) (+(2292892222693908803LL)));
    }
    for (signed char i_2 = 1; i_2 < 14; i_2 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) ((arr_10 [i_2 + 2]) / (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_10)), (arr_8 [i_2] [i_2 + 1]))))));
        var_23 -= ((/* implicit */int) (-(((arr_10 [i_2 + 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_16))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                for (unsigned short i_5 = 3; i_5 < 12; i_5 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            var_24 = ((/* implicit */_Bool) min((var_24), (((((/* implicit */_Bool) (-(2292892222693908804LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (-2292892222693908806LL) : (2292892222693908829LL))))))));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_2 + 2])) > (var_4)));
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((unsigned int) -2292892222693908841LL)))));
                            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) -2292892222693908803LL))));
                            var_28 ^= ((/* implicit */unsigned char) var_8);
                        }
                        for (unsigned int i_7 = 2; i_7 < 13; i_7 += 1) 
                        {
                            arr_24 [i_5 - 1] [i_5 - 1] = ((/* implicit */unsigned long long int) var_12);
                            var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (arr_11 [(_Bool)1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */int) var_3)) < (((/* implicit */int) arr_14 [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_2 - 1])))))));
                            arr_25 [6] |= ((/* implicit */unsigned short) arr_20 [i_2 + 1] [i_3] [i_3] [i_2] [i_2]);
                        }
                        for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 2) 
                        {
                            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((_Bool) var_18))) : (arr_13 [i_2 + 1] [i_3])));
                            arr_28 [i_2] [i_3] [i_2] [i_2] [i_2] [i_2] &= ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                        }
                        /* LoopSeq 2 */
                        for (short i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
                        {
                            var_32 *= (((_Bool)1) ? (arr_10 [i_5 - 3]) : (((/* implicit */unsigned long long int) ((var_18) << (((((/* implicit */int) var_19)) - (106)))))));
                            var_33 -= ((/* implicit */short) (-(((/* implicit */int) var_17))));
                        }
                        for (short i_10 = 0; i_10 < 16; i_10 += 4) /* same iter space */
                        {
                            arr_33 [i_2] [i_3] [i_4] [i_5] [(_Bool)1] = ((/* implicit */unsigned char) arr_15 [i_2 + 1] [i_2 + 1] [i_2 + 1]);
                            var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) 2292892222693908840LL))));
                            var_35 *= ((/* implicit */unsigned long long int) ((unsigned short) arr_8 [i_4] [i_10]));
                        }
                        var_36 -= (~(((/* implicit */int) ((arr_19 [i_2] [(unsigned short)8] [(short)14] [i_2] [i_3]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_2] [i_4] [i_4] [i_5 + 3] [i_3])))))));
                    }
                } 
            } 
            arr_34 [6ULL] [7ULL] [i_2] = ((/* implicit */_Bool) ((short) var_10));
            /* LoopSeq 2 */
            for (signed char i_11 = 0; i_11 < 16; i_11 += 4) 
            {
                var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) ((((/* implicit */int) arr_21 [i_2 + 2])) / (((/* implicit */int) (_Bool)1)))))));
                arr_37 [(short)0] [(short)0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
                var_38 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))) || (var_3)));
            }
            for (int i_12 = 0; i_12 < 16; i_12 += 2) 
            {
                arr_41 [i_2] [i_3] [(signed char)10] [i_12] |= ((/* implicit */unsigned int) ((_Bool) arr_21 [i_2 + 1]));
                var_39 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)112))));
            }
        }
    }
    var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) (_Bool)1))));
}
