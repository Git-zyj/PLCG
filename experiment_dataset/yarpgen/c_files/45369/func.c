/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45369
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
    var_18 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_3)), (var_0))))) - (max((((((/* implicit */long long int) ((/* implicit */int) var_15))) & (var_1))), (((/* implicit */long long int) var_2))))));
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_2))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) / (arr_8 [i_1] [i_1] [i_2])))))) : (var_16))))));
                    var_21 = ((/* implicit */unsigned long long int) arr_6 [1] [10LL] [i_1 + 1]);
                    var_22 = ((/* implicit */int) ((long long int) (short)-32116));
                }
                for (short i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_10 [i_0] [i_1] [4ULL] [i_3]))) && (((/* implicit */_Bool) (+(((var_16) | (((/* implicit */long long int) ((/* implicit */int) var_10))))))))));
                    arr_13 [i_3] [i_1] [i_0 - 2] = ((/* implicit */unsigned short) var_9);
                }
                var_24 = ((/* implicit */unsigned short) ((unsigned int) (!(((_Bool) arr_6 [i_1] [i_0] [i_0])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 3; i_4 < 10; i_4 += 3) 
    {
        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            {
                var_25 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_5 [i_5] [i_4])) >> (((((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_4 [i_4] [i_4] [i_5])))) + (22721))))) / (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) >= (max((var_17), (((/* implicit */long long int) var_9)))))))));
                arr_20 [i_5] [i_4] [i_5] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(var_11)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4 - 1] [i_4]))) ^ (var_12)))));
                var_26 |= ((/* implicit */signed char) (((-(((/* implicit */int) max((var_0), (((/* implicit */short) var_10))))))) & (((/* implicit */int) var_13))));
                /* LoopSeq 3 */
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
                {
                    var_27 = var_9;
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 2; i_7 < 10; i_7 += 2) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            {
                                arr_29 [i_8] [i_5] [i_5] [i_5] [i_4] = ((/* implicit */short) var_17);
                                var_28 *= ((/* implicit */short) ((_Bool) (+(((/* implicit */int) arr_10 [i_4 + 1] [(short)10] [14ULL] [i_7 + 1])))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */signed char) arr_0 [i_5]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        for (signed char i_10 = 0; i_10 < 11; i_10 += 3) 
                        {
                            {
                                var_30 += ((/* implicit */_Bool) var_11);
                                var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_5] [i_6] [i_10])) > (((/* implicit */int) ((short) var_3)))));
                                var_32 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_3)))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 3) /* same iter space */
                {
                    var_33 &= ((/* implicit */short) ((((((/* implicit */int) var_14)) << (((((((/* implicit */int) arr_5 [i_5] [i_11])) + (((/* implicit */int) arr_18 [i_5] [i_5])))) - (6826))))) + (((/* implicit */int) ((var_8) <= (((/* implicit */int) var_13)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_31 [i_4 - 2] [i_5] [i_4 - 2] [i_4 - 3] [i_4]))) || (((/* implicit */_Bool) var_7))));
                        arr_43 [i_4] [i_4] [i_5] [i_5] = ((/* implicit */short) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4 - 2]))) - (arr_31 [i_12 - 1] [i_5] [i_12] [i_12 - 1] [i_12 - 1]))));
                    }
                    arr_44 [i_11] [i_5] [i_11] [i_4] = ((/* implicit */signed char) arr_6 [i_5] [i_5] [i_4 - 3]);
                }
                for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 3) /* same iter space */
                {
                    arr_48 [i_13] [(_Bool)1] [(_Bool)1] [4] |= ((unsigned long long int) ((((/* implicit */int) arr_38 [i_4 + 1] [i_5] [(short)4] [i_13])) > (((/* implicit */int) arr_36 [i_4 + 1]))));
                    var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4]))) > (arr_27 [i_4 - 1] [i_4] [i_4 + 1] [i_4 - 1] [i_4] [i_4 + 1] [i_13])))))));
                }
            }
        } 
    } 
}
