/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47028
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) 3976583371U);
            var_18 = ((/* implicit */short) ((unsigned char) arr_5 [i_0]));
            var_19 *= ((/* implicit */short) max((arr_1 [19] [i_1]), (((((/* implicit */_Bool) ((unsigned int) 1228782138U))) ? (arr_1 [i_1] [i_0]) : (((/* implicit */long long int) ((((/* implicit */int) (short)31)) / (((/* implicit */int) (unsigned short)55941)))))))));
        }
        arr_7 [i_0] [i_0] = ((/* implicit */short) max((2846317236U), (((/* implicit */unsigned int) (!((_Bool)1))))));
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) ((-6270964574282873062LL) / (-8247402178285914313LL)));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_2 = 3; i_2 < 8; i_2 += 2) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (~(((unsigned long long int) 1747404882U)))))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967288U)) ? (((/* implicit */int) (short)32756)) : (((/* implicit */int) (short)13899))));
    }
    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        arr_13 [i_3] = min((max((1448650076U), (1625341306U))), (((((/* implicit */_Bool) (short)32758)) ? (1448650055U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32754))))));
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned int) (-(arr_3 [i_3] [i_3] [i_3])));
    }
    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        arr_17 [(short)9] [i_4] = (-(((long long int) ((-8247402178285914292LL) > (arr_16 [i_4] [i_4])))));
        /* LoopSeq 3 */
        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            arr_20 [i_5] = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_18 [i_4] [i_4])) ? (arr_18 [i_4] [i_4]) : (arr_18 [i_4] [i_4]))) * (((/* implicit */int) ((7915141532085292669ULL) < (((/* implicit */unsigned long long int) 2734767213U))))))) != (((/* implicit */int) max((((/* implicit */signed char) arr_19 [i_4] [i_5])), ((signed char)50))))));
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (short)30720))));
            arr_21 [i_5] = ((/* implicit */unsigned int) ((short) 1657621669U));
            var_23 = ((/* implicit */unsigned int) (+(10531602541624258936ULL)));
        }
        for (short i_6 = 1; i_6 < 23; i_6 += 4) 
        {
            var_24 -= ((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned short)19011)) ? (2637345642U) : (2429837477U))), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)4095)))))));
            var_25 *= ((/* implicit */_Bool) max((((/* implicit */int) (short)32758)), (7)));
            var_26 = ((/* implicit */int) max((min((((/* implicit */unsigned int) (short)6050)), (max((2637345615U), (((/* implicit */unsigned int) arr_23 [i_6] [i_6] [i_6])))))), (((/* implicit */unsigned int) ((signed char) arr_24 [i_4])))));
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 21; i_7 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) 
            {
                for (unsigned short i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    for (unsigned int i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        {
                            var_27 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)46524)) ? (909374857U) : (((/* implicit */unsigned int) ((/* implicit */int) ((768173884U) < (2637345620U)))))));
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)248))));
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */short) 2346774401U);
            arr_36 [i_4] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_7] [i_4] [i_4])) ? (0LL) : (((/* implicit */long long int) arr_33 [(unsigned char)18] [(_Bool)1] [i_7] [i_7] [0U] [i_4] [(_Bool)1]))))) ? (((((/* implicit */_Bool) arr_25 [i_7] [18U])) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_7] [i_4] [i_4]))) : (-8789025669598863650LL))) : (((/* implicit */long long int) arr_22 [i_4] [i_7]))));
            arr_37 [i_7] [5U] [i_7] = arr_15 [i_7 + 4] [i_7 + 3];
        }
        var_30 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (short)-12699)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)32764)), ((unsigned short)19011))))) : (max((-8247402178285914304LL), (((/* implicit */long long int) (unsigned short)16827))))))));
    }
    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) min((3454539513349195277LL), (((/* implicit */long long int) 1657621669U)))))));
}
