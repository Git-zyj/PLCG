/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244953
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
    var_19 = ((/* implicit */_Bool) (signed char)109);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) min((((((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_2 [i_0])))) * (((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_0])), (var_3)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) == (var_15))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            arr_6 [i_0] [i_1 - 3] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned char) (_Bool)0))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (short)16384)))));
            var_20 = ((/* implicit */unsigned int) (!(min((arr_5 [i_0 + 1] [i_0 - 1]), (arr_5 [i_0 + 3] [i_0 + 1])))));
            arr_7 [i_0] = ((/* implicit */unsigned short) (!(((var_15) > (((/* implicit */unsigned long long int) var_7))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                arr_10 [i_0] [i_1] [i_0] = ((/* implicit */long long int) var_17);
                arr_11 [i_0 + 3] [i_0] [i_1] [i_2] = ((short) 1986275190);
                var_21 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_1 - 3] [i_0])) | (((/* implicit */int) arr_0 [i_1 - 1] [i_0]))));
                arr_12 [i_0] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_10))));
                /* LoopSeq 3 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    arr_15 [i_0] [i_0] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((int) var_1));
                    var_22 = ((/* implicit */_Bool) ((int) arr_0 [i_0] [i_0]));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(arr_2 [i_0]))))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) 528482304)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_5))));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) -528482305)) ? ((~(((/* implicit */int) var_4)))) : ((~(((/* implicit */int) arr_5 [i_0] [i_0]))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */short) -528482304);
                        arr_22 [i_6] [i_0] [i_2] [i_4] [i_4] [i_2] = ((/* implicit */unsigned int) ((2305843009213693951LL) == (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1 - 3] [i_0])))));
                        arr_23 [i_6] [i_4] [i_0] [i_0] [i_1] [(unsigned short)7] = ((/* implicit */signed char) ((((/* implicit */int) var_5)) > (((/* implicit */int) arr_13 [i_1 - 3] [i_0]))));
                        var_27 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-2814423447567700298LL))));
                    }
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        arr_26 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) arr_2 [i_0]))));
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (+(9437332381038715005ULL))))));
                        arr_28 [i_0] = ((/* implicit */_Bool) 9009411692670836611ULL);
                    }
                    var_28 = arr_17 [i_1 - 2] [i_1 - 1] [i_0] [i_0 + 1];
                    var_29 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (short)63))) + (-2305843009213693942LL))) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 1] [i_0])))));
                    var_30 = ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [(unsigned char)5] [(unsigned char)5] [(unsigned char)5] [i_2] [i_4]))) : (15797072478354784627ULL));
                }
                for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_2 [i_0]) && (((/* implicit */_Bool) arr_20 [(unsigned short)1] [(unsigned short)1] [i_1] [i_2] [(unsigned short)1]))))) ^ ((~(((/* implicit */int) var_11))))));
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_0 + 2])) && ((!(((/* implicit */_Bool) (short)32755))))));
                    arr_31 [i_0] [i_2] [i_2] = 35184372088831LL;
                }
            }
            for (short i_9 = 4; i_9 < 10; i_9 += 1) 
            {
                arr_34 [i_0] [i_1 + 1] = ((/* implicit */_Bool) (((~((-(var_15))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 3949607893U)) == (2305843009213693976LL)))))));
                arr_35 [i_0] [i_0] [(_Bool)1] [i_9] = ((/* implicit */short) var_18);
                arr_36 [i_0] = ((/* implicit */long long int) var_16);
                arr_37 [(signed char)8] [i_1] [i_9] [i_0] = ((/* implicit */unsigned long long int) min(((~((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12)))))), (((/* implicit */int) ((short) arr_16 [i_1 - 3])))));
            }
            for (unsigned int i_10 = 2; i_10 < 10; i_10 += 1) 
            {
                var_33 = ((/* implicit */_Bool) (short)-29935);
                var_34 = ((((/* implicit */unsigned int) ((/* implicit */int) ((short) (~(((/* implicit */int) (short)12802))))))) == (max((((/* implicit */unsigned int) var_10)), (var_0))));
            }
            var_35 = ((/* implicit */unsigned int) (short)32742);
        }
        for (long long int i_11 = 0; i_11 < 12; i_11 += 1) /* same iter space */
        {
            var_36 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_0)) == (((((/* implicit */_Bool) var_18)) ? (arr_18 [i_0] [i_0] [i_11] [(signed char)8]) : (((/* implicit */unsigned long long int) arr_25 [i_0] [3]))))))), (min((13760553870396502100ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-32733)))))))));
            var_37 = arr_14 [i_0];
        }
        for (long long int i_12 = 0; i_12 < 12; i_12 += 1) /* same iter space */
        {
            var_38 = (short)6258;
            var_39 = ((/* implicit */unsigned short) ((((/* implicit */int) min((var_4), (((/* implicit */unsigned short) arr_43 [i_12]))))) / ((-(((/* implicit */int) var_8))))));
            arr_45 [i_0] [i_12] [i_12] = max((max((((/* implicit */unsigned long long int) (short)29914)), (9009411692670836611ULL))), (((/* implicit */unsigned long long int) var_11)));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_13 = 1; i_13 < 11; i_13 += 3) 
        {
            arr_49 [i_0] [i_13] = ((/* implicit */_Bool) var_2);
            var_40 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (short)-32744)))) ? (((/* implicit */int) (short)-9401)) : (((/* implicit */int) (short)1))));
            var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1766428710U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
            var_42 = ((/* implicit */short) var_0);
        }
    }
    for (long long int i_14 = 1; i_14 < 8; i_14 += 1) 
    {
        arr_52 [i_14] = ((/* implicit */unsigned char) arr_14 [(signed char)6]);
        arr_53 [i_14 - 1] = ((/* implicit */short) max(((-(max((var_15), (8357694535094858207ULL))))), (((/* implicit */unsigned long long int) arr_42 [(signed char)4]))));
        var_43 = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) (short)-32756)) ? (11332431730559652339ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12818))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_30 [i_14] [i_14] [i_14 + 2] [i_14]))))))) - (((/* implicit */unsigned long long int) var_6))));
    }
}
