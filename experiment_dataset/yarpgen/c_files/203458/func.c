/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203458
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
    var_19 = ((/* implicit */long long int) (unsigned short)44227);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) arr_1 [i_0] [(unsigned char)7]);
        arr_4 [i_0] = ((/* implicit */short) arr_0 [i_0] [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */short) arr_1 [i_1] [i_1]);
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 1; i_3 < 20; i_3 += 2) 
            {
                {
                    arr_14 [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) (signed char)109);
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 1; i_4 < 21; i_4 += 1) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)109)))) / (((unsigned int) (unsigned short)44227))));
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (_Bool)1))));
                        }
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
                        {
                            var_23 = ((((/* implicit */_Bool) arr_13 [(unsigned char)2] [(unsigned char)2] [i_3] [(unsigned short)5])) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) arr_5 [i_1])));
                            arr_21 [i_1] [i_1] [15ULL] [i_4] [i_3] = arr_8 [i_1];
                        }
                        for (long long int i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned short) arr_16 [i_1] [i_2] [i_3] [i_4]);
                            var_25 = ((min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)44227)) % (((/* implicit */int) (_Bool)1))))), (arr_18 [i_4]))) == (((/* implicit */long long int) ((((((/* implicit */_Bool) 2683202410U)) ? (((/* implicit */int) arr_0 [i_1] [i_2])) : (((/* implicit */int) arr_1 [i_2] [i_3])))) >> (((/* implicit */int) ((((/* implicit */int) (unsigned short)7923)) > (((/* implicit */int) (signed char)-63)))))))));
                            var_26 = ((/* implicit */unsigned short) min((8790436727525454937ULL), (((/* implicit */unsigned long long int) arr_13 [i_1] [(unsigned short)11] [i_1] [18LL]))));
                        }
                        for (long long int i_8 = 0; i_8 < 22; i_8 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) 7046423572798576157LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)45))) : (1099511627775LL)));
                            arr_30 [i_1] [i_2] [i_3] [i_4 + 1] [(_Bool)1] = ((/* implicit */unsigned int) max((arr_1 [i_1] [i_3]), (((/* implicit */unsigned char) arr_0 [i_2] [i_2]))));
                            arr_31 [i_1] [i_2] [i_3] [i_2] [i_8] [i_8] |= ((/* implicit */unsigned char) (unsigned short)65535);
                        }
                        /* LoopSeq 3 */
                        for (long long int i_9 = 1; i_9 < 20; i_9 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned short) max((var_28), (arr_20 [i_1] [i_9] [i_4] [i_3] [i_2] [i_1])));
                            var_29 *= ((/* implicit */unsigned long long int) arr_8 [i_4]);
                        }
                        for (unsigned short i_10 = 3; i_10 < 20; i_10 += 2) 
                        {
                            var_30 = ((/* implicit */signed char) (((_Bool)0) ? (arr_6 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-9732), (((/* implicit */short) (unsigned char)156))))))));
                            var_31 |= ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-7046423572798576157LL), (((/* implicit */long long int) arr_13 [i_1] [i_1] [(unsigned char)14] [(unsigned short)13]))))) && (arr_26 [i_1] [i_1] [i_1] [i_4] [i_4] [i_4])))), (arr_1 [i_10] [i_10])));
                            arr_36 [i_1] [i_1] [i_1] [i_3] [i_4] [i_10] = ((/* implicit */unsigned short) arr_18 [i_1]);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 4) 
                        {
                            arr_39 [i_1] [i_1] [i_3] [i_4] [(_Bool)1] [i_3] = ((long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) (signed char)-49)) : (arr_7 [i_1])));
                            var_32 = ((/* implicit */int) -1151668659065294566LL);
                            var_33 += ((/* implicit */unsigned char) arr_35 [i_1] [i_2] [i_3 - 1] [i_4] [i_11] [i_11] [i_4]);
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((long long int) ((((/* implicit */_Bool) (unsigned short)36457)) ? (18446744073709551607ULL) : (1062820272902927659ULL)))))));
                        var_35 -= ((/* implicit */_Bool) (unsigned char)45);
                    }
                    for (int i_13 = 0; i_13 < 22; i_13 += 2) 
                    {
                        arr_46 [i_1] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1151668659065294566LL)) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30444))) : (((((arr_7 [i_1]) >= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned long long int) ((int) arr_10 [i_13] [i_13]))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_41 [i_1] [i_2] [i_3] [i_13] [i_1] [i_13]))))))));
                        arr_47 [i_1] [(unsigned short)10] [i_3] [i_13] = arr_7 [i_1];
                        var_36 = ((/* implicit */signed char) -201674034);
                        var_37 = ((/* implicit */long long int) arr_16 [i_13] [i_3] [i_1] [i_1]);
                    }
                    arr_48 [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) arr_41 [7] [i_2] [i_2] [i_2] [i_2] [i_2]);
                }
            } 
        } 
    }
    for (signed char i_14 = 0; i_14 < 22; i_14 += 2) /* same iter space */
    {
        arr_53 [i_14] = ((/* implicit */unsigned long long int) arr_22 [i_14] [(unsigned char)13] [19] [i_14] [i_14] [i_14] [i_14]);
        /* LoopSeq 1 */
        for (int i_15 = 0; i_15 < 22; i_15 += 2) 
        {
            var_38 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)180)) <= (((/* implicit */int) (short)5626))));
            var_39 = ((/* implicit */unsigned short) ((((((((/* implicit */int) arr_41 [i_14] [i_14] [i_14] [i_15] [i_15] [i_15])) + (2147483647))) >> (((((/* implicit */int) arr_41 [i_14] [i_14] [i_14] [i_15] [(short)1] [i_15])) + (13208))))) != (((/* implicit */int) arr_56 [i_14] [i_15]))));
            arr_57 [i_14] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_14] [i_14] [19LL] [i_15] [i_15] [i_15] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)21310), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [(unsigned char)12] [(unsigned char)12] [i_14] [(short)13])) && (((/* implicit */_Bool) -1263343293))))))))) : (((long long int) ((((/* implicit */_Bool) 1052089136)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_55 [i_14] [i_14] [2LL])))))));
            var_40 = ((/* implicit */unsigned short) arr_49 [i_14] [i_15]);
        }
    }
    for (signed char i_16 = 0; i_16 < 22; i_16 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_17 = 1; i_17 < 20; i_17 += 2) 
        {
            for (short i_18 = 0; i_18 < 22; i_18 += 4) 
            {
                {
                    arr_66 [i_16] [i_17] [i_18] [(_Bool)1] = ((/* implicit */unsigned int) (short)-1414);
                    arr_67 [i_16] [i_17] [(unsigned short)13] [i_18] = ((/* implicit */unsigned char) (short)12964);
                    arr_68 [(signed char)14] [(signed char)14] [i_17] [i_18] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_38 [i_16] [i_17] [i_16] [i_18] [(unsigned short)15] [i_16] [i_16])), (2544549260914688880ULL)));
                }
            } 
        } 
        arr_69 [21] = ((/* implicit */signed char) arr_55 [i_16] [i_16] [i_16]);
    }
}
