/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236341
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
    for (int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_18 *= ((/* implicit */signed char) var_4);
                arr_6 [i_1] [i_1] [i_0 + 4] = ((short) ((unsigned short) arr_5 [i_0 + 2] [i_1 + 2]));
                var_19 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (+(var_3)))))) ? (max((((((/* implicit */int) var_9)) >> (((var_2) + (682875722465911332LL))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))) : ((~(((/* implicit */int) (short)29450))))));
                var_20 = ((/* implicit */short) -769832362);
                arr_7 [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_5 [i_0 + 2] [i_0]), (arr_5 [i_1 + 1] [i_1 + 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [(short)15])) ? (-769832358) : (((/* implicit */int) arr_2 [i_1]))))) : (min((arr_4 [i_1] [(unsigned char)13] [(_Bool)1]), (((/* implicit */unsigned int) arr_0 [i_0 + 4]))))))) ? (((8522405262760713471LL) ^ (((/* implicit */long long int) 1048576)))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_3 = 1; i_3 < 9; i_3 += 4) 
        {
            for (long long int i_4 = 4; i_4 < 10; i_4 += 4) 
            {
                for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    {
                        var_21 = ((((((/* implicit */int) (unsigned char)123)) + (-2147483645))) + ((-((-(1048567))))));
                        var_22 = ((/* implicit */short) (((-(((/* implicit */int) arr_8 [i_2] [i_2])))) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) != (6817488931635399589ULL))))));
                        arr_19 [i_2] [i_3] [i_4 - 4] [5ULL] [i_5] = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_15 [i_3] [i_3 + 2] [i_3 + 1] [i_3 - 1])), (arr_8 [i_3] [i_3 + 1])))) * (((((/* implicit */int) ((unsigned short) var_6))) >> (((arr_10 [i_4 - 3]) - (1229011137U)))))));
                        var_23 = (-(1048574));
                        var_24 = ((/* implicit */unsigned char) 1048574);
                    }
                } 
            } 
        } 
        var_25 = min((((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned short) arr_0 [i_2]))), (((((/* implicit */int) arr_9 [i_2])) + (((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_2]))))))), (arr_10 [i_2]));
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [(short)5] [i_2])) ? (arr_4 [19U] [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    }
    for (short i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
    {
        arr_23 [i_6] = ((/* implicit */unsigned char) arr_8 [i_6] [i_6]);
        var_27 += ((/* implicit */short) max((((long long int) (short)26547)), (((/* implicit */long long int) arr_21 [i_6]))));
    }
    var_28 = ((/* implicit */_Bool) var_13);
    var_29 = ((/* implicit */unsigned char) var_15);
}
