/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199116
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
    var_11 = ((/* implicit */int) min((var_6), (((/* implicit */unsigned long long int) ((short) var_9)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (signed char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        {
                            arr_11 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1] [i_1]))) | (arr_6 [i_1 + 1] [i_1 - 1] [i_1 - 2])));
                            var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) arr_2 [i_3]))))) != (((/* implicit */int) var_9))));
                            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)28258))) : (var_1)));
                            arr_12 [i_0] [i_0] [i_2] [i_2] [i_4] = ((/* implicit */short) ((_Bool) (short)28258));
                            arr_13 [i_0] [i_0] [(signed char)14] [i_3] [i_3] = ((/* implicit */unsigned char) var_2);
                        }
                    } 
                } 
            } 
            arr_14 [i_0] [i_0] = ((/* implicit */long long int) var_4);
        }
        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            var_14 = ((signed char) arr_7 [i_0] [i_0] [i_0]);
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4162131587U)) ? (((/* implicit */int) (short)115)) : (((/* implicit */int) arr_0 [i_0]))))) && (((/* implicit */_Bool) arr_9 [i_5]))));
        }
        for (int i_6 = 1; i_6 < 20; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) 15389837553237603227ULL);
                        arr_25 [i_8] [i_7] [i_7] [i_6] [17] = ((short) arr_22 [i_6 + 1] [(unsigned short)16] [(signed char)19] [(signed char)19]);
                    }
                } 
            } 
            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (unsigned short)59846))));
        }
        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 1) 
        {
            arr_29 [2] [i_0] [i_0] = ((((/* implicit */int) (unsigned char)45)) >> (((-335226713) + (335226731))));
            var_18 -= ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) arr_24 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))));
        }
        /* LoopSeq 3 */
        for (short i_10 = 2; i_10 < 20; i_10 += 1) 
        {
            var_19 = ((/* implicit */signed char) arr_4 [i_10 - 2] [8]);
            arr_32 [i_10] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) 4294967291U)) == (((-8973789447166115469LL) - (((/* implicit */long long int) arr_18 [i_0]))))));
            arr_33 [(unsigned short)10] [i_0] [(unsigned short)10] &= ((/* implicit */unsigned int) var_0);
        }
        for (long long int i_11 = 1; i_11 < 20; i_11 += 3) 
        {
            arr_36 [8LL] [i_11] = ((/* implicit */signed char) arr_9 [i_11 + 2]);
            /* LoopNest 3 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (int i_13 = 0; i_13 < 22; i_13 += 2) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 1) 
                    {
                        {
                            arr_46 [i_14] [i_13] [i_11] [i_0] = ((/* implicit */unsigned short) ((var_6) + (((/* implicit */unsigned long long int) 4030642746U))));
                            var_20 = ((/* implicit */int) max((var_20), (335226710)));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) 335226695)) : (((((/* implicit */_Bool) arr_17 [i_0] [i_11 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_22 [(unsigned short)13] [i_11] [i_0] [i_0])))));
            /* LoopSeq 4 */
            for (unsigned short i_15 = 0; i_15 < 22; i_15 += 4) /* same iter space */
            {
                arr_51 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((int) var_3));
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_34 [i_0] [i_11 + 2] [i_15])) && (((/* implicit */_Bool) arr_43 [i_11 - 1] [i_11 + 2] [i_11 + 1] [7U] [i_11] [i_11 + 2])))))));
                arr_52 [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */int) var_7)) | (((/* implicit */int) arr_35 [i_11] [i_11 + 2] [i_11 - 1]))));
                /* LoopNest 2 */
                for (unsigned short i_16 = 0; i_16 < 22; i_16 += 3) 
                {
                    for (unsigned short i_17 = 0; i_17 < 22; i_17 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) var_10))));
                            var_24 = ((/* implicit */unsigned int) ((arr_41 [i_11 - 1] [i_17]) + (arr_41 [i_15] [i_11 + 1])));
                            arr_58 [i_17] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_11 + 1] [i_11 + 1] [i_15] [i_15])) ? (arr_10 [i_11 + 1] [i_11] [i_16] [i_16] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56195)))));
                            arr_59 [i_0] [i_15] [21U] [18LL] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_26 [i_0])) % (var_6)));
                        }
                    } 
                } 
            }
            for (unsigned short i_18 = 0; i_18 < 22; i_18 += 4) /* same iter space */
            {
                var_25 = (unsigned short)47236;
                /* LoopSeq 2 */
                for (unsigned int i_19 = 0; i_19 < 22; i_19 += 4) 
                {
                    arr_66 [i_19] [i_18] [i_11] [i_0] = ((/* implicit */signed char) (_Bool)1);
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((_Bool) var_8)))));
                }
                for (int i_20 = 0; i_20 < 22; i_20 += 4) 
                {
                    arr_70 [i_0] [i_0] [i_18] [i_0] [i_0] [i_20] = ((/* implicit */short) var_4);
                    arr_71 [i_11] [i_18] [i_11] [i_11] [i_0] = ((/* implicit */_Bool) ((arr_65 [i_11 - 1] [i_11 + 2]) - (arr_65 [i_11 + 2] [i_11 - 1])));
                    arr_72 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_11 + 1] [i_11 + 1]))));
                }
                arr_73 [i_0] [i_0] [i_11 + 1] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_11 - 1] [i_0] [18LL])) && (((/* implicit */_Bool) var_1))));
            }
            for (unsigned short i_21 = 0; i_21 < 22; i_21 += 4) /* same iter space */
            {
                var_27 = ((/* implicit */long long int) 1798051468U);
                /* LoopNest 2 */
                for (short i_22 = 3; i_22 < 20; i_22 += 2) 
                {
                    for (short i_23 = 0; i_23 < 22; i_23 += 1) 
                    {
                        {
                            arr_84 [(short)9] [12U] [i_21] [17U] [0LL] [(short)9] [(signed char)17] = ((/* implicit */unsigned char) -1);
                            var_28 = ((/* implicit */short) ((arr_78 [i_0] [i_11 + 2] [i_21] [i_22 + 1]) - (arr_78 [i_0] [i_11 + 2] [i_22] [i_22 - 2])));
                        }
                    } 
                } 
            }
            for (unsigned short i_24 = 0; i_24 < 22; i_24 += 4) /* same iter space */
            {
                arr_89 [(unsigned short)3] [i_11] [i_24] &= ((/* implicit */unsigned int) var_2);
                arr_90 [i_0] &= ((/* implicit */unsigned char) (unsigned short)5697);
                var_29 -= ((/* implicit */signed char) ((unsigned short) -335226695));
            }
            arr_91 [i_0] = ((/* implicit */signed char) ((((arr_7 [i_11 + 1] [i_11 + 1] [i_11]) + (9223372036854775807LL))) << (((var_3) - (355557590)))));
        }
        for (unsigned char i_25 = 0; i_25 < 22; i_25 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                for (unsigned char i_27 = 0; i_27 < 22; i_27 += 4) 
                {
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                    {
                        {
                            arr_104 [i_26] [10ULL] [i_26] [i_28] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned short) ((int) arr_18 [i_0]));
                            arr_105 [i_0] [i_0] [i_0] [i_0] [4LL] = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) + (((/* implicit */int) (unsigned short)61360))));
                            arr_106 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_37 [i_26] [i_25] [i_27]);
                        }
                    } 
                } 
            } 
            arr_107 [6U] [i_25] [i_25] = ((arr_62 [i_25] [i_25] [i_25] [i_25]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_25] [i_25] [i_25] [i_0]))));
        }
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_76 [12U] [(short)15] [i_0] [i_0]))) <= ((-9223372036854775807LL - 1LL))))) >> (((((unsigned int) var_3)) - (355557570U)))));
        var_31 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_0] [20LL] [20LL])) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) (unsigned short)47373)))) >> (((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)18300))) + (-646883816454082591LL))) + (646883816454064316LL)))));
    }
    var_32 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_4)), (var_6)));
    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) var_1))));
}
