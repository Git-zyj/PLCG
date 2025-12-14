/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25045
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
    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) var_3))));
    var_11 |= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) ((unsigned short) var_4))) >= (((/* implicit */int) var_3)))));
    var_12 = ((/* implicit */long long int) ((((/* implicit */int) var_4)) <= ((~(((/* implicit */int) var_3))))));
    var_13 = ((/* implicit */unsigned short) ((var_7) ? (((((/* implicit */_Bool) ((int) var_3))) ? (((/* implicit */int) ((unsigned short) 7238255045828407403LL))) : (((((/* implicit */_Bool) (unsigned short)65360)) ? (((/* implicit */int) (unsigned short)46915)) : (((/* implicit */int) var_3)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)96))) : (var_0))) <= (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)120)) - (((/* implicit */int) var_7))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)251)) >> (((((/* implicit */int) (signed char)-68)) + (95)))))) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) arr_1 [i_0]))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (-((-(((/* implicit */int) (unsigned short)59512))))));
        arr_3 [i_0] = ((((arr_1 [i_0]) * (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) % (((arr_1 [i_0]) >> (((((/* implicit */int) (signed char)127)) - (98))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 7; i_1 += 4) 
    {
        arr_6 [i_1 - 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1014186644111305310ULL)) || (((arr_4 [i_1]) < (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 1] [(unsigned short)8]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1 + 1])) | (((/* implicit */int) (unsigned short)6155))))) && (((/* implicit */_Bool) ((arr_0 [i_1] [i_1 + 2]) ? (426929210) : (((/* implicit */int) (unsigned short)5762))))))))) : (((arr_1 [i_1 + 3]) - (arr_1 [i_1 - 2])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 3; i_2 < 9; i_2 += 4) 
        {
            var_15 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6692)) ? (((/* implicit */int) (unsigned short)55835)) : (((/* implicit */int) arr_8 [i_1 - 1] [i_1 + 2]))))) && (((/* implicit */_Bool) 2147483647))));
            var_16 = arr_4 [i_1 + 3];
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2 - 1] [i_2 - 2])) ? (((/* implicit */int) (unsigned short)31735)) : (((/* implicit */int) arr_0 [i_1 - 2] [i_2 - 3]))));
            arr_10 [i_1] [i_2 - 1] [i_2 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1 - 3])) || (arr_0 [6ULL] [i_1 - 2])));
        }
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((((arr_1 [i_1]) >= (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1]))))) ? (((((/* implicit */_Bool) 17544289657977974730ULL)) ? (11904499357143872504ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12501))))) : (((/* implicit */unsigned long long int) arr_4 [i_1 + 3])))) >> (((((arr_8 [i_1] [i_1]) ? (arr_7 [i_1] [i_1] [i_1 + 3]) : (((/* implicit */int) arr_9 [(unsigned short)0])))) % (((/* implicit */int) (unsigned short)9)))))))));
        var_19 = ((arr_0 [i_1] [(unsigned short)2]) ? (((((/* implicit */_Bool) ((1152921504606846976LL) >> (((arr_1 [i_1]) - (8700932963970635815LL)))))) ? (((arr_0 [i_1 - 3] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1056462116860835792ULL))) : (((/* implicit */unsigned long long int) ((1152921504606846971LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20488)))))))) : (((/* implicit */unsigned long long int) ((((arr_0 [i_1 - 3] [i_1 + 3]) || (((/* implicit */_Bool) arr_5 [i_1 - 3])))) ? (arr_7 [i_1] [(unsigned short)4] [i_1]) : (((/* implicit */int) arr_8 [i_1 - 3] [i_1 + 2]))))));
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_3] [i_5]))))) ? (((/* implicit */unsigned long long int) ((arr_8 [i_1 - 1] [i_1]) ? (((/* implicit */int) arr_8 [i_1 + 2] [(unsigned short)6])) : (((/* implicit */int) (unsigned short)49659))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1056462116860835792ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4]))) : (10595887546823470723ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_1] [i_3])) ? (((/* implicit */int) (unsigned short)33312)) : (((/* implicit */int) (unsigned short)32341))))) : (((((/* implicit */_Bool) arr_16 [i_1 + 3] [i_3] [i_4] [i_5])) ? (8331953058110372557ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1])))))))));
                        arr_20 [i_1 - 1] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_1 - 2])) + (((/* implicit */int) arr_17 [i_1 - 1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_1 - 3])) != (((/* implicit */int) arr_13 [i_1 - 3] [i_1 - 2]))))) : (((((/* implicit */int) (unsigned short)255)) % (((/* implicit */int) (signed char)(-127 - 1))))));
                        arr_21 [i_1] [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_3]))));
                    }
                } 
            } 
        } 
    }
}
