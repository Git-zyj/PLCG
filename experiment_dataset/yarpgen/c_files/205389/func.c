/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205389
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) (~(((unsigned int) (~(var_16))))));
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) min((arr_1 [i_0]), (max((arr_1 [i_0]), (-9223372036854775807LL)))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_19 = ((((/* implicit */_Bool) arr_4 [i_0])) ? (6956729618691933480ULL) : (((/* implicit */unsigned long long int) 1906611843031761972LL)));
            /* LoopSeq 2 */
            for (signed char i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                var_20 ^= ((/* implicit */signed char) ((((unsigned int) arr_2 [i_0] [i_0])) | (arr_2 [i_2] [7U])));
                var_21 += ((unsigned long long int) arr_6 [i_1] [i_2 + 2] [i_2 + 2]);
                var_22 = ((unsigned int) 2740145611U);
            }
            for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((1554821682U) << (((1554821677U) - (1554821675U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 5907416990519795981LL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_9 [i_0] [(signed char)0] [i_1] [i_3])))))));
                var_24 -= ((/* implicit */signed char) ((65535LL) << (((/* implicit */int) ((4294967295U) != (1238307857U))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((unsigned long long int) (signed char)54)))));
                            var_26 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_16 [i_5] [i_4] [(signed char)0] [(signed char)0] [i_0])))) && (((/* implicit */_Bool) var_7))));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) arr_14 [(signed char)8] [i_4] [i_4] [i_1] [i_4] [i_0] [i_0])) : (((/* implicit */int) var_2))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 2; i_6 < 9; i_6 += 4) 
            {
                for (signed char i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    {
                        var_28 = ((long long int) (-(arr_10 [i_0] [i_1] [i_6] [i_6 + 1])));
                        var_29 = ((((/* implicit */_Bool) -5397722714086795050LL)) ? (((/* implicit */long long int) 4180421673U)) : (8777794424800121536LL));
                        var_30 = ((/* implicit */unsigned long long int) 4611686018427387903LL);
                        var_31 = ((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) var_8)));
                    }
                } 
            } 
            var_32 = ((/* implicit */unsigned long long int) var_0);
        }
        for (unsigned long long int i_8 = 2; i_8 < 8; i_8 += 3) 
        {
            var_33 ^= ((/* implicit */long long int) arr_6 [i_0] [5U] [5U]);
            var_34 = ((/* implicit */signed char) 3056659466U);
            var_35 &= arr_9 [i_0] [i_0] [i_0] [i_0];
            var_36 = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_13)), (-5996912795514077350LL))) / (((/* implicit */long long int) 1554821682U))));
            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(1238307832U)))) ? (((unsigned int) arr_20 [i_0] [i_8 - 1] [i_8])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_8])))));
        }
    }
    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 3) /* same iter space */
    {
        var_38 = ((unsigned long long int) ((((/* implicit */_Bool) (+(5397722714086795062LL)))) ? (((/* implicit */long long int) var_0)) : (min((((/* implicit */long long int) 1238307830U)), (9223372036854775807LL)))));
        var_39 ^= ((/* implicit */signed char) arr_22 [2LL] [i_9] [9U] [i_9] [i_9]);
        var_40 |= ((/* implicit */unsigned int) ((long long int) ((unsigned long long int) var_2)));
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 2; i_10 < 9; i_10 += 3) 
        {
            for (unsigned int i_11 = 1; i_11 < 9; i_11 += 4) 
            {
                {
                    var_41 = ((/* implicit */signed char) min((arr_28 [i_9]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14)))))));
                    var_42 &= ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) arr_13 [5LL] [i_10] [i_11 - 1] [i_10] [i_11 - 1])), (1729382256910270464LL))), (((/* implicit */long long int) arr_14 [i_9] [8ULL] [4U] [i_9] [i_11] [2LL] [0ULL]))));
                    var_43 = ((/* implicit */unsigned int) ((unsigned long long int) arr_9 [i_10] [i_10 - 2] [i_10 + 1] [i_10 - 1]));
                }
            } 
        } 
    }
    var_44 = ((/* implicit */unsigned int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (~(var_1))))))), (var_14)));
    var_45 = ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) var_11)))));
}
