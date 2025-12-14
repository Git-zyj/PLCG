/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189615
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
    var_14 = ((/* implicit */_Bool) 2063602222);
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_2))));
    var_16 = ((/* implicit */unsigned short) var_5);
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_0 [i_0]))));
        arr_2 [(unsigned short)0] [6LL] &= ((/* implicit */unsigned int) (unsigned char)146);
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (signed char)80))));
                    var_20 ^= var_3;
                    var_21 += ((/* implicit */_Bool) ((arr_4 [i_1]) & (arr_4 [i_1])));
                }
            } 
        } 
    }
    for (int i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((arr_13 [16] [i_4]) == (((/* implicit */int) var_4)))) ? (var_3) : ((-(((/* implicit */int) (signed char)119)))))))));
            arr_15 [i_4] [i_4] [i_3] = ((/* implicit */int) ((arr_14 [i_4] [i_4]) == (((/* implicit */int) (unsigned short)44649))));
            var_23 -= ((/* implicit */signed char) ((unsigned char) (((+(arr_11 [i_4] [i_3]))) > (((/* implicit */int) (signed char)-97)))));
        }
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            var_24 += ((/* implicit */unsigned char) ((min((((arr_1 [i_3] [i_5]) ? (-251564123) : (((/* implicit */int) var_12)))), (var_6))) < (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)44654)) & (((/* implicit */int) (unsigned short)31130))))) ? ((~(arr_10 [i_5]))) : (((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */int) arr_6 [i_3])) : (((/* implicit */int) (signed char)-120))))))));
            var_25 = ((/* implicit */unsigned short) arr_10 [i_3]);
            arr_18 [i_3] [i_5] [i_3] = min(((+(((/* implicit */int) (signed char)95)))), (21));
        }
        var_26 ^= ((/* implicit */unsigned char) (~(((unsigned long long int) arr_4 [i_3]))));
    }
    for (int i_6 = 0; i_6 < 19; i_6 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            for (int i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                for (short i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_10 = 0; i_10 < 19; i_10 += 3) 
                        {
                            var_27 = max((((/* implicit */int) max((arr_3 [i_6] [i_6]), (arr_3 [i_6] [i_6])))), (((((/* implicit */_Bool) ((unsigned int) arr_11 [i_6] [i_6]))) ? (min((arr_14 [i_6] [i_6]), (var_8))) : ((+(((/* implicit */int) var_5)))))));
                            var_28 -= (((-(706187480))) <= (((/* implicit */int) arr_25 [i_6] [i_7] [i_7] [i_7])));
                            arr_33 [i_6] = ((/* implicit */short) 14898354815773882256ULL);
                        }
                        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 3) 
                        {
                            var_29 &= ((/* implicit */signed char) max((((/* implicit */int) var_12)), (((((int) arr_35 [i_7] [i_8] [i_7])) % (((/* implicit */int) (_Bool)1))))));
                            arr_37 [i_6] [(unsigned short)15] [i_6] [i_6] = max((((int) ((((/* implicit */_Bool) var_13)) ? (arr_31 [i_6] [i_6] [i_6] [i_6] [i_6]) : (var_2)))), (max((((/* implicit */int) (signed char)119)), (max((var_6), (arr_22 [i_7] [i_8]))))));
                            arr_38 [i_6] [(unsigned short)0] [(unsigned short)0] [(unsigned short)0] [i_6] = (i_6 % 2 == 0) ? (((/* implicit */unsigned char) ((((((/* implicit */int) (!(arr_36 [i_6] [i_6] [i_8] [i_7] [i_6] [i_6])))) * (((arr_14 [i_6] [i_6]) % (((/* implicit */int) arr_36 [i_6] [i_7] [i_7] [i_11] [i_6] [(signed char)8])))))) - (((/* implicit */int) ((((/* implicit */int) ((arr_4 [i_8]) < (((/* implicit */unsigned int) arr_21 [(unsigned short)0]))))) <= (((/* implicit */int) arr_6 [i_6])))))))) : (((/* implicit */unsigned char) ((((((/* implicit */int) (!(arr_36 [i_6] [i_6] [i_8] [i_7] [i_6] [i_6])))) * (((arr_14 [i_6] [i_6]) * (((/* implicit */int) arr_36 [i_6] [i_7] [i_7] [i_11] [i_6] [(signed char)8])))))) - (((/* implicit */int) ((((/* implicit */int) ((arr_4 [i_8]) < (((/* implicit */unsigned int) arr_21 [(unsigned short)0]))))) <= (((/* implicit */int) arr_6 [i_6]))))))));
                            arr_39 [i_7] [i_11] [i_8] [i_6] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_31 [i_6] [i_7] [i_8] [i_9] [i_11])) ? (max((((/* implicit */int) (unsigned short)31130)), (5))) : (var_13)))));
                            var_30 = ((/* implicit */unsigned short) (((((-(((/* implicit */int) arr_1 [i_6] [i_6])))) % (var_8))) ^ (((/* implicit */int) arr_29 [i_6] [i_6] [i_6] [i_8] [i_6] [i_8]))));
                        }
                        for (int i_12 = 0; i_12 < 19; i_12 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned int) 14898354815773882257ULL);
                            var_32 = ((/* implicit */unsigned short) ((unsigned char) 1793808725));
                            var_33 = ((/* implicit */unsigned short) max(((short)0), (((/* implicit */short) (unsigned char)13))));
                        }
                        var_34 = ((short) ((((/* implicit */_Bool) arr_21 [i_9])) ? (((/* implicit */int) arr_24 [i_6] [8U] [i_8] [i_9])) : (((/* implicit */int) arr_24 [i_9] [i_8] [i_6] [i_6]))));
                    }
                } 
            } 
        } 
        var_35 = ((/* implicit */long long int) (~(arr_22 [i_6] [i_6])));
        var_36 ^= ((/* implicit */int) arr_17 [i_6] [i_6] [i_6]);
        arr_42 [13] [i_6] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [i_6])) && (((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_1)))))) ? (max((((/* implicit */unsigned int) 1793808725)), (17U))) : (((/* implicit */unsigned int) var_8))));
    }
    for (int i_13 = 0; i_13 < 19; i_13 += 3) /* same iter space */
    {
        var_37 = (!((_Bool)1));
        arr_45 [i_13] = (!(arr_1 [i_13] [(unsigned char)2]));
        var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) arr_12 [(_Bool)1]))));
    }
}
