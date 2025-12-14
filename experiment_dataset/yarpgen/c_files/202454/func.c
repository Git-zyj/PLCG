/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202454
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) arr_1 [i_1 - 3] [i_0]);
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_0 [i_1 - 3] [18LL])), (((unsigned long long int) arr_0 [i_1 - 2] [i_0]))));
                var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (short i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        var_12 = ((/* implicit */unsigned char) (unsigned short)47027);
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                {
                    var_13 = ((/* implicit */_Bool) min((var_13), (var_1)));
                    var_14 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)23)) ? ((-9223372036854775807LL - 1LL)) : (((var_1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)45))) : (((((/* implicit */_Bool) (unsigned char)23)) ? (-2103714636691521559LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)21)))))))));
                    arr_15 [i_2] [i_2] = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_9)))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_5 = 1; i_5 < 24; i_5 += 2) 
    {
        var_16 -= ((/* implicit */short) ((unsigned char) var_9));
        var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) 9223372036854775796LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18147))) : (9461227607037434875ULL))) ^ (((/* implicit */unsigned long long int) (~(arr_17 [i_5 - 1] [i_5]))))));
        /* LoopNest 3 */
        for (unsigned short i_6 = 1; i_6 < 23; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 2; i_7 < 23; i_7 += 2) 
            {
                for (unsigned short i_8 = 0; i_8 < 25; i_8 += 3) 
                {
                    {
                        arr_26 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_8] [i_7] = ((/* implicit */unsigned int) ((long long int) (-(((/* implicit */int) arr_23 [11] [1] [i_7] [(unsigned short)13])))));
                        var_18 = ((/* implicit */long long int) min((var_18), ((+(((((/* implicit */_Bool) arr_18 [i_5 + 1] [i_5 + 1] [i_5 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (3302258958051364619LL)))))));
                        var_19 = ((/* implicit */_Bool) max((var_19), (arr_19 [i_8] [i_5 + 1] [i_5])));
                        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)255))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            for (unsigned short i_10 = 2; i_10 < 23; i_10 += 2) 
            {
                {
                    arr_33 [5LL] [i_9] [(signed char)7] = ((/* implicit */signed char) (short)18475);
                    var_21 -= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)18475))) - (9223372036854775807LL))));
                }
            } 
        } 
    }
    for (unsigned char i_11 = 2; i_11 < 16; i_11 += 2) 
    {
        arr_38 [(unsigned short)5] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)50191)) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) > (3302258958051364619LL)))))) + (((/* implicit */int) ((arr_18 [i_11 + 1] [i_11] [i_11]) > (((/* implicit */unsigned long long int) 1807342525)))))));
        var_22 -= ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) 3131336710077684241LL)))));
        arr_39 [13U] [i_11] = ((unsigned char) (unsigned char)164);
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 17; i_12 += 3) 
        {
            for (long long int i_13 = 2; i_13 < 15; i_13 += 4) 
            {
                for (unsigned short i_14 = 0; i_14 < 17; i_14 += 2) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) ((9223372036854775807LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)47)))));
                        var_24 -= ((/* implicit */unsigned short) ((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9461227607037434875ULL)))))) : (((((/* implicit */_Bool) arr_47 [4U] [4U] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_11])))))) : (arr_35 [i_11 - 1])))));
                        arr_48 [(unsigned short)11] [i_12] [(unsigned char)3] = ((/* implicit */unsigned char) var_1);
                    }
                } 
            } 
        } 
        var_25 = ((1659578655050643838ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
    }
    for (long long int i_15 = 0; i_15 < 23; i_15 += 3) 
    {
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (+(1411414376))))));
        var_27 = ((/* implicit */short) var_2);
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_16 = 2; i_16 < 19; i_16 += 3) 
        {
            var_28 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_23 [i_16 + 1] [i_15] [i_15] [5LL]))));
            arr_53 [i_15] = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_0)) | (((((/* implicit */_Bool) 8985516466672116734ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (2896586023384004435LL)))));
            arr_54 [i_15] |= ((/* implicit */unsigned long long int) var_5);
        }
        /* vectorizable */
        for (unsigned short i_17 = 2; i_17 < 19; i_17 += 3) 
        {
            var_29 |= ((/* implicit */short) arr_29 [i_15] [i_17] [i_17] [(unsigned char)18]);
            arr_57 [i_15] [i_17 - 1] = ((/* implicit */_Bool) arr_51 [i_15] [i_17]);
        }
        for (signed char i_18 = 4; i_18 < 22; i_18 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                var_30 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_16 [i_15]))))));
                arr_62 [i_15] = (+(((((/* implicit */_Bool) 9223372036854775807LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
            }
            arr_63 [i_15] [i_15] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)91)) ? (((/* implicit */int) (unsigned char)108)) : (((/* implicit */int) (unsigned short)58711))));
        }
        for (signed char i_20 = 4; i_20 < 22; i_20 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_21 = 4; i_21 < 19; i_21 += 3) 
            {
                for (signed char i_22 = 0; i_22 < 23; i_22 += 2) 
                {
                    {
                        arr_76 [i_15] [9ULL] [i_15] [(unsigned char)20] = ((/* implicit */unsigned char) var_8);
                        arr_77 [i_15] [i_15] [i_20 - 2] [i_21] [i_22] = ((/* implicit */_Bool) ((signed char) arr_75 [i_15] [i_15]));
                    }
                } 
            } 
            var_31 &= ((/* implicit */_Bool) (unsigned char)45);
            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((9461227607037434891ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [(unsigned short)13] [i_20 + 1]))))))));
            arr_78 [i_15] = ((/* implicit */unsigned char) 2377153529347031083LL);
        }
        /* LoopNest 2 */
        for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
        {
            for (int i_24 = 3; i_24 < 22; i_24 += 2) 
            {
                {
                    var_33 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1341558839)) || (((/* implicit */_Bool) 0ULL))));
                    arr_83 [(_Bool)1] [i_15] [i_15] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (65535)));
                }
            } 
        } 
    }
    var_34 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (signed char)123)), (18446744073709551615ULL)));
}
