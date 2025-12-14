/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194447
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
    var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) var_12))));
    var_17 = ((/* implicit */int) var_13);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) (~((((_Bool)1) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) (_Bool)1))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) arr_2 [i_0]);
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [6] [i_1 + 2] [i_0] = (+(max((((/* implicit */unsigned long long int) var_12)), (max((arr_8 [i_0] [i_0] [(unsigned char)11] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_2])))))));
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_2] [i_1]) ? (((/* implicit */int) arr_0 [i_0])) : (arr_6 [i_1 + 1] [i_2 - 1])))) ? (((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_2]))) : (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1])))))) ? (((/* implicit */int) max((((arr_6 [i_0] [i_2 - 1]) != (((/* implicit */int) var_2)))), ((!(arr_3 [i_0] [i_0])))))) : (min((((/* implicit */int) ((_Bool) (_Bool)1))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9)))))))))));
                }
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -338340929)) ? (((/* implicit */int) (_Bool)1)) : (-1268441409)))) ? (((/* implicit */unsigned long long int) ((int) arr_14 [i_0] [i_0] [i_3] [i_0]))) : (arr_2 [i_4])));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))) == (((/* implicit */int) ((unsigned char) var_6))))))));
                        var_21 = ((/* implicit */unsigned long long int) var_3);
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 1; i_5 < 18; i_5 += 3) 
                        {
                            arr_18 [i_4] [i_4] [i_3] [(_Bool)1] [0] [i_3] [i_3] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)144)) ? (5413104557544031392ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_5 + 1])) : (((/* implicit */int) ((unsigned char) arr_17 [i_0] [i_3] [i_3] [i_4])))));
                            var_22 = ((/* implicit */unsigned char) arr_14 [i_0] [i_0] [i_0] [(_Bool)1]);
                        }
                        for (int i_6 = 1; i_6 < 18; i_6 += 4) 
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((_Bool) ((unsigned char) arr_6 [i_0] [i_0])));
                            arr_22 [(unsigned char)12] [(unsigned char)12] |= (~(arr_16 [i_6 + 1] [i_6 - 1]));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [i_4] [14ULL])) ? (arr_17 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) arr_24 [i_0] [i_4] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_15)))) : ((+(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))));
                            var_24 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_6 [(_Bool)1] [i_1 - 1])) : (arr_8 [i_0] [i_1] [i_0] [i_1]))));
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_6 [9] [9])) && (((/* implicit */_Bool) arr_24 [(_Bool)1] [i_1] [4ULL] [i_1] [(_Bool)1] [i_7])))))))));
                        }
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        arr_28 [4] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_6 [i_0] [i_0])))) ? ((+(var_11))) : ((+(arr_20 [i_0])))));
                        var_26 -= arr_20 [2ULL];
                        arr_29 [i_0] [i_3] [10] [i_0] = ((/* implicit */unsigned char) ((var_4) % (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2)))))));
                    }
                    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((unsigned char) arr_19 [(unsigned char)4])))));
                    var_28 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 0ULL))));
                }
                /* LoopSeq 3 */
                for (int i_9 = 0; i_9 < 19; i_9 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 1) 
                    {
                        var_29 = ((/* implicit */int) (!(min((var_0), (var_3)))));
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (+(min((((/* implicit */unsigned long long int) (!(arr_26 [i_0] [i_0] [i_0] [i_0])))), (min((0ULL), (((/* implicit */unsigned long long int) (unsigned char)112)))))))))));
                        var_31 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_0]))));
                    }
                    var_32 -= ((/* implicit */unsigned char) (-(((unsigned long long int) ((_Bool) var_4)))));
                }
                for (unsigned char i_11 = 0; i_11 < 19; i_11 += 1) 
                {
                    var_33 = ((/* implicit */unsigned char) max((0ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                    var_34 |= ((/* implicit */unsigned char) max((((/* implicit */int) var_3)), (min((arr_27 [i_1 - 1] [i_1 + 2] [(_Bool)1] [i_1 + 2] [(_Bool)1]), (((int) arr_1 [(unsigned char)12]))))));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 19; i_12 += 4) 
                {
                    var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_13 [(unsigned char)0] [i_1 + 2] [i_1] [(unsigned char)3] [(unsigned char)3]))) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) arr_33 [i_12] [i_0] [i_1 - 1] [i_0]))));
                    var_36 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) arr_30 [i_1 + 2] [i_1] [12ULL] [i_12])))));
                }
            }
        } 
    } 
}
