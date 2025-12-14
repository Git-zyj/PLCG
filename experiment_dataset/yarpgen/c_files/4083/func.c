/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4083
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
    var_20 += ((/* implicit */unsigned long long int) ((signed char) ((signed char) var_18)));
    var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((var_2) < (((/* implicit */int) var_7))))), (((unsigned short) var_5))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_22 = ((/* implicit */short) max((((long long int) arr_0 [i_0])), (((/* implicit */long long int) arr_0 [i_0]))));
        var_23 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) << (((min((arr_3 [i_0] [i_0]), (arr_3 [(_Bool)0] [i_0]))) + (4198512392956641511LL)))))) ? (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */short) (_Bool)1))))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((short) arr_3 [(unsigned short)5] [i_0])))))));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            var_24 += ((/* implicit */unsigned char) var_3);
            var_25 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26050)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_1] [3]))))) ? (((/* implicit */long long int) max((((/* implicit */int) (short)26050)), (arr_0 [i_1])))) : (((((/* implicit */long long int) ((/* implicit */int) (short)26040))) / (var_9))))));
            arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_3 [i_0] [i_1 + 2]), (arr_3 [i_0] [i_0])))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) (unsigned short)34960)) : (((/* implicit */int) (unsigned char)37)))) / (((((/* implicit */_Bool) (short)-26033)) ? (((/* implicit */int) (short)26050)) : (((/* implicit */int) (unsigned char)48))))))) : ((~(((((/* implicit */long long int) -1197430703)) / (var_9)))))));
        }
        arr_7 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-26050))));
    }
    for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        var_26 += ((/* implicit */unsigned short) ((min((((/* implicit */int) arr_9 [(signed char)14])), (arr_8 [i_2]))) & (((((/* implicit */int) arr_9 [6])) - (((((/* implicit */_Bool) arr_8 [i_2])) ? (arr_8 [i_2]) : (((/* implicit */int) (short)-26021))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            var_27 = ((/* implicit */_Bool) arr_9 [i_2]);
            arr_12 [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_2])) / (var_13)))) || (((/* implicit */_Bool) var_7))));
            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)201)))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_16 [i_2] = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) min((3829790321498100565ULL), (((/* implicit */unsigned long long int) (short)26050)))))))), (max((arr_8 [i_2]), (arr_8 [i_2])))));
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                arr_19 [i_2] [i_5] [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2])) ? (((((/* implicit */_Bool) arr_15 [i_2])) ? (((/* implicit */int) (short)-26051)) : (arr_15 [i_4]))) : (min((((/* implicit */int) var_7)), (505549610)))));
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    for (int i_7 = 1; i_7 < 13; i_7 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */int) min((arr_9 [i_6]), (arr_9 [i_6])))) < (((/* implicit */int) ((((/* implicit */int) ((signed char) arr_21 [i_2] [i_4] [i_5] [i_7]))) <= (((/* implicit */int) arr_20 [i_5] [i_7 + 1] [i_7 + 1] [i_7]))))))))));
                            var_30 = ((/* implicit */unsigned long long int) arr_23 [i_7 - 1] [i_7 + 2] [i_7 - 1] [i_7 + 2] [i_7 - 1] [i_6]);
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((min((var_1), (((/* implicit */unsigned long long int) arr_20 [(_Bool)1] [i_4] [i_5] [i_5])))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [12] [i_4] [(unsigned short)2] [i_4])) & (1073741824))))))))))));
                var_32 = ((/* implicit */unsigned int) (-((((!(((/* implicit */_Bool) arr_22 [i_2] [i_4])))) ? (((/* implicit */long long int) arr_14 [i_2] [i_4] [i_2])) : (min((((/* implicit */long long int) (unsigned char)219)), (-3237190401982159024LL)))))));
                arr_26 [i_2] [i_4] [i_5] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_25 [i_2] [i_4] [i_4] [i_2] [i_4] [(signed char)10] [i_5])) ? (arr_21 [i_5] [i_5] [i_4] [(_Bool)1]) : (min((arr_8 [i_2]), (260096))))));
            }
            var_33 = ((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */int) ((unsigned short) arr_11 [i_4]))), (((var_4) + (((/* implicit */int) (unsigned char)218)))))));
        }
    }
    /* vectorizable */
    for (unsigned int i_8 = 1; i_8 < 15; i_8 += 2) 
    {
        /* LoopNest 3 */
        for (short i_9 = 2; i_9 < 15; i_9 += 1) 
        {
            for (unsigned short i_10 = 0; i_10 < 17; i_10 += 3) 
            {
                for (unsigned char i_11 = 0; i_11 < 17; i_11 += 1) 
                {
                    {
                        arr_40 [i_11] [(unsigned short)4] [i_8] [i_8] [(unsigned short)4] = ((/* implicit */unsigned char) arr_37 [i_8 - 1] [i_8 + 1] [i_8 + 1]);
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 285890842U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_37 [i_11] [i_10] [i_9 - 1]))))) ? ((-(arr_39 [i_8] [(unsigned char)10]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) < (arr_29 [i_9 + 1] [i_10])))))));
                        /* LoopSeq 1 */
                        for (short i_12 = 0; i_12 < 17; i_12 += 2) 
                        {
                            arr_43 [i_8] [i_9] [i_10] [(_Bool)1] [i_12] = ((/* implicit */unsigned short) ((short) arr_34 [i_8 - 1] [i_8] [i_8 + 1]));
                            arr_44 [i_12] [i_8] [i_10] [i_8] [i_8] = ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_13 = 1; i_13 < 16; i_13 += 3) 
        {
            for (long long int i_14 = 1; i_14 < 15; i_14 += 2) 
            {
                {
                    arr_50 [i_13] [i_13] [i_14] = ((/* implicit */signed char) (_Bool)1);
                    var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) arr_27 [i_13 - 1] [i_14]))));
                    var_36 = ((int) arr_33 [i_14 - 1] [i_13 - 1] [i_8]);
                }
            } 
        } 
        var_37 = ((/* implicit */unsigned int) arr_45 [i_8 + 1] [i_8 + 1]);
        var_38 = ((/* implicit */long long int) arr_39 [i_8 - 1] [i_8]);
    }
    for (unsigned char i_15 = 1; i_15 < 15; i_15 += 4) 
    {
        var_39 = ((/* implicit */short) ((((_Bool) (short)-26061)) && (min((arr_52 [i_15 + 1] [i_15 + 1]), (arr_52 [i_15 + 2] [i_15 + 1])))));
        var_40 = ((/* implicit */long long int) max((var_40), (max((((((/* implicit */_Bool) arr_34 [i_15] [i_15] [i_15 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_33 [i_15] [i_15] [i_15])) >= (11299460514526931536ULL))))) : (arr_42 [i_15 + 1] [i_15 + 1] [i_15 - 1] [i_15 + 2]))), (((/* implicit */long long int) (~((-(var_4))))))))));
        var_41 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_15 + 1] [(short)4] [i_15 + 2])) ? (((/* implicit */int) arr_35 [i_15 - 1] [i_15] [i_15 + 1] [i_15 + 1])) : (((/* implicit */int) arr_37 [i_15] [i_15 + 1] [i_15 - 1])))))));
    }
    var_42 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (_Bool)1)), (var_10))) | (((/* implicit */unsigned int) var_4))))), (var_1)));
}
