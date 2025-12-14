/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50478
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 1420331932)) ? (((/* implicit */unsigned int) arr_0 [i_0] [i_0])) : (3161650605U))), (((/* implicit */unsigned int) arr_0 [i_0] [(short)21]))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (signed char i_3 = 3; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)6144)))))));
                        var_17 = ((/* implicit */short) arr_6 [i_0] [i_0] [i_0] [i_0]);
                        var_18 = ((/* implicit */signed char) ((((var_15) <= (((/* implicit */long long int) ((/* implicit */int) arr_10 [16LL] [16LL] [i_3 - 2] [i_3]))))) ? (((((/* implicit */_Bool) var_6)) ? (arr_9 [i_0] [i_1] [i_3 + 1] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -7097337824983711190LL)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_3 - 3] [i_3 - 2])) : (((/* implicit */int) (_Bool)1)))))));
                        var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7767)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_3] [11ULL] [i_2] [i_3] [i_3])) ? (var_8) : (351581873U)))) : (((unsigned long long int) var_0))))) ? (var_8) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)0)) - (((/* implicit */int) (unsigned short)6144))))) ? (((/* implicit */int) min(((unsigned short)59381), (var_1)))) : (((/* implicit */int) var_1)))))));
                        arr_11 [i_2] [i_1] [i_2] [i_2] [(short)16] [i_3] = ((/* implicit */short) (unsigned short)6154);
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ ((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-3279))))));
    /* LoopSeq 2 */
    for (short i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        arr_15 [i_4] = ((/* implicit */int) (((_Bool)1) ? (arr_12 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4] [i_4])))));
        arr_16 [i_4] [(short)18] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (-1104457174)))) ? (((((/* implicit */_Bool) arr_12 [i_4])) ? (arr_13 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-59))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)0)), (2110033569)))))), (((/* implicit */unsigned long long int) (((~(8660898905712735662ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-6))))))));
    }
    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        arr_19 [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) -55580981)) && (((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)59391)), (9223372036854775806LL)))))))));
        /* LoopSeq 2 */
        for (int i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            var_21 += ((/* implicit */_Bool) var_12);
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    {
                        arr_31 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)31))) / (((long long int) arr_29 [i_5] [(unsigned char)6]))));
                        arr_32 [i_5] [i_6] [i_6] [i_5] = ((/* implicit */unsigned long long int) min((min((var_15), (((/* implicit */long long int) arr_22 [i_6] [i_5] [i_8])))), (((/* implicit */long long int) arr_22 [i_5] [i_5] [i_5]))));
                        var_22 = ((/* implicit */unsigned long long int) arr_7 [2LL] [i_6]);
                        arr_33 [(_Bool)1] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) ((long long int) var_5))))) ? (((((/* implicit */int) arr_18 [i_6])) >> (((/* implicit */int) var_6)))) : (((int) arr_23 [i_5] [i_5]))));
                    }
                } 
            } 
            var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((-46195369) & (((/* implicit */int) (short)1432))))), (-9223372036854775799LL)))) && (((/* implicit */_Bool) var_4))));
            var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) arr_1 [i_5] [i_6])))))) ? (min((max((((/* implicit */long long int) 2318220766U)), (var_13))), (((/* implicit */long long int) (signed char)-60)))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (short)-15087)) : (((/* implicit */int) var_4)))))))));
            arr_34 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_10 [i_6] [i_6] [i_6] [i_5]))) ? (min((arr_3 [12LL]), (arr_3 [i_5]))) : ((~(arr_5 [i_5] [i_6] [i_5])))));
        }
        for (short i_9 = 2; i_9 < 17; i_9 += 2) 
        {
            arr_37 [i_5] = ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) var_3)))));
            var_25 = ((/* implicit */unsigned char) -55580981);
            var_26 = ((/* implicit */signed char) min(((!(((/* implicit */_Bool) var_12)))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)164))) > ((~(3943385422U)))))));
            arr_38 [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) var_14)) > (-55580981))))));
        }
        /* LoopNest 3 */
        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            for (int i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                for (unsigned int i_12 = 0; i_12 < 20; i_12 += 1) 
                {
                    {
                        arr_50 [i_5] [(unsigned char)14] [(signed char)7] = ((/* implicit */long long int) arr_23 [i_5] [i_5]);
                        arr_51 [i_5] [i_5] [i_10] [i_5] [i_5] [i_5] = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */long long int) ((((((/* implicit */int) var_9)) + (2147483647))) >> (((arr_25 [i_10] [i_10] [i_5]) - (720346927U)))))) >= (max((arr_4 [i_5] [i_10] [i_5]), (((/* implicit */long long int) arr_22 [i_5] [i_5] [i_11]))))))), (((((/* implicit */int) var_11)) << (((((((/* implicit */_Bool) arr_28 [i_5] [i_5] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (491385149817183295LL))) - (97LL)))))));
                    }
                } 
            } 
        } 
    }
}
