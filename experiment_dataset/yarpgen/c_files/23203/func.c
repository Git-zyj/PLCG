/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23203
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
    var_13 = ((/* implicit */unsigned char) var_8);
    var_14 = ((/* implicit */unsigned char) var_8);
    var_15 = min((var_2), (var_2));
    var_16 += ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)118))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    var_17 = ((unsigned char) ((((/* implicit */_Bool) (unsigned short)50397)) ? (((/* implicit */int) arr_4 [(_Bool)1])) : (((/* implicit */int) var_9))));
                    arr_9 [i_1] [(_Bool)1] [(signed char)1] [i_1] = ((/* implicit */unsigned char) ((_Bool) arr_8 [i_2 + 1] [i_1] [i_1] [i_1]));
                    arr_10 [(unsigned char)21] [(unsigned char)5] [i_1] [i_1] = ((/* implicit */unsigned int) (!(var_10)));
                }
            } 
        } 
        arr_11 [(_Bool)1] [i_0 - 1] = (unsigned char)106;
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        arr_14 [i_3] = ((/* implicit */signed char) (_Bool)1);
        /* LoopNest 3 */
        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            for (signed char i_5 = 1; i_5 < 15; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    {
                        arr_21 [i_6] [i_3] [i_5 - 1] [i_4] [i_3] [i_3 + 1] = arr_6 [(signed char)3] [i_3];
                        var_18 = ((/* implicit */unsigned int) max((var_18), (min((((/* implicit */unsigned int) arr_4 [11U])), (var_3)))));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) min(((unsigned char)98), (min((var_5), (var_5)))))) << (((arr_8 [i_3 + 1] [i_3] [i_5 + 2] [i_6]) ? (((/* implicit */int) (!((_Bool)0)))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_8 [i_6] [i_3] [i_3] [i_3 + 1])), ((unsigned char)152))))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        arr_24 [(unsigned char)8] = ((/* implicit */_Bool) min(((-(((/* implicit */int) (signed char)0)))), (((/* implicit */int) min((((/* implicit */unsigned char) arr_15 [(signed char)6] [i_7])), (arr_5 [i_7] [(_Bool)1] [i_7]))))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */int) max((arr_17 [i_7] [i_7]), (((/* implicit */unsigned char) arr_12 [i_7]))))) * (((/* implicit */int) min((arr_18 [(unsigned char)2] [i_7] [i_7]), (arr_17 [i_7] [i_7]))))));
        arr_25 [i_7] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (signed char)108)))))) > (((/* implicit */int) ((_Bool) 1923545832U)))));
    }
    for (signed char i_8 = 2; i_8 < 23; i_8 += 2) 
    {
        arr_28 [(signed char)2] = ((/* implicit */unsigned char) ((_Bool) 17U));
        var_21 = ((/* implicit */signed char) ((_Bool) max(((_Bool)1), (arr_26 [i_8 - 2] [i_8 + 1]))));
        /* LoopNest 3 */
        for (signed char i_9 = 0; i_9 < 24; i_9 += 3) 
        {
            for (unsigned short i_10 = 0; i_10 < 24; i_10 += 1) 
            {
                for (unsigned char i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    {
                        arr_38 [i_8 - 1] [i_8 - 1] [i_8 - 1] [(_Bool)1] [(signed char)15] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_37 [i_8 - 2] [i_8 - 1] [(_Bool)1] [(signed char)14])) | (((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_29 [20U]))))))) ? (max((((((/* implicit */int) arr_36 [(signed char)3] [i_9] [(_Bool)1] [(signed char)4])) >> (((2419498900U) - (2419498876U))))), (((/* implicit */int) ((_Bool) (signed char)-109))))) : (((((/* implicit */int) max((arr_35 [(signed char)20] [12U] [i_10] [(_Bool)1]), (arr_36 [i_11] [(_Bool)1] [(signed char)10] [i_8 + 1])))) ^ (((((/* implicit */_Bool) arr_36 [(signed char)1] [i_9] [i_10] [(signed char)0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_32 [i_8 - 2] [i_9] [(_Bool)1] [(unsigned char)5]))))))));
                        arr_39 [i_8 - 1] [(unsigned char)17] [7U] [20U] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((-(((/* implicit */int) arr_30 [i_10] [i_11]))))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_37 [i_9] [(unsigned char)9] [i_8 - 1] [(unsigned char)14])) : (((/* implicit */int) arr_37 [i_8 + 1] [(unsigned char)22] [i_8 - 2] [i_8 - 1])))) : (((((/* implicit */_Bool) arr_35 [i_8 + 1] [(unsigned short)2] [(unsigned char)4] [i_11])) ? (((/* implicit */int) arr_35 [(unsigned char)2] [(unsigned char)10] [i_10] [(_Bool)1])) : ((-(((/* implicit */int) (signed char)-47))))))));
                    }
                } 
            } 
        } 
        arr_40 [(_Bool)1] = ((/* implicit */unsigned char) (-(((/* implicit */int) min((((/* implicit */unsigned char) ((_Bool) arr_26 [(signed char)14] [i_8 + 1]))), ((unsigned char)129))))));
    }
}
