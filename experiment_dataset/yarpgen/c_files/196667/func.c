/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196667
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29440))))), (((/* implicit */long long int) ((unsigned short) arr_0 [i_0] [i_0])))));
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? (((max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) (signed char)-66)))) / (((((/* implicit */_Bool) 10933325352701119170ULL)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            var_21 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */long long int) 1174576604)) : (var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (signed char)-118)))) <= ((~(((/* implicit */int) ((short) var_8)))))));
            var_22 = ((/* implicit */short) (unsigned char)255);
            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) max((((/* implicit */unsigned int) max((arr_1 [i_1]), (arr_1 [i_1])))), (((0U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))))))));
        }
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_4 = 2; i_4 < 9; i_4 += 3) 
            {
                var_24 = ((/* implicit */signed char) ((((/* implicit */long long int) arr_3 [i_4 + 3] [i_4 + 3])) * (((((/* implicit */_Bool) ((((arr_0 [i_1] [i_1]) + (9223372036854775807LL))) >> (((/* implicit */int) (signed char)20))))) ? (((/* implicit */long long int) ((arr_3 [i_1] [i_3]) << (((var_17) + (2987329646438040248LL)))))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3])))))))));
                var_25 = ((/* implicit */_Bool) (unsigned char)142);
                var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) var_10))));
            }
            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (_Bool)1))));
            var_28 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) (signed char)-5)) : (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (unsigned short)0))))))), (((((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) != (arr_10 [i_3] [i_1] [i_1]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) << (((((/* implicit */int) (signed char)-115)) + (123)))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32))) : (var_14)))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
            {
                arr_17 [i_1] [i_3] [i_5] = ((/* implicit */_Bool) var_6);
                var_29 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_9 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) : (arr_12 [i_1] [i_1] [i_3] [(signed char)8])))));
            }
            for (signed char i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) % (arr_10 [i_1] [i_3] [i_6]))));
                arr_20 [i_1] [i_1] [i_3] [i_6] = ((/* implicit */long long int) max((((arr_13 [i_1]) ? (((/* implicit */int) arr_13 [i_6])) : (((/* implicit */int) arr_11 [i_6])))), (((/* implicit */int) var_7))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 2; i_7 < 10; i_7 += 1) 
                {
                    for (short i_8 = 1; i_8 < 10; i_8 += 2) 
                    {
                        {
                            arr_26 [i_1] [i_1] [i_6] [i_1] [i_6] = ((/* implicit */long long int) arr_18 [i_1]);
                            var_31 = ((/* implicit */unsigned short) arr_5 [i_1]);
                            var_32 &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_24 [i_6] [i_7 - 1] [i_8 - 1] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (9223372036854775807LL)))));
                        }
                    } 
                } 
            }
        }
        for (unsigned short i_9 = 2; i_9 < 11; i_9 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_10 = 0; i_10 < 12; i_10 += 3) 
            {
                arr_33 [i_1] [i_9] [i_9] = ((/* implicit */_Bool) ((arr_4 [i_1]) & (((/* implicit */unsigned int) max((((/* implicit */int) var_8)), (arr_28 [i_1] [i_9 + 1]))))));
                var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) 4123637910408277293LL))));
                var_34 &= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-46)) : (((/* implicit */int) var_18))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_8 [i_1] [i_1] [i_10])), ((short)-7401))))) : (arr_12 [i_1] [i_1] [i_9 - 2] [i_1])))));
            }
            for (unsigned char i_11 = 2; i_11 < 10; i_11 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (short i_13 = 0; i_13 < 12; i_13 += 1) 
                    {
                        {
                            var_35 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_1] [i_11 - 2] [i_11])) ? (arr_35 [i_1] [i_11 - 1] [i_11]) : (arr_35 [i_13] [i_11 - 1] [i_11])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_41 [i_9 - 2] [i_9] [i_9 + 1] [i_9] [i_11 + 1])) : (((/* implicit */int) arr_41 [i_9 + 1] [i_9] [i_9 + 1] [i_11] [i_11 + 1]))))) : (((((((/* implicit */_Bool) arr_32 [i_1])) && (var_19))) ? (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-115), (((/* implicit */signed char) var_12)))))) : (arr_34 [i_9 + 1] [i_9 + 1] [i_11 - 1]))));
                            var_36 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_8 [i_9 - 2] [i_11 - 1] [i_11 + 2]))));
                            var_37 = ((/* implicit */unsigned long long int) ((unsigned short) arr_8 [i_11 - 1] [i_11 + 1] [i_9 + 1]));
                            var_38 = ((/* implicit */signed char) var_16);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_14 = 1; i_14 < 10; i_14 += 2) 
                {
                    for (signed char i_15 = 0; i_15 < 12; i_15 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) var_1))));
                            var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) (short)3170))));
                            var_41 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_42 [i_1] [i_1] [i_11] [i_11] [i_11] [i_11 + 1] [i_11 + 1])) ? (((/* implicit */int) arr_42 [i_9] [i_9 + 1] [i_11] [i_11] [i_11] [i_11 + 1] [i_14])) : (((/* implicit */int) arr_42 [i_1] [i_1] [i_1] [i_9 - 1] [i_1] [i_11 + 1] [i_1])))), (((/* implicit */int) min(((unsigned short)0), (arr_42 [i_9] [i_11] [2U] [i_11 + 1] [i_11] [i_11 + 1] [i_14]))))));
                            var_42 ^= ((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1]);
                        }
                    } 
                } 
                arr_47 [i_11] [i_1] [i_1] = ((((((/* implicit */_Bool) arr_39 [i_9 - 2] [i_9 - 2] [i_9 - 2] [i_9 + 1] [i_9 + 1])) ? (((/* implicit */long long int) arr_18 [i_11 + 1])) : (arr_39 [i_9 + 1] [i_9 - 1] [i_9 - 2] [i_9 - 1] [i_9]))) < (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)180)) % (((/* implicit */int) ((_Bool) arr_10 [i_1] [i_9] [i_11])))))));
                arr_48 [i_1] = ((/* implicit */long long int) arr_19 [i_9]);
            }
            var_43 = ((((/* implicit */int) arr_40 [i_1] [i_9] [i_1] [i_9 - 2])) == (((/* implicit */int) ((unsigned short) arr_29 [i_9 - 2] [i_9 - 1] [i_9 - 2]))));
            var_44 = ((/* implicit */long long int) arr_32 [i_1]);
            var_45 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_40 [i_1] [i_9] [i_1] [i_9])) % (((/* implicit */int) var_0))))) ? (((/* implicit */int) (unsigned short)5)) : (((/* implicit */int) arr_5 [i_9 + 1]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (max((((/* implicit */unsigned long long int) arr_42 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])), (var_14)))))) : (((((var_15) || (((/* implicit */_Bool) arr_37 [i_1])))) ? ((-(((/* implicit */int) arr_14 [i_1] [i_1])))) : (((/* implicit */int) arr_37 [i_1]))))));
            arr_49 [i_1] = ((/* implicit */long long int) 1174576579);
        }
        for (signed char i_16 = 0; i_16 < 12; i_16 += 3) 
        {
            var_46 *= ((/* implicit */unsigned int) max((((/* implicit */long long int) var_9)), (3737103925104824321LL)));
            var_47 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-3171))) % (var_3)))) ? (((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_53 [i_1] [i_1])))) : (((/* implicit */int) arr_23 [i_16] [i_16] [6] [i_16] [i_16]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((int) arr_42 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) : ((~(((/* implicit */int) var_11))))))) : (arr_4 [i_1]));
        }
        arr_54 [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_32 [i_1])) <= (((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) arr_31 [i_1] [i_1])) ? (arr_50 [i_1]) : (var_13))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1])) : (((/* implicit */int) (short)-7401)))) << (((max((arr_18 [i_1]), (((/* implicit */unsigned int) arr_1 [i_1])))) - (4294967218U))))))));
    }
    for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 2) /* same iter space */
    {
        arr_59 [i_17] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-7614)) ? (((/* implicit */int) (short)-7614)) : (((/* implicit */int) (_Bool)1))));
        var_48 = ((/* implicit */unsigned long long int) (_Bool)1);
    }
    for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 2) /* same iter space */
    {
        arr_62 [i_18] = ((/* implicit */unsigned char) var_15);
        arr_63 [i_18] = ((/* implicit */long long int) (((~(((/* implicit */int) arr_43 [i_18] [i_18] [i_18] [i_18])))) - (((((/* implicit */_Bool) arr_43 [i_18] [i_18] [i_18] [i_18])) ? (((/* implicit */int) arr_43 [i_18] [i_18] [i_18] [i_18])) : (((/* implicit */int) arr_43 [i_18] [i_18] [i_18] [i_18]))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_19 = 0; i_19 < 16; i_19 += 2) 
    {
        var_49 = ((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */_Bool) arr_64 [i_19])) ? (arr_64 [i_19]) : (arr_64 [i_19]))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_19))))) ? (max((((/* implicit */long long int) arr_66 [i_19] [i_19])), (arr_64 [i_19]))) : (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_19] [i_19])))))));
        var_50 = ((/* implicit */int) min((var_50), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_66 [i_19] [i_19])), (((((/* implicit */_Bool) (short)-3171)) ? (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_19] [i_19]))) : (arr_65 [i_19])))))) ? (((((/* implicit */_Bool) arr_64 [i_19])) ? (arr_64 [i_19]) : (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_19] [i_19]))))) : (((/* implicit */long long int) ((/* implicit */int) var_18))))))));
        var_51 &= ((/* implicit */int) max((((/* implicit */long long int) (+(((/* implicit */int) arr_66 [i_19] [i_19]))))), (((1729382256910270464LL) ^ (((arr_64 [i_19]) >> (((arr_65 [i_19]) + (7533416358013670190LL)))))))));
    }
}
