/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213046
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
    var_16 = var_7;
    var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_6))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) ((arr_0 [i_0] [15LL]) / (arr_0 [i_0] [(unsigned short)9])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (arr_1 [i_0]));
        arr_4 [(short)0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(_Bool)1] [(_Bool)1])))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((7399312834674477489ULL), (((/* implicit */unsigned long long int) (_Bool)0))))) || ((!(((/* implicit */_Bool) arr_2 [i_0])))))))) : ((~(var_14)))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_14 [i_3] = ((/* implicit */short) max((((((/* implicit */long long int) ((((/* implicit */int) var_1)) + (((/* implicit */int) arr_10 [i_1 - 1] [i_2] [i_3] [i_4]))))) + (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) -1)) : (-4991580109518471910LL))))), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_14)))))))));
                                var_18 = ((((/* implicit */_Bool) (~(max((11047431239035074126ULL), (((/* implicit */unsigned long long int) (unsigned char)255))))))) ? (((((/* implicit */unsigned long long int) ((long long int) -323820918))) / (min((var_7), (((/* implicit */unsigned long long int) (signed char)-115)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                                var_19 = ((/* implicit */long long int) var_11);
                            }
                        } 
                    } 
                    arr_15 [(_Bool)1] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((-7171133237874929011LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38145)))))) - (max((((/* implicit */unsigned long long int) (_Bool)0)), (arr_9 [i_0] [i_1 + 3] [i_1 + 1] [i_1 + 4] [i_2])))));
                    /* LoopSeq 2 */
                    for (int i_5 = 2; i_5 < 15; i_5 += 4) 
                    {
                        arr_19 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)16572))));
                        arr_20 [i_0] [i_1] [i_1] = ((short) arr_7 [i_0] [i_2]);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        var_20 += ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_0] [i_1 + 1])) ? (((/* implicit */unsigned long long int) arr_17 [i_2] [i_1 - 1])) : (11047431239035074133ULL)));
                        var_21 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (short)-3030)))) | (((/* implicit */int) (unsigned short)49553))));
                        var_22 = ((/* implicit */int) var_8);
                    }
                    var_23 = ((/* implicit */long long int) var_8);
                }
            } 
        } 
        arr_23 [i_0] = ((/* implicit */_Bool) min(((+(arr_22 [i_0]))), (((11047431239035074133ULL) * (arr_22 [i_0])))));
        arr_24 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [6U] [6U] [i_0])) ? (arr_7 [i_0] [i_0]) : (7399312834674477489ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_16 [i_0] [10ULL] [i_0] [i_0] [i_0] [i_0])) ? (arr_7 [i_0] [i_0]) : (arr_7 [i_0] [i_0])))));
    }
    var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) (short)-3035)))))))));
}
