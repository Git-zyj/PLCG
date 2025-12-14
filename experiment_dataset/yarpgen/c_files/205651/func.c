/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205651
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned int) 16268862415397150918ULL);
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_1 [(_Bool)1]))))))) >> (((((/* implicit */int) arr_3 [i_0])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))))));
            var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) ((_Bool) 16268862415397150943ULL))))));
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 4) /* same iter space */
        {
            var_21 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_3 [i_2 - 2])) : (((/* implicit */int) arr_3 [i_2]))));
            var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_2]))));
            var_23 = ((/* implicit */short) ((unsigned long long int) (_Bool)1));
            var_24 = 11935158086649390676ULL;
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    for (short i_5 = 3; i_5 < 9; i_5 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) (((((~(arr_8 [(_Bool)1] [7U] [i_0] [i_0]))) + (2147483647))) << ((((~(arr_9 [10U] [(unsigned short)3] [4U]))) - (8335694581728128473LL)))));
                            var_26 = ((((/* implicit */_Bool) 2114238570)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_14 [i_5] [i_5] [i_5 - 3] [(unsigned char)1] [5ULL] [i_5]));
                            var_27 = ((/* implicit */unsigned char) var_14);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    for (unsigned int i_7 = 2; i_7 < 9; i_7 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned char) var_13);
                            var_29 = ((/* implicit */unsigned char) 16268862415397150932ULL);
                            var_30 -= ((/* implicit */unsigned int) 6511585987060160961ULL);
                            var_31 = ((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) arr_16 [i_0] [(_Bool)1] [(_Bool)1] [(signed char)2] [(signed char)2] [(_Bool)1])))));
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (unsigned long long int i_8 = 2; i_8 < 11; i_8 += 4) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned short) ((signed char) 16268862415397150932ULL));
            var_33 = ((/* implicit */short) var_12);
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (int i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    {
                        var_34 = ((/* implicit */unsigned long long int) max((var_34), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) ^ (var_5)))));
                        arr_30 [i_0] [7ULL] [i_0] [i_0] = ((/* implicit */unsigned int) 8847653279127076604ULL);
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) ((signed char) 9223372036854775807LL)))));
                    }
                } 
            } 
            var_36 = ((/* implicit */unsigned long long int) ((((var_3) + (2147483647))) << (((((((/* implicit */int) (short)-5090)) + (5114))) - (23)))));
        }
        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) (unsigned short)65535))));
    }
    for (unsigned int i_11 = 0; i_11 < 12; i_11 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_12 = 2; i_12 < 11; i_12 += 1) 
        {
            for (int i_13 = 2; i_13 < 11; i_13 += 2) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_38 = ((/* implicit */signed char) 2114238568);
                        var_39 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1498240526))))), ((unsigned short)65534)));
                        var_40 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)108)) & (((1498240513) | (((/* implicit */int) var_7))))))), (var_15)));
                        var_41 += ((/* implicit */unsigned long long int) (unsigned short)65535);
                        /* LoopSeq 3 */
                        for (long long int i_15 = 2; i_15 < 11; i_15 += 3) 
                        {
                            var_42 = ((/* implicit */unsigned char) 1203526130);
                            var_43 = ((/* implicit */unsigned short) max((min((2177881658312400683ULL), (((/* implicit */unsigned long long int) -1950666902)))), (((/* implicit */unsigned long long int) ((var_15) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-30631))))))));
                            var_44 = ((/* implicit */int) var_7);
                            var_45 = (i_11 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */int) var_2)) << (((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6511585987060160922ULL)) ? (((/* implicit */int) arr_11 [i_15] [i_11])) : (0)))), (6511585987060160927ULL))) - (108ULL)))))) : (((/* implicit */unsigned char) ((((/* implicit */int) var_2)) << (((((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6511585987060160922ULL)) ? (((/* implicit */int) arr_11 [i_15] [i_11])) : (0)))), (6511585987060160927ULL))) - (108ULL))) - (104ULL))))));
                        }
                        for (unsigned int i_16 = 1; i_16 < 10; i_16 += 3) 
                        {
                            var_46 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)(-127 - 1)))))) != (max((6511585987060160942ULL), (((/* implicit */unsigned long long int) var_16)))))))));
                            var_47 = ((/* implicit */short) var_5);
                            var_48 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 6511585987060160922ULL)) ? (((/* implicit */unsigned long long int) -1203526131)) : (11935158086649390692ULL))));
                        }
                        for (unsigned char i_17 = 2; i_17 < 8; i_17 += 1) 
                        {
                            var_49 = ((/* implicit */unsigned long long int) min((var_49), (((/* implicit */unsigned long long int) max(((~(arr_2 [i_11] [i_11] [(signed char)3]))), (((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_11)))))))))));
                            var_50 = ((/* implicit */short) ((((/* implicit */_Bool) arr_44 [i_17] [11U] [5U] [i_17] [5U])) ? (((/* implicit */unsigned long long int) ((var_15) | (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)-32740))))))) : (((var_17) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                        }
                    }
                } 
            } 
        } 
        var_51 = ((/* implicit */unsigned short) max((max(((((_Bool)1) ? (16728044312315756382ULL) : (2177881658312400690ULL))), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_37 [i_11] [(unsigned char)9] [i_11])) ? (((/* implicit */int) (unsigned short)38155)) : (((/* implicit */int) (unsigned char)100)))) | (((/* implicit */int) (_Bool)1)))))));
    }
    var_52 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)3))));
}
