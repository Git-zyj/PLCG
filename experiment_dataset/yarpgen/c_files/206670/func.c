/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206670
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
    var_12 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 23; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                arr_8 [(unsigned char)6] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 - 1] [i_1 - 2] [i_1 - 2])) || (((/* implicit */_Bool) var_10))));
                arr_9 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */int) var_10)) + (-128944343)))));
                var_13 = (~(((long long int) arr_1 [i_2])));
            }
            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_11))))))))));
        }
        for (unsigned int i_3 = 2; i_3 < 23; i_3 += 2) 
        {
            var_15 += ((/* implicit */unsigned int) var_7);
            arr_13 [i_0 + 1] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_1 [i_0 + 1])))) ? (var_0) : (((/* implicit */long long int) arr_1 [i_0 + 1]))));
            var_16 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
            arr_14 [i_0] = ((/* implicit */long long int) ((_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_0] [i_3 - 1]))))), (arr_3 [i_0]))));
        }
        /* vectorizable */
        for (unsigned short i_4 = 3; i_4 < 22; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                for (long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    {
                        arr_23 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))));
                        var_17 = ((/* implicit */int) ((short) arr_21 [i_0 - 1] [i_4] [i_5] [i_4]));
                        var_18 = ((/* implicit */signed char) arr_5 [i_0] [i_0] [i_5]);
                    }
                } 
            } 
            arr_24 [i_0] [i_0] = (+(arr_0 [i_0 + 1]));
        }
        for (unsigned char i_7 = 1; i_7 < 23; i_7 += 2) 
        {
            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_9))));
            arr_27 [i_7] = ((/* implicit */int) min((var_4), (((/* implicit */long long int) var_5))));
        }
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            for (unsigned char i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                {
                    arr_32 [i_0] = ((/* implicit */unsigned short) var_5);
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_29 [i_0])) ? (arr_11 [16ULL] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0 - 1] [i_0 - 1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_8]))) : (1141508114512466910ULL)))) && (((/* implicit */_Bool) min((var_11), (var_2)))))))) : (((((/* implicit */_Bool) arr_29 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0 - 1]))) : (arr_29 [i_0 - 1])))));
                    var_21 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)24797))))) ? (((/* implicit */unsigned long long int) ((int) (unsigned char)125))) : ((+(var_1))))));
                }
            } 
        } 
        arr_33 [i_0 + 1] [i_0] = ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_4)))))));
        var_22 = ((/* implicit */long long int) arr_29 [i_0 + 1]);
    }
    for (short i_10 = 1; i_10 < 23; i_10 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_39 [i_10] [i_11] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)15687)) >> (((-7731078111940857292LL) + (7731078111940857321LL))))))));
            var_23 = ((/* implicit */_Bool) max((var_23), (((((/* implicit */_Bool) arr_31 [i_11] [i_10] [i_10 + 1] [i_10 + 1])) || (((/* implicit */_Bool) var_10))))));
        }
        /* vectorizable */
        for (signed char i_12 = 1; i_12 < 20; i_12 += 2) 
        {
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_10] [i_10] [i_12 + 4]))) >= (arr_22 [i_12 + 1])));
            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_12] [i_12] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16165))) : (var_1))))));
        }
        /* LoopSeq 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            arr_44 [i_10] [i_13] [i_13] = ((/* implicit */unsigned char) min((min((min((((/* implicit */long long int) arr_19 [11U] [i_10] [i_10])), (var_4))), (((/* implicit */long long int) ((((/* implicit */_Bool) 0)) ? (4283010413U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)215)))))))), (((long long int) (!(((/* implicit */_Bool) (unsigned short)37979)))))));
            var_26 &= ((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) arr_12 [i_10 - 1])))));
            var_27 = ((/* implicit */long long int) min((var_27), (((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_30 [i_10 - 1] [i_13])) / (var_3))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_13])))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_42 [i_10 + 1] [i_10 + 1] [i_10]), (arr_42 [i_10 - 1] [i_10 + 1] [i_10]))))) : (((((/* implicit */long long int) var_11)) / ((-(var_0)))))))));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 24; i_14 += 1) 
        {
            var_28 *= ((/* implicit */signed char) ((var_8) ? (arr_6 [i_14] [i_14] [i_10 + 1] [i_10 - 1]) : (arr_6 [i_10] [i_10] [i_10] [i_10 - 1])));
            var_29 = (-(((/* implicit */int) var_6)));
            var_30 &= ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [(_Bool)1] [i_14] [i_10 + 1] [23ULL]))) < (arr_22 [i_14])))));
        }
        arr_47 [i_10] = ((/* implicit */unsigned short) (-((+((-(((/* implicit */int) var_9))))))));
        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */short) arr_15 [i_10 + 1] [i_10] [i_10 + 1])), (var_10)))) ? ((-(var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10])))))))) & (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_3 [i_10 - 1])), ((~(((/* implicit */int) arr_2 [i_10]))))))))))));
    }
}
