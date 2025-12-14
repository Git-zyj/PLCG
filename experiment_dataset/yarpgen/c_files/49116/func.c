/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49116
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */long long int) (_Bool)0);
        var_19 ^= ((/* implicit */short) 11511821343818909229ULL);
        /* LoopNest 2 */
        for (unsigned short i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] [18] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)65532);
                        arr_14 [15LL] [(signed char)15] [i_0] [i_3] = ((/* implicit */_Bool) (-((~(((/* implicit */int) (signed char)112))))));
                        arr_15 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 8870756122661961761LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61664))) : (18446744073709551613ULL)));
                    }
                    /* LoopSeq 4 */
                    for (short i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
                    {
                        var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((14286872723897475656ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-11043))) : (((var_13) / (((/* implicit */unsigned int) 2147483647))))));
                        arr_18 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) (!(((((/* implicit */unsigned long long int) -102480905)) > (18446744073709551607ULL)))));
                        arr_19 [i_0] [i_1] [i_0] [i_4] [i_4] = ((var_7) - (((/* implicit */long long int) ((((/* implicit */_Bool) 490176982U)) ? (4035713620U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13864)))))));
                    }
                    for (short i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
                    {
                        arr_23 [i_0] [i_5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)121))));
                        var_21 ^= ((((/* implicit */_Bool) 4503599560261632LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)124)));
                    }
                    for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 3) 
                    {
                        arr_27 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) -2136090481);
                        var_22 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [i_0])) <= (((/* implicit */int) arr_20 [i_0] [i_2] [i_2] [i_6] [i_1] [i_0])))) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4834)))));
                    }
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        arr_30 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) -1480347250)) ? (((/* implicit */long long int) 11U)) : (-4503599560261607LL)));
                        var_23 = ((/* implicit */short) (-(((/* implicit */int) arr_28 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))));
                        arr_31 [i_0] [i_1] [i_2] [i_7] = ((/* implicit */int) arr_26 [i_2]);
                        arr_32 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((int) arr_12 [i_0] [i_0] [i_2] [i_0]))) & (((((/* implicit */_Bool) var_7)) ? (10ULL) : (((/* implicit */unsigned long long int) var_1))))));
                    }
                }
            } 
        } 
    }
    for (long long int i_8 = 0; i_8 < 22; i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_9 = 2; i_9 < 19; i_9 += 3) 
        {
            for (unsigned char i_10 = 1; i_10 < 21; i_10 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_11 = 1; i_11 < 20; i_11 += 4) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_5), (var_15)))) ? (((((/* implicit */_Bool) 11761427422442018884ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51675))) : (17424898652083155222ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_8] [i_9 + 2] [i_10 + 1] [i_10 + 1] [i_11 - 1] [i_12]))) == (arr_25 [i_9] [i_10])))))));
                                arr_46 [i_9] [i_9] [i_9] [18] [(short)0] |= ((/* implicit */int) (unsigned short)40002);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned short) var_2);
                }
            } 
        } 
        arr_47 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 13219993358011844811ULL)) ? (3633043794981279654LL) : (-4503599560261617LL)));
    }
    for (unsigned long long int i_13 = 2; i_13 < 22; i_13 += 3) /* same iter space */
    {
        arr_51 [i_13] = ((/* implicit */int) var_6);
        arr_52 [i_13] = ((/* implicit */int) (_Bool)1);
    }
    for (unsigned long long int i_14 = 2; i_14 < 22; i_14 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned int) var_0);
        /* LoopNest 2 */
        for (short i_15 = 1; i_15 < 21; i_15 += 1) 
        {
            for (unsigned short i_16 = 3; i_16 < 21; i_16 += 3) 
            {
                {
                    arr_61 [i_15] = ((/* implicit */int) ((signed char) max((max((10480934343198923634ULL), (((/* implicit */unsigned long long int) 1815893231635410829LL)))), (((/* implicit */unsigned long long int) max(((short)17151), (((/* implicit */short) (unsigned char)247))))))));
                    arr_62 [i_14] [i_15] [i_16] [i_14] = ((/* implicit */_Bool) min(((signed char)113), ((signed char)108)));
                    arr_63 [i_16] [i_16] [i_16] [i_16] = ((((/* implicit */_Bool) min((((/* implicit */int) var_8)), (((-1073741824) / (((/* implicit */int) (short)-17151))))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((arr_55 [i_14]) / (((/* implicit */long long int) ((/* implicit */int) var_17)))))) : (max((var_15), (((/* implicit */unsigned long long int) (signed char)-114)))))) : (((/* implicit */unsigned long long int) ((arr_58 [i_15] [i_16 + 1]) / (arr_58 [i_14] [(signed char)22])))));
                }
            } 
        } 
    }
    var_27 = ((/* implicit */signed char) 13ULL);
}
