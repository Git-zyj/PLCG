/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205507
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */short) var_3);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_2] [i_2] = ((/* implicit */int) min((min((((/* implicit */unsigned short) arr_5 [i_0] [i_2])), (var_11))), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)4088)) || (((/* implicit */_Bool) 286333657)))), (((((/* implicit */int) arr_2 [13])) <= (var_5))))))));
                    arr_10 [10ULL] [i_0] [i_0] [10ULL] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_1] [i_0]))))), (((((/* implicit */_Bool) -3404342306638198833LL)) ? (arr_0 [21ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))))))), (max((((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))), (((var_13) / (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2])))))))));
                    arr_11 [i_2] = ((/* implicit */int) arr_6 [i_2] [12LL] [i_0]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                {
                    arr_17 [i_0] [i_3] |= ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) min((3404342306638198833LL), (((/* implicit */long long int) var_6))))) ^ (arr_12 [i_3]))), (((/* implicit */unsigned long long int) min((arr_14 [i_4]), (arr_14 [i_0]))))));
                    arr_18 [i_0] [i_3] [i_4] [i_4] = ((/* implicit */long long int) arr_16 [i_3] [i_4] [i_3] [i_0]);
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                arr_27 [i_5] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 2; i_7 < 21; i_7 += 3) 
                {
                    arr_30 [i_0] [i_5] [i_0] [i_5] = ((var_1) + (((/* implicit */unsigned long long int) arr_21 [i_7 - 1] [i_7 - 1] [i_7])));
                    arr_31 [i_6] [i_6] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_7 - 2] [i_7] [i_7 - 2] [i_7 - 2]))));
                }
                arr_32 [i_0] [17LL] [i_5] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) arr_26 [i_0] [i_5] [i_5])) > (-3404342306638198833LL))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)191))))) : (759234730590979591LL)));
            }
            for (int i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                arr_36 [i_8] [i_0] [i_0] = ((/* implicit */unsigned int) ((((long long int) arr_34 [(_Bool)1] [i_5] [i_0])) / (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_8])))));
                arr_37 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_5] [i_0])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_8] [i_5] [i_0])))));
            }
            arr_38 [i_5] [14U] [i_0] = 0;
        }
        for (int i_9 = 0; i_9 < 22; i_9 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_10 = 0; i_10 < 22; i_10 += 1) 
            {
                arr_46 [9U] [i_9] [i_10] = ((/* implicit */int) min((-3404342306638198833LL), (((/* implicit */long long int) min((((/* implicit */int) (signed char)117)), ((~(((/* implicit */int) arr_16 [i_10] [i_10] [i_9] [i_0])))))))));
                arr_47 [(short)16] [i_9] [i_0] [i_0] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)496))))));
                arr_48 [i_0] [i_9] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((min((8128U), (1695311557U))), (((/* implicit */unsigned int) var_5))))), ((+(var_1)))));
            }
            arr_49 [i_0] [i_0] [(unsigned short)12] = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (max((166948602), (-13)))));
            arr_50 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_9]))))) ? (min((((/* implicit */unsigned int) arr_8 [9] [0U] [(unsigned short)5] [i_0])), (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47216))) < (var_4)))))));
        }
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 22; i_11 += 1) 
        {
            for (unsigned int i_12 = 0; i_12 < 22; i_12 += 3) 
            {
                {
                    arr_56 [i_0] [i_11] = ((/* implicit */unsigned char) (+(5319121633947475493LL)));
                    arr_57 [5U] [i_11] [11ULL] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((var_12), (var_13)))) < (min((arr_24 [i_0] [i_11] [i_12]), (((/* implicit */unsigned long long int) var_5))))));
                    arr_58 [i_12] = ((/* implicit */_Bool) (+(min((var_12), (var_3)))));
                }
            } 
        } 
    }
    for (unsigned char i_13 = 0; i_13 < 22; i_13 += 2) /* same iter space */
    {
        arr_62 [i_13] = ((/* implicit */unsigned int) max((-3404342306638198830LL), (((/* implicit */long long int) (signed char)127))));
        arr_63 [i_13] = ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) (unsigned char)24)) ? (1611260000U) : (1695311568U))))) < (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)136)))))));
        arr_64 [i_13] [i_13] = ((/* implicit */unsigned short) arr_20 [i_13] [i_13]);
    }
    var_14 = ((/* implicit */int) var_9);
    var_15 = ((/* implicit */unsigned char) max((var_0), (min((min((var_12), (((/* implicit */unsigned int) (unsigned char)152)))), (min((((/* implicit */unsigned int) var_5)), (var_6)))))));
    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
    var_17 = ((/* implicit */unsigned char) min((4294967295U), (((/* implicit */unsigned int) (unsigned char)104))));
}
