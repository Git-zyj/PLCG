/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190566
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
    var_19 = ((/* implicit */signed char) var_11);
    var_20 = ((/* implicit */signed char) var_9);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_21 = ((/* implicit */signed char) (+(3239477619U)));
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 8; i_1 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) 1566872503U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : ((((_Bool)1) ? (984505582639484616LL) : (((/* implicit */long long int) arr_1 [i_0]))))))))))));
            /* LoopSeq 3 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) arr_7 [i_1 + 2] [i_2 - 1] [i_2 - 1]))))))));
                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (1566872483U)))) < (((int) (unsigned short)0)))))));
            }
            for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_17)) + (((/* implicit */int) arr_10 [i_0] [i_1] [(unsigned short)2] [i_0]))))) / ((((_Bool)1) ? (arr_1 [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)176)))))));
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) arr_9 [i_1]))));
                var_27 = ((/* implicit */unsigned char) arr_1 [i_3]);
                arr_11 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])) & (((/* implicit */int) var_10))))), ((((((-9223372036854775807LL - 1LL)) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-60))))) - ((-(984505582639484616LL)))))));
            }
            for (unsigned short i_4 = 1; i_4 < 9; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    for (unsigned short i_6 = 2; i_6 < 9; i_6 += 4) 
                    {
                        {
                            arr_19 [i_0] = ((/* implicit */long long int) (_Bool)1);
                            var_28 |= ((/* implicit */unsigned short) (_Bool)1);
                            arr_20 [i_0] [i_4] [i_5] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (+(-984505582639484624LL)))))) ? (((/* implicit */long long int) var_0)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */int) (signed char)78)) : (((/* implicit */int) (signed char)20))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1276798872068304618LL)))))) : (max((((/* implicit */long long int) var_14)), (-984505582639484617LL)))))));
                            var_29 |= ((/* implicit */unsigned int) ((unsigned short) ((((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */int) (unsigned short)31)) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_4] [i_5])))) + (((/* implicit */int) max(((unsigned short)33082), (arr_4 [6LL] [i_1] [(unsigned short)0])))))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((unsigned short) (unsigned char)176)))));
            }
        }
        for (int i_7 = 2; i_7 < 8; i_7 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (var_8) : (((/* implicit */unsigned int) ((int) ((unsigned char) arr_17 [i_0] [i_0] [i_0] [i_7] [(unsigned short)0] [(unsigned short)0]))))));
            arr_24 [(signed char)2] [i_0] [(signed char)2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)183)) ? (((((/* implicit */_Bool) var_13)) ? (-984505582639484608LL) : ((-(-5531102717733785904LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)14)) || ((_Bool)1)))))));
            arr_25 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) min((((9223372036854775790LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-66))))), (((1359179958) <= (((/* implicit */int) var_1))))))) % ((-(((((/* implicit */_Bool) arr_23 [i_0])) ? (((/* implicit */int) (unsigned short)767)) : (((/* implicit */int) var_10))))))));
        }
        var_32 ^= ((/* implicit */unsigned short) min((((/* implicit */long long int) (-((-(((/* implicit */int) arr_14 [(signed char)7] [(signed char)7] [i_0] [i_0]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) arr_16 [8LL] [i_0] [i_0] [i_0] [8LL])) : (-984505582639484636LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)176)) ? (arr_1 [4LL]) : (((/* implicit */unsigned int) arr_16 [i_0] [(signed char)8] [i_0] [i_0] [0U]))))) : (((arr_7 [i_0] [i_0] [i_0]) | (984505582639484620LL)))))));
    }
    /* vectorizable */
    for (unsigned short i_8 = 2; i_8 < 14; i_8 += 3) 
    {
        arr_29 [i_8] = ((/* implicit */long long int) ((((var_0) < (arr_28 [i_8]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -984505582639484627LL))))) : (((/* implicit */int) (!(arr_27 [i_8] [i_8]))))));
        arr_30 [i_8] = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_8] [i_8])) + (((/* implicit */int) var_10))))));
    }
    var_33 = ((/* implicit */int) min(((signed char)77), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)79))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) 702660170087069352LL))))))))));
}
