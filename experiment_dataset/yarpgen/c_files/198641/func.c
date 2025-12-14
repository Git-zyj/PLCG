/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198641
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
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59412))) <= (arr_0 [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))) : (arr_0 [(unsigned short)9] [i_0 + 2])))));
        var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (var_19) : (((/* implicit */unsigned long long int) var_14))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 4) 
    {
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)6124)) || (((/* implicit */_Bool) min((min((4326640857456745308ULL), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) (unsigned short)59418))))))))));
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)62067)) * (((/* implicit */int) arr_6 [i_1]))));
        var_23 += ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)59418)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_13)) / (((((/* implicit */_Bool) var_1)) ? (325275999U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1])))))))) : ((+(var_7)))));
        arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) var_3))), (max((((/* implicit */unsigned long long int) (short)-6)), (var_18)))))) ? (max((((((/* implicit */_Bool) var_15)) ? (arr_3 [i_1 + 2]) : (((/* implicit */unsigned long long int) 325275986U)))), (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)219)))));
    }
    /* LoopSeq 3 */
    for (int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 135107988821114880ULL))));
        var_24 = ((/* implicit */int) min((var_24), (((int) max((max((var_0), (((/* implicit */short) var_15)))), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) == (var_18)))))))));
    }
    for (signed char i_3 = 2; i_3 < 21; i_3 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 4) 
                {
                    {
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) min(((-(((/* implicit */int) (unsigned short)27843)))), (((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)5)), (arr_14 [i_3 - 1])))) : (((/* implicit */int) (signed char)7)))))))));
                        var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-28220))));
                        var_27 ^= ((/* implicit */unsigned short) ((short) var_19));
                        var_28 = (-(((/* implicit */int) (unsigned short)0)));
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) 2147483647))));
                    }
                } 
            } 
        } 
        arr_24 [i_3] [(unsigned short)4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(_Bool)1])) ? (((/* implicit */int) arr_22 [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) (unsigned short)6118))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_10))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_3 - 2] [i_3] [i_3] [i_3]))) * (var_19))))))));
        var_30 = ((/* implicit */short) max(((signed char)22), (((/* implicit */signed char) (_Bool)1))));
        var_31 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_21 [i_3] [i_3] [13ULL] [13ULL]), (((/* implicit */long long int) (unsigned short)6124))))) ? (var_2) : (((/* implicit */long long int) var_1))))), ((((!(((/* implicit */_Bool) 135107988821114900ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(short)16]))) : (((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))));
        arr_25 [i_3] [i_3] = ((/* implicit */long long int) (unsigned short)6117);
    }
    for (int i_7 = 0; i_7 < 14; i_7 += 1) 
    {
        var_32 = ((/* implicit */_Bool) arr_23 [i_7] [(signed char)16] [6] [i_7] [(signed char)16] [i_7]);
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            for (unsigned short i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                {
                    arr_33 [i_7] [i_9] [i_9] = ((/* implicit */int) (-((-(4294967295U)))));
                    arr_34 [i_9] [i_8] [i_9] = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_7]))))), ((-(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    }
    var_33 = ((/* implicit */int) (unsigned short)23171);
    var_34 += ((/* implicit */_Bool) (+(var_14)));
    var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)95))))) ? ((-(var_4))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (_Bool)0))))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)44)) ? (-4096353685020659662LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23170)))))) : (var_19))) : ((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (18311636084888436736ULL))))))))));
}
