/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220245
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
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_2)))) ? (((((-393145131517920032LL) + (9223372036854775807LL))) << (((((/* implicit */int) var_9)) - (92))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))))))));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) (+(arr_4 [i_1])))) : (var_7))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_5 [i_0] [i_1])))))))));
                var_16 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 67106816U)) ? (((/* implicit */unsigned long long int) arr_2 [i_0 + 3])) : (var_1)))) ? (((((/* implicit */_Bool) (unsigned char)12)) ? (arr_2 [i_0 - 3]) : (arr_2 [i_0 + 3]))) : ((+(arr_2 [i_0 - 4])))));
                arr_6 [i_0] = ((/* implicit */unsigned char) arr_5 [i_0] [i_0]);
                var_17 = ((/* implicit */short) ((unsigned short) (-(((/* implicit */int) (unsigned short)2016)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [19LL] [19LL])) ? (arr_7 [i_3]) : (arr_8 [i_2])))) ? (((var_4) ? (((/* implicit */unsigned int) arr_8 [i_2])) : (2152858993U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)24576))))) : (((/* implicit */unsigned int) arr_10 [i_3]))));
                /* LoopSeq 4 */
                for (unsigned int i_4 = 3; i_4 < 23; i_4 += 2) /* same iter space */
                {
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_16 [i_4 + 1]))) - (((((/* implicit */_Bool) arr_10 [i_4 + 1])) ? (arr_16 [i_4 - 1]) : (arr_16 [i_4 - 1])))));
                    arr_17 [5U] [i_3] [i_4 - 1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [i_4 - 1] [i_3])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_15 [i_4] [i_4 - 3] [(unsigned short)16]))))) ? (((/* implicit */int) ((_Bool) arr_13 [i_3] [i_4 - 2] [i_2]))) : (((/* implicit */int) arr_15 [18] [i_4 - 2] [18]))));
                }
                for (unsigned int i_5 = 3; i_5 < 23; i_5 += 2) /* same iter space */
                {
                    var_20 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((var_1) * (((/* implicit */unsigned long long int) arr_8 [i_3]))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2] [i_3] [i_3]))) : (572482817U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))));
                    var_21 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_5)) ? (arr_12 [i_5 - 2] [i_5 - 3]) : (arr_12 [i_5 - 1] [i_5 - 2])))));
                }
                /* vectorizable */
                for (unsigned int i_6 = 3; i_6 < 23; i_6 += 2) /* same iter space */
                {
                    arr_23 [i_6 - 3] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_6 - 3] [i_6 + 1] [i_6 - 2])) ? (arr_13 [i_6] [i_6 - 2] [i_6 - 3]) : (arr_13 [i_6] [i_6 - 1] [i_6 + 1])));
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (+(((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2] [i_2] [i_2]))) & (-7468129810945776327LL))))))));
                }
                for (unsigned int i_7 = 3; i_7 < 23; i_7 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -420932291)) ? (((/* implicit */int) ((short) arr_25 [i_7] [9ULL] [i_7 + 1] [i_7]))) : (((/* implicit */int) ((_Bool) arr_13 [i_7 - 3] [i_7 - 2] [i_7 - 1])))));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((17600339062813562190ULL) * (arr_20 [i_2] [i_3] [i_2])))) ? ((+(((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-65))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                    var_25 = ((/* implicit */int) var_6);
                    var_26 = ((/* implicit */signed char) arr_22 [i_2] [i_3]);
                    var_27 = ((/* implicit */_Bool) (unsigned char)83);
                }
            }
        } 
    } 
}
