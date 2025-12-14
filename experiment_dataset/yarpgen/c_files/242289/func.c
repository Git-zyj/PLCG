/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242289
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
    var_17 = ((/* implicit */unsigned short) (short)-997);
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_5))) ? (((/* implicit */int) (short)6014)) : (((/* implicit */int) var_9))))) ? (max((((/* implicit */long long int) (!(((/* implicit */_Bool) 16383))))), (var_5))) : (((/* implicit */long long int) max((1947898822), (-16391))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
                        {
                            arr_14 [i_1] [i_1] [(unsigned short)11] [i_3] [i_1] = max(((-((-(((/* implicit */int) (signed char)92)))))), (((/* implicit */int) var_10)));
                            arr_15 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((var_8), (-16387)))) <= (((((/* implicit */long long int) ((/* implicit */int) max((var_15), ((short)-16851))))) / (((((/* implicit */_Bool) (short)22865)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                            var_19 = ((/* implicit */unsigned int) (unsigned char)255);
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_2] [i_3] [i_5]))));
                            var_21 = ((/* implicit */long long int) ((unsigned char) 4294967295U));
                            arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_5] [i_3] [i_2] [i_1] [i_1] [(unsigned char)11] [i_0]))));
                            arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (~(arr_1 [i_2] [i_3])));
                            var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_10))));
                        }
                        var_23 = ((/* implicit */unsigned short) max((((/* implicit */short) ((((/* implicit */long long int) arr_11 [6LL] [i_2] [i_0] [i_0] [i_0])) == (3285147213109695958LL)))), (var_15)));
                        var_24 = ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)28672)) : (-16384)))) ? ((~(var_7))) : (((var_5) / (var_5)))));
                        arr_21 [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_1] [i_1] [i_2] [21]))) / (var_5))))))) / (((((int) (short)13634)) >> (((/* implicit */int) arr_0 [i_0] [i_1]))))));
                        var_25 = ((/* implicit */unsigned int) (_Bool)1);
                    }
                    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((max((max((arr_9 [i_0] [i_2] [i_1] [i_2] [i_6]), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_6])))) * (((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [i_2] [i_2] [14] [i_1])) * (((/* implicit */int) arr_8 [i_0] [i_0] [i_6]))))))))))));
                        arr_25 [i_0] [i_1] [i_2] [i_6] [(_Bool)1] = ((/* implicit */short) ((((_Bool) ((int) arr_6 [20]))) ? (((/* implicit */unsigned long long int) max((arr_5 [i_6]), (((/* implicit */unsigned int) ((short) var_6)))))) : ((~(18446744073709551605ULL)))));
                    }
                    arr_26 [i_0] [i_1] = ((/* implicit */short) (+((-(((((-5069558433631209563LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)22030)) - (22008)))))))));
                    arr_27 [i_0] [i_0] [i_1] [i_2] |= max((((((/* implicit */_Bool) arr_13 [i_2] [i_1] [4] [i_1] [4] [i_0] [(short)16])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_10 [i_2] [i_1] [i_2] [18LL])))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)10)) > (var_14)))));
                    var_27 = ((/* implicit */long long int) var_2);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 4; i_7 < 19; i_7 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_8 = 0; i_8 < 23; i_8 += 1) 
            {
                for (unsigned int i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        {
                            arr_37 [i_0] [i_7] [i_8] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_36 [i_0] [i_7 - 2] [7] [(unsigned short)18] [i_10] [i_0])) ? (((/* implicit */int) arr_8 [i_10] [i_7] [i_10])) : (((/* implicit */int) arr_36 [i_0] [i_7 + 4] [i_8] [i_9] [i_10] [(unsigned short)5]))))));
                            arr_38 [(_Bool)1] [i_7 - 4] [i_8] [(_Bool)1] [i_10] = max((max(((+(((/* implicit */int) arr_10 [i_0] [i_0] [i_10] [i_10])))), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_4 [i_0] [i_10])));
                        }
                    } 
                } 
            } 
            arr_39 [i_0] [5U] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) max((var_2), (((/* implicit */signed char) var_0))))) ? (((/* implicit */int) ((short) arr_33 [i_0] [i_7 + 3] [i_7 - 2] [i_7 + 3]))) : (((/* implicit */int) max((((/* implicit */signed char) var_9)), (arr_17 [i_0] [i_0] [i_0] [i_0] [i_7] [i_7] [i_7 - 2]))))))));
        }
        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (73139176) : (((/* implicit */int) (short)-32746)))))))))));
        var_29 = ((/* implicit */unsigned short) arr_7 [i_0] [i_0]);
    }
    for (unsigned char i_11 = 0; i_11 < 19; i_11 += 2) 
    {
        arr_42 [i_11] [i_11] = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_10 [i_11] [i_11] [i_11] [i_11])) / (((/* implicit */int) arr_10 [i_11] [i_11] [i_11] [i_11])))), (((/* implicit */int) arr_10 [i_11] [i_11] [i_11] [i_11]))));
        arr_43 [i_11] = ((/* implicit */unsigned short) arr_7 [i_11] [(short)22]);
    }
}
