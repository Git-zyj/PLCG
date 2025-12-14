/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227468
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
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) -1LL)), (4543299837204857028ULL))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            var_20 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_1 - 2] [i_1 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 1]))) >= (arr_3 [i_1 + 1] [i_1 + 1] [i_1 + 1]))))) : (max((arr_3 [i_1 + 1] [i_1 - 2] [i_1 - 1]), (((/* implicit */unsigned long long int) var_10)))));
            arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_1 [i_1 - 3]) ? (arr_3 [i_1 - 2] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 3])))))) ? (((((/* implicit */_Bool) var_15)) ? (min((((/* implicit */unsigned long long int) arr_1 [i_1])), (var_16))) : (max((((/* implicit */unsigned long long int) -9223372036854775806LL)), (arr_3 [i_0] [i_0] [4]))))) : (min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (12090951375856699323ULL))), (((/* implicit */unsigned long long int) arr_1 [i_1]))))));
            arr_5 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_1 + 1]);
        }
        arr_6 [(unsigned short)10] [i_0] |= ((/* implicit */unsigned char) max((((/* implicit */int) ((220923572U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)45)))))), (((((/* implicit */_Bool) max((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (arr_0 [i_0])))));
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (+(13903444236504694588ULL))))));
        arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) 0ULL))) && (((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)29160)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)195))) : (0ULL))))))));
    }
    for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        var_22 -= (unsigned short)49867;
        arr_11 [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_10 [i_2])), (arr_3 [i_2] [i_2] [(_Bool)1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))) : (((((/* implicit */_Bool) arr_8 [9LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))) : (var_16))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned char)41)) : (((/* implicit */int) (unsigned char)49)))) <= (((/* implicit */int) arr_2 [(unsigned char)8] [(unsigned char)8]))))))));
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_2 [i_2] [i_2])), (arr_8 [i_2])))) ? (((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_2 [i_2] [i_2])))) : (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_2 [i_2] [i_2])) : (((/* implicit */int) arr_8 [i_2])))))))));
        arr_12 [3LL] [3LL] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_8 [i_2])) + (((/* implicit */int) (unsigned short)8827)))) | (var_3)));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_24 = ((/* implicit */unsigned int) arr_14 [i_3]);
        var_25 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((long long int) arr_14 [18ULL]))) ? (((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_3]))))));
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(var_14))), (var_12)))) || (((/* implicit */_Bool) var_12))));
        arr_15 [i_3] [i_3] = 15ULL;
        var_27 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_3])) || (((/* implicit */_Bool) var_17))))), ((-(((/* implicit */int) arr_14 [i_3]))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_20 [1U] [(signed char)6] [i_4]))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4]))) | (arr_20 [(unsigned char)10] [(unsigned short)5] [i_4]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (13533821193531234826ULL)))))) ? (906036826688367637ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_5] [i_4]))))))));
            var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) var_4))));
            var_30 *= ((/* implicit */signed char) ((unsigned int) min((min((var_12), (var_16))), (((/* implicit */unsigned long long int) arr_13 [(signed char)8] [i_5])))));
        }
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                arr_26 [i_4] = ((/* implicit */long long int) arr_19 [i_7] [i_7]);
                var_31 &= ((/* implicit */int) ((((/* implicit */int) arr_21 [i_4])) != (((/* implicit */int) arr_21 [i_6]))));
                arr_27 [i_4] [i_7] = ((/* implicit */long long int) ((unsigned long long int) var_3));
            }
            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [22LL] [i_6]))) ^ (((var_16) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
            arr_28 [i_4] [i_6] [i_6] = var_8;
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */long long int) arr_20 [i_4] [i_8] [5U]);
            arr_32 [i_8] = min((((17LL) * (((/* implicit */long long int) 163603893U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_4])) && (((/* implicit */_Bool) arr_31 [i_4]))))));
        }
        var_34 = ((/* implicit */_Bool) 4953276034300590221LL);
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 3) 
        {
            for (unsigned long long int i_10 = 2; i_10 < 11; i_10 += 2) 
            {
                {
                    var_35 = ((/* implicit */_Bool) var_10);
                    var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (((/* implicit */int) (unsigned short)36376))))) ? (((/* implicit */unsigned long long int) min((((long long int) arr_17 [(unsigned char)1] [i_10])), (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_10] [i_9])) * (((/* implicit */int) (unsigned char)147)))))))) : (((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_36 [12ULL] [(_Bool)1] [(_Bool)1]))) - (var_17))))));
                }
            } 
        } 
        arr_38 [5U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_4] [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)159)) >= (((/* implicit */int) (unsigned char)126)))))) : (max((8805142025672903791LL), (((/* implicit */long long int) 1188820142U))))));
    }
}
