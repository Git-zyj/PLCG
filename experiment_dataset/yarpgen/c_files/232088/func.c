/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232088
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
    var_19 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (_Bool)1);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) 430785430))));
        arr_5 [i_0] = ((/* implicit */unsigned int) ((arr_2 [i_0]) ? ((~(var_4))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            var_21 += ((/* implicit */short) (!(((/* implicit */_Bool) max(((short)-1), ((short)14))))));
            var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_9 [i_1])))) & (((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)27816))) | (4294967295U)))) % (((4098366464776586312LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
        }
        arr_12 [i_1] = ((/* implicit */unsigned char) ((unsigned short) min((arr_1 [i_1]), (((/* implicit */signed char) ((((/* implicit */int) var_5)) >= (((/* implicit */int) (short)17))))))));
        var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)-1))) >= (-1LL)));
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    {
                        arr_23 [i_4] [i_4] [i_4] [(unsigned char)5] = ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (short)-1)) | (((/* implicit */int) (short)0))))), (((var_14) & (((/* implicit */long long int) ((/* implicit */int) (signed char)24)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 3739994686U)) ? (((/* implicit */int) (unsigned char)114)) : (73482927)))));
                        arr_24 [i_1] [(signed char)12] [i_4] [(signed char)12] [i_5] = ((/* implicit */short) ((((/* implicit */int) (signed char)-76)) / (((((/* implicit */_Bool) (-(9079256848778919936LL)))) ? (1073741824) : (((/* implicit */int) arr_13 [i_1]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
    {
        var_24 &= ((((/* implicit */int) arr_2 [i_6])) & (((arr_2 [i_6]) ? (((/* implicit */int) arr_28 [i_6])) : (((/* implicit */int) arr_28 [i_6])))));
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            for (signed char i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                for (short i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_10 = 0; i_10 < 22; i_10 += 3) 
                        {
                            arr_39 [i_9] [i_9] [i_8] [8] [i_10] [(_Bool)1] = ((/* implicit */unsigned int) arr_28 [i_10]);
                            arr_40 [i_9] [i_7] = ((max((((/* implicit */long long int) (_Bool)0)), (-2182999151450931276LL))) - ((-(arr_33 [i_7] [i_7]))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 22; i_11 += 3) 
                        {
                            arr_43 [i_11] [i_9] [i_8] [i_9] [i_6] = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_38 [i_6] [i_6] [i_6] [i_6] [i_6] [(signed char)14]) << (((var_8) - (6557376127967454187LL)))))) ? ((-(((/* implicit */int) (unsigned short)30808)))) : (((/* implicit */int) ((signed char) 1933498496U)))))), (((((/* implicit */_Bool) 1944092669U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_9] [i_7]))) : (1966080U))));
                            arr_44 [i_9] [i_9] [i_7] [i_7] [i_8] [i_9] [i_11] = (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)16247)) : (((/* implicit */int) arr_35 [i_6] [i_8] [i_9] [i_6])))));
                            arr_45 [i_9] = ((/* implicit */unsigned char) min((-9079256848778919958LL), (((/* implicit */long long int) (+(((/* implicit */int) arr_31 [i_6] [i_6])))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_12 = 1; i_12 < 21; i_12 += 3) 
                        {
                            arr_49 [i_7] [i_7] [i_7] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_38 [i_6] [i_12 - 1] [i_8] [(unsigned short)0] [i_8] [i_6])) ? (((((/* implicit */int) (signed char)-127)) & (511))) : (((/* implicit */int) ((short) 9079256848778919928LL)))));
                            arr_50 [i_6] [i_7] [i_7] [(short)1] [i_9] [i_12] = ((/* implicit */unsigned int) ((arr_25 [i_12 - 1]) >= (-176128228157526814LL)));
                            var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)2258)) ? (arr_38 [i_6] [i_7] [i_6] [i_6] [i_6] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-108))))) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49297)))));
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_30 [i_8] [i_12])))) ? (((/* implicit */int) ((unsigned char) (unsigned short)61671))) : (((((/* implicit */_Bool) (short)-32757)) ? (((/* implicit */int) (short)-22949)) : (((/* implicit */int) arr_29 [i_12])))))))));
                        }
                        arr_51 [i_6] [i_7] [i_9] [i_9] = ((/* implicit */signed char) (((!(((((/* implicit */_Bool) arr_25 [i_6])) || (((/* implicit */_Bool) (unsigned char)255)))))) ? (((/* implicit */unsigned int) min((((((/* implicit */int) arr_35 [i_9] [i_9] [i_9] [i_6])) & (((/* implicit */int) arr_28 [(unsigned short)17])))), (((/* implicit */int) arr_31 [i_6] [i_6]))))) : (((((/* implicit */unsigned int) ((((/* implicit */int) var_17)) - (-1760324014)))) | (arr_34 [i_6] [i_7])))));
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */int) arr_29 [i_8])) - (((/* implicit */int) (unsigned short)43613)))))));
                        var_28 += ((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) arr_42 [i_6])))) / (((/* implicit */int) (short)-32764))))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */signed char) max((var_29), (arr_31 [i_6] [i_6])));
    }
    var_30 = var_10;
    var_31 = min(((short)-32754), (var_17));
}
