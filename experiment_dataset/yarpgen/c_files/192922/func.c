/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192922
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */int) (!((((_Bool)1) && ((_Bool)1)))));
        arr_5 [i_0] [i_0] = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1)));
        arr_6 [15LL] |= ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) (_Bool)1)))));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_1] [i_1])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_2 = 2; i_2 < 14; i_2 += 3) 
        {
            arr_13 [i_1] = ((/* implicit */long long int) (_Bool)0);
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 1; i_5 < 13; i_5 += 2) /* same iter space */
                        {
                            arr_25 [i_1] [(unsigned short)13] [(unsigned short)2] [i_3] [i_4] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) (unsigned short)5283)))));
                            arr_26 [i_2] [i_5] [i_3] [i_2] [i_4] [i_3] = ((/* implicit */unsigned short) (-(arr_7 [i_2] [i_2 + 1])));
                            arr_27 [i_1] [i_1] [i_1] [10] [i_1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_2 - 2] [i_2 - 1])) || (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3]))) != (arr_21 [i_5])))));
                        }
                        for (unsigned short i_6 = 1; i_6 < 13; i_6 += 2) /* same iter space */
                        {
                            arr_30 [i_1] [i_2] [i_2] [i_3] [i_3] [i_4] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_2 - 2] [i_6 + 2])) && (((/* implicit */_Bool) -6921505391644209130LL))));
                            var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((_Bool) (short)19167)))));
                            var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((long long int) 1648313078)) < (((/* implicit */long long int) ((((-625971004) + (2147483647))) << (((((-2390287048657369409LL) + (2390287048657369434LL))) - (25LL)))))))))));
                        }
                        arr_31 [i_3] [i_3] [i_2] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_20 [i_3] [i_3] [i_3])) <= (((((/* implicit */int) arr_17 [i_1] [i_2] [i_3] [i_4])) * (((/* implicit */int) (short)32767))))));
                    }
                } 
            } 
            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)32767)) ? (-2135228204) : (arr_7 [11LL] [(short)0]))) + ((((_Bool)0) ? (((/* implicit */int) (short)25298)) : (arr_7 [i_2] [i_1]))))))));
            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (!(((/* implicit */_Bool) arr_24 [i_1] [i_1] [(unsigned short)1] [i_2] [i_2 - 2])))))));
        }
    }
    /* vectorizable */
    for (long long int i_7 = 1; i_7 < 19; i_7 += 1) 
    {
        var_16 = ((int) 2789917247U);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            for (unsigned short i_9 = 0; i_9 < 20; i_9 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        var_17 = ((/* implicit */int) (+(((long long int) -1761778366))));
                        var_18 = ((/* implicit */unsigned short) (-(arr_37 [(_Bool)1] [(_Bool)1] [i_9])));
                        var_19 = ((/* implicit */unsigned short) arr_32 [i_10]);
                        arr_42 [i_7] [i_7] [i_9] [i_10] [i_7] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_7 - 1])) ? ((~(1316047156))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (1505050056U))))));
                    }
                    arr_43 [i_7 + 1] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_7 + 1])) << (((((/* implicit */int) (unsigned short)65535)) - (65523)))));
                    arr_44 [i_9] = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (arr_39 [i_7] [(unsigned short)13] [i_7 - 1] [14LL]));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */short) var_6);
    /* LoopSeq 2 */
    for (long long int i_11 = 0; i_11 < 21; i_11 += 4) 
    {
        var_21 = ((/* implicit */short) max((((unsigned short) 75729356)), (((unsigned short) (unsigned char)198))));
        arr_48 [i_11] [i_11] = ((/* implicit */short) min((((/* implicit */unsigned short) ((((long long int) (unsigned short)4080)) <= (((/* implicit */long long int) ((/* implicit */int) ((-1LL) < (2221679625160584393LL)))))))), (arr_1 [i_11])));
    }
    for (long long int i_12 = 0; i_12 < 20; i_12 += 2) 
    {
        var_22 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(625971022))), (((/* implicit */int) max((arr_46 [(short)8] [(unsigned short)20]), (((/* implicit */unsigned short) (unsigned char)82)))))))) ? (((/* implicit */int) ((unsigned short) arr_34 [i_12]))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_40 [i_12] [i_12] [i_12] [(unsigned char)0])) ? (((/* implicit */int) arr_0 [i_12])) : (((/* implicit */int) arr_1 [(unsigned short)14])))) <= (((/* implicit */int) ((unsigned short) -2390287048657369408LL))))))));
        arr_51 [i_12] [i_12] = ((/* implicit */unsigned short) ((unsigned int) (unsigned short)42553));
        var_23 *= ((/* implicit */unsigned int) ((long long int) max((arr_46 [i_12] [i_12]), (arr_46 [i_12] [(unsigned short)10]))));
    }
}
