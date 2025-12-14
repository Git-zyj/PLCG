/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191186
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
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        arr_4 [i_0] = min(((unsigned short)32768), ((unsigned short)32769));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1 + 1] [i_2 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))));
                arr_9 [i_0] [i_0] [i_2] = ((/* implicit */short) ((unsigned short) arr_0 [i_0]));
            }
            /* LoopNest 2 */
            for (unsigned int i_3 = 3; i_3 < 19; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    {
                        var_13 = ((/* implicit */unsigned char) var_8);
                        arr_14 [i_0] [i_0] [i_1 - 1] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)32769))))) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) (short)(-32767 - 1)))));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (long long int i_6 = 2; i_6 < 19; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_19 [10ULL] [i_6 + 1] [i_6] [i_6] [i_6])))) / ((-(((/* implicit */int) arr_19 [i_0] [i_6 - 1] [i_6] [i_6] [i_6])))))))));
                        /* LoopSeq 3 */
                        for (int i_8 = 1; i_8 < 19; i_8 += 3) /* same iter space */
                        {
                            arr_24 [i_0] [(signed char)5] [i_5] [i_5] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)53539)), (5810391257194138071LL)))) ? (arr_2 [i_0] [i_0]) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_2 [i_0] [i_0])))));
                            arr_25 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)18500)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_5] [i_5] [i_7] [i_0]))) : (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) >> (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_7] [i_0])))))));
                        }
                        for (int i_9 = 1; i_9 < 19; i_9 += 3) /* same iter space */
                        {
                            arr_28 [i_0] [i_5] [i_0] [i_0] [i_0] [i_9] [i_0] = min((max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0))), (((/* implicit */unsigned char) arr_1 [i_5] [i_5])));
                            arr_29 [i_0] [i_6] [i_6] [i_7] [i_9] [i_7] [i_0] |= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)32767)) <= (((/* implicit */int) (_Bool)1)))))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_15 ^= ((/* implicit */unsigned short) ((_Bool) -1LL));
                            var_16 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_3)))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)35422)) | (((/* implicit */int) arr_31 [(short)6] [(short)6] [i_6] [i_7] [i_10])))))))), (var_8)));
                        }
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((var_3) | (((/* implicit */long long int) ((/* implicit */int) (signed char)1))))), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-24218))))) : ((~(4030208391U)))));
                        /* LoopSeq 2 */
                        for (unsigned short i_11 = 0; i_11 < 20; i_11 += 4) 
                        {
                            arr_35 [i_0] [i_5] [i_6] [i_7] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)11985)) & (((/* implicit */int) (unsigned char)128))))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32776))) : (2137168623U)))));
                            var_18 = ((/* implicit */signed char) var_4);
                        }
                        for (unsigned char i_12 = 1; i_12 < 19; i_12 += 3) 
                        {
                            var_19 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53513)) ? (((/* implicit */int) (unsigned short)35437)) : (((/* implicit */int) (unsigned short)32768))))) ? (((int) 3674096008U)) : (((/* implicit */int) ((unsigned short) var_7)))));
                            var_20 += (!(((/* implicit */_Bool) (unsigned short)30113)));
                            arr_38 [i_0] [i_0] [i_6] [i_6] [i_0] [i_12 + 1] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_7 [i_0]) == (arr_7 [i_0])))) >= (((/* implicit */int) ((unsigned short) (unsigned short)32768)))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) 2028533952))) + ((+(((/* implicit */int) var_5))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (short i_13 = 0; i_13 < 25; i_13 += 3) /* same iter space */
    {
        var_22 += ((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_11))), (((/* implicit */unsigned int) arr_40 [i_13] [i_13])))))));
        arr_42 [i_13] [i_13] = ((/* implicit */signed char) var_8);
        arr_43 [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32768))) : (3674096008U)));
        arr_44 [i_13] = ((((/* implicit */_Bool) ((18446744073709551615ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11996)))))) && (((/* implicit */_Bool) (signed char)-125)));
    }
    for (short i_14 = 0; i_14 < 25; i_14 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_15 = 0; i_15 < 25; i_15 += 2) 
        {
            arr_50 [i_14] [i_15] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_47 [i_14] [i_14] [i_14]))));
            arr_51 [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_14] [i_15]))) ^ (((unsigned int) var_0))));
            arr_52 [i_15] [i_15] [i_14] &= ((/* implicit */_Bool) var_6);
            /* LoopNest 2 */
            for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
            {
                for (unsigned short i_17 = 0; i_17 < 25; i_17 += 3) 
                {
                    {
                        arr_60 [i_14] = var_8;
                        arr_61 [i_14] [i_15] [i_15] [i_17] [i_15] [i_16] = ((/* implicit */unsigned int) ((_Bool) arr_47 [i_14] [i_14] [i_14]));
                        arr_62 [i_17] [i_16] [i_14] [i_15] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */int) (unsigned short)44213)) : (((/* implicit */int) max(((unsigned short)32794), (((/* implicit */unsigned short) (unsigned char)149)))))));
                    }
                } 
            } 
        }
        arr_63 [i_14] = min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 189482527U)) | (9223372036854775807LL)))), (((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_14]))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        arr_68 [0LL] [0LL] = ((/* implicit */unsigned long long int) arr_47 [i_18] [i_18] [i_18]);
        arr_69 [i_18] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32763))) | (9223372036854775807LL)));
    }
}
