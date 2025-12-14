/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21857
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
    var_16 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26))) < (((unsigned int) (_Bool)0)));
    var_17 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) var_2);
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) (signed char)-12);
                        var_20 = ((/* implicit */short) 2377562514U);
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [1LL]))))) < (max((((/* implicit */unsigned int) 1792952670)), (var_9)))))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
    {
        arr_13 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_2))))) : ((~(((/* implicit */int) var_1))))));
        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) ((((/* implicit */_Bool) (short)-28966)) || (((/* implicit */_Bool) (signed char)-64)))))));
    }
    for (int i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_16 [i_5])), ((~(1673501251)))));
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_7 = 1; i_7 < 11; i_7 += 4) 
            {
                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) var_1))));
                arr_23 [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((unsigned short) var_13))) & ((~(1792952680))))) | (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) 4248009622U))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42))) | (2356350344U)))))))));
                arr_24 [i_5] [i_6] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */int) var_15)), (max((((/* implicit */int) arr_16 [i_6])), (((((/* implicit */int) (unsigned char)181)) | (((/* implicit */int) var_6))))))));
            }
            var_26 = ((((/* implicit */unsigned long long int) arr_15 [i_5])) <= ((((~(arr_3 [i_5] [i_6] [i_6]))) + (((/* implicit */unsigned long long int) arr_20 [i_5] [i_5])))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_8 = 2; i_8 < 11; i_8 += 4) 
        {
            arr_29 [i_5] [i_8] = ((/* implicit */unsigned int) ((arr_22 [i_8 - 1] [i_8 - 2] [i_8] [i_8]) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -1792952686)) || (((/* implicit */_Bool) var_8))))))));
            /* LoopNest 2 */
            for (long long int i_9 = 3; i_9 < 10; i_9 += 3) 
            {
                for (unsigned short i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    {
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) arr_18 [i_10] [i_10]))));
                        arr_35 [i_5] [i_9] [i_9] = ((/* implicit */unsigned char) ((arr_15 [i_8 - 1]) * (arr_15 [i_8 - 2])));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (signed char i_12 = 2; i_12 < 11; i_12 += 2) 
                {
                    for (unsigned int i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((arr_38 [i_5] [i_5] [i_5]) + (2147483647))) << (((arr_26 [i_5]) - (3800860535417723802ULL)))))) * (3675699877U)));
                            var_29 = ((/* implicit */int) (~(var_9)));
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */unsigned int) ((_Bool) arr_28 [i_5] [i_5] [i_5]));
            arr_44 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) (unsigned char)17))))) != (((/* implicit */int) var_4))));
        }
        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
        {
            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((3589624773U) | (((/* implicit */unsigned int) -1792952709))))))))));
            /* LoopNest 3 */
            for (unsigned int i_15 = 3; i_15 < 11; i_15 += 3) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (unsigned int i_17 = 1; i_17 < 11; i_17 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned short) max((var_32), (arr_42 [(_Bool)1] [i_15 - 3] [i_16] [i_17])));
                            var_33 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_20 [(unsigned char)11] [i_5])) || (((/* implicit */_Bool) -1673501243))))) * (((/* implicit */int) var_14)))) + (((/* implicit */int) var_14))));
                            var_34 *= ((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)35449)) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) var_12)))))));
                            var_35 = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_28 [i_14 - 1] [i_15 - 1] [i_15 - 3])) % (((/* implicit */int) arr_51 [i_14 - 1] [i_15 - 3] [i_15 - 3] [i_5] [(unsigned char)8])))), (((/* implicit */int) ((((/* implicit */int) ((signed char) arr_52 [i_5] [i_14] [i_14] [i_17 - 1]))) == (((/* implicit */int) (unsigned char)74)))))));
                        }
                    } 
                } 
            } 
            var_36 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)62))) || (((((/* implicit */int) arr_40 [i_5] [i_14 - 1] [i_5] [i_5])) > (((/* implicit */int) (short)17841)))))))));
            var_37 = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) var_9)) ? (arr_26 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32765))))), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) var_13))));
            var_38 = ((/* implicit */_Bool) (-(((/* implicit */int) var_6))));
        }
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 12; i_18 += 3) /* same iter space */
    {
        var_39 = ((/* implicit */unsigned char) ((unsigned int) arr_51 [i_18] [i_18] [(unsigned char)2] [4U] [i_18]));
        /* LoopSeq 2 */
        for (unsigned int i_19 = 0; i_19 < 12; i_19 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_20 = 0; i_20 < 12; i_20 += 3) 
            {
                var_40 = ((/* implicit */unsigned long long int) arr_60 [i_18]);
                /* LoopSeq 1 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    var_41 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_19])) && (((/* implicit */_Bool) var_14))))) >= ((~(((/* implicit */int) var_4))))));
                    var_42 -= ((/* implicit */long long int) (+(16ULL)));
                    var_43 = ((/* implicit */long long int) ((((/* implicit */int) arr_51 [i_18] [i_19] [i_20] [i_21] [i_20])) > (((/* implicit */int) (unsigned char)128))));
                }
                arr_68 [i_20] [i_19] [i_18] = ((/* implicit */signed char) var_9);
            }
            /* LoopNest 2 */
            for (unsigned short i_22 = 1; i_22 < 10; i_22 += 3) 
            {
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_24 = 0; i_24 < 12; i_24 += 4) 
                        {
                            arr_77 [i_23] [i_22] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_76 [i_22 - 1] [i_22 - 1] [i_22 - 1] [i_22 - 1] [i_24] [i_22 - 1] [i_24])) > (((/* implicit */int) (short)27504))));
                            var_44 = ((/* implicit */unsigned short) arr_49 [i_22 + 2] [i_19] [i_22 + 1]);
                        }
                        var_45 = ((/* implicit */unsigned long long int) (unsigned short)61631);
                    }
                } 
            } 
            arr_78 [i_19] [i_18] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)4))))));
        }
        for (unsigned char i_25 = 0; i_25 < 12; i_25 += 1) 
        {
            arr_81 [i_18] = ((/* implicit */_Bool) var_11);
            var_46 = ((/* implicit */unsigned char) ((arr_74 [i_18]) & (arr_74 [i_18])));
        }
        /* LoopNest 2 */
        for (unsigned int i_26 = 0; i_26 < 12; i_26 += 2) 
        {
            for (unsigned short i_27 = 0; i_27 < 12; i_27 += 1) 
            {
                {
                    var_47 = ((/* implicit */unsigned short) ((unsigned char) (-(((/* implicit */int) (signed char)-103)))));
                    var_48 = ((/* implicit */_Bool) max((var_48), (((/* implicit */_Bool) var_1))));
                    var_49 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (arr_8 [i_26])));
                }
            } 
        } 
    }
}
