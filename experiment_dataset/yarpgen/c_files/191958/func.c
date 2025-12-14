/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191958
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (arr_3 [i_0] [i_0] [i_0])))) && ((_Bool)0)));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_15)) > (((/* implicit */int) arr_13 [i_1 - 3] [i_1 - 2] [i_1 - 3] [i_1 + 2] [i_1]))))) < (((/* implicit */int) min((((/* implicit */short) (unsigned char)25)), (var_16))))));
                                arr_14 [i_0] [5LL] [i_2] [i_3] [i_3] [i_4] [i_4] = ((/* implicit */short) (unsigned short)46265);
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (!(((((/* implicit */int) max((var_0), (((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_1 + 1] [i_0] [i_2] [i_3] [i_4]))))) > (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_3]))))))))))));
                                arr_15 [i_4] [i_3] [i_2] [i_2] [12ULL] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_13 [i_0] [i_1] [i_2] [i_3] [i_4]), ((!(arr_13 [i_0] [(unsigned short)4] [i_2] [i_3] [i_4]))))))) & (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_3] [(signed char)11]))) / (arr_12 [i_1 - 1] [9LL] [i_3] [i_4])))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((arr_7 [i_0] [i_0] [i_1]) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_1])) < ((~(((/* implicit */int) arr_3 [i_0] [i_0] [i_1 - 1])))))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_14);
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            {
                arr_22 [i_5] [i_5] [i_5] = ((/* implicit */long long int) min((min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6] [i_5]))) * (arr_12 [i_5] [i_6] [(short)5] [(_Bool)1]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-512))))))), (((/* implicit */unsigned long long int) min((((arr_18 [i_6] [i_5]) != (((/* implicit */int) var_6)))), (((((/* implicit */int) var_15)) != (((/* implicit */int) (short)-9674)))))))));
                var_22 = ((/* implicit */unsigned char) arr_5 [i_6]);
                var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_21 [i_6]))));
                /* LoopNest 3 */
                for (short i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    for (unsigned char i_8 = 3; i_8 < 9; i_8 += 1) 
                    {
                        for (long long int i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) arr_6 [i_9] [i_7] [i_6]);
                                arr_31 [i_5] [i_6] [i_7] [i_7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_8 - 2])) ? (((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (3421384206U))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_12)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_18 [(unsigned char)2] [(unsigned short)7]), (((/* implicit */int) var_10)))))))))));
                                var_25 = ((/* implicit */signed char) ((((/* implicit */int) arr_25 [i_8 + 2] [i_7] [i_8 - 1] [i_7])) & (((/* implicit */int) min(((short)0), (((/* implicit */short) arr_25 [i_8 + 1] [i_8 - 1] [i_8 + 2] [(unsigned short)10])))))));
                                var_26 = ((/* implicit */signed char) ((((/* implicit */int) arr_30 [i_9] [i_9] [i_9] [i_9] [i_9])) + (((/* implicit */int) (unsigned char)190))));
                            }
                        } 
                    } 
                } 
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) (short)511)) & (((/* implicit */int) min(((short)32767), (((/* implicit */short) arr_13 [i_6] [i_6] [(short)12] [(unsigned short)8] [i_5])))))))) | (31LL)));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_28 -= ((/* implicit */short) arr_20 [9LL] [i_10] [i_10]);
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */int) max((((/* implicit */short) var_15)), (var_6)))), (((((/* implicit */int) arr_28 [i_10] [i_10] [5])) / (((/* implicit */int) arr_6 [i_10] [i_10] [i_10]))))))) / ((-(((var_1) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
        arr_35 [(_Bool)1] &= ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_17 [i_10])), ((~((~(arr_7 [i_10] [i_10] [i_10])))))));
        var_30 -= ((/* implicit */short) max((((31LL) & (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_28 [i_10] [i_10] [i_10])), (arr_10 [(unsigned short)7] [i_10] [i_10] [i_10]))))))), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [(unsigned char)9] [i_10] [i_10])) / (((/* implicit */int) arr_5 [i_10])))))));
    }
    for (unsigned short i_11 = 3; i_11 < 24; i_11 += 2) 
    {
        var_31 += ((/* implicit */unsigned long long int) arr_37 [i_11 - 3]);
        arr_38 [i_11] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)62)) / (((/* implicit */int) arr_37 [(unsigned short)16]))));
        var_32 &= ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_37 [i_11 - 1])) >> (((((/* implicit */int) arr_37 [i_11 - 2])) - (17371))))), (((/* implicit */int) arr_37 [i_11 + 1]))));
        arr_39 [i_11] [i_11] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_7)) | (((/* implicit */int) (short)32767))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) var_5)))) >= (((/* implicit */int) arr_37 [i_11]))));
        var_33 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) arr_37 [i_11 - 2])) < (((/* implicit */int) arr_37 [i_11 - 3])))))));
    }
}
