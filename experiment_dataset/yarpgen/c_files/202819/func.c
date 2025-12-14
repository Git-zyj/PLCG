/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202819
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
    var_20 = ((/* implicit */unsigned int) var_4);
    var_21 = var_15;
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                var_22 = ((/* implicit */short) ((((/* implicit */int) var_1)) * ((+(((/* implicit */int) arr_3 [i_1]))))));
                var_23 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)7))));
            }
            arr_6 [i_0] [(short)4] [i_1] = ((/* implicit */unsigned short) (short)16383);
            var_24 ^= ((/* implicit */long long int) ((_Bool) (signed char)-1));
            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) max(((short)18442), ((short)18462))))));
            var_26 = ((/* implicit */_Bool) (unsigned short)0);
        }
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (1842404658U)))) ? (-2127953581821086929LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))) ? ((-(((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) var_11)))))) : (((((((/* implicit */int) var_1)) / (((/* implicit */int) arr_4 [i_0])))) * (((/* implicit */int) var_12))))));
        arr_7 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)-664))) + (min((((/* implicit */long long int) (short)18442)), (-1602682955269198738LL)))));
        arr_8 [i_0] [i_0] = ((/* implicit */short) arr_2 [i_0]);
    }
    for (unsigned short i_3 = 2; i_3 < 16; i_3 += 1) 
    {
        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)250)), ((((+(((/* implicit */int) (unsigned char)245)))) + (((/* implicit */int) (unsigned char)245)))))))));
        var_29 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_4 [2U])) >> (((max((17592186044415LL), (((/* implicit */long long int) (unsigned short)7)))) - (17592186044410LL)))))), (max((arr_5 [(_Bool)1] [i_3] [i_3]), (min((var_0), (((/* implicit */long long int) arr_3 [i_3 - 2]))))))));
    }
    for (short i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            for (unsigned int i_6 = 2; i_6 < 19; i_6 += 4) 
            {
                for (short i_7 = 3; i_7 < 16; i_7 += 2) 
                {
                    {
                        arr_22 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((arr_3 [i_5]) ? (((/* implicit */int) arr_18 [i_4] [17U] [17U] [i_4])) : (((/* implicit */int) min((((/* implicit */short) (signed char)102)), (((short) (_Bool)1)))))));
                        /* LoopSeq 4 */
                        for (unsigned short i_8 = 1; i_8 < 18; i_8 += 4) /* same iter space */
                        {
                            arr_25 [i_4] [i_5] [i_5] [i_4] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-13020)), (arr_18 [i_4] [i_5] [i_5] [i_7]))))));
                            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((-1LL) / (((long long int) arr_23 [i_4] [i_5] [i_6] [i_7] [i_8 - 1]))))) ? (403495641U) : (((/* implicit */unsigned int) ((((arr_3 [i_4]) ? (((/* implicit */int) arr_0 [i_7])) : (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) arr_21 [i_4] [i_7 + 3] [i_4] [i_4])))))));
                            var_31 = 2147483647U;
                        }
                        for (unsigned short i_9 = 1; i_9 < 18; i_9 += 4) /* same iter space */
                        {
                            arr_28 [i_4] [i_7] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) var_18)) + (((/* implicit */int) (_Bool)1))));
                            var_32 *= ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_4] [i_6] [i_9 + 1] [i_7] [i_9] [i_4]))) * (max((1599868475U), (3U))))) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        }
                        for (unsigned short i_10 = 1; i_10 < 18; i_10 += 4) /* same iter space */
                        {
                            var_33 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_31 [i_10] [i_10] [i_10] [i_10] [i_10 - 1] [i_10] [i_10 - 1])))) && (((/* implicit */_Bool) ((unsigned char) arr_31 [i_10 - 1] [i_10 + 2] [i_10] [i_10 + 1] [i_10 + 1] [i_10] [i_10 + 1])))));
                            var_34 = ((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-18458)))))));
                        }
                        for (long long int i_11 = 3; i_11 < 18; i_11 += 1) 
                        {
                            arr_35 [i_4] [i_6] [(short)7] = (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_4] [i_7 - 2] [i_6] [i_5] [i_4]))) : (((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_7 + 2] [i_4] [i_7 + 2] [(unsigned char)2] [(short)3]))))));
                            var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) max((arr_20 [i_6 - 2] [i_6] [i_11 + 2] [i_11 + 1] [i_11 + 2] [i_11]), (((/* implicit */unsigned char) ((((/* implicit */int) arr_29 [i_6] [i_7 - 1] [i_11 + 2] [i_11] [i_11 - 3])) == (((/* implicit */int) arr_20 [i_6 - 2] [i_6] [i_11 + 2] [i_11] [i_11 - 1] [i_11 + 2]))))))))));
                        }
                        var_36 = ((/* implicit */short) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) 3298949493U)) : (arr_24 [i_4] [i_4] [i_4] [i_6 - 1] [i_6 + 1]))), (((arr_24 [i_5] [i_4] [i_6] [i_7 + 2] [i_6 + 1]) % (arr_24 [i_4] [i_4] [i_7 + 1] [i_7 - 1] [i_6 + 1])))));
                        var_37 = ((/* implicit */long long int) ((63U) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((_Bool) arr_27 [i_4] [i_4] [i_4]))) : (((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 20; i_12 += 1) 
        {
            for (long long int i_13 = 0; i_13 < 20; i_13 += 2) 
            {
                {
                    arr_40 [i_4] [i_12] [i_13] = ((/* implicit */unsigned char) min((((/* implicit */int) (short)-31657)), (((((/* implicit */int) (_Bool)1)) - ((+(((/* implicit */int) (short)-18454))))))));
                    arr_41 [i_4] [i_4] [i_13] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((_Bool)1) ? (5518746665952097649LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-18463))))))));
                    var_38 = ((/* implicit */unsigned int) var_11);
                }
            } 
        } 
    }
}
