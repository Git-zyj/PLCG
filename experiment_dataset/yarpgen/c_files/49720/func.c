/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49720
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
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_16 = ((/* implicit */long long int) max((min((arr_0 [17]), (((var_0) ? (((/* implicit */int) (unsigned char)255)) : (var_4))))), ((~(arr_0 [i_0 + 2])))));
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) max((-1083570892799229856LL), (((/* implicit */long long int) var_1))))) ? (-1083570892799229856LL) : (((/* implicit */long long int) ((unsigned int) (unsigned char)255))))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            arr_6 [i_1] = (~(((1083570892799229864LL) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_2])))))))));
            arr_7 [i_1] [i_1] [i_1] = ((/* implicit */long long int) max(((((~(((/* implicit */int) (short)9598)))) + ((-(((/* implicit */int) arr_3 [i_1])))))), ((-((-(((/* implicit */int) arr_3 [i_2]))))))));
            var_18 *= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_5 [i_2] [i_1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_2])) || (((/* implicit */_Bool) arr_5 [i_1] [i_1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (3779926221485039386LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2])))))) && (((/* implicit */_Bool) (short)-29359)))))));
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                arr_10 [i_3] [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (-1083570892799229841LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) (signed char)125)))))))) ? (var_14) : (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) -1407284590)) || (((/* implicit */_Bool) var_8))))) ^ (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (var_11)))))))));
                arr_11 [(signed char)19] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) | (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [22U] [i_2])) * (((/* implicit */int) arr_3 [i_3]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)29358))) * (var_15)))));
            }
            for (signed char i_4 = 3; i_4 < 22; i_4 += 1) 
            {
                var_19 = ((/* implicit */unsigned int) ((signed char) max((arr_2 [i_4 + 3]), (arr_2 [i_4 - 3]))));
                /* LoopSeq 2 */
                for (int i_5 = 3; i_5 < 23; i_5 += 2) 
                {
                    var_20 += ((/* implicit */unsigned char) arr_8 [i_1] [i_2]);
                    var_21 *= ((/* implicit */long long int) (_Bool)1);
                }
                for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    arr_20 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */long long int) ((217972917U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))) + (((((/* implicit */_Bool) 4294967280U)) ? (((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */long long int) arr_15 [i_1] [i_1] [i_4] [i_4] [i_6] [i_6])) : (1083570892799229855LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (arr_15 [i_1] [i_1] [i_4] [i_2] [i_4] [i_6])))))))));
                    var_22 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_4] [i_4 - 3])))) ? ((+(max((var_7), (((/* implicit */long long int) arr_9 [(signed char)21])))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_4] [i_4 - 1] [i_4] [i_4 + 2])) ? ((+(arr_19 [i_6]))) : (((/* implicit */int) ((-1083570892799229860LL) <= (arr_2 [i_2])))))))));
                }
                arr_21 [i_1] [i_4] [i_4 + 1] = ((/* implicit */unsigned short) ((signed char) (-((((_Bool)1) ? (((/* implicit */int) arr_3 [i_4])) : (((/* implicit */int) arr_14 [i_4] [i_2] [i_2] [i_1])))))));
            }
        }
        arr_22 [i_1] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (4076994383U) : (4294967295U)))) ? (((/* implicit */unsigned long long int) arr_13 [i_1])) : (min((var_15), (((/* implicit */unsigned long long int) var_11)))))) >> (((((/* implicit */int) arr_4 [i_1] [i_1])) - (62692)))));
        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1] [i_1] [(signed char)18])) ? (((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (short)9598)))))));
        arr_23 [i_1] &= ((/* implicit */unsigned short) var_1);
        arr_24 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((var_13) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [0])))))) <= (((((/* implicit */_Bool) arr_13 [i_1])) ? (((/* implicit */int) arr_14 [i_1] [i_1] [10LL] [i_1])) : (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1]))))));
    }
    var_24 = ((/* implicit */unsigned int) (-(var_5)));
}
