/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50497
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
    var_13 = max((((/* implicit */long long int) max(((~(((/* implicit */int) (short)6992)))), (((/* implicit */int) ((signed char) var_11)))))), (((max((((/* implicit */long long int) (short)6995)), (var_12))) % (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
        {
            var_14 &= ((/* implicit */_Bool) arr_4 [i_0] [i_0] [(_Bool)1]);
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3])) << (((arr_12 [1ULL] [i_1] [i_1] [i_1] [i_1] [i_1]) + (640083623)))))))));
                            var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) arr_8 [i_1] [i_3])))));
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_1] [i_1] [i_3] [i_4])))))));
                            var_18 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] [(unsigned short)4])) / ((~(((/* implicit */int) arr_7 [i_1] [i_1] [(unsigned char)14] [i_3]))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) max((((/* implicit */unsigned char) arr_4 [i_0] [(unsigned short)4] [i_5])), (min((arr_13 [i_0] [i_0]), (((/* implicit */unsigned char) arr_4 [i_5] [i_5] [i_5])))))))));
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_10 [i_5] [0ULL] [i_5] [i_5] [i_5] [i_5]))));
        }
        arr_16 [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) (signed char)-1)))) || (((/* implicit */_Bool) arr_7 [i_0] [(signed char)13] [i_0] [i_0]))))), (min(((short)14660), (((/* implicit */short) ((((/* implicit */_Bool) 15785838491781218322ULL)) && (((/* implicit */_Bool) (unsigned char)27)))))))));
        arr_17 [i_0] [(unsigned short)9] = ((/* implicit */_Bool) (((~(((/* implicit */int) min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [14]), ((short)-1)))))) + ((+(((/* implicit */int) arr_4 [i_0] [(short)2] [i_0]))))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) (short)7019);
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 15; i_7 += 4) 
        {
            for (unsigned short i_8 = 0; i_8 < 15; i_8 += 2) 
            {
                {
                    arr_29 [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_13 [i_6] [i_8]))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_6] [i_6] [i_7] [i_7] [i_8] [i_8])) ? (((/* implicit */int) arr_11 [i_8] [i_7] [i_7] [i_7] [i_7] [(signed char)9])) : (((/* implicit */int) arr_11 [i_8] [(short)14] [i_7] [i_7] [i_7] [i_6]))));
                    var_23 = ((/* implicit */short) arr_24 [i_6] [i_7] [i_8]);
                    var_24 = ((/* implicit */int) ((unsigned char) arr_9 [i_7] [i_7] [i_7] [i_7] [(signed char)2]));
                    var_25 = ((/* implicit */unsigned char) ((unsigned short) arr_14 [i_6] [i_6]));
                }
            } 
        } 
    }
    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) 
    {
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_32 [i_9])) ? (((/* implicit */int) (unsigned char)255)) : (arr_32 [i_9]))) % ((~(arr_32 [0U]))))))));
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -4383724182550149749LL)) & (min((((/* implicit */unsigned long long int) (unsigned char)46)), (14349106093037750580ULL)))))) ? (((/* implicit */int) ((short) max((((/* implicit */int) (short)7019)), (8191))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (short)14664)) / (arr_32 [(unsigned short)11])))))));
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((short) arr_31 [(short)18] [(short)15])))) || (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_31 [i_9] [i_9])), (10599675490100461286ULL)))) && (((/* implicit */_Bool) ((short) arr_31 [(short)4] [(short)2])))))));
    }
    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)136))))))))))))));
    var_30 = ((/* implicit */short) var_12);
    var_31 += ((/* implicit */int) (-(max((var_8), (((/* implicit */unsigned long long int) var_11))))));
}
