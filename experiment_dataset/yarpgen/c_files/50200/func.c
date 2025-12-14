/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50200
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 2; i_2 < 23; i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_4 - 2] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))) ? (arr_7 [i_4 - 1] [i_3] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_7 [i_0] [i_1] [i_2 - 1] [1ULL]))))));
                                var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) (-(((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_4] [i_4])) : (((/* implicit */int) arr_3 [i_0] [(short)0] [(unsigned char)5])))) / (((/* implicit */int) arr_8 [i_4] [i_0] [i_0] [i_0] [i_4])))))))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_7 [i_0] [i_0] [i_2 + 1] [i_0])))) ? (((unsigned int) max((((/* implicit */unsigned short) var_10)), (var_6)))) : (((/* implicit */unsigned int) var_2))));
                    var_13 = ((/* implicit */signed char) ((arr_5 [i_0]) ^ ((~(arr_5 [i_0])))));
                    arr_14 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */int) arr_9 [i_0] [i_0])) << (((((/* implicit */int) var_10)) - (71))))) : (((/* implicit */int) arr_10 [i_0] [i_2]))))));
                }
                /* vectorizable */
                for (signed char i_5 = 2; i_5 < 23; i_5 += 1) /* same iter space */
                {
                    var_14 &= arr_16 [i_5 - 2] [14U] [i_0];
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) & (-1220539059)));
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) arr_4 [i_5 + 2] [i_1] [i_0]))));
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [14] [(unsigned short)12])) ? (((int) (short)19863)) : (((((/* implicit */_Bool) var_3)) ? (arr_4 [i_0] [i_1] [i_1]) : (((/* implicit */int) arr_0 [i_0])))))))));
                }
                /* vectorizable */
                for (signed char i_6 = 2; i_6 < 23; i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 1; i_7 < 22; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) arr_5 [i_0]);
                                var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_12 [i_8] [i_8]) ? (var_7) : (-2404161436667538030LL)))) ? (((/* implicit */int) arr_19 [i_8])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
                                var_20 = ((/* implicit */int) ((signed char) arr_0 [i_6 + 2]));
                            }
                        } 
                    } 
                    var_21 += ((unsigned char) arr_20 [i_6] [i_1] [i_6 + 2] [i_1]);
                    /* LoopNest 2 */
                    for (signed char i_9 = 2; i_9 < 24; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 25; i_10 += 4) 
                        {
                            {
                                arr_29 [20] [i_0] [i_1] [i_6] [i_6] [(signed char)14] = ((/* implicit */unsigned long long int) arr_26 [(signed char)10] [i_0] [i_1] [i_6] [i_1] [i_1]);
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
                                arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) 1220539034))))));
                                arr_31 [i_0] [1U] [i_6] [i_0] [(short)7] [i_6] = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0] [i_1] [i_6] [i_0] [i_10] [i_10]))) : (arr_25 [i_1] [i_1] [i_9 + 1] [i_10]));
                                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_9 - 1] [i_10])) && (((/* implicit */_Bool) arr_9 [i_0] [i_10])))))));
                            }
                        } 
                    } 
                }
                arr_32 [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1] [i_0])) * (((/* implicit */int) arr_15 [i_0] [i_0] [i_1]))))) ? (max((var_7), (((/* implicit */long long int) 3331062167U)))) : (((/* implicit */long long int) (((_Bool)0) ? (3331062167U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-45)))))))), (((/* implicit */long long int) ((signed char) (+(1666344590U)))))));
                var_24 ^= ((/* implicit */unsigned short) arr_19 [(unsigned short)22]);
                arr_33 [(unsigned short)0] [(short)10] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [0U] [i_1 - 2]))))) ? (((((((/* implicit */int) var_4)) + (2147483647))) >> (((((arr_10 [(unsigned short)0] [i_1]) ? (var_2) : (((/* implicit */int) arr_10 [20LL] [20LL])))) + (211049791))))) : (((/* implicit */int) var_0))));
            }
        } 
    } 
    var_25 &= ((/* implicit */unsigned short) var_7);
}
