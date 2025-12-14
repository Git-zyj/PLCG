/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215362
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
    var_15 = ((/* implicit */int) (-(((var_7) | (((/* implicit */unsigned long long int) var_0))))));
    var_16 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) var_14)) - (524287LL)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_17 = ((((/* implicit */_Bool) var_14)) ? ((~(arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((long long int) max((var_14), (var_14))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_7 [(short)14] [(unsigned short)7] [(short)14] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_11)) ? (arr_0 [i_2 - 2] [i_2 - 4]) : (arr_0 [i_2 - 1] [i_2 - 1])))));
                    var_18 += ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) : (var_1))) >= (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 - 2] [i_2 - 3] [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((0LL), (((/* implicit */long long int) (_Bool)0)))))))) : (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_2] [i_1])))) * (((((/* implicit */_Bool) 1995419596072013825ULL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)-1))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned short) var_3);
        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_4 [i_0]))))) : (16451324477637537790ULL))))));
    }
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(_Bool)1]))) * (arr_14 [i_3])))) ? (max((((/* implicit */unsigned long long int) arr_10 [i_3] [i_3])), (arr_14 [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 17509181054968504122ULL)))))) == (((/* implicit */unsigned long long int) var_12))));
                var_23 *= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)6)))))))) > ((~(((/* implicit */int) (_Bool)1))))));
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 471563078))) ? (((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4 - 1]))) : (arr_14 [i_3]))) : (((/* implicit */unsigned long long int) (+(-1813340816))))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) ((16451324477637537790ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) arr_13 [i_3])) ? (623779784058240090LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3] [i_3] [i_3]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4 - 1] [i_4] [i_4])))));
                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((int) (unsigned short)2048))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */unsigned long long int) -1158516038)) : (153709815373771580ULL)))))))) : (((((/* implicit */_Bool) ((153709815373771580ULL) | (((/* implicit */unsigned long long int) 365730715))))) ? (((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3]))) : (var_3))) : (((/* implicit */unsigned int) 1046433039))))));
            }
        } 
    } 
}
