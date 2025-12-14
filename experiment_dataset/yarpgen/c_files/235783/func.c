/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235783
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_19 -= ((/* implicit */short) arr_2 [i_0]);
        arr_3 [i_0 - 1] = ((/* implicit */_Bool) ((((arr_2 [i_0 - 1]) != (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1]))))) ? (((/* implicit */int) ((signed char) (short)5359))) : (((int) arr_2 [i_0 - 1]))));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-5363))))))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (((2341297172U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1])))))))));
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) min((((int) (unsigned short)58021)), (((int) arr_5 [i_1] [14U]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_2] [i_2])) - (((/* implicit */int) (_Bool)1))))) : ((-(3731405879U)))));
            arr_8 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-64)) ? (var_3) : (((/* implicit */unsigned int) 0))));
        }
        for (short i_3 = 1; i_3 < 23; i_3 += 4) /* same iter space */
        {
            arr_11 [(signed char)2] [(signed char)18] [(signed char)18] = ((/* implicit */unsigned int) (-(min((arr_7 [i_3 - 1] [i_3 - 1] [i_3]), (((/* implicit */unsigned long long int) ((signed char) arr_7 [i_1] [i_3] [7U])))))));
            arr_12 [i_1] [i_3 + 1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((short) (!(((/* implicit */_Bool) (signed char)52))))))) ^ (((((/* implicit */_Bool) (+(783345978)))) ? (min((2578705912357716928LL), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)38))))))));
        }
        for (short i_4 = 1; i_4 < 23; i_4 += 4) /* same iter space */
        {
            arr_15 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (+(((var_4) / (((/* implicit */int) (signed char)122))))));
            var_22 *= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_1]))))) ? (((/* implicit */int) min((arr_10 [i_1] [i_1]), (((/* implicit */short) (signed char)-64))))) : (((/* implicit */int) var_16))))));
        }
        var_23 -= ((/* implicit */unsigned int) min((1878116973), (((((/* implicit */_Bool) 2341297170U)) ? (((/* implicit */int) arr_10 [i_1] [i_1])) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)14581)) <= (((/* implicit */int) (signed char)-75)))))))));
    }
    for (int i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        var_24 = ((/* implicit */unsigned int) arr_2 [i_5]);
        arr_20 [(unsigned short)6] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_10 [i_5] [i_5])) ? (((((/* implicit */_Bool) (signed char)-62)) ? (arr_7 [i_5] [i_5] [i_5]) : (((/* implicit */unsigned long long int) 2873995464U)))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)-13)), (var_14)))))));
        arr_21 [i_5] [i_5] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_11)) ? (-8276907974652615796LL) : (((/* implicit */long long int) ((((/* implicit */int) var_18)) / (((/* implicit */int) (unsigned short)50958)))))))));
        /* LoopSeq 1 */
        for (long long int i_6 = 1; i_6 < 8; i_6 += 2) 
        {
            arr_24 [i_6 + 3] [(signed char)10] [i_5] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (+(((((/* implicit */int) (signed char)123)) / (((/* implicit */int) (signed char)115))))))), ((-(arr_13 [i_5] [i_6] [i_5])))));
            arr_25 [i_5] [i_6 + 2] [i_6 + 2] &= ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) arr_16 [i_5] [i_6 + 1])));
        }
        var_25 = ((/* implicit */unsigned short) var_10);
    }
    for (long long int i_7 = 0; i_7 < 20; i_7 += 4) 
    {
        arr_30 [i_7] [i_7] = min((((/* implicit */long long int) max((((/* implicit */int) (signed char)0)), (((((/* implicit */_Bool) arr_5 [i_7] [(signed char)23])) ? (((/* implicit */int) (unsigned short)4169)) : (((/* implicit */int) arr_26 [i_7]))))))), (arr_27 [i_7]));
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) max((((((/* implicit */int) ((short) var_18))) & (((/* implicit */int) (signed char)-123)))), (((min((((/* implicit */int) (signed char)70)), (arr_1 [i_7]))) & (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [i_7])) : (((/* implicit */int) arr_0 [(signed char)21])))))))))));
        arr_31 [i_7] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_5 [i_7] [i_7]))))));
    }
    /* LoopNest 2 */
    for (short i_8 = 0; i_8 < 25; i_8 += 2) 
    {
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            {
                arr_38 [i_8] [i_8] [i_8] = ((/* implicit */signed char) max((arr_34 [i_9 - 1] [i_9 - 1]), (min((var_5), (arr_34 [i_9 - 1] [i_9 - 1])))));
                var_27 -= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((signed char) var_4))) ? (((/* implicit */int) ((signed char) (signed char)-64))) : ((~(((/* implicit */int) arr_37 [i_9] [(unsigned short)8] [i_9 - 1]))))))));
                arr_39 [i_8] [i_9] = ((/* implicit */unsigned int) arr_36 [i_8] [i_8] [i_8]);
                var_28 &= ((/* implicit */signed char) max((((min((arr_33 [i_8]), (((/* implicit */unsigned int) (short)0)))) >> (((/* implicit */int) (_Bool)1)))), ((+(arr_32 [i_8])))));
            }
        } 
    } 
}
