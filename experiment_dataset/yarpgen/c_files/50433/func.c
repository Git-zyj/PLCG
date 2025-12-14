/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50433
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) max((arr_2 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) arr_2 [i_0] [i_0]))))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] = arr_4 [i_0];
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */int) ((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_1]))) ? (((arr_1 [i_0] [i_0]) ? (3032863366U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0] [i_1])))))));
            arr_8 [i_0] = ((/* implicit */int) arr_2 [i_0] [i_1]);
        }
        for (int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            arr_11 [i_0] = ((/* implicit */signed char) (~(((((((/* implicit */_Bool) arr_10 [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_2]))) : (arr_10 [i_0] [i_0]))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0])))))));
            arr_12 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) ((_Bool) arr_9 [i_0]))), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_2])))))) - (((var_10) ? (((/* implicit */unsigned long long int) arr_4 [i_0])) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -8650928165687715205LL))))))));
        }
        for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_22 [i_0] [i_3] [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_9 [i_3]), (((((/* implicit */_Bool) arr_17 [i_4] [i_3] [i_0])) || (((/* implicit */_Bool) (unsigned short)1))))))) != (((/* implicit */int) arr_16 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 - 1]))));
                        arr_23 [i_4] [i_3] = ((/* implicit */unsigned short) (~(4294967295U)));
                        arr_24 [i_0] [i_3] [i_4] [i_3] = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */long long int) min((841539034U), (arr_4 [i_3 + 1])))) < (arr_10 [i_3 + 1] [i_3])))), (arr_21 [i_0] [i_3] [i_4] [i_5] [i_5])));
                        arr_25 [i_3] [i_3 + 1] [i_3] [i_3] = ((((((/* implicit */_Bool) ((((/* implicit */int) (short)30430)) & (((/* implicit */int) (signed char)-76))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-5502))))) : (arr_17 [i_0] [i_0] [i_4]))) << (((/* implicit */int) arr_1 [i_0] [i_0])));
                    }
                } 
            } 
            arr_26 [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) (!(arr_9 [i_3 - 1])))), (((((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0]))))) / (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65527)))))))));
        }
    }
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        arr_30 [i_6] = ((/* implicit */unsigned char) arr_29 [i_6]);
        arr_31 [i_6] = ((/* implicit */short) ((unsigned long long int) var_8));
    }
    for (unsigned long long int i_7 = 3; i_7 < 23; i_7 += 4) 
    {
        arr_34 [(unsigned short)6] [i_7] = ((/* implicit */short) min((max((((((/* implicit */_Bool) (short)-8816)) ? (15U) : (arr_33 [i_7 - 2]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_7])) ? (var_4) : (-239611152)))))), (((/* implicit */unsigned int) arr_32 [20U] [20U]))));
        arr_35 [i_7] = ((/* implicit */unsigned int) ((long long int) (-(((/* implicit */int) arr_32 [i_7 - 3] [i_7])))));
    }
    /* vectorizable */
    for (unsigned int i_8 = 1; i_8 < 10; i_8 += 4) 
    {
        arr_38 [i_8] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)45331)) ? (-7968621143987944571LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)186))))));
        /* LoopNest 2 */
        for (short i_9 = 4; i_9 < 11; i_9 += 2) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                {
                    arr_46 [i_9] [i_10] = arr_4 [i_8 + 2];
                    arr_47 [i_9] [i_9] [i_9] [i_10] = ((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_43 [i_8] [i_8 - 1] [i_8 - 1]))))));
                }
            } 
        } 
    }
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((var_3) % (((/* implicit */long long int) min((((/* implicit */int) var_11)), (var_7)))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) ^ (((((/* implicit */_Bool) 7968621143987944564LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (4294967284U))))))));
    var_15 = ((/* implicit */unsigned char) (short)-30431);
    var_16 = ((/* implicit */unsigned char) (~(2360606069716523530ULL)));
}
