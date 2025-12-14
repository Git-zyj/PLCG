/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211532
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
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
                {
                    var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((1625404335U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_2])))))) != (((/* implicit */int) ((unsigned short) var_9)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        var_20 |= ((/* implicit */long long int) var_14);
                        var_21 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (short)-9934))))));
                        arr_8 [4U] [4U] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) < (arr_7 [(short)5] [i_2] [(short)0] [(short)5])));
                    }
                    for (long long int i_4 = 1; i_4 < 14; i_4 += 4) 
                    {
                        arr_11 [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((unsigned short) var_15));
                        arr_12 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */signed char) var_12);
                        var_22 *= ((/* implicit */unsigned char) ((_Bool) ((unsigned long long int) var_16)));
                        var_23 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [i_4 + 1])) >= (((/* implicit */int) arr_4 [i_4 + 2] [i_4 + 1] [i_4 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_0 [i_2]))) || (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)45)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_0])))))));
                    }
                }
                for (short i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
                {
                    arr_16 [i_1] = max((((/* implicit */int) (unsigned short)21481)), (((((/* implicit */_Bool) (unsigned short)6450)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)0)))));
                    arr_17 [i_0] [12ULL] [i_1] [(signed char)3] = ((/* implicit */int) min((((/* implicit */long long int) (unsigned short)44029)), (3847575588010603164LL)));
                    var_24 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)6438)))) : (max((arr_14 [(unsigned short)7] [i_0] [i_0]), (((/* implicit */unsigned int) var_12)))))));
                }
                for (unsigned long long int i_6 = 2; i_6 < 15; i_6 += 3) 
                {
                    arr_21 [i_0] [i_0] [i_6] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max(((+(1663098346989807492LL))), (((/* implicit */long long int) (short)30275))))), (max((arr_15 [i_6 - 1] [i_6] [i_6 - 1] [(short)13]), (((/* implicit */unsigned long long int) var_10))))));
                    var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((4611686018427387903LL), (((/* implicit */long long int) (signed char)1)))))));
                }
                var_26 |= ((/* implicit */unsigned short) ((max((((((/* implicit */int) arr_20 [i_1] [i_1] [i_0])) >> (((-4611686018427387903LL) + (4611686018427387908LL))))), (((/* implicit */int) ((short) (unsigned char)106))))) / (((100663296) ^ (33423360)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 3; i_7 < 9; i_7 += 2) 
    {
        for (int i_8 = 0; i_8 < 12; i_8 += 4) 
        {
            {
                arr_29 [i_7] = ((/* implicit */long long int) var_7);
                var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 808344848461857224ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_15 [i_7 - 3] [i_7] [i_7] [i_7]))))));
                var_28 = ((/* implicit */_Bool) (((~(((/* implicit */int) (signed char)63)))) / ((~(((/* implicit */int) (unsigned short)21510))))));
                var_29 += ((/* implicit */unsigned short) var_13);
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_9 = 0; i_9 < 23; i_9 += 4) 
    {
        for (long long int i_10 = 0; i_10 < 23; i_10 += 2) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 4) 
            {
                {
                    arr_39 [i_9] [22ULL] &= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) (signed char)40)))))) ? (((long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_9]))) : (var_0)))) : (((/* implicit */long long int) (~(((arr_31 [(unsigned short)13]) >> (((((/* implicit */int) arr_35 [i_9] [10U] [i_9])) - (2392))))))))));
                    /* LoopSeq 1 */
                    for (long long int i_12 = 0; i_12 < 23; i_12 += 4) 
                    {
                        arr_42 [(unsigned short)7] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((-(((/* implicit */int) (signed char)121))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_1))))) : (((var_0) - (((/* implicit */long long int) -1268457466))))));
                        arr_43 [i_9] |= ((/* implicit */unsigned long long int) (signed char)127);
                    }
                    var_30 = ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)31)))), (((/* implicit */int) (signed char)121)))) != ((-(-100663297)))));
                }
            } 
        } 
    } 
}
