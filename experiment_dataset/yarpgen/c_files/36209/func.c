/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36209
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) (signed char)124)) / (((/* implicit */int) (unsigned short)23844)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) (signed char)-124);
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3]))) - (arr_9 [i_2]))))));
                        var_21 ^= ((/* implicit */int) (signed char)-124);
                        /* LoopSeq 2 */
                        for (signed char i_4 = 2; i_4 < 18; i_4 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((_Bool) ((8008021101294138366ULL) < (55743891693422534ULL)))))));
                            var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_2 [i_0])) + (2147483647))) << (((((/* implicit */int) (signed char)15)) - (15)))))) + (((18186154020919207776ULL) << (((((/* implicit */int) (signed char)-124)) + (184)))))));
                            var_24 &= ((/* implicit */unsigned short) arr_3 [i_0] [i_3] [i_4 + 1]);
                        }
                        for (signed char i_5 = 1; i_5 < 16; i_5 += 1) 
                        {
                            arr_18 [i_0] [5ULL] [i_2] [i_3] [i_3] [11ULL] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65533))) & (36028792723996672ULL)));
                            arr_19 [i_0] [i_0] [i_3] [i_5] = ((/* implicit */signed char) ((unsigned long long int) arr_11 [i_2 + 2] [i_5 + 1] [10U] [i_5]));
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) arr_6 [i_2]))));
                        }
                        arr_20 [i_0] [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) arr_17 [i_0] [i_2]);
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */unsigned char) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]);
        var_27 &= ((/* implicit */signed char) (unsigned short)20365);
    }
    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
    {
        var_28 = ((/* implicit */unsigned char) ((2937183116U) >> (((((/* implicit */int) (short)26953)) - (26931)))));
        /* LoopNest 2 */
        for (short i_7 = 2; i_7 < 12; i_7 += 3) 
        {
            for (unsigned int i_8 = 0; i_8 < 14; i_8 += 2) 
            {
                {
                    var_29 = ((/* implicit */_Bool) arr_24 [i_6] [i_8]);
                    arr_28 [(unsigned short)8] [i_6] [i_8] = ((/* implicit */unsigned char) min((arr_27 [i_7 - 2] [i_7] [i_6] [i_7]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)20365)) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_6]))) == (arr_16 [i_6] [i_6])))))))));
                }
            } 
        } 
        var_30 |= ((max((((/* implicit */unsigned long long int) arr_7 [i_6] [18LL] [i_6])), (arr_3 [i_6] [i_6] [i_6]))) & (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_6]))) * (36028792723996668ULL))) * (((3434971435333543737ULL) / (((/* implicit */unsigned long long int) arr_10 [i_6] [i_6] [i_6] [i_6])))))));
    }
    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 3) 
    {
        var_31 = ((/* implicit */unsigned short) ((arr_27 [i_9] [i_9] [(signed char)4] [i_9]) ^ (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_9] [18LL] [i_9]))) & (arr_3 [i_9] [i_9] [i_9]))) ^ (((((/* implicit */unsigned long long int) arr_10 [i_9] [i_9] [i_9] [i_9])) | (arr_3 [i_9] [(unsigned short)3] [i_9])))))));
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 4) 
        {
            for (signed char i_11 = 0; i_11 < 11; i_11 += 4) 
            {
                {
                    var_32 = ((/* implicit */signed char) ((unsigned long long int) ((unsigned long long int) 1357784180U)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_12 = 0; i_12 < 11; i_12 += 1) 
                    {
                        var_33 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_12]))) % (arr_30 [i_12])));
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_36 [i_11])) >> (((/* implicit */int) arr_36 [i_11]))));
                        arr_39 [i_12] = ((/* implicit */unsigned long long int) ((arr_13 [(unsigned short)19] [i_10] [i_10] [(unsigned short)19] [i_12]) < (((/* implicit */unsigned long long int) -8236580096334844324LL))));
                        arr_40 [i_9] [i_10] [i_11] [1ULL] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) 2937183101U))) < (((/* implicit */int) arr_12 [i_9] [i_10] [i_11] [i_12] [i_12]))));
                    }
                    for (unsigned short i_13 = 2; i_13 < 10; i_13 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-19722)) < (((/* implicit */int) (unsigned short)65533))));
                        var_36 = ((/* implicit */_Bool) max((var_36), (((((/* implicit */long long int) ((/* implicit */int) (signed char)15))) < (((arr_6 [i_11]) + (((/* implicit */long long int) arr_9 [i_10]))))))));
                    }
                    arr_45 [i_9] [1U] [i_9] [(signed char)5] = ((/* implicit */unsigned short) max((arr_15 [i_9] [i_10] [i_10] [i_10] [i_11]), (((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_9] [i_9] [i_9] [i_9] [i_11] [i_11]))) - (3085047770U))) > (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)35661), (((/* implicit */unsigned short) (short)-19722)))))))))));
                }
            } 
        } 
        arr_46 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_38 [i_9])) > (((/* implicit */int) ((unsigned short) (signed char)7)))))) >> (((((/* implicit */int) ((short) 2468702541U))) - (26936)))));
    }
    var_37 = min((((/* implicit */unsigned int) var_1)), (((((/* implicit */unsigned int) ((/* implicit */int) min((var_3), (((/* implicit */unsigned char) var_6)))))) - (4294967295U))));
}
