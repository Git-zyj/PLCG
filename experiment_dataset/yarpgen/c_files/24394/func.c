/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24394
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
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_19 -= ((/* implicit */short) ((((/* implicit */long long int) arr_3 [i_0] [i_0])) * (((var_2) ^ (var_2)))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((_Bool) arr_6 [i_2] [i_0] [i_0] [i_0]));
                    /* LoopSeq 1 */
                    for (int i_3 = 3; i_3 < 17; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */short) ((((/* implicit */int) var_5)) / (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2278))) != (14197787281469872976ULL))))));
                        var_21 = ((/* implicit */int) ((var_11) - (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) + (var_13)))));
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])) | (((/* implicit */int) arr_12 [i_0] [i_1] [i_4] [i_0]))));
                        var_23 = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
                        arr_16 [i_0] [i_0] [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) < (((/* implicit */int) ((short) (signed char)127)))));
                        var_24 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_4] [i_0])) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_4]))))) : (8515345151240056251ULL)));
                    }
                    for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 3) 
                    {
                        var_25 = ((/* implicit */long long int) arr_19 [i_0] [i_1] [i_4] [7]);
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 2; i_7 < 17; i_7 += 4) 
                        {
                            var_26 = ((((/* implicit */int) arr_19 [i_6 - 1] [i_6 - 1] [i_7 + 1] [i_7 + 1])) % (((/* implicit */int) arr_19 [i_6 - 1] [i_6 - 1] [i_7 - 1] [i_7 + 1])));
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) -199509688916512309LL);
                        }
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_4] [i_4] [i_4] [i_4])) ? (arr_10 [i_6 + 1] [i_6] [i_6] [i_0]) : (((/* implicit */int) arr_11 [i_6 + 1] [i_0] [i_4] [i_1] [i_0]))));
                    }
                    for (signed char i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        var_28 = ((/* implicit */short) arr_21 [i_0] [i_1] [i_4]);
                        arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((var_3) ? ((+(((/* implicit */int) arr_14 [i_0] [i_1] [i_4] [i_0])))) : ((~(((/* implicit */int) (signed char)126))))));
                        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_4] [i_4] [(signed char)18] [i_8] [i_8])) || (((/* implicit */_Bool) arr_22 [i_4] [i_1] [i_4] [i_8] [(signed char)10])))))));
                    }
                    arr_27 [i_0] [i_0] [i_1] [(signed char)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_4])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(unsigned short)3] [(unsigned short)3] [i_0]))) : (arr_6 [i_0] [i_0] [i_0] [i_0]))))));
                }
                for (int i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    var_30 -= max((((/* implicit */short) (_Bool)1)), (var_9));
                    var_31 = ((_Bool) arr_5 [i_0] [i_0] [i_0] [i_0]);
                }
                for (int i_10 = 0; i_10 < 19; i_10 += 3) 
                {
                    var_32 = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
                    var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [(unsigned short)12] [(unsigned short)12] [i_10]))))) ? (((((/* implicit */int) arr_15 [6LL] [i_1] [i_10])) << (((((/* implicit */int) arr_15 [2LL] [i_1] [2LL])) - (2275))))) : (((/* implicit */int) ((((/* implicit */int) arr_15 [(short)12] [i_1] [i_10])) != (((/* implicit */int) arr_15 [(unsigned short)14] [i_1] [(unsigned short)12]))))))))));
                    var_34 ^= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)183))));
                    arr_33 [1ULL] [i_1] [i_0] [i_1] = ((/* implicit */_Bool) arr_0 [i_1] [i_10]);
                }
            }
        } 
    } 
    var_35 = ((/* implicit */signed char) min((((((var_2) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)231))))) * (((/* implicit */long long int) ((var_6) * (((/* implicit */int) var_3))))))), ((+(var_2)))));
    var_36 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((var_11) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */long long int) ((((((/* implicit */int) var_9)) + (2147483647))) << (((((((/* implicit */int) (signed char)-37)) + (61))) - (24)))))) : (((((/* implicit */_Bool) (unsigned char)215)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
    var_37 = ((/* implicit */short) (~(((var_5) ? ((+(var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)49), ((signed char)-37)))))))));
    var_38 = ((/* implicit */short) ((var_13) | (((/* implicit */unsigned long long int) (((+(-688583600029079595LL))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (unsigned short)2278))))))))));
}
