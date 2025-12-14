/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204484
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
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 10; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (unsigned short)2032)) ? (((/* implicit */int) (short)5284)) : (((/* implicit */int) (unsigned char)48))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            arr_6 [i_0] = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
            arr_7 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)5284)) + (((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))) : (arr_0 [i_0])));
            var_13 = ((/* implicit */int) (-(((arr_0 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)208)))))));
            var_14 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))));
        }
    }
    for (short i_2 = 3; i_2 < 10; i_2 += 4) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */unsigned long long int) arr_9 [i_2 - 2] [i_2]);
        arr_11 [i_2] = ((/* implicit */short) (!((_Bool)0)));
    }
    for (short i_3 = 3; i_3 < 10; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_4 = 1; i_4 < 11; i_4 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_21 [i_3] [i_3] [i_5] = ((/* implicit */unsigned int) ((short) arr_5 [i_3] [i_3 - 2] [i_4 - 1]));
                /* LoopSeq 3 */
                for (unsigned char i_6 = 3; i_6 < 12; i_6 += 2) /* same iter space */
                {
                    arr_24 [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */long long int) 4194303U)) : (8935141660703064064LL)));
                    var_15 = ((/* implicit */signed char) arr_23 [i_3] [i_3 - 2] [i_3]);
                    arr_25 [i_3] [i_3] = ((/* implicit */unsigned char) var_2);
                }
                for (unsigned char i_7 = 3; i_7 < 12; i_7 += 2) /* same iter space */
                {
                    arr_30 [i_3] [i_3] = ((/* implicit */short) var_10);
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_4 + 1] [i_4 + 1]))));
                        arr_34 [i_3] [i_3] = ((/* implicit */long long int) arr_26 [i_3] [i_3] [i_5] [i_3] [i_5]);
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4826764015681937564ULL)) ? (((/* implicit */unsigned long long int) arr_15 [i_3] [i_3 - 1] [i_4 + 2])) : ((-(4826764015681937564ULL)))));
                        arr_35 [i_3] [i_4] [i_5] [i_3] [i_7] [i_8] = (i_3 % 2 == zero) ? (((arr_17 [0] [i_3] [i_7]) << (((((/* implicit */int) ((unsigned short) 4290773014U))) - (22))))) : (((((arr_17 [0] [i_3] [i_7]) + (9223372036854775807LL))) << (((((/* implicit */int) ((unsigned short) 4290773014U))) - (22)))));
                    }
                    arr_36 [i_3] = ((/* implicit */long long int) ((unsigned long long int) arr_8 [i_3 - 1]));
                    var_18 = ((/* implicit */short) ((unsigned long long int) var_6));
                }
                for (unsigned long long int i_9 = 1; i_9 < 12; i_9 += 4) 
                {
                    arr_39 [i_9] [i_3] [10ULL] [i_3] [i_3] [i_3 - 3] = ((/* implicit */short) 5560007501447320675LL);
                    var_19 = ((unsigned char) arr_2 [i_3] [i_3 - 1]);
                    var_20 = ((/* implicit */unsigned char) ((int) arr_26 [i_3] [i_4] [i_3 + 1] [i_9 + 1] [i_4 + 1]));
                }
            }
            var_21 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) (short)-8326)) : (((/* implicit */int) arr_29 [(unsigned char)0] [i_4] [i_3])))));
            arr_40 [i_3] = ((/* implicit */unsigned short) ((unsigned int) (short)-29377));
        }
        arr_41 [i_3] = ((/* implicit */signed char) arr_15 [i_3] [i_3] [i_3]);
        arr_42 [i_3] = ((/* implicit */unsigned long long int) (_Bool)0);
    }
    var_22 = ((/* implicit */short) ((unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) 9040854515501866608ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))), (var_4))));
    var_23 = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)43)), ((unsigned short)28808)))) / (((int) ((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
}
