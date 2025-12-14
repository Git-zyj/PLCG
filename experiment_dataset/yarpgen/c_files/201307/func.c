/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201307
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_13 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)153)) != (((/* implicit */int) ((unsigned char) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((-1) + (9)))))))));
            var_14 = ((/* implicit */signed char) (-(((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))));
        }
        /* LoopNest 3 */
        for (short i_2 = 1; i_2 < 10; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_14 [i_0] = ((/* implicit */signed char) arr_13 [i_0 - 1]);
                        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) >= (max((((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned char) (_Bool)1))))), (max((arr_13 [i_3]), (((/* implicit */unsigned long long int) 1619616888U)))))))))));
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_17 [i_0] [(short)2] [i_0] [i_0] [4] [(short)2] = ((/* implicit */short) (-(((/* implicit */int) var_11))));
                            var_16 += ((/* implicit */long long int) max((((arr_10 [i_2 - 1] [i_2] [i_3]) / (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), ((-(arr_10 [i_2 + 2] [i_2] [i_3])))));
                        }
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            arr_20 [i_3] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_0] [0LL] [i_3] [i_4] [i_6])) ? (arr_10 [i_3] [i_2] [i_3]) : (min((((/* implicit */unsigned int) ((unsigned char) 756779561))), (max((1619616876U), (var_5)))))));
                            var_17 = ((/* implicit */unsigned char) -856290824);
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((int) ((arr_5 [i_3] [4] [i_2 + 2]) == (arr_5 [i_3] [i_0] [i_2 + 2])))))));
                            var_19 = ((/* implicit */unsigned int) min((var_19), (var_5)));
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) (unsigned short)24700))), (((((/* implicit */_Bool) (~(1138334489U)))) ? (((0) - (var_2))) : (((/* implicit */int) arr_19 [i_3] [8ULL] [i_3] [i_4] [i_4])))))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 3; i_9 < 11; i_9 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */short) max((((/* implicit */int) arr_23 [i_0])), (((((/* implicit */int) ((_Bool) var_12))) & (((/* implicit */int) arr_22 [i_9 + 1] [i_9 + 1] [(short)5] [i_10] [i_0 + 1]))))));
                                var_22 = ((/* implicit */int) arr_28 [2U] [i_8] [i_9] [i_10] [i_11]);
                                var_23 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) max((var_10), (((/* implicit */long long int) arr_32 [i_0] [i_8] [i_8] [i_10] [i_11]))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0]))) : (18446744073705357312ULL))))), (((/* implicit */unsigned long long int) max((var_6), (max((((/* implicit */unsigned short) arr_16 [4ULL] [i_8] [i_11] [i_8] [i_11])), (arr_19 [11U] [11U] [i_0] [(unsigned char)7] [(unsigned char)7]))))))));
                            }
                        } 
                    } 
                    arr_33 [i_0] [i_8] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */unsigned int) (-(var_2)))) <= (min((((/* implicit */unsigned int) var_3)), (3156632806U)))))), (var_10)));
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_0] [11] [i_8] [i_9] [i_8])) ? (arr_31 [(unsigned char)4] [i_8] [i_8] [i_8] [(unsigned char)4] [(unsigned char)4]) : (arr_30 [i_9] [9])))), (arr_3 [(signed char)10])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (max((arr_0 [6ULL]), (((/* implicit */unsigned int) max((var_2), (((/* implicit */int) var_12))))))))))));
                    arr_34 [i_0] [i_0] [i_8] [i_0] = ((/* implicit */unsigned short) (~(((((var_1) + (2147483647))) << (((var_2) - (459419299)))))));
                }
            } 
        } 
        arr_35 [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((unsigned short) arr_15 [7U] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0])));
        var_25 = ((/* implicit */unsigned int) max((var_10), ((~(((((/* implicit */_Bool) (signed char)90)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (5980313616786175802LL)))))));
    }
    var_26 = ((/* implicit */signed char) (unsigned char)149);
    var_27 = ((/* implicit */unsigned char) (~(((var_5) | (((var_5) << (((/* implicit */int) var_7))))))));
    /* LoopSeq 2 */
    for (int i_12 = 0; i_12 < 20; i_12 += 3) 
    {
        var_28 -= ((/* implicit */_Bool) ((((((/* implicit */int) var_9)) == (((/* implicit */int) arr_37 [i_12])))) ? (((((/* implicit */_Bool) arr_37 [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_12]))) : (var_10))) : (((/* implicit */long long int) (~(-1726487365))))));
        var_29 = ((/* implicit */short) var_0);
        var_30 = ((/* implicit */long long int) arr_36 [i_12]);
        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) var_7))));
        arr_38 [i_12] = ((/* implicit */unsigned long long int) 2675350421U);
    }
    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
        {
            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) 964989385U)) || (((/* implicit */_Bool) arr_40 [i_13 + 1] [i_14 + 1]))));
            arr_45 [i_14] [i_14] [(unsigned char)7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (arr_39 [i_14 + 1]) : (((/* implicit */long long int) 756779532))));
        }
        for (int i_15 = 0; i_15 < 14; i_15 += 2) /* same iter space */
        {
            arr_48 [i_15] [i_13] = ((((/* implicit */_Bool) ((-756779562) + (((((/* implicit */_Bool) 3979843572482532881ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) ((short) arr_42 [i_15])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((var_5) / (((/* implicit */unsigned int) ((/* implicit */int) (short)31208))))))))));
            var_33 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) min((var_4), (((/* implicit */short) arr_43 [i_13]))))) : (((/* implicit */int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) arr_42 [i_15])))))))));
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 14; i_16 += 2) /* same iter space */
        {
            var_34 = ((/* implicit */_Bool) min((var_34), (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) > (arr_44 [(unsigned char)5]))) && (((/* implicit */_Bool) ((signed char) var_9)))))));
            var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)4661)))))));
            arr_51 [i_16] [i_16] [i_13] = ((/* implicit */unsigned short) ((arr_47 [i_16]) ? (((/* implicit */int) (unsigned short)31200)) : (((/* implicit */int) (signed char)60))));
        }
        var_36 = ((/* implicit */long long int) 8838271077454981232ULL);
    }
}
