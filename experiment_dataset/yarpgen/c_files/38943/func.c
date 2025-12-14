/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38943
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
    for (long long int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = max((((((/* implicit */_Bool) 1634569740167886365LL)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (8362556484354741193LL))), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) var_12)))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((8362556484354741199LL) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 3]))))) >> (((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_0])))) - (35)))))) && (((/* implicit */_Bool) (((-(-8362556484354741178LL))) - (((/* implicit */long long int) ((((/* implicit */int) var_14)) >> (((-8637633605212816929LL) + (8637633605212816934LL)))))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) arr_6 [i_1]))))) / (((int) var_4))));
        arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_1] [i_1])) ^ (((/* implicit */int) arr_5 [i_1] [i_1]))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 4; i_2 < 10; i_2 += 1) 
        {
            for (short i_3 = 3; i_3 < 10; i_3 += 3) 
            {
                for (int i_4 = 1; i_4 < 10; i_4 += 3) 
                {
                    {
                        arr_15 [i_1] [i_1] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_14 [i_4] [i_1] [i_1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) / (((((/* implicit */int) (unsigned short)16)) << (((var_0) + (6546662059826941620LL)))))));
                        arr_16 [i_4] [i_2] [i_2] [i_1] = ((unsigned char) arr_0 [i_3 + 1]);
                    }
                } 
            } 
        } 
    }
    var_15 = ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
    var_16 = ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (var_8))))) % (((/* implicit */int) var_6))));
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((((/* implicit */unsigned long long int) min((var_0), (((/* implicit */long long int) var_14))))) / (((((/* implicit */_Bool) (unsigned char)0)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_13)), (var_2))))) / (((var_5) / (var_5))))))));
    /* LoopSeq 2 */
    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            arr_22 [i_5] [i_5] [i_5] = ((/* implicit */long long int) 2147483647);
            arr_23 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) var_11);
            arr_24 [i_6] [i_5] [i_5] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned char) 8362556484354741193LL)));
            /* LoopSeq 3 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_28 [i_5] [i_6] [i_5] [i_7] = ((/* implicit */signed char) -824373543);
                arr_29 [i_5] [i_6] [i_5] = ((/* implicit */int) max((arr_21 [i_5] [i_6]), (((/* implicit */unsigned short) (((_Bool)1) && ((_Bool)0))))));
            }
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                arr_32 [i_5] [i_6] [i_6] [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)165))));
                /* LoopNest 2 */
                for (signed char i_9 = 3; i_9 < 10; i_9 += 2) 
                {
                    for (unsigned char i_10 = 2; i_10 < 10; i_10 += 2) 
                    {
                        {
                            arr_37 [i_5] [i_6] [i_6] [i_5] [i_10] [i_6] [i_5] = ((/* implicit */short) (-(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)23))) * ((+(0LL)))))));
                            arr_38 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_5])) ? (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) ((signed char) (unsigned short)39)))))) : (max((arr_33 [i_5] [i_6] [i_8 + 1] [i_9] [i_10]), (max((((/* implicit */int) arr_1 [i_9 - 3])), (arr_20 [i_8] [i_10])))))));
                            arr_39 [i_5] [i_5] [i_6] [i_8] [i_8] [i_5] [i_10] = ((/* implicit */unsigned char) min((((arr_35 [i_10 - 2] [i_5] [i_8 + 1] [i_6] [i_5] [i_6]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45877))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16))) < (arr_35 [i_10] [i_5] [i_8 + 1] [i_5] [i_5] [i_5]))))));
                        }
                    } 
                } 
                arr_40 [i_5] [i_6] = ((/* implicit */unsigned long long int) ((unsigned char) (~(((/* implicit */int) ((-1204833114) >= (((/* implicit */int) arr_17 [i_5] [i_5]))))))));
            }
            for (unsigned short i_11 = 4; i_11 < 9; i_11 += 4) 
            {
                arr_45 [i_5] [i_6] [i_5] [i_6] = ((/* implicit */unsigned short) max(((+(max((arr_35 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]), (((/* implicit */unsigned long long int) (short)30965)))))), (((/* implicit */unsigned long long int) (-(arr_20 [i_11 - 2] [i_11 + 2]))))));
                arr_46 [i_6] [i_5] [i_6] [i_6] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_27 [i_5])) ? (((/* implicit */unsigned long long int) -7928227502198346946LL)) : (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_35 [i_5] [i_5] [i_6] [i_5] [i_5] [i_11 - 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))), (((/* implicit */unsigned long long int) min((arr_41 [i_5] [i_6] [i_5] [i_5]), (arr_41 [i_5] [i_6] [i_5] [i_5]))))));
                arr_47 [i_5] [i_6] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_43 [i_5] [i_5] [i_6] [i_11]))));
                arr_48 [i_5] [i_5] = ((/* implicit */_Bool) ((-8362556484354741178LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-32759)))));
            }
            arr_49 [i_5] = ((/* implicit */_Bool) (((((+(8820649633281505404LL))) - (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_41 [i_5] [i_6] [i_5] [i_5])), (var_10))))))) - (max((max((((/* implicit */long long int) (-2147483647 - 1))), (5300487689748921996LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)49152)) - (((/* implicit */int) var_13)))))))));
        }
        arr_50 [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_17 [i_5] [i_5])) ? (((/* implicit */int) arr_17 [i_5] [i_5])) : (((/* implicit */int) var_1)))) ^ (((/* implicit */int) max((arr_17 [i_5] [i_5]), (arr_17 [i_5] [i_5]))))));
    }
    for (unsigned char i_12 = 4; i_12 < 16; i_12 += 4) 
    {
        arr_54 [i_12 + 4] [i_12 - 1] = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) (unsigned short)65523)), (min((var_11), (((/* implicit */long long int) (signed char)60)))))) ^ (((/* implicit */long long int) ((((((arr_53 [i_12]) | (((/* implicit */int) var_10)))) + (2147483647))) << (((((min((((/* implicit */long long int) arr_0 [i_12])), (var_0))) + (6546662059826941620LL))) - (8LL))))))));
        arr_55 [i_12] = -327486270;
    }
}
