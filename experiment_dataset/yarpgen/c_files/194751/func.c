/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194751
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_14 -= ((/* implicit */unsigned long long int) (-(((var_1) | (((/* implicit */int) var_11))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 2; i_2 < 16; i_2 += 1) 
                {
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((1288933911U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43195)))))))) && (((/* implicit */_Bool) ((((((arr_7 [i_0]) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)22357)) - (22357))))) ^ (((long long int) arr_1 [i_1])))))));
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) var_10)) / (((/* implicit */int) arr_3 [i_2 + 1] [i_2 + 1] [i_2 - 2])))) % ((+(((/* implicit */int) ((unsigned short) arr_2 [(short)3] [(short)4])))))));
                    arr_9 [i_0] [(signed char)10] [i_2] = ((/* implicit */long long int) ((int) (-(((/* implicit */int) var_9)))));
                    arr_10 [i_0] [i_0] [i_2] [(short)6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned short)43172)) - (((/* implicit */int) (unsigned short)43189)))))) | (((((/* implicit */int) arr_3 [i_2] [i_2 - 1] [i_2])) & (((/* implicit */int) var_12))))));
                }
                for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    arr_13 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((short) (~(((((/* implicit */long long int) ((/* implicit */int) var_11))) % (arr_7 [i_3]))))));
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((var_0) < (((/* implicit */int) arr_2 [i_0] [i_0]))))))) ^ ((~(((/* implicit */int) ((unsigned short) var_3))))))))));
                    var_17 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned short)43189)) | (((/* implicit */int) arr_11 [(unsigned char)14] [(unsigned char)14] [(unsigned char)14])))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_3])) && (((/* implicit */_Bool) arr_0 [i_0])))))));
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) (~(((/* implicit */int) (unsigned short)43201)))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) ((((((((/* implicit */int) arr_15 [i_0] [i_1] [i_3] [i_3] [i_5])) << (((var_2) - (1078092527))))) ^ ((~(((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_3] [i_5])))))) | (((((/* implicit */int) ((arr_16 [(unsigned short)8] [i_4] [i_1] [i_1] [i_0] [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
                                var_19 ^= ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) var_9)))));
                            }
                        } 
                    } 
                }
                var_20 -= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)43201))) != (((long long int) (unsigned short)43174))))) < (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)43195))))) && (((arr_7 [i_0]) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43164))))))))));
                var_21 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned short) (-(((/* implicit */int) var_9))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 1) 
    {
        arr_23 [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) arr_21 [i_6]))) > (((/* implicit */int) (unsigned short)22364))));
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 18; i_7 += 4) 
        {
            for (long long int i_8 = 0; i_8 < 18; i_8 += 4) 
            {
                {
                    var_22 = ((((/* implicit */int) arr_29 [i_8])) <= (((int) var_12)));
                    arr_30 [i_8] [i_6] = ((/* implicit */signed char) ((_Bool) (unsigned short)22337));
                    var_23 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_7] [i_8])))))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)22345)) - (((/* implicit */int) var_4)))))));
        var_25 = ((/* implicit */int) ((signed char) arr_21 [i_6]));
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((int) (unsigned short)22357)))));
    }
    for (long long int i_9 = 0; i_9 < 10; i_9 += 4) 
    {
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) arr_15 [i_9] [i_9] [(unsigned short)8] [(unsigned short)8] [i_9]))))))));
        arr_33 [i_9] &= ((/* implicit */signed char) (~((-(((/* implicit */int) var_10))))));
        var_28 &= ((/* implicit */short) ((((/* implicit */int) ((signed char) (unsigned short)22369))) << (((((((/* implicit */int) arr_4 [i_9] [i_9] [i_9])) - (((/* implicit */int) arr_3 [5] [i_9] [i_9])))) + (218)))));
    }
    var_29 += ((/* implicit */int) var_11);
}
