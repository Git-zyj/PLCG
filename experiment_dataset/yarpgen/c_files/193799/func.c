/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193799
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) min((((/* implicit */short) ((_Bool) var_0))), (((short) -176968139)))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((arr_0 [i_0]), (((/* implicit */unsigned int) (signed char)-4)))), (max((var_13), (arr_0 [(unsigned char)0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : ((~(arr_1 [i_0])))));
        var_18 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
    }
    for (int i_1 = 2; i_1 < 9; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) (~(arr_1 [i_1 - 2]))));
        arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (unsigned short)8192))));
        var_19 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) var_11)) < ((~(((/* implicit */int) (signed char)-111)))))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 1; i_2 < 7; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (short i_3 = 2; i_3 < 8; i_3 += 2) 
            {
                for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    {
                        var_20 -= ((/* implicit */unsigned short) (short)63);
                        arr_16 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_1])))))) : ((-(((((/* implicit */_Bool) (unsigned short)41272)) ? (((/* implicit */unsigned long long int) var_7)) : (arr_15 [i_1] [i_2] [i_3] [i_4])))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            var_21 = ((/* implicit */long long int) ((unsigned char) ((((arr_13 [i_1] [i_3] [i_3] [i_5]) ? (((/* implicit */unsigned long long int) arr_1 [i_1])) : (arr_18 [i_1 - 1]))) != (min((var_15), (((/* implicit */unsigned long long int) arr_11 [i_1] [i_1])))))));
                            var_22 -= ((/* implicit */unsigned int) (~(max((((((/* implicit */int) (unsigned short)65535)) << (((((/* implicit */int) arr_5 [i_1])) + (32052))))), (((/* implicit */int) (short)10774))))));
                            arr_19 [i_1] [i_1] = ((/* implicit */signed char) arr_12 [i_5] [i_1] [(unsigned short)8]);
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8191))) - (123999549U)))), (((var_2) ? (5LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)110)))))))) ? ((-(((/* implicit */int) ((short) (unsigned char)233))))) : (min(((+(((/* implicit */int) var_12)))), (((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */int) arr_10 [i_2 - 1] [i_4])) : (((/* implicit */int) arr_10 [i_4] [i_2])))))))))));
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned int i_7 = 2; i_7 < 9; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 9; i_8 += 3) 
                    {
                        {
                            var_24 ^= ((/* implicit */unsigned int) (~((~(((1690144308) | (((/* implicit */int) arr_23 [i_1] [i_7]))))))));
                            var_25 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-45)), (((((/* implicit */_Bool) min((arr_15 [i_1] [i_2] [i_2] [i_7]), (((/* implicit */unsigned long long int) 3765459753U))))) ? ((~(var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40111)))))));
                            var_26 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) max((var_9), (((/* implicit */int) arr_12 [i_8 - 1] [i_1] [(_Bool)0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3327353183U))))) : (((/* implicit */int) ((var_13) < (((/* implicit */unsigned int) var_9))))))));
                            var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((arr_14 [i_8 - 1] [(_Bool)1] [i_1] [i_1] [i_1] [i_1]), (arr_14 [i_8 - 1] [i_8] [i_1] [i_1] [i_1] [i_1]))))));
                            var_28 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_23 [i_1] [i_1])) ? (((/* implicit */int) arr_14 [i_1] [(short)4] [i_2 + 2] [i_1] [(_Bool)1] [3ULL])) : (((/* implicit */int) arr_25 [i_7] [i_2])))), (((/* implicit */int) ((((/* implicit */_Bool) 4175136725169191601ULL)) && (((/* implicit */_Bool) (unsigned char)67)))))));
                        }
                    } 
                } 
            } 
        }
    }
    var_29 = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) min((((/* implicit */unsigned int) var_2)), (var_8)))))));
    var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_15))))));
    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned long long int) 515396075520LL))))) ? (529507546U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6047)))));
}
