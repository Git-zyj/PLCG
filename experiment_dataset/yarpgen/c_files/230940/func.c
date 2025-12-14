/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230940
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
    var_14 = var_2;
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = 13259220512079776712ULL;
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((long long int) arr_3 [10] [10]))) ? (((unsigned int) arr_0 [i_0])) : (arr_3 [i_0] [i_0]))));
            var_16 = (unsigned char)13;
        }
    }
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 23; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 3; i_5 < 23; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            {
                                arr_22 [i_6] [i_6] [i_3] [i_6] [i_2] = ((/* implicit */unsigned char) arr_19 [i_4] [11ULL] [11ULL] [i_5] [i_6] [i_6]);
                                arr_23 [i_2] [i_3] [i_3] [i_6] [i_6] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_12 [i_5 - 2]))))));
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(var_4)))) * (((((/* implicit */int) var_10)) + (((/* implicit */int) arr_14 [i_2] [i_3] [i_4 - 3] [i_5]))))));
                            }
                        } 
                    } 
                    arr_24 [i_2] [i_2] [i_4 - 2] [22ULL] = ((/* implicit */long long int) var_8);
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(signed char)19])) && (((/* implicit */_Bool) arr_1 [i_2])))))));
    }
    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_7]))) : (arr_4 [i_7])))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) - (arr_1 [i_7])))))));
                    arr_32 [i_9] [i_8] [i_9] = ((/* implicit */unsigned int) var_1);
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 24; i_11 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */short) var_10);
                                var_22 = ((/* implicit */unsigned long long int) var_10);
                                arr_38 [i_7] [i_8] [i_9] [i_9] [i_11] [i_9] = ((/* implicit */long long int) arr_12 [i_9]);
                            }
                        } 
                    } 
                    arr_39 [i_9] [i_8] [i_9] = 17835478969367929893ULL;
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned char) min((((/* implicit */int) var_4)), (((2147483647) >> (((((/* implicit */int) arr_26 [i_7] [i_7])) - (86)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_12 = 0; i_12 < 24; i_12 += 1) 
        {
            arr_44 [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_12] [i_12] [i_7])) ? (((((/* implicit */unsigned long long int) -6912439793062630087LL)) * (arr_34 [i_7] [i_12] [i_12] [10ULL] [i_12]))) : (((/* implicit */unsigned long long int) ((-5150792354996560053LL) / (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
            /* LoopNest 3 */
            for (signed char i_13 = 0; i_13 < 24; i_13 += 2) 
            {
                for (unsigned long long int i_14 = 1; i_14 < 22; i_14 += 2) 
                {
                    for (unsigned long long int i_15 = 2; i_15 < 23; i_15 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_10)) + (2147483647))) << (((((((/* implicit */int) arr_14 [i_15 - 1] [i_15] [i_14 - 1] [i_14])) + (32))) - (17)))));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (13137604571861756035ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_15 - 2] [i_12])))));
                            arr_52 [i_12] [6LL] [6LL] [i_12] [i_12] [i_12] = 5150792354996560052LL;
                            var_26 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_10 [i_15] [i_13] [i_13])) ? (2899314062101041035ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_7])))))));
                            arr_53 [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_7] [i_12] [i_15 - 2] [i_15 - 2])) ? ((~(2147483647))) : ((+(((/* implicit */int) var_10))))));
                        }
                    } 
                } 
            } 
        }
        arr_54 [i_7] = ((/* implicit */unsigned int) (short)9356);
    }
    var_27 = ((/* implicit */unsigned int) ((max((((/* implicit */int) var_0)), (var_8))) >> ((((+((+(((/* implicit */int) var_10)))))) + (81)))));
    var_28 = ((/* implicit */long long int) ((unsigned int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (var_8))) + (((int) var_8)))));
}
