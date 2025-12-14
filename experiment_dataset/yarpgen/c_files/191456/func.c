/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191456
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
    var_19 -= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_12)))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_1 [(unsigned short)10])), (var_5))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1)))))))) && (((/* implicit */_Bool) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (short)9061))))), ((signed char)-80))))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            var_21 += ((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) ((var_16) + (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) (short)9061))))));
            var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-9062))) ^ (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_18))))) : (((var_13) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))));
        }
        for (int i_2 = 3; i_2 < 8; i_2 += 4) 
        {
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) min(((short)9081), ((short)-9061))))));
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 10; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 2) 
                    {
                        {
                            arr_13 [i_0] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) * ((+(((/* implicit */int) var_18))))));
                            arr_14 [(_Bool)1] [i_0] [i_0] [i_2] [i_3] [i_4] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (arr_11 [i_2] [i_2 + 2] [i_2 + 2] [10] [4ULL])))));
                            var_24 = ((/* implicit */unsigned char) var_14);
                        }
                    } 
                } 
                arr_15 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((-956545399629241096LL), (((/* implicit */long long int) var_14))))) ? (((/* implicit */int) (!(((var_17) <= (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) : ((~(((/* implicit */int) var_14))))));
            }
            var_25 = ((/* implicit */_Bool) var_0);
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 4; i_6 < 9; i_6 += 4) 
        {
            arr_18 [(signed char)0] [i_0] [i_6] = ((/* implicit */signed char) ((arr_9 [(short)6] [i_6 - 1] [i_6 + 2] [i_6 + 2]) - (((/* implicit */unsigned long long int) var_16))));
            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (+(arr_5 [i_0] [i_6 + 1]))))));
            var_27 = ((/* implicit */_Bool) (-(1044236433170081546ULL)));
        }
        for (signed char i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            var_28 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_0]))) / (arr_5 [(_Bool)1] [i_0])))) | (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [7ULL]))) : (arr_6 [i_0] [(signed char)10] [(signed char)10] [i_7]))))) >> (((/* implicit */int) ((((/* implicit */int) (signed char)79)) < (((/* implicit */int) var_2)))))));
            var_29 |= ((/* implicit */signed char) var_11);
        }
        arr_22 [i_0] = ((/* implicit */short) var_8);
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) var_13))));
        arr_27 [i_8] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */short) var_11))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((var_12) <= (((/* implicit */long long int) ((/* implicit */int) var_7))))))))), (var_13)));
        var_31 = ((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) arr_24 [10ULL])), (var_5)))));
    }
    for (unsigned long long int i_9 = 3; i_9 < 17; i_9 += 1) 
    {
        var_32 += ((/* implicit */unsigned char) var_17);
        var_33 += ((/* implicit */signed char) var_0);
        var_34 = ((/* implicit */int) var_18);
    }
    /* LoopNest 2 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        for (short i_11 = 0; i_11 < 20; i_11 += 2) 
        {
            {
                arr_34 [7] [7] [(signed char)14] = ((/* implicit */signed char) (~(((((((/* implicit */int) var_8)) - (arr_31 [i_11]))) - (((/* implicit */int) arr_30 [i_10] [i_10]))))));
                var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) var_16))));
                /* LoopNest 3 */
                for (long long int i_12 = 0; i_12 < 20; i_12 += 2) 
                {
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_36 += ((/* implicit */signed char) (-(((/* implicit */int) (short)-9062))));
                                var_37 += ((/* implicit */signed char) ((956545399629241110LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)80)))));
                            }
                        } 
                    } 
                } 
                var_38 = ((/* implicit */signed char) min((-432981382), (-1642536634)));
            }
        } 
    } 
}
