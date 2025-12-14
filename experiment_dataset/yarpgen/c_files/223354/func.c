/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223354
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
    var_18 = ((/* implicit */long long int) ((max((((2821474649U) * (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), (var_7)))))) % (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = min((((((/* implicit */_Bool) min((276960895U), (((/* implicit */unsigned int) var_4))))) ? (min((var_14), (((/* implicit */unsigned int) arr_2 [i_0] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))), (min((4294967289U), (((/* implicit */unsigned int) (_Bool)0)))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((var_8), (((/* implicit */long long int) arr_1 [i_0])))), (((/* implicit */long long int) arr_2 [i_0] [i_0]))))) ? (((arr_0 [i_0] [i_0]) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_3))))) : (max((var_15), (((/* implicit */long long int) arr_2 [i_0] [i_0])))))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) var_9)) < (((/* implicit */int) var_0)))) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) 1700349302)) : (8796093014016LL))))));
            var_19 += ((/* implicit */unsigned short) arr_5 [15U]);
            arr_8 [i_0] = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [i_3] [i_2 + 1]))))) ? (((/* implicit */long long int) var_1)) : (min((((/* implicit */long long int) min((var_10), (var_1)))), ((+((-9223372036854775807LL - 1LL)))))))))));
                var_21 -= ((/* implicit */unsigned int) var_7);
            }
            arr_14 [i_0] = ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (min((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_11 [i_0] [i_0] [i_0]), (((/* implicit */signed char) (_Bool)1))))))))) : (max((var_8), (((/* implicit */long long int) arr_2 [i_2 + 1] [i_2])))));
            arr_15 [i_0] = ((((((/* implicit */long long int) ((/* implicit */int) max((arr_11 [i_0] [i_0] [i_0]), (((/* implicit */signed char) var_6)))))) / ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (682211180467072248LL))))) + (((/* implicit */long long int) ((/* implicit */int) ((var_6) || ((_Bool)1))))));
            arr_16 [i_0] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) >= (min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_17)) : (2040972025)))), (((arr_0 [i_0] [i_2]) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
        }
        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            var_22 ^= ((min((arr_17 [i_0] [i_4] [i_4]), (arr_17 [i_0] [i_0] [i_0]))) | (min((arr_17 [i_0] [i_0] [i_0]), (arr_17 [12U] [i_4] [i_4]))));
            var_23 &= ((/* implicit */long long int) (unsigned short)49831);
        }
    }
    for (unsigned short i_5 = 3; i_5 < 18; i_5 += 1) /* same iter space */
    {
        arr_23 [i_5 - 1] = ((/* implicit */signed char) min((min((arr_20 [i_5]), (((/* implicit */unsigned long long int) arr_19 [i_5 + 2] [i_5 + 2])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)1984)) ? (((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) arr_19 [i_5] [i_5])) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) 2821474648U)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))))));
        /* LoopSeq 3 */
        for (long long int i_6 = 1; i_6 < 19; i_6 += 3) 
        {
            var_24 ^= ((-8813345106627188378LL) & (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)17548)) ? (((/* implicit */unsigned int) min((-2102311592), (((/* implicit */int) (unsigned short)16380))))) : (arr_21 [i_6])))));
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                arr_28 [i_6] [i_6] [i_6 + 1] [i_6 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 5488525053912932167LL)) ? (((/* implicit */int) (short)-31752)) : (((/* implicit */int) (_Bool)1))));
                var_25 = ((/* implicit */short) 18238774213761304585ULL);
                var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 3128435100U)) ? (((/* implicit */int) arr_27 [(short)18] [i_6] [(short)18])) : (((/* implicit */int) (unsigned short)9711)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_2)))))) >= (((/* implicit */int) arr_26 [i_5] [i_7] [i_7])))))));
            }
            for (unsigned int i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                arr_32 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) min((min((arr_22 [i_8] [i_5 + 1]), (arr_22 [i_6 - 1] [i_8]))), (((/* implicit */unsigned long long int) ((arr_25 [10]) ? (((/* implicit */int) arr_27 [i_6] [i_6] [i_8])) : (((/* implicit */int) var_0)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) max((6U), (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_5 - 3]))) : (min((arr_22 [i_6] [i_5]), (((/* implicit */unsigned long long int) var_16))))))));
                var_27 *= ((/* implicit */unsigned long long int) max((min((((var_15) | (((/* implicit */long long int) ((/* implicit */int) arr_27 [(short)6] [i_5 - 3] [i_5]))))), (((/* implicit */long long int) -2102311566)))), (((/* implicit */long long int) ((var_4) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_30 [i_5] [i_5 - 1] [i_5 - 2]), ((unsigned short)49156))))))))));
            }
            arr_33 [i_5] [(_Bool)1] |= ((/* implicit */long long int) 827759875249450217ULL);
        }
        for (long long int i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            arr_38 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) : (min((67107840), (((/* implicit */int) (signed char)-73))))));
            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) arr_35 [i_9]))));
            arr_39 [i_5] [i_9] &= ((min((((/* implicit */unsigned int) var_4)), (var_10))) | (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_5] [i_5]))) % (var_14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) <= (var_15))))) : (var_12))));
        }
        for (short i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (min((((((/* implicit */int) arr_26 [i_5] [i_10] [i_5])) >> (((/* implicit */int) arr_25 [i_5])))), (((/* implicit */int) (unsigned short)64512)))))))));
            arr_43 [i_10] [i_10] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_5] [i_5] [i_10])) ? (((/* implicit */int) var_17)) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (var_1)))) ? (((/* implicit */int) arr_19 [i_5 - 3] [i_5])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)119))) == (var_14))))))));
        }
        arr_44 [i_5] = ((/* implicit */unsigned short) min(((short)18131), (arr_19 [i_5 - 2] [i_5 - 1])));
        arr_45 [i_5 - 3] [i_5] = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551607ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_26 [i_5 + 2] [i_5] [i_5]), (arr_25 [i_5]))))) : (max((((/* implicit */unsigned int) arr_36 [i_5 + 2])), (var_12))));
    }
    /* vectorizable */
    for (unsigned short i_11 = 3; i_11 < 18; i_11 += 1) /* same iter space */
    {
        arr_49 [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) 14U)) ? (67107855) : (((/* implicit */int) (short)1803))));
        arr_50 [i_11] = ((/* implicit */unsigned short) arr_31 [i_11]);
    }
    for (unsigned short i_12 = 3; i_12 < 18; i_12 += 1) /* same iter space */
    {
        arr_54 [i_12] = ((/* implicit */unsigned short) var_16);
        arr_55 [i_12] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_31 [i_12 + 1])) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_17)))) : (((((/* implicit */int) var_7)) << (((164353518U) - (164353512U))))))), (((/* implicit */int) arr_31 [i_12]))));
    }
}
