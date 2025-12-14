/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233141
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_4), (var_4))))))), ((~(-5754448132616268807LL)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */long long int) (-((+(((/* implicit */int) (signed char)23))))));
            var_15 ^= ((/* implicit */unsigned long long int) ((unsigned int) max((((_Bool) var_9)), ((!(((/* implicit */_Bool) arr_3 [i_0] [i_1])))))));
        }
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                {
                    arr_12 [i_0] [i_3] = ((/* implicit */short) var_12);
                    arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)150);
                    arr_14 [i_0] [i_0] [i_3] [(_Bool)1] = ((unsigned int) -292161912);
                }
            } 
        } 
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)42485))))), (min((((/* implicit */long long int) arr_1 [i_0])), (-6255130671663050958LL))))))));
        var_17 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 13007326163392893089ULL)))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62118))) : (var_5))), (((/* implicit */unsigned int) min((arr_1 [i_0]), (((/* implicit */signed char) arr_5 [i_0] [i_0]))))))))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 2; i_4 < 24; i_4 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            var_18 = ((/* implicit */signed char) ((var_2) ? (((/* implicit */int) arr_19 [i_4 - 1])) : (((/* implicit */int) arr_20 [i_4]))));
            /* LoopNest 3 */
            for (short i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 4; i_7 < 24; i_7 += 2) 
                {
                    for (int i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */int) arr_25 [i_4] [i_4] [i_4] [i_4]);
                            arr_30 [i_4] [i_4] [i_5] [17LL] [i_7] [i_8] = (+(((/* implicit */int) var_8)));
                            arr_31 [i_6] [i_5] [i_6] = ((/* implicit */unsigned long long int) var_9);
                            arr_32 [i_4 - 2] [i_4 - 2] = ((/* implicit */short) var_0);
                        }
                    } 
                } 
            } 
            var_20 -= ((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_4 + 1]))));
            var_21 = ((/* implicit */unsigned int) arr_21 [i_4 + 1]);
        }
        var_22 += ((/* implicit */_Bool) var_9);
    }
    var_23 = ((/* implicit */signed char) var_12);
    var_24 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_3))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_35 [i_9] = ((/* implicit */signed char) (~((((_Bool)1) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) arr_33 [i_9]))))));
        /* LoopSeq 1 */
        for (signed char i_10 = 3; i_10 < 13; i_10 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_11 = 0; i_11 < 15; i_11 += 2) 
            {
                for (signed char i_12 = 1; i_12 < 14; i_12 += 2) 
                {
                    for (int i_13 = 0; i_13 < 15; i_13 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((arr_29 [i_9] [i_10] [i_10] [i_10]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_9] [i_11]))))))));
                            var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) 1642381886))));
                        }
                    } 
                } 
            } 
            arr_44 [i_9] [i_10 + 1] [2] = ((/* implicit */unsigned long long int) arr_11 [i_9] [i_9] [i_9] [i_10]);
            var_27 = ((/* implicit */signed char) max((var_27), ((signed char)10)));
        }
        arr_45 [i_9] [i_9] = ((/* implicit */unsigned long long int) arr_20 [i_9]);
        arr_46 [i_9] [i_9] = ((/* implicit */long long int) (+(arr_29 [i_9] [i_9] [i_9] [i_9])));
    }
}
