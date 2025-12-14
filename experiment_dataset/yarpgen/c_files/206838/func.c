/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206838
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2969246566U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)63))));
        arr_3 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0]))))), (arr_0 [i_0])));
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [0LL]))) > (var_13))))) : (min((((/* implicit */long long int) arr_2 [(_Bool)1])), (arr_5 [6] [6])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_1]) + (var_13)))) ? (((((/* implicit */_Bool) 1037949390U)) ? (3257017905U) : (3257017905U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : (max((((/* implicit */long long int) ((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))), (arr_5 [11U] [i_1])))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    {
                        var_19 *= ((/* implicit */signed char) arr_10 [13]);
                        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((-(((/* implicit */int) arr_9 [i_4] [i_3 - 1] [(unsigned short)7] [(unsigned char)12])))) + (((/* implicit */int) arr_2 [i_4])))))));
                        var_21 -= ((/* implicit */unsigned char) ((min((((var_13) | (arr_12 [i_1] [i_1] [0]))), (arr_13 [i_3 - 1] [i_1] [i_1] [i_1] [i_1] [i_1]))) >> (min((((((/* implicit */_Bool) arr_12 [(signed char)8] [i_1] [i_4])) ? (arr_13 [i_4] [i_1] [i_3] [i_2] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3257017908U)) && (((/* implicit */_Bool) var_5)))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            var_22 = ((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_2 [i_1]))) <= (((/* implicit */int) max((arr_2 [i_1]), (((/* implicit */unsigned char) arr_4 [0LL])))))))), (arr_7 [i_1] [i_1])));
            var_23 = arr_13 [(signed char)4] [i_1] [i_1] [(short)4] [i_5] [8LL];
        }
    }
    /* LoopNest 3 */
    for (long long int i_6 = 2; i_6 < 15; i_6 += 4) 
    {
        for (long long int i_7 = 2; i_7 < 13; i_7 += 1) 
        {
            for (unsigned int i_8 = 1; i_8 < 13; i_8 += 3) 
            {
                {
                    var_24 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_24 [i_6])) ? (arr_22 [(unsigned char)5] [9LL] [i_7 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_8]))))), (((arr_16 [i_7 + 2]) % (arr_16 [i_6])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (3257017905U)))))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_23 [i_8 + 3] [i_7 - 2] [i_6 + 2])), (arr_22 [(unsigned char)8] [(unsigned char)8] [i_8])))) ? (max((arr_16 [i_6]), (((/* implicit */long long int) arr_23 [i_6] [(unsigned char)12] [i_8])))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_17 [3U] [9LL]))))))));
                    arr_25 [i_6 - 2] [i_7 + 4] [i_8] [i_7 + 4] = ((/* implicit */long long int) ((min((3257017887U), (1037949391U))) - (((/* implicit */unsigned int) (-(((int) var_7)))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((1037949391U), (((/* implicit */unsigned int) -1905599315))))) ? (1037949366U) : (var_5))) / (((/* implicit */unsigned int) ((/* implicit */int) ((3257017930U) >= (3257017929U)))))));
    var_26 = ((/* implicit */unsigned short) var_0);
}
