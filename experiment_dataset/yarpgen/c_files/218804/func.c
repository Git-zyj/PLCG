/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218804
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
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_17))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_20 += ((/* implicit */unsigned long long int) var_17);
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */short) max(((~(arr_0 [i_0 + 1]))), (((/* implicit */int) ((arr_0 [i_0 + 1]) >= (arr_0 [i_0 + 1]))))));
                var_21 = ((/* implicit */unsigned char) -3490103927705020250LL);
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((-1340270877) | (arr_1 [i_1])));
                arr_7 [i_0] [i_0] [8LL] = ((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_0] [i_0]))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)17))))) : ((+(var_16)))))), (var_14)));
    var_23 = 3604021510320426170ULL;
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (short i_3 = 1; i_3 < 16; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                {
                    arr_18 [(unsigned short)9] [i_3] = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) arr_12 [i_2] [i_3 + 2] [i_2])), (((((/* implicit */_Bool) (unsigned short)8160)) ? (arr_15 [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_3] [i_4]))))))), (((/* implicit */long long int) arr_8 [i_4]))));
                    var_24 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned char)245)), (min((var_14), (((/* implicit */unsigned long long int) arr_17 [1LL] [i_3 + 1] [i_4]))))));
                    arr_19 [i_4] [i_3] = ((/* implicit */short) min((((/* implicit */int) arr_11 [i_4] [i_3] [i_2])), (((((/* implicit */int) arr_8 [i_4])) % ((~(((/* implicit */int) arr_16 [i_4] [i_4]))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (int i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            var_25 = ((/* implicit */long long int) arr_9 [i_2]);
            /* LoopNest 3 */
            for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                for (int i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    for (long long int i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned long long int) min((((((arr_15 [i_2] [i_5] [i_7] [i_8]) ^ (arr_20 [i_5] [i_6] [i_7]))) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1920))))), (((/* implicit */long long int) var_2))));
                            var_27 = ((/* implicit */unsigned long long int) min((max(((unsigned short)4), (((/* implicit */unsigned short) arr_24 [i_2] [i_2])))), (((/* implicit */unsigned short) arr_24 [i_5] [i_7]))));
                            var_28 = ((/* implicit */long long int) arr_30 [i_5] [i_7]);
                        }
                    } 
                } 
            } 
            arr_31 [i_2] [i_5] [i_2] = ((/* implicit */unsigned long long int) (-(arr_20 [i_2] [i_2] [i_2])));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 2) 
                {
                    for (long long int i_11 = 0; i_11 < 18; i_11 += 4) 
                    {
                        {
                            arr_40 [i_11] [i_9] [i_9] [i_10] [13ULL] = ((/* implicit */unsigned char) arr_21 [i_2] [i_2] [i_2]);
                            arr_41 [i_9] [i_5] [i_9] = min((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_24 [i_5] [i_2])), ((-(2147483647)))))), (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)32767)), (var_5)))), (((((/* implicit */_Bool) 1380896383)) ? (12319696357466102758ULL) : (((/* implicit */unsigned long long int) 2147483647)))))));
                            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((305990328502307569LL) != (((/* implicit */long long int) 531581887)))))));
                        }
                    } 
                } 
            } 
            arr_42 [i_2] = var_2;
        }
        for (long long int i_12 = 1; i_12 < 15; i_12 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_13 = 0; i_13 < 18; i_13 += 4) 
            {
                for (unsigned char i_14 = 0; i_14 < 18; i_14 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_15 = 0; i_15 < 18; i_15 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) arr_25 [i_14]);
                            var_31 = ((/* implicit */unsigned char) arr_37 [i_15] [i_2] [i_12 + 2]);
                        }
                        for (short i_16 = 0; i_16 < 18; i_16 += 1) 
                        {
                            arr_58 [i_2] [i_2] [i_13] [9ULL] [(unsigned short)7] = ((/* implicit */unsigned long long int) min((arr_56 [i_2] [i_2] [i_2] [i_2] [i_2]), (((((/* implicit */int) arr_38 [i_2] [i_13] [i_12 + 1] [i_12 - 1] [i_2])) / (((/* implicit */int) arr_16 [i_12 + 2] [i_2]))))));
                            var_32 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_39 [i_12] [i_13] [i_12 + 3] [i_12 + 2] [i_12] [i_12 - 1])) ? (((/* implicit */int) arr_39 [i_12] [i_13] [i_12 + 1] [i_12 - 1] [i_12] [i_12 + 3])) : (((((/* implicit */int) arr_39 [i_2] [i_13] [i_12 + 2] [i_12 + 1] [i_12 + 1] [i_12 - 1])) << (((((/* implicit */int) (short)(-32767 - 1))) + (32773)))))));
                            var_33 = arr_44 [i_2] [i_2];
                        }
                        var_34 += ((/* implicit */int) ((0ULL) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_2] [i_2] [i_2])) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_12])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_16 [i_2] [i_12]), ((short)32767))))) : (arr_50 [i_14] [i_12] [i_13] [i_13] [i_14])))));
                    }
                } 
            } 
            arr_59 [i_2] [i_12] [i_2] = (((((~(((((/* implicit */int) (unsigned short)57927)) >> (((((/* implicit */int) (unsigned short)7627)) - (7617))))))) + (2147483647))) << (((((((/* implicit */int) arr_21 [i_12 + 2] [i_12 + 1] [i_12 + 1])) ^ (((((((/* implicit */int) var_2)) + (2147483647))) >> (((((/* implicit */int) arr_11 [i_2] [i_2] [i_2])) + (18869))))))) - (19114))));
        }
        var_35 = arr_37 [i_2] [i_2] [i_2];
        var_36 += min(((-(arr_37 [i_2] [i_2] [i_2]))), (((/* implicit */unsigned long long int) arr_45 [i_2] [i_2] [i_2])));
        arr_60 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-1609060680)))) ? (((/* implicit */long long int) (~(arr_33 [i_2] [i_2] [i_2])))) : (9223372036854775807LL)))) ? ((+((+(((/* implicit */int) arr_11 [i_2] [i_2] [i_2])))))) : (((/* implicit */int) arr_43 [i_2] [i_2] [i_2]))));
    }
}
