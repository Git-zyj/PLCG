/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41671
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
    var_11 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), (min((var_2), (((/* implicit */long long int) (unsigned char)178))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (15955066102710621732ULL)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)248)) ? (((((/* implicit */_Bool) -5896145657991491585LL)) ? (((4294967269U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [10LL] [i_3 - 2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_8 [i_0])), (arr_4 [i_0] [i_0 - 1]))))))) : (((/* implicit */unsigned int) ((int) 6621671907333285584LL)))));
                            var_13 = ((/* implicit */long long int) ((int) max((((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [i_0])), (13ULL))));
                            var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_8 [13U])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) * (((/* implicit */int) ((((((/* implicit */_Bool) 3234367611972363853LL)) ? (arr_12 [i_0] [i_1 - 1] [i_0]) : (((/* implicit */unsigned long long int) 2622286197U)))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)9763))))))))));
                            var_15 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_0])) ? (((unsigned long long int) var_8)) : ((+(arr_12 [i_0] [i_1 - 1] [i_0])))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_1 - 1] [i_0]);
                            arr_16 [i_0] = ((/* implicit */signed char) (_Bool)1);
                            var_17 = ((((/* implicit */_Bool) min((((/* implicit */long long int) max((var_6), (((/* implicit */unsigned char) (signed char)-83))))), ((+(var_4)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((max((arr_2 [i_0 - 1] [(short)2] [i_0]), (((/* implicit */unsigned short) var_10)))), (arr_2 [i_1 - 1] [4ULL] [i_0]))))) : (min((arr_13 [i_0 - 1] [i_0 - 1] [i_3 - 2] [i_3 - 1] [i_3 - 2] [i_3 - 2]), (13049097147836385641ULL))));
                        }
                        arr_17 [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 3019218885515721841LL)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 6745353854498423551LL)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) var_6)))))))) : ((+(((((/* implicit */int) (signed char)80)) * (((/* implicit */int) (unsigned short)21877))))))));
                        arr_18 [i_2] [i_1 + 1] [i_0] [i_3 - 2] [11LL] [13ULL] = ((/* implicit */signed char) min(((~(((/* implicit */int) arr_3 [i_0 + 1] [i_3 - 1])))), (((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1])) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) arr_3 [i_0 - 1] [13LL]))))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_11 [i_0] [(unsigned short)10] [i_0] [13U] [i_0]))))))) ? ((-(15LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)9)) && (((/* implicit */_Bool) arr_11 [i_0 - 1] [4LL] [i_0] [i_0 - 1] [i_0 - 1])))))))));
                    }
                    var_19 += ((/* implicit */short) (!(((/* implicit */_Bool) arr_15 [i_0] [i_1 + 1]))));
                    var_20 = ((/* implicit */unsigned int) (((-(arr_13 [i_1] [i_1 - 1] [i_0] [i_1 - 1] [i_0] [i_0 - 1]))) / (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)41465)) : (1265350190))))))));
                }
            } 
        } 
    } 
}
