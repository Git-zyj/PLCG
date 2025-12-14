/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39038
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
    var_15 = ((/* implicit */int) ((((var_13) > (((/* implicit */int) ((var_8) != (((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned long long int) var_8)) != (var_14))))) : (((((/* implicit */_Bool) min((7413787150757998224ULL), (16290652106072577793ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) >= (((/* implicit */unsigned int) var_7)))))) : (10823812451657896674ULL)))));
    var_16 = ((/* implicit */unsigned int) var_14);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (short)-20095))))));
        var_18 += ((((arr_2 [i_0]) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (arr_1 [i_0 + 2]))) | (((/* implicit */unsigned long long int) arr_0 [i_0])));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_0])) < (arr_1 [5])))) * (((((/* implicit */_Bool) (short)-16722)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (short)16721))))));
    }
    for (int i_1 = 2; i_1 < 12; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 4) 
        {
            arr_9 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) var_13);
            var_19 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [(_Bool)0] [(_Bool)0]))))), (((((/* implicit */_Bool) (signed char)39)) ? (arr_5 [i_1 + 1]) : (15234591528033604096ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 1]))) < (((((/* implicit */_Bool) 15234591528033604096ULL)) ? (arr_5 [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 - 3] [(short)11])))))))))));
            var_20 = min((var_0), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_4 [(signed char)1])), (var_5)))));
            var_21 -= ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_6 [(short)3] [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_7 [i_1] [i_2])))), (((arr_7 [i_1 + 1] [i_2]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_2]))))))) ? (((unsigned int) arr_4 [i_1 - 2])) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
        }
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            arr_12 [i_1] [i_3] [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) 2819257346U)), (3212152545675947520ULL)));
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_4 [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1 - 1]))))) ? (((int) arr_4 [i_1 + 1])) : (((/* implicit */int) min((arr_4 [i_1 - 2]), (arr_4 [i_1 - 1]))))));
        }
        for (unsigned char i_4 = 3; i_4 < 11; i_4 += 4) 
        {
            arr_16 [i_4] [i_1] [i_1] = ((/* implicit */unsigned int) var_3);
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 11; i_5 += 4) 
            {
                for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    {
                        arr_23 [3] = ((/* implicit */int) ((unsigned short) ((signed char) ((((/* implicit */_Bool) arr_22 [i_6] [i_6] [i_1] [i_5] [i_4] [i_1])) ? (arr_19 [i_1] [i_4 + 2] [i_5] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5] [i_4 - 3])))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 145366477U)) ? (((/* implicit */int) arr_22 [i_1] [1] [0] [i_6] [i_7] [(unsigned char)7])) : (((997674062) << (((((((/* implicit */_Bool) (short)-15164)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-15164))) : (4149600818U))) - (4294952131U)))))));
                            var_24 = ((/* implicit */unsigned short) ((int) (short)-15164));
                        }
                        for (signed char i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4149600818U)) ? (255) : (((/* implicit */int) (unsigned short)62548)))))));
                            arr_28 [i_1] [i_1] [i_5] [i_4 - 1] [i_8] [i_4 + 1] = ((/* implicit */unsigned short) (signed char)-80);
                            var_26 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_1 - 2] [i_4] [i_5] [i_6] [(signed char)2] [i_8])) ? (var_14) : (((/* implicit */unsigned long long int) 2147483647))))) || (((/* implicit */_Bool) min(((short)15164), (((/* implicit */short) var_11))))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-58)))))));
                            arr_29 [i_8] [i_5] [i_5] [i_4 - 2] [i_1 - 1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_8)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_8] [i_6] [i_5] [10U] [i_1 - 1] [i_1])) ? (((/* implicit */unsigned int) var_5)) : (arr_19 [i_1] [i_4 - 2] [i_1] [i_6])))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (arr_19 [i_1] [i_4] [i_5] [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4] [i_4 - 1])))))));
                            var_27 = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_5)), (min((min((((/* implicit */unsigned int) var_9)), (arr_19 [i_1 - 2] [i_1 - 2] [7] [i_6]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [(unsigned char)1] [(unsigned char)1] [i_5] [i_5] [i_5] [i_5])) < (((/* implicit */int) arr_20 [i_1] [i_1] [i_6] [i_1])))))))));
                        }
                        var_28 += ((/* implicit */unsigned char) (~(((/* implicit */int) arr_27 [8] [i_4] [8] [i_4] [i_6] [i_4]))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            var_29 = ((/* implicit */short) ((unsigned long long int) 145366477U));
                            arr_34 [i_1 - 2] [i_4] [i_5 + 2] [i_6] [i_9] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */int) (_Bool)1)) : (arr_17 [7U])))));
                            arr_35 [i_1] [i_4] [i_1] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_6) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) < (((/* implicit */int) arr_32 [i_1 + 1] [i_4 - 2] [i_5] [i_6] [i_1 + 1]))));
                        }
                        for (unsigned short i_10 = 3; i_10 < 12; i_10 += 2) 
                        {
                            arr_38 [i_1] [i_1 + 1] [i_5 - 1] [i_10] [i_1] = ((/* implicit */signed char) ((arr_5 [i_1]) != (((/* implicit */unsigned long long int) max((arr_36 [i_10] [(unsigned short)10] [i_10] [i_5 - 1] [i_1 - 1]), (((/* implicit */unsigned int) (signed char)58)))))));
                            var_30 = ((/* implicit */unsigned long long int) ((4149600818U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)15164)))));
                        }
                    }
                } 
            } 
        }
        arr_39 [i_1] = var_5;
    }
}
