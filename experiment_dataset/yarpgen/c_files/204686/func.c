/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204686
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
    for (signed char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0 + 3] [i_1]))));
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) min((((/* implicit */long long int) var_2)), ((((((_Bool)1) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) & (((/* implicit */long long int) var_7)))))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */_Bool) ((unsigned char) arr_8 [i_0 + 3]));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-4913))) - (var_10)));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            var_22 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 2] [i_3 + 1]))) ^ (-3475240028465682352LL)));
                            arr_13 [i_0] [i_1] [i_2] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0 - 1] [i_0] [i_3 - 1] [i_3 - 1]))) / (var_5)));
                        }
                        arr_14 [i_2] [i_2] = ((/* implicit */_Bool) (~(arr_8 [i_0])));
                    }
                    var_23 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 - 1])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_11 [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1]))))) ? (((/* implicit */int) min((((/* implicit */signed char) arr_12 [9U])), (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 - 1])))) : ((+(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 - 1]))))));
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned int) (+((-((-(-1944639356)))))));
                        var_25 ^= min((((((/* implicit */long long int) (-2147483647 - 1))) + (arr_4 [i_5 + 1] [i_0 + 2]))), (((/* implicit */long long int) ((short) arr_4 [i_5 + 1] [i_0 + 1]))));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 3; i_6 < 23; i_6 += 2) 
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */int) ((short) var_14))) != (((/* implicit */int) (unsigned char)255))));
                        arr_21 [i_0 - 2] [i_1] [i_6 - 3] = ((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_6] [i_1] [i_1] [i_1] [i_0])) % (arr_18 [i_0] [i_1] [i_1] [i_2] [i_6 - 1])));
                        arr_22 [i_0] [i_1] [i_2] [i_6 + 1] [i_6] [i_6 - 1] = ((/* implicit */unsigned int) ((arr_8 [i_0 - 1]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1])))));
                        arr_23 [i_0] [i_2] [i_2] [i_6 - 1] [i_2] |= ((/* implicit */int) (-(arr_20 [i_6 + 1] [i_6] [i_6 + 1] [i_6] [i_6])));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 23; i_7 += 1) 
                    {
                        for (long long int i_8 = 3; i_8 < 23; i_8 += 1) 
                        {
                            {
                                arr_28 [i_0] [i_0] [i_1] [i_2] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2] [i_8] [i_8 + 1]))))) ? (-28593339) : (((/* implicit */int) var_12))));
                                var_27 = ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (((unsigned short) var_12))));
                                arr_29 [i_0] [i_8] [i_2] [i_0] [i_7] [i_8] [i_8] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)9094)) & (((/* implicit */int) var_15))))) : (((((/* implicit */unsigned long long int) 2260454213523074150LL)) & (arr_3 [i_2] [i_7])))))));
                                arr_30 [i_8] [14U] [i_8] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 28593343)) ? (((/* implicit */int) (unsigned char)255)) : (arr_10 [i_1])))))) < (((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_8 + 1] [i_8 + 1])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 - 1] [i_8 - 3] [i_2])))))));
                            }
                        } 
                    } 
                    arr_31 [i_1] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9347)) ? (((/* implicit */int) arr_2 [i_1])) : (arr_18 [i_2] [i_0] [i_0] [i_0] [i_0])))) ? (max((var_17), (((/* implicit */unsigned int) arr_6 [12LL] [12LL])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)30820)))))) * ((-(((((/* implicit */unsigned int) -28593344)) | (var_17))))));
                }
                for (long long int i_9 = 4; i_9 < 22; i_9 += 1) 
                {
                    arr_35 [i_9 - 1] [i_9] [i_9 - 1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((((/* implicit */short) var_1)), (arr_25 [i_0] [i_1] [i_0] [19]))), (((/* implicit */short) arr_32 [i_0] [i_1] [i_9]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-32231))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)30720)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_6)))))));
                    arr_36 [i_1] [i_9] = ((/* implicit */long long int) ((arr_9 [i_0] [i_0] [i_1] [i_9]) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_0] [i_0 - 1] [i_0] [i_0]))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        for (int i_11 = 3; i_11 < 20; i_11 += 3) 
                        {
                            {
                                var_28 ^= ((/* implicit */int) max(((!(arr_38 [i_9] [i_9 - 1] [i_9 - 3] [i_9 - 4] [i_9 - 2] [i_9]))), (((((/* implicit */unsigned int) ((/* implicit */int) var_16))) >= (var_7)))));
                                arr_42 [i_11] [i_1] [i_9] [i_1] [i_11] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_13))))) : (((0LL) - (((/* implicit */long long int) min((arr_27 [9LL] [15] [i_1] [i_9] [15] [i_10] [i_11 - 3]), (((/* implicit */int) arr_17 [i_0] [i_0] [15] [i_0] [i_11] [i_0])))))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */short) (-(((((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned long long int) 2147483645)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_0 - 2] [i_9 - 2])))))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 24; i_13 += 1) 
                    {
                        for (signed char i_14 = 1; i_14 < 23; i_14 += 1) 
                        {
                            {
                                arr_51 [i_0] [i_1] [i_0] [i_12] [i_13] [i_13] [i_14] = ((/* implicit */int) arr_11 [i_0] [i_1] [i_12] [i_1] [i_12]);
                                var_30 = ((/* implicit */unsigned char) ((((arr_5 [i_0 + 1] [i_0 - 2] [i_12]) >= (arr_5 [i_12] [i_0 + 2] [i_0 + 2]))) ? (max((0ULL), (((/* implicit */unsigned long long int) arr_24 [i_0 - 2] [i_13] [i_0 - 2] [i_0 - 2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_14])) && (((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0]))))))));
                                arr_52 [i_0] [i_1] [i_12] [i_13] [i_12] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)32757)) ? (((((/* implicit */_Bool) arr_27 [i_14] [i_14 - 1] [i_14 - 1] [i_14] [i_14] [i_14] [i_12])) ? (((/* implicit */unsigned int) arr_49 [i_0] [i_1] [i_1] [i_12] [i_1] [i_1] [i_14])) : (((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_0 + 2] [i_0] [i_0 + 2]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_13] [i_14] [i_14] [i_13] [i_14 - 1] [i_0])))));
                                var_31 = ((/* implicit */int) max((((/* implicit */long long int) var_17)), (((((/* implicit */_Bool) 3436527138220157047LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-6014))) : (arr_8 [i_1])))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) max((arr_10 [i_0 + 1]), (min((((/* implicit */int) (unsigned char)166)), (arr_10 [i_0 - 2]))))))));
                }
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) (-(-3436527138220157051LL))))));
    var_34 = ((/* implicit */unsigned int) var_5);
}
