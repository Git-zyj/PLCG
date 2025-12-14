/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197172
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
    var_13 = min((((((/* implicit */int) ((var_2) < (((/* implicit */long long int) ((/* implicit */int) var_0)))))) - (((int) var_0)))), (((/* implicit */int) var_0)));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_14 |= ((/* implicit */unsigned long long int) arr_0 [8] [(short)6]);
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((unsigned int) ((5519132226019588235ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_3] [i_3])))))))));
                        arr_13 [i_1] [i_1] [i_1] = ((/* implicit */short) 5519132226019588235ULL);
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [i_0] [18] [i_0] [i_0])), ((unsigned char)199))))) | (((((/* implicit */_Bool) (~(-4332182522288321701LL)))) ? (var_8) : (((/* implicit */unsigned long long int) ((long long int) (signed char)12)))))));
    }
    for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        arr_17 [2ULL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_4])) | (((/* implicit */int) arr_16 [i_4])))))));
        arr_18 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_4] [i_4])) / ((+(((/* implicit */int) arr_1 [i_4]))))));
        arr_19 [i_4] = ((/* implicit */int) var_6);
    }
    for (int i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        arr_23 [i_5] = ((/* implicit */long long int) arr_20 [i_5] [i_5]);
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((unsigned int) (~(arr_4 [4U] [4U])))))));
                    var_17 = ((/* implicit */unsigned char) min((((/* implicit */int) (((+(var_8))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(signed char)16])) ? (-4332182522288321677LL) : (((/* implicit */long long int) 211356917)))))))), ((-((-(((/* implicit */int) arr_10 [4LL] [4LL]))))))));
                    arr_31 [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_6] [(unsigned char)9])) ? (arr_27 [i_5] [4U]) : (arr_15 [i_6])))) ? (((/* implicit */unsigned long long int) ((arr_27 [i_6] [i_5]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)221)))))) : (min((var_8), (((/* implicit */unsigned long long int) arr_27 [i_5] [i_5])))));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        arr_34 [i_8] [i_6] [(unsigned char)6] [i_6] [i_6] [i_5] |= ((/* implicit */int) arr_10 [i_8] [i_8]);
                        var_18 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) min((arr_29 [i_8] [i_6]), (((/* implicit */unsigned long long int) arr_6 [4LL] [i_8] [i_8] [i_5]))))) ? (((((/* implicit */_Bool) arr_8 [3] [3] [i_7] [2U])) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) arr_7 [i_6] [i_8] [i_6])))) : ((+(var_10)))))));
                    }
                }
            } 
        } 
    }
    for (short i_9 = 0; i_9 < 21; i_9 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_10 = 0; i_10 < 21; i_10 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_11 = 0; i_11 < 21; i_11 += 3) 
            {
                for (short i_12 = 0; i_12 < 21; i_12 += 3) 
                {
                    for (short i_13 = 0; i_13 < 21; i_13 += 1) 
                    {
                        {
                            arr_51 [i_9] [i_9] [i_9] [i_9] [i_9] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_10]))))) ? (((((((/* implicit */_Bool) var_6)) ? (arr_2 [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_12] [i_11]))))) | (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_9] [i_10] [(unsigned char)20] [i_9]))))) : (((/* implicit */long long int) min((((/* implicit */int) arr_35 [(short)3] [i_13])), (arr_48 [i_13] [i_13] [i_13])))));
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (+(((int) arr_36 [(signed char)13] [7U])))))));
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_47 [14LL] [(short)12] [(unsigned short)10] [i_12] [i_12] [16U] [i_12])) ? (((/* implicit */int) arr_43 [15LL] [(short)17] [(short)17] [i_13])) : (min((((((/* implicit */int) (unsigned char)199)) - (((/* implicit */int) arr_41 [i_9] [12])))), (((/* implicit */int) arr_10 [14U] [20LL])))))))));
                        }
                    } 
                } 
            } 
            arr_52 [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 3104078592U)) != (17086299804632666641ULL))))) > (arr_47 [i_9] [i_9] [i_9] [i_9] [i_10] [i_10] [(_Bool)1]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_1))) ? ((-(var_3))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_46 [15] [i_9] [i_9] [i_10] [i_9] [16U])) ? (((/* implicit */int) var_4)) : (1755010724))))))) : (((max((((/* implicit */unsigned long long int) arr_40 [i_9] [i_10] [i_9])), (var_8))) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_16 [i_9]), (var_0)))))))));
            arr_53 [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) (short)15386)) / (-2147483632)));
            arr_54 [i_9] [i_9] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_47 [i_9] [i_9] [11] [i_9] [7] [11] [i_9])) ? (211356927) : (((/* implicit */int) arr_1 [i_9])))) + (((((/* implicit */_Bool) (short)-29947)) ? (arr_8 [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */int) (unsigned char)235))))))) ? (3089600769U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)187))))))));
        }
        /* vectorizable */
        for (signed char i_14 = 0; i_14 < 21; i_14 += 3) 
        {
            var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2111170226U)) ? (((/* implicit */int) arr_45 [i_9] [i_9] [i_9] [13U])) : (((/* implicit */int) arr_45 [i_14] [(_Bool)1] [i_9] [i_14]))));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)205))) == ((~(arr_47 [i_9] [i_9] [(short)18] [i_9] [i_14] [i_14] [i_14])))));
            /* LoopNest 2 */
            for (short i_15 = 0; i_15 < 21; i_15 += 1) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    {
                        arr_64 [i_9] [20LL] = ((/* implicit */unsigned int) 17086299804632666641ULL);
                        var_23 = ((/* implicit */long long int) var_4);
                        var_24 = ((/* implicit */int) ((unsigned long long int) (signed char)63));
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((int) arr_12 [i_9] [i_9] [(unsigned short)12] [i_14])))));
        }
        arr_65 [i_9] = ((/* implicit */int) (short)-9116);
        /* LoopNest 2 */
        for (unsigned char i_17 = 0; i_17 < 21; i_17 += 1) 
        {
            for (unsigned char i_18 = 0; i_18 < 21; i_18 += 1) 
            {
                {
                    arr_70 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [(short)8])) ? (((((/* implicit */_Bool) ((long long int) arr_3 [i_9] [i_9]))) ? ((-(var_11))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-15387)) : (((/* implicit */int) (signed char)23))))))) : (((long long int) var_4))));
                    var_26 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_67 [i_9] [i_9] [(unsigned char)18]))) || (((/* implicit */_Bool) (-(arr_8 [i_9] [(unsigned char)2] [(unsigned char)2] [i_18]))))))) / (((/* implicit */int) ((min((var_8), (((/* implicit */unsigned long long int) arr_66 [(unsigned short)2] [i_17] [i_9])))) != (((/* implicit */unsigned long long int) (-(var_2)))))))));
                    arr_71 [i_9] [i_17] [i_9] = ((/* implicit */long long int) max(((((_Bool)1) ? (arr_37 [i_9] [i_9]) : (arr_47 [i_9] [i_9] [i_9] [i_17] [16LL] [(signed char)13] [i_18]))), (((/* implicit */unsigned int) ((((4665343431699017468LL) - (((/* implicit */long long int) ((/* implicit */int) arr_61 [i_9]))))) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)-56)))))))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned char) ((short) ((249079972U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)76))))));
    }
    /* LoopSeq 2 */
    for (short i_19 = 0; i_19 < 21; i_19 += 3) 
    {
        arr_74 [i_19] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_47 [16LL] [(signed char)6] [i_19] [2ULL] [i_19] [i_19] [16LL])) && (((/* implicit */_Bool) arr_36 [i_19] [i_19]))))) / (((/* implicit */int) ((((/* implicit */_Bool) -1LL)) || (((/* implicit */_Bool) 7116112209457029344LL)))))));
        arr_75 [i_19] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [(short)0])))))));
    }
    for (short i_20 = 0; i_20 < 16; i_20 += 4) 
    {
        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((unsigned int) arr_12 [i_20] [i_20] [i_20] [i_20])) >> (((12315492819611251651ULL) - (12315492819611251632ULL)))))))))));
        arr_78 [i_20] = ((/* implicit */signed char) min((var_11), (((/* implicit */long long int) min((arr_73 [i_20] [i_20]), (((/* implicit */unsigned char) ((-4665343431699017459LL) != (((/* implicit */long long int) arr_56 [i_20] [2LL]))))))))));
        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) (((+((+(3342834198U))))) | (((/* implicit */unsigned int) ((((/* implicit */int) arr_66 [(unsigned char)9] [i_20] [i_20])) >> (((((/* implicit */int) arr_66 [(unsigned short)16] [i_20] [i_20])) - (72)))))))))));
    }
}
