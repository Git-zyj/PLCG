/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29319
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
    var_20 = ((short) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-98)) ? (-1693420378) : (((/* implicit */int) var_12)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_21 ^= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? ((~(((/* implicit */int) arr_0 [i_0 - 3])))) : (-1693420352)))));
                /* LoopSeq 4 */
                for (signed char i_2 = 3; i_2 < 21; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        arr_10 [i_3] [i_3] [i_3] [i_3] [i_3] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)0);
                        var_22 = ((/* implicit */unsigned short) arr_0 [i_2 - 1]);
                        arr_11 [i_1] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) 1693420379)) ? ((-(arr_6 [i_0 + 1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32767)) ? (-1693420352) : (((/* implicit */int) (unsigned short)36355))))))));
                    }
                    for (unsigned int i_4 = 1; i_4 < 23; i_4 += 2) 
                    {
                        arr_16 [i_0 - 2] [i_1] = ((/* implicit */int) (unsigned short)8192);
                        arr_17 [i_1] [i_1] = ((/* implicit */long long int) max(((+(((/* implicit */int) (unsigned short)1022)))), (((/* implicit */int) ((7927103687852035438LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64513))))))));
                    }
                    arr_18 [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) * (((long long int) (!(((/* implicit */_Bool) 7537419777476796989ULL)))))));
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)36329)) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((_Bool) (short)-19753))) : (arr_3 [i_1 + 1])))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    var_24 += ((/* implicit */unsigned short) ((long long int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) || (((/* implicit */_Bool) (signed char)-85))))), (max((67108863), (((/* implicit */int) (short)-13445)))))));
                    var_25 += ((/* implicit */long long int) (short)0);
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (_Bool)1))));
                    arr_26 [i_0] &= (unsigned char)0;
                }
                for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((short) ((unsigned short) arr_5 [i_0 - 3] [i_1 + 1]))))));
                    /* LoopSeq 4 */
                    for (int i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((((((/* implicit */_Bool) 6505932785453596871ULL)) ? (7644331100942289664ULL) : (((/* implicit */unsigned long long int) arr_29 [i_1] [i_7] [i_8])))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)29181))))))))));
                        var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) -5)) ? (516096) : (((/* implicit */int) (unsigned char)159))))))));
                        var_30 = ((/* implicit */short) min((((((/* implicit */unsigned long long int) (~(arr_24 [i_0] [i_1 + 1] [i_1])))) ^ (((((/* implicit */_Bool) arr_20 [i_0])) ? (arr_5 [i_0 + 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0 - 3] [i_1] [i_7] [i_1]))))))), (((/* implicit */unsigned long long int) arr_29 [i_7] [i_1 + 1] [i_7]))));
                        var_31 = ((/* implicit */long long int) arr_1 [i_8]);
                    }
                    for (int i_9 = 0; i_9 < 25; i_9 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551609ULL)) ? (((/* implicit */int) arr_7 [i_1 + 1] [i_0 - 1])) : (((/* implicit */int) arr_7 [i_7] [i_0 - 3]))))) ? (min((arr_22 [i_0 - 3]), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned char) arr_31 [i_1] [i_1] [i_1 + 1] [i_7] [i_7])))));
                        var_33 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) ((long long int) 2305843009211596800LL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_0] [i_1] [i_7] [i_9] [i_0]))))) : ((~(arr_24 [i_1] [i_7] [i_9]))))));
                    }
                    /* vectorizable */
                    for (long long int i_10 = 0; i_10 < 25; i_10 += 2) 
                    {
                        arr_38 [i_0 - 4] [i_1] [i_7] [i_10] = (short)-32766;
                        var_34 = ((/* implicit */unsigned char) ((short) ((_Bool) (unsigned short)57344)));
                        var_35 = ((/* implicit */unsigned short) ((unsigned char) arr_2 [i_1 + 1]));
                        var_36 += ((/* implicit */long long int) (unsigned short)64518);
                        arr_39 [i_0 - 4] [i_1] = ((/* implicit */long long int) ((short) -2305843009211596796LL));
                    }
                    for (short i_11 = 3; i_11 < 23; i_11 += 2) 
                    {
                        arr_42 [i_0] [i_0] [i_11 - 1] [i_11] &= ((/* implicit */short) (~(((((/* implicit */_Bool) min(((unsigned short)16068), ((unsigned short)54643)))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) (~(((/* implicit */int) (short)192)))))))));
                        var_37 = ((/* implicit */_Bool) ((((/* implicit */int) (!((_Bool)1)))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_1 [i_0]))))))));
                        var_38 = ((/* implicit */int) arr_15 [i_1] [i_1] [i_1 + 1]);
                        var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) (~(-1))))));
                        arr_43 [i_0 - 4] [i_0 - 4] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((((/* implicit */int) arr_40 [i_0 - 4] [i_1] [i_7] [i_7] [i_7] [i_11])) > (((/* implicit */int) (short)-1)))) ? (arr_37 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1]) : (((/* implicit */int) ((_Bool) arr_40 [i_11] [i_11 + 1] [i_7] [i_1 + 1] [i_1] [i_0])))))) * (max((arr_12 [i_0] [i_11] [i_7] [i_11 - 2] [i_11]), (((/* implicit */long long int) arr_35 [i_1] [i_1]))))));
                    }
                    var_40 += ((/* implicit */signed char) (+(max((((/* implicit */unsigned long long int) (_Bool)1)), (((unsigned long long int) arr_31 [i_0] [i_1 + 1] [i_0] [i_1 + 1] [i_1]))))));
                }
                var_41 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) arr_25 [i_0 - 4] [i_1 + 1] [i_0 - 3] [i_1 + 1])), (246356518534546068ULL))), (((/* implicit */unsigned long long int) arr_4 [i_1 + 1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_12 = 0; i_12 < 22; i_12 += 2) 
    {
        for (long long int i_13 = 1; i_13 < 20; i_13 += 2) 
        {
            {
                var_42 = max((((/* implicit */unsigned long long int) ((unsigned short) ((unsigned long long int) arr_7 [i_13] [i_12])))), (min((max((arr_9 [i_12] [i_13] [i_12] [i_13]), (((/* implicit */unsigned long long int) arr_7 [i_12] [i_13])))), ((((_Bool)1) ? (11850218420410000106ULL) : (((/* implicit */unsigned long long int) -1008338622)))))));
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 22; i_14 += 2) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_43 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)64508)), (arr_5 [i_13] [i_13])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_15] [i_13 + 2] [i_13 + 2] [i_15]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_12] [i_13 + 2])) ? ((~(((/* implicit */int) arr_31 [i_12] [i_12] [i_12] [i_12] [i_12])))) : (((((/* implicit */_Bool) (short)32323)) ? (((/* implicit */int) (unsigned short)19505)) : (((/* implicit */int) (short)32759))))))) : (((long long int) (!(((/* implicit */_Bool) -2305843009211596801LL))))));
                            var_44 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) (-2147483647 - 1))) % (3661742518017030465LL))) <= (((/* implicit */long long int) arr_32 [i_12] [i_13 + 1] [i_13] [i_15] [i_15]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
