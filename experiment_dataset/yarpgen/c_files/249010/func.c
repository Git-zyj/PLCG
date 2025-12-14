/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249010
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_10 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        var_11 = ((/* implicit */_Bool) 901438061970404714LL);
        var_12 -= ((/* implicit */short) ((((/* implicit */int) arr_2 [(unsigned char)12] [i_0])) >> (((((((/* implicit */_Bool) arr_2 [i_0] [7])) ? (901438061970404714LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16837))))) - (901438061970404705LL)))));
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 1; i_2 < 10; i_2 += 2) 
        {
            arr_8 [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) & (-6142035222893290915LL)));
            var_13 = ((/* implicit */_Bool) (+(-901438061970404711LL)));
            arr_9 [i_1] [i_2] [(unsigned char)7] &= ((/* implicit */long long int) ((arr_7 [i_2 + 3] [i_2] [4ULL]) ? (((/* implicit */int) (!(arr_7 [i_1] [(unsigned short)12] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2])))))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 3; i_3 < 10; i_3 += 2) 
            {
                for (signed char i_4 = 1; i_4 < 9; i_4 += 2) 
                {
                    {
                        arr_14 [i_4] [i_2 + 3] [i_3 - 2] [i_4 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65533)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -901438061970404715LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [10LL]))) : (4678434698502169610ULL))))));
                        var_14 ^= ((/* implicit */signed char) arr_7 [i_4] [i_3] [i_1]);
                    }
                } 
            } 
            arr_15 [i_1] [i_1] [i_2 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 266767917U)))))) : (var_5)));
        }
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 10; i_6 += 3) 
            {
                for (short i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    {
                        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_19 [(unsigned short)9] [i_5 + 1] [(unsigned short)9]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_1 [i_5 + 1])) | (((-901438061970404715LL) | (((/* implicit */long long int) arr_11 [i_1] [i_1]))))))) : ((~(min((((/* implicit */unsigned long long int) 901438061970404715LL)), (8387584ULL)))))));
                        var_16 -= ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_2 [i_1] [i_6 + 3])), (arr_24 [(unsigned short)10])))), (min((((/* implicit */unsigned long long int) var_3)), (2937466566736724ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) arr_17 [i_6 + 2] [i_1])) ? (((/* implicit */int) arr_5 [i_6 + 1])) : (((/* implicit */int) arr_19 [i_5] [i_5] [i_7])))) : (((/* implicit */int) arr_7 [i_6] [i_6 - 2] [i_6 - 2])))))));
                        var_17 = ((((/* implicit */int) (_Bool)1)) >> (((((((/* implicit */_Bool) (unsigned char)255)) ? (arr_13 [i_1] [0ULL] [0] [i_5 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5 + 1] [i_6 + 1]))))) - (16904180384765219382ULL))));
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((-901438061970404715LL) == (((/* implicit */long long int) arr_11 [i_1] [(short)2])))) ? (((((/* implicit */_Bool) 901438061970404726LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (901438061970404742LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_7] [7LL] [7LL])) ? (((/* implicit */int) (unsigned char)89)) : (((/* implicit */int) var_6)))))))) ? (((((/* implicit */_Bool) arr_22 [i_6 + 2] [i_6 + 2] [i_5 + 1])) ? (((/* implicit */int) arr_22 [i_6 + 1] [i_6 + 3] [i_5 + 1])) : (((/* implicit */int) arr_23 [i_6 + 3] [i_6 + 3] [i_6 + 3] [i_5 + 1])))) : (((/* implicit */int) ((((((/* implicit */unsigned long long int) 3354930580U)) / (arr_13 [i_1] [i_1] [4ULL] [4ULL]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)159))))))))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            arr_28 [i_1] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned int) -1065874351))));
            /* LoopNest 2 */
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                for (signed char i_10 = 0; i_10 < 13; i_10 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_1])))))));
                        var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)98))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)33543)) || ((_Bool)1)))) : (((/* implicit */int) arr_7 [i_1] [i_9 - 1] [i_1]))));
                        var_21 = ((/* implicit */int) arr_7 [i_1] [i_9 - 1] [i_9 - 1]);
                    }
                } 
            } 
        }
        arr_33 [(unsigned short)5] = ((/* implicit */short) 167128315);
    }
    for (int i_11 = 1; i_11 < 19; i_11 += 3) 
    {
        var_22 = ((/* implicit */unsigned char) min((((arr_34 [i_11 + 1] [i_11]) ? (((/* implicit */int) arr_34 [i_11 + 2] [i_11])) : (-1065874351))), ((+(((((/* implicit */int) (unsigned char)217)) + (167128322)))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_12 = 0; i_12 < 21; i_12 += 2) 
        {
            var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) -167128316)) ? (((35184372088704LL) - (((/* implicit */long long int) arr_36 [i_11 + 2] [i_11] [i_12])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 901438061970404714LL)) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) arr_34 [i_12] [i_12])))))));
            arr_38 [i_11] = ((/* implicit */unsigned long long int) (-(arr_36 [i_11 - 1] [i_11 - 1] [i_11])));
        }
        for (short i_13 = 0; i_13 < 21; i_13 += 2) 
        {
            var_24 = ((/* implicit */unsigned char) min((min((arr_36 [i_11 + 2] [i_11] [i_11]), (var_9))), (((((/* implicit */_Bool) arr_37 [i_11 + 2])) ? (((/* implicit */int) arr_37 [i_11 - 1])) : (((/* implicit */int) arr_37 [i_11 + 1]))))));
            var_25 -= ((/* implicit */signed char) (+(((/* implicit */int) arr_34 [i_11] [i_13]))));
        }
        for (unsigned char i_14 = 0; i_14 < 21; i_14 += 1) 
        {
            arr_44 [i_11] = ((/* implicit */long long int) var_0);
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_11 + 1])) ? (((/* implicit */int) arr_35 [i_11 + 2])) : (((/* implicit */int) arr_35 [i_11 + 1]))))) & (((((/* implicit */_Bool) 13768309375207382020ULL)) ? (-901438061970404714LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31992)))))));
            arr_45 [i_11] [i_11] = ((/* implicit */unsigned short) min((-901438061970404714LL), (((/* implicit */long long int) min(((short)1875), (((/* implicit */short) (_Bool)1)))))));
            /* LoopNest 2 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (long long int i_16 = 2; i_16 < 17; i_16 += 1) 
                {
                    {
                        var_27 &= ((/* implicit */unsigned long long int) var_8);
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-104))) & (var_1)))) ? (((/* implicit */int) arr_50 [i_16 + 3] [i_11 + 1] [i_11 + 1])) : (((/* implicit */int) ((((/* implicit */int) arr_50 [i_16 + 4] [i_11 + 2] [(unsigned char)15])) <= (((/* implicit */int) (unsigned short)31992)))))));
                        arr_53 [12LL] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) ((((/* implicit */long long int) 1785188439U)) != (901438061970404689LL)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)15))))) == (4678434698502169612ULL))))));
                        var_29 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_47 [i_11 - 1] [i_11 - 1] [(unsigned char)15]))));
                        arr_54 [i_11] [i_11] [i_11] [i_15] [i_15] [(signed char)4] = ((/* implicit */unsigned long long int) (unsigned short)31984);
                    }
                } 
            } 
            var_30 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_50 [i_11 + 2] [i_11 + 1] [i_11 - 1])) ? (((/* implicit */int) arr_50 [i_11 + 1] [i_11 + 1] [i_11 + 1])) : (((/* implicit */int) (unsigned short)33563)))) | (((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) arr_50 [i_11] [i_11 + 2] [i_11 + 1])) : (((/* implicit */int) arr_50 [i_11] [i_11 + 1] [i_11 + 1]))))));
        }
        arr_55 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)31984)) ? (((/* implicit */int) ((((/* implicit */int) arr_40 [i_11 + 1] [(unsigned short)18] [i_11])) == (((/* implicit */int) (unsigned short)24319))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_2)))))))));
    }
    /* LoopSeq 1 */
    for (long long int i_17 = 0; i_17 < 25; i_17 += 1) 
    {
        var_31 -= ((/* implicit */unsigned short) var_9);
        var_32 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)248))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_17] [i_17]))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31492))) : (1152921504606846975ULL)))))));
    }
}
