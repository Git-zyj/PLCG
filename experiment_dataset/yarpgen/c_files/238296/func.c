/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238296
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
    var_20 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 15867178597849157543ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) var_8))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            arr_5 [i_1] = arr_1 [i_1 - 3];
            var_21 = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned char)19)) >> (2ULL))), (((/* implicit */int) (unsigned char)38))));
            arr_9 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) (unsigned char)86);
            var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)26655), ((short)-28458))))) * (6ULL)));
        }
        arr_10 [i_0] [i_0] &= (!(((/* implicit */_Bool) ((2465328160U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) ((140737484161024ULL) >= (((/* implicit */unsigned long long int) 654471046))))) % (((/* implicit */int) max((arr_13 [i_3]), (arr_13 [i_3]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((11767200521569733809ULL) == (18ULL))))))) ? (2868931860336526189ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_13 [i_4 + 1]), (((/* implicit */signed char) (_Bool)1)))))))))));
                    arr_21 [i_4] [i_4] [i_4] [i_3] = ((/* implicit */unsigned short) max((17347127238102895728ULL), (((/* implicit */unsigned long long int) (unsigned short)8984))));
                }
            } 
        } 
        arr_22 [i_3] = ((/* implicit */unsigned char) 4192793115450900921ULL);
        var_25 &= ((/* implicit */long long int) -1589672353);
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_6] [i_6] [(unsigned char)6] [i_6])) ? (arr_12 [i_6] [(signed char)16]) : (arr_12 [i_6] [10ULL])));
        /* LoopSeq 3 */
        for (unsigned long long int i_7 = 2; i_7 < 23; i_7 += 1) 
        {
            var_27 -= ((/* implicit */long long int) ((arr_18 [i_6] [i_7] [i_7 - 1] [i_6]) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)33)))));
            var_28 = ((((/* implicit */_Bool) arr_20 [(signed char)19] [i_7 - 1] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_7] [i_7 - 1] [i_7 - 1] [i_7]))) : (arr_16 [i_7] [i_7 + 1] [(unsigned short)18]));
            var_29 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)73))));
        }
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)118)))))) : (((((/* implicit */_Bool) -212781225)) ? (arr_27 [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31856)))))));
            arr_34 [i_6] = ((/* implicit */short) (unsigned char)22);
            var_31 = ((/* implicit */_Bool) ((arr_2 [i_8 - 1] [i_8 - 1]) / (arr_2 [i_8 - 1] [i_8 - 1])));
        }
        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 4) 
        {
            arr_38 [i_6] [i_9] = ((/* implicit */_Bool) 9ULL);
            var_32 = ((/* implicit */_Bool) (+(((/* implicit */int) var_16))));
            var_33 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_9])) ? (((/* implicit */int) arr_13 [i_9])) : (((/* implicit */int) (signed char)-78))));
            arr_39 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43029)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) >> (((((/* implicit */int) (unsigned short)31096)) - (31072)))))) : (((((/* implicit */_Bool) 1031503695916819697ULL)) ? (11371200688555130707ULL) : (((/* implicit */unsigned long long int) -601123206182022484LL))))));
        }
        arr_40 [(_Bool)1] [i_6] = arr_27 [18LL] [18LL];
        var_34 = ((/* implicit */_Bool) (~(1031503695916819717ULL)));
        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_6] [i_6])) ? (arr_4 [i_6] [i_6]) : (arr_4 [i_6] [i_6])));
    }
    var_36 &= ((/* implicit */_Bool) min((17415240377792731899ULL), (((/* implicit */unsigned long long int) var_10))));
    var_37 = ((/* implicit */signed char) max((((((/* implicit */int) var_16)) << (((/* implicit */int) ((((/* implicit */int) (unsigned short)65526)) >= (((/* implicit */int) (_Bool)1))))))), (((/* implicit */int) var_10))));
}
