/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200648
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_3 [(signed char)12] |= ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned short)0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)0))))) && (((/* implicit */_Bool) arr_2 [i_0])))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) min(((~(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])) ? (-6390465592601825295LL) : (arr_12 [i_0] [i_0] [i_2] [i_3]))))) ? ((~(((((/* implicit */_Bool) -2835390469734630276LL)) ? (15485043690425286781ULL) : (((/* implicit */unsigned long long int) var_8)))))) : (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_6 [i_0])))))))));
                        var_20 = ((/* implicit */signed char) ((int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) var_9))))), (((unsigned short) arr_6 [i_0])))));
                        arr_13 [i_0] [9U] [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((unsigned char) (short)-21))), (arr_5 [i_0])));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])) ? (-1487190468668692428LL) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) ^ (((/* implicit */long long int) ((((/* implicit */int) (signed char)86)) & (((/* implicit */int) (signed char)86)))))))) ? (((min((((/* implicit */long long int) (unsigned short)25226)), (var_2))) % (((/* implicit */long long int) ((/* implicit */int) ((short) arr_11 [i_0] [i_0] [i_0])))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_6 [i_0]))))));
    }
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (var_11) : (4294967293U)))) / (var_2)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_5) > (var_7)))), (min((var_13), (((/* implicit */unsigned long long int) var_12)))))))));
    /* LoopNest 2 */
    for (long long int i_4 = 2; i_4 < 20; i_4 += 4) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            {
                arr_19 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((var_0) | (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) : (2835390469734630287LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) min((((/* implicit */long long int) arr_15 [i_4] [i_5])), (var_8)))))) : (max((((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-66))) : (arr_14 [i_4]))), (max((var_8), (((/* implicit */long long int) var_15))))))));
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    for (short i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) -6390465592601825295LL)) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) (signed char)-72)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_17 [i_5])))) ? (min((arr_14 [i_4]), (((/* implicit */long long int) arr_22 [i_4] [i_4] [2ULL] [i_5] [i_6] [i_7])))) : ((+(arr_20 [i_4] [i_4] [i_6] [i_5]))))))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1010258519)) ? (((/* implicit */int) arr_18 [i_4 - 1] [i_4 + 1])) : (((/* implicit */int) arr_18 [i_4 + 1] [i_4 - 1]))))) ? ((~(((/* implicit */int) arr_18 [i_4 - 2] [i_4 + 1])))) : (((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) arr_15 [i_4 + 1] [i_4 - 1])) : (((/* implicit */int) arr_18 [i_4 - 2] [i_4 - 1]))))));
                            /* LoopSeq 2 */
                            for (unsigned char i_8 = 0; i_8 < 21; i_8 += 1) 
                            {
                                arr_26 [i_5] [i_5] = ((/* implicit */unsigned long long int) min((arr_21 [12] [i_4] [i_4]), (((/* implicit */unsigned char) ((signed char) ((arr_17 [i_5]) / (((/* implicit */unsigned long long int) arr_24 [i_5] [i_4] [i_4] [i_5] [i_4] [i_5]))))))));
                                arr_27 [i_5] [i_5] [i_6] [(unsigned char)9] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) (short)10147)) == (((/* implicit */int) ((((/* implicit */int) arr_18 [i_4] [i_4])) < (((/* implicit */int) var_3))))))));
                            }
                            for (unsigned char i_9 = 0; i_9 < 21; i_9 += 3) 
                            {
                                var_25 = ((/* implicit */short) (~(((unsigned int) (~(var_8))))));
                                var_26 = ((/* implicit */short) (-(((unsigned long long int) 0LL))));
                                var_27 &= ((/* implicit */unsigned short) (~(18446744073709551615ULL)));
                                var_28 = -6390465592601825295LL;
                                var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)86))) % (((9736802822272435127ULL) | (((/* implicit */unsigned long long int) 1124807186)))))))));
                            }
                            arr_30 [i_6] [i_7] [i_7] [i_7] [i_6] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_15)) ? (arr_24 [i_4] [i_4] [i_4] [i_4] [i_4] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [15] [15] [i_7] [i_5] [i_6] [i_6])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */int) arr_28 [(short)3] [i_6] [i_6] [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_18 [i_4] [i_5]))))) & (((((/* implicit */_Bool) arr_16 [i_6] [i_6] [i_5])) ? (((/* implicit */long long int) 740677257)) : (var_12)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-2786991736169785446LL) : (((/* implicit */long long int) ((/* implicit */int) (short)96)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (1419181056) : (var_7)))) : ((~(var_13)))))));
                            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((unsigned char) ((long long int) ((-4924592921474066872LL) ^ (((/* implicit */long long int) arr_29 [i_4] [i_4] [i_6])))))))));
                        }
                    } 
                } 
                arr_31 [i_4] [i_5] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) min((4924592921474066871LL), (((/* implicit */long long int) -358856187))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_4] [(short)8])))))) : (min((((/* implicit */unsigned long long int) 24)), (15485043690425286778ULL)))))));
            }
        } 
    } 
}
