/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38387
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
    var_13 = ((/* implicit */signed char) min((((((/* implicit */long long int) -166341920)) | (((var_4) & (((/* implicit */long long int) ((/* implicit */int) var_6))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) var_0))))) && (((/* implicit */_Bool) var_3)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) ((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((int) arr_1 [i_0]));
        var_15 = ((/* implicit */signed char) arr_1 [i_0]);
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 3; i_3 < 17; i_3 += 2) 
                {
                    {
                        arr_12 [i_2] = ((/* implicit */long long int) var_12);
                        var_16 = ((/* implicit */unsigned int) ((short) var_4));
                        arr_13 [i_1] [i_0] [i_0] [i_1] &= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_3 - 3] [i_3 + 1] [i_3 - 1] [i_3 - 2]))));
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (-166341920) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_10)) ? (var_3) : (8143298555870484023ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_4 = 1; i_4 < 16; i_4 += 4) 
    {
        arr_17 [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) min(((_Bool)0), ((_Bool)0))))));
        /* LoopSeq 3 */
        for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            arr_20 [i_4] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((arr_16 [i_4] [i_4]), (((/* implicit */unsigned long long int) arr_15 [i_5]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [i_4] [i_5]))))) : (min((((/* implicit */unsigned long long int) var_10)), (var_7))))), (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_15 [i_4])) : (var_12))), (((/* implicit */unsigned long long int) min((arr_18 [i_4] [i_5]), ((_Bool)1))))))));
            arr_21 [i_4] [(_Bool)1] = ((/* implicit */unsigned short) ((int) var_1));
            arr_22 [i_5] &= arr_19 [i_5];
        }
        for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 2) 
        {
            arr_27 [i_4] [i_6] [(_Bool)1] = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (_Bool)0))))))) && (((/* implicit */_Bool) 2147483647)));
            arr_28 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */short) var_9)), ((short)24771))))));
            var_18 = ((/* implicit */signed char) (+((-(arr_26 [i_4 + 1] [i_6 + 3])))));
        }
        for (long long int i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (long long int i_8 = 2; i_8 < 17; i_8 += 2) 
            {
                var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (arr_23 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) / (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_8] [i_7] [i_4])))));
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((unsigned int) (-(arr_23 [i_4] [i_7])))))));
                var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))));
            }
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                var_22 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((3984788025U) + (((/* implicit */unsigned int) arr_15 [5LL])))))))), (((unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_24 [i_7] [(_Bool)1])))))));
                arr_37 [i_4] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_4] [i_9])) - (((/* implicit */int) var_6))))) ? (arr_26 [i_4 + 1] [i_4 + 1]) : (((/* implicit */int) var_0))))) : (max((((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (1001746716U)))), (((long long int) (short)24))))));
                var_23 = min((((7163198237731482223LL) / (((/* implicit */long long int) arr_26 [i_4 + 2] [i_4 + 2])))), (((/* implicit */long long int) arr_29 [i_7] [i_7] [i_7])));
            }
            for (unsigned int i_10 = 3; i_10 < 17; i_10 += 3) 
            {
                arr_41 [i_7] [i_4] = ((/* implicit */unsigned long long int) ((int) (-(1024U))));
                arr_42 [i_4] = ((/* implicit */_Bool) arr_34 [i_4] [i_7] [i_10]);
                arr_43 [i_7] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_6) ? (((((/* implicit */unsigned long long int) var_4)) & (7267358090556371419ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_10 - 3] [i_4 + 3] [i_4 + 3])))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_4] [i_7] [17U]))) ^ (var_3)))) ? (((((/* implicit */_Bool) var_12)) ? (arr_38 [i_4] [i_7] [i_4] [i_4]) : (arr_19 [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_10 + 2] [i_7] [1] [i_4 + 1]))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_25 [i_4 + 3] [i_4])), (var_4))))));
                var_24 = ((/* implicit */signed char) var_12);
            }
            for (unsigned short i_11 = 4; i_11 < 17; i_11 += 2) 
            {
                arr_46 [i_4] [(unsigned short)10] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) (short)-6440)))));
                arr_47 [i_4] [i_7] [i_11 - 4] [i_4] = ((/* implicit */unsigned short) (!((((-(((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) arr_29 [i_11] [i_7] [(unsigned short)8]))))));
            }
            var_25 = ((/* implicit */signed char) ((long long int) max((arr_19 [i_4]), (((((/* implicit */unsigned long long int) var_10)) | (var_12))))));
            var_26 = ((/* implicit */unsigned short) var_3);
        }
    }
    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_4))), (((/* implicit */long long int) var_6))))) ? (max((12ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 11179385983153180199ULL)) ? (2571881857269466589ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)14))))))))));
    var_28 = ((/* implicit */short) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64))) != (((unsigned long long int) var_8)))));
}
