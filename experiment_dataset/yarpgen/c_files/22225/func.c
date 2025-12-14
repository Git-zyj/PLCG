/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22225
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
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 2; i_4 < 21; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) arr_12 [i_4 + 1] [i_4 + 1] [i_3] [i_4] [i_4] [i_4])))), (var_12)));
                            var_19 = ((int) max(((short)-32742), (arr_5 [i_0] [i_0])));
                        }
                        arr_14 [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */short) var_8);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */int) arr_5 [i_6] [i_5]);
                                var_21 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_1 - 2])) ? (arr_19 [i_1 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1])))))), (((((var_4) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32746))))) % (((/* implicit */unsigned long long int) ((var_3) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_6] [i_0]))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        arr_25 [i_0] [i_1] [i_7] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) (short)32743)) <= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_8 [i_7] [i_1] [i_7])) : (arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] [i_7]))))))));
                        var_22 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_7] [i_2] [i_1] [i_1] [i_7]))) == (arr_24 [i_7] [i_2] [i_1 - 2] [i_0])))), (((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) arr_13 [i_0] [i_1 + 1] [i_2] [i_1])) : (((/* implicit */int) arr_23 [i_7] [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 2]))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 3; i_9 < 21; i_9 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */short) min((((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) arr_11 [i_9] [i_8] [i_2] [i_1] [i_9])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [1ULL])))) : (((/* implicit */int) arr_23 [i_9] [i_1] [i_1 - 2] [i_1] [i_1 + 1])))), (((/* implicit */int) arr_3 [i_0] [i_1] [i_9 - 1]))));
                                var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_9] [i_1 - 1] [i_1 + 1] [(signed char)7] [i_1])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_21 [i_0] [i_1] [i_9] [i_8]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(_Bool)1] [i_8] [(short)11])) ? (((/* implicit */int) arr_13 [i_1] [(short)19] [i_8] [i_9])) : (var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))) : (max((1681284398U), (var_7)))))));
                                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (-842027622452626548LL)))) || ((!(((/* implicit */_Bool) arr_22 [(short)16] [(short)16] [i_2] [(_Bool)1] [i_2] [i_2]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_32 [1U] = ((/* implicit */_Bool) (+(((arr_2 [i_0]) ? (arr_26 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_2 [i_0]))))));
    }
    for (unsigned long long int i_10 = 2; i_10 < 13; i_10 += 2) 
    {
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned short) var_3)), (arr_20 [i_10] [i_10] [i_10] [i_10] [i_10]))))) ? (((((/* implicit */_Bool) arr_20 [i_10] [i_10 - 1] [i_10] [i_10] [i_10 - 2])) ? (arr_16 [i_10 + 1] [i_10 - 2] [i_10] [i_10 + 2] [i_10 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_10 + 3] [i_10 + 3] [i_10 - 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_7)) ? (var_13) : (((/* implicit */unsigned int) var_14)))))))));
        var_27 += ((/* implicit */short) (-((-(((/* implicit */int) (_Bool)1))))));
        /* LoopNest 2 */
        for (signed char i_11 = 0; i_11 < 16; i_11 += 4) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_13 = 0; i_13 < 16; i_13 += 2) 
                    {
                        for (signed char i_14 = 0; i_14 < 16; i_14 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)-4730))))) % (((unsigned int) var_17))));
                                arr_46 [i_12] = (i_12 % 2 == zero) ? (((/* implicit */signed char) ((max((((/* implicit */int) arr_23 [i_12] [i_10 + 2] [i_10] [i_10 + 3] [i_10 - 2])), ((+(-2080367370))))) >> (((arr_10 [i_10] [i_11] [i_10] [i_13] [2ULL] [i_12]) + (757979614)))))) : (((/* implicit */signed char) ((((max((((/* implicit */int) arr_23 [i_12] [i_10 + 2] [i_10] [i_10 + 3] [i_10 - 2])), ((+(-2080367370))))) + (2147483647))) >> (((((arr_10 [i_10] [i_11] [i_10] [i_13] [2ULL] [i_12]) + (757979614))) + (135699180))))));
                            }
                        } 
                    } 
                    var_29 &= ((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_6 [i_10 + 3] [i_12])) + (1084902621U)));
                }
            } 
        } 
        var_30 = ((/* implicit */short) min((var_1), (((/* implicit */unsigned long long int) arr_39 [i_10 + 1] [i_10 + 1] [(unsigned char)11]))));
        var_31 = ((/* implicit */unsigned int) max((((arr_45 [i_10 + 2] [i_10] [i_10 - 1]) != (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))))), (((((/* implicit */int) (unsigned char)23)) <= (((/* implicit */int) (unsigned short)11))))));
    }
    var_32 = ((/* implicit */long long int) var_12);
    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_1)))))))));
    var_34 |= ((/* implicit */long long int) var_17);
    /* LoopNest 3 */
    for (short i_15 = 2; i_15 < 16; i_15 += 2) 
    {
        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
        {
            for (unsigned int i_17 = 0; i_17 < 17; i_17 += 3) 
            {
                {
                    var_35 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)32753)) ^ (((((/* implicit */int) arr_5 [i_16 + 1] [i_16 + 1])) & (((/* implicit */int) arr_5 [i_15 + 1] [i_15 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 3; i_18 < 15; i_18 += 2) 
                    {
                        for (signed char i_19 = 0; i_19 < 17; i_19 += 3) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned int) (short)32738);
                                var_37 = ((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) arr_31 [i_15 + 1] [i_15])), ((~(arr_19 [i_15])))))));
                                var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_26 [i_16 + 1] [i_16] [i_16] [i_16 + 1]))))), ((short)-4716))))));
                                var_39 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 3290110271U)))) > (((unsigned long long int) arr_10 [i_15] [i_18] [i_17] [i_17] [i_16] [i_15]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
