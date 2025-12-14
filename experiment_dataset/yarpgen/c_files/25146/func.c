/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25146
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        arr_8 [(_Bool)1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)124))) + (((((/* implicit */_Bool) var_5)) ? (-7703100487933333364LL) : (arr_3 [i_0] [19LL] [i_0])))));
                        arr_9 [i_1] [i_1] [0] [8ULL] = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                    for (long long int i_4 = 3; i_4 < 23; i_4 += 4) 
                    {
                        arr_13 [i_4] [i_1] [i_1] [10ULL] = ((/* implicit */unsigned long long int) max((arr_2 [i_0] [18ULL]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [0] [(_Bool)1] [(unsigned char)14])))))));
                        arr_14 [(unsigned char)10] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [i_0 + 2] [i_0])) == (((unsigned long long int) arr_6 [(_Bool)1] [i_1]))))) : (((/* implicit */int) arr_10 [i_1 + 1] [i_1 - 1] [i_1 - 2] [i_1 - 2]))));
                        arr_15 [(_Bool)1] [i_2] [16LL] [(unsigned short)20] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) (unsigned char)7)), (var_8))) >> (((((((/* implicit */int) var_9)) / (((/* implicit */int) var_1)))) - (44280)))))), (((((/* implicit */_Bool) -7703100487933333383LL)) ? (min((arr_5 [0LL] [i_2] [i_4]), (arr_5 [i_4] [i_1] [i_0]))) : (((/* implicit */unsigned long long int) 3149594369869098661LL))))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        arr_18 [i_0] [i_5] [(unsigned short)6] = ((/* implicit */long long int) ((((/* implicit */int) var_0)) * ((-(((/* implicit */int) ((arr_12 [16LL] [(unsigned char)6] [i_1] [(unsigned char)14]) <= (arr_7 [(_Bool)1] [i_1] [i_2] [i_5]))))))));
                        arr_19 [i_0] [i_1] [i_2] [i_5] [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */int) (short)32646)) >= (((/* implicit */int) (short)28428))))), (min(((unsigned short)47261), (((/* implicit */unsigned short) (short)-10440)))))))));
                    }
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        arr_23 [i_2] [i_1] [i_1] [11ULL] = ((/* implicit */int) arr_10 [(_Bool)1] [(unsigned short)12] [(unsigned char)12] [i_0]);
                        arr_24 [13LL] [i_2] [15LL] [(short)12] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)13501))) & (((-6708741972678450419LL) % (((/* implicit */long long int) ((/* implicit */int) (short)-20162)))))));
                        arr_25 [(short)13] [i_2] [i_2] [i_6] [(unsigned char)5] [i_2] = ((/* implicit */unsigned int) var_4);
                    }
                    arr_26 [i_0] [i_2] [22LL] [i_2] = ((/* implicit */short) 17911800370474821410ULL);
                    arr_27 [i_1] [i_1] [4LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)36894)) && (((/* implicit */_Bool) (~(3783171533771827843LL))))));
                    arr_28 [i_1] [i_0] = ((/* implicit */short) arr_12 [i_0] [(_Bool)1] [i_1] [(short)4]);
                }
            } 
        } 
    } 
    var_19 |= ((/* implicit */_Bool) var_4);
}
