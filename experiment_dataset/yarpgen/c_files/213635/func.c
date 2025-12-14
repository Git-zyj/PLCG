/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213635
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) var_3))));
                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((unsigned short) ((unsigned char) var_0))))));
                var_13 = max((((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_1] [i_0])) ? (2250700302057472ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (2250700302057483ULL));
                var_14 = ((/* implicit */_Bool) var_2);
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) min((18444493373407494153ULL), (2250700302057489ULL)));
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                {
                    arr_13 [i_2] [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 2250700302057468ULL))) ? (((/* implicit */int) (unsigned short)2032)) : (((/* implicit */int) arr_11 [i_2] [i_2] [i_4]))))) ? (var_4) : (var_4)));
                    var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_10 [i_4 + 1] [i_4 + 1] [i_3])), (var_7)))) ? (((/* implicit */unsigned long long int) var_3)) : (min((((/* implicit */unsigned long long int) arr_11 [i_4 + 1] [i_3] [i_3])), (18444493373407494163ULL)))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                arr_21 [i_2] [i_2] [i_3] [i_2] [i_5] [0U] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (short)12196)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((short) var_5))))) : (((/* implicit */int) ((_Bool) ((short) var_4))))));
                                arr_22 [i_4] [i_3] [i_4] [i_5] [i_2] [i_5] [11ULL] = ((/* implicit */short) var_7);
                                var_17 = var_7;
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 2; i_7 < 22; i_7 += 2) 
                    {
                        arr_26 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_10)) : (max((-6492470724398636827LL), (((/* implicit */long long int) 17U))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 1; i_8 < 20; i_8 += 3) 
                        {
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)25747)) ? (2250700302057475ULL) : (((/* implicit */unsigned long long int) -6492470724398636819LL)))))));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2250700302057482ULL)) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) (short)-11485))));
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_7 - 2] [i_2] [i_7] [i_7 - 1] [21LL])) ? (max((((/* implicit */unsigned long long int) 1694110803U)), (11554345510457007052ULL))) : (((/* implicit */unsigned long long int) ((int) (_Bool)1)))));
                            arr_29 [i_2] [i_2] [i_4] [i_7 + 2] [i_2] = ((unsigned short) arr_1 [i_2]);
                            var_21 = ((/* implicit */unsigned char) (unsigned short)58485);
                        }
                        for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            var_22 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) max((-6492470724398636819LL), (((/* implicit */long long int) (unsigned char)93))))) : (((unsigned long long int) arr_27 [i_2] [i_2])));
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-23279))))) : (23U)))) ? (((/* implicit */unsigned long long int) ((unsigned int) (signed char)109))) : (9592327753250735065ULL))))));
                            arr_32 [i_2] [i_2] [15LL] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (max((((/* implicit */unsigned int) var_2)), (var_0)))))) ? (((unsigned long long int) arr_16 [i_7 + 1] [i_3] [i_2] [i_3])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)166))) : (3410446721U))))));
                        }
                        var_24 -= ((/* implicit */int) max((arr_5 [i_7]), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_2] [i_7])))))))));
                        arr_33 [i_7 + 1] [(unsigned short)4] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) arr_16 [i_2] [(short)11] [i_2] [i_7]);
                        arr_34 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-32338)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-12175))) : (-508539504359792716LL)));
                    }
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        var_25 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (-6704087191973339666LL) : (var_4)))) ? (((/* implicit */unsigned long long int) arr_12 [i_2] [i_2] [i_2])) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (287477015389920549ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)20)))))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)12201)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((unsigned int) var_10))));
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (arr_12 [i_4 + 1] [i_4 + 1] [i_4 + 1]) : (arr_12 [i_4] [i_4] [19LL]))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_11 = 3; i_11 < 23; i_11 += 4) 
    {
        arr_39 [i_11 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((unsigned long long int) var_10)) : ((-(2250700302057481ULL)))));
        arr_40 [i_11] = ((/* implicit */long long int) 24U);
    }
    /* vectorizable */
    for (unsigned int i_12 = 0; i_12 < 10; i_12 += 4) 
    {
        var_28 = ((/* implicit */unsigned long long int) arr_31 [i_12] [i_12]);
        var_29 |= ((/* implicit */unsigned int) ((unsigned short) var_8));
    }
    var_30 &= ((/* implicit */unsigned char) ((signed char) ((unsigned int) var_2)));
}
