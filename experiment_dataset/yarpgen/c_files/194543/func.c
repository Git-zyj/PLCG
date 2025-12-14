/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194543
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
    var_11 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (((/* implicit */int) (signed char)7))))) ? ((-(((/* implicit */int) var_6)))) : (var_0))), (((/* implicit */int) (short)3))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19445))) > (arr_0 [i_0] [i_0])));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1593595945U)))))) : (min((0LL), (((/* implicit */long long int) (signed char)63)))))), (((/* implicit */long long int) var_3))));
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        {
                            arr_19 [i_1] = ((/* implicit */short) (~(((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ (var_9))) >> (((((((/* implicit */_Bool) (unsigned short)46088)) ? (12295643298330583410ULL) : (((/* implicit */unsigned long long int) arr_16 [i_0] [i_1] [i_2] [i_0] [i_4])))) - (12295643298330583390ULL)))))));
                            arr_20 [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned char) arr_11 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 2]))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_11 [i_0] [i_2] [i_0] [i_4])), (arr_7 [i_0])))) ? (9485875797362070077ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)-32369)), (var_8))))))));
                        }
                    } 
                } 
            } 
            arr_21 [i_0] [i_1] = ((/* implicit */unsigned char) ((signed char) arr_16 [i_0] [i_0] [i_0] [i_0] [i_1 - 2]));
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                for (long long int i_6 = 3; i_6 < 17; i_6 += 4) 
                {
                    {
                        arr_26 [i_0] [i_0] [i_1] [i_6] [i_6] = ((/* implicit */unsigned int) var_5);
                        arr_27 [i_1] = ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-40)));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 18; i_7 += 4) 
        {
            arr_31 [i_7] = ((4715835967307968871LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))));
            arr_32 [i_0] [i_7] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) -9223372036854775804LL)) : (((6151100775378968205ULL) >> (((((/* implicit */int) var_7)) - (231)))))));
            arr_33 [i_0] [i_7] [i_0] = ((/* implicit */signed char) ((arr_13 [i_0]) * (arr_13 [i_0])));
            arr_34 [i_0] [i_7] = ((/* implicit */signed char) ((unsigned char) 8960868276347481538ULL));
        }
    }
    for (int i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_9 = 0; i_9 < 13; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_10 = 1; i_10 < 12; i_10 += 3) 
            {
                for (unsigned char i_11 = 0; i_11 < 13; i_11 += 3) 
                {
                    {
                        arr_48 [(unsigned char)6] [(unsigned char)6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) min((((/* implicit */int) (unsigned char)157)), (292600709))))) ? (((unsigned long long int) arr_16 [i_10 + 1] [i_10 + 1] [i_10] [i_10 - 1] [i_10 + 1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_8] [i_8] [i_8] [i_8] [i_8] [11ULL]))) ^ (var_5)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-58)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))))));
                        arr_49 [i_11] [12ULL] [12ULL] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 1 */
                        for (short i_12 = 1; i_12 < 12; i_12 += 1) 
                        {
                            arr_53 [i_11] [i_9] [i_10 + 1] [i_8] = ((/* implicit */unsigned int) (+(min((var_8), (((/* implicit */long long int) arr_11 [i_8] [i_9] [i_10 - 1] [i_12 + 1]))))));
                            arr_54 [i_8] [i_8] [i_8] [i_11] [i_12] [i_11] [i_12] = ((/* implicit */short) arr_43 [i_8] [i_8] [i_8]);
                        }
                        arr_55 [i_8] [i_9] [i_8] [i_9] [i_10] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) arr_46 [i_8] [i_10 + 1] [i_10 - 1] [i_10 - 1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_10 - 1])) ? (arr_46 [i_8] [i_10 + 1] [i_10 + 1] [i_10 + 1]) : (arr_46 [i_8] [i_10 + 1] [i_10 - 1] [i_10 + 1]))))));
                    }
                } 
            } 
            arr_56 [(signed char)6] [i_9] [i_9] = ((/* implicit */unsigned long long int) (+(((262144U) ^ (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)204), (((/* implicit */unsigned char) (signed char)-58))))))))));
        }
        arr_57 [i_8] [i_8] = ((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) arr_24 [i_8] [i_8] [i_8] [i_8])))));
    }
    for (int i_13 = 0; i_13 < 13; i_13 += 3) /* same iter space */
    {
        arr_61 [i_13] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_13] [i_13] [i_13] [i_13])) << (((((unsigned long long int) arr_36 [i_13])) - (6249639095174786620ULL)))));
        arr_62 [i_13] [i_13] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */unsigned int) arr_58 [i_13])) / (arr_13 [i_13])))), (((long long int) arr_18 [(signed char)14] [i_13] [i_13] [i_13] [i_13]))));
        arr_63 [i_13] = min((max((((((/* implicit */long long int) ((/* implicit */int) (signed char)103))) / (-4715835967307968871LL))), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) arr_5 [i_13])));
        arr_64 [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((((/* implicit */_Bool) 1125899906842623LL)) ? (2465773126444615065ULL) : (arr_0 [i_13] [i_13]))) + (((((/* implicit */_Bool) 262170U)) ? (arr_22 [i_13] [i_13] [(_Bool)0]) : (((/* implicit */unsigned long long int) 2147483645)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 12295643298330583410ULL))))));
    }
    var_12 = ((((/* implicit */int) var_4)) | (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-52)), (4294705151U)))) ? (((/* implicit */int) (unsigned short)19439)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)221)) : (((/* implicit */int) var_6)))))));
    /* LoopSeq 2 */
    for (short i_14 = 1; i_14 < 23; i_14 += 1) 
    {
        arr_69 [18U] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (short)-26046)), (((((/* implicit */_Bool) arr_68 [i_14 - 1])) ? (arr_67 [i_14 + 1]) : (arr_67 [i_14 + 1])))));
        arr_70 [i_14] = ((/* implicit */unsigned char) (-(1431876294)));
        arr_71 [i_14] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((-2147483646) / (((/* implicit */int) arr_68 [i_14 + 1]))))), (var_5)));
        arr_72 [i_14] = ((/* implicit */long long int) ((max((min((2465773126444615065ULL), (((/* implicit */unsigned long long int) (unsigned short)65535)))), (((/* implicit */unsigned long long int) arr_66 [i_14])))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31846)))));
        arr_73 [i_14] = ((/* implicit */signed char) 12295643298330583410ULL);
    }
    for (short i_15 = 0; i_15 < 18; i_15 += 1) 
    {
        arr_77 [i_15] = ((/* implicit */signed char) (((((-(((/* implicit */int) (unsigned short)19431)))) + (2147483647))) >> (((((/* implicit */_Bool) (-(arr_65 [i_15])))) ? (((/* implicit */int) arr_29 [i_15] [i_15])) : (((/* implicit */int) arr_66 [i_15]))))));
        arr_78 [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483619)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15))) : (5269254468886333829ULL)));
        arr_79 [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_15] [i_15] [i_15])) ? (((/* implicit */int) (_Bool)0)) : ((-(((/* implicit */int) ((signed char) 15166950187358674644ULL)))))));
    }
}
