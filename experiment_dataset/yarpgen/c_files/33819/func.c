/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33819
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
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) var_9))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_4 [i_0] = arr_2 [i_0];
        arr_5 [i_0] [i_0] = ((/* implicit */int) ((short) min((arr_2 [i_0]), (8388607))));
        var_16 = ((/* implicit */unsigned long long int) ((unsigned short) -1289640539981527604LL));
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_1])) < (((((/* implicit */_Bool) 71094525)) ? (-71094529) : (((/* implicit */int) arr_9 [i_1])))))))));
            var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (short)-645)))))))) / (min((((/* implicit */long long int) 1069547520)), (-624530746932155872LL)))));
            arr_12 [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_1] [i_2 - 1] [i_2 - 1])) * (-71094526)));
        }
        var_19 = ((/* implicit */int) (short)644);
    }
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_11))));
    /* LoopSeq 2 */
    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) (signed char)32)) / (var_9)))))));
            var_22 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)18808)) ? (arr_1 [i_4]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-26)) - (var_5))))));
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)64)) ? (2338163664183358467LL) : (-2338163664183358467LL))) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                arr_21 [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)644)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)1023))));
                arr_22 [(short)7] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2112642544)) || (((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_4] [i_5]))));
                arr_23 [i_3] [i_4] = ((/* implicit */_Bool) (unsigned short)5435);
            }
            arr_24 [i_3] [i_3] = ((/* implicit */_Bool) (unsigned short)8176);
            /* LoopSeq 4 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) var_3))));
                    var_25 = ((/* implicit */unsigned short) max((var_25), (arr_19 [i_3] [i_4] [8U] [i_4])));
                    var_26 *= ((/* implicit */int) (~(arr_1 [i_6 - 1])));
                }
                for (signed char i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    arr_32 [i_3] [i_4] [i_8] [i_3] [i_4] = ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_2))) <= (var_2)));
                    var_27 = ((/* implicit */signed char) arr_15 [i_8] [i_6 - 1] [i_3]);
                }
                var_28 += ((/* implicit */int) (short)22712);
            }
            for (unsigned char i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                var_29 = arr_19 [i_3] [i_4] [(short)4] [(unsigned short)8];
                arr_35 [i_3] [i_4] [i_4] [i_3] = ((/* implicit */short) arr_14 [i_3]);
            }
            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) /* same iter space */
            {
                var_30 -= ((/* implicit */unsigned short) 3212854652U);
                arr_38 [i_10] [i_4] = ((/* implicit */int) 4497531570741031728LL);
                arr_39 [i_10] [i_10] [i_4] = ((/* implicit */unsigned short) arr_2 [i_4]);
                /* LoopSeq 3 */
                for (short i_11 = 0; i_11 < 10; i_11 += 4) 
                {
                    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) -1472396502)) ? (((/* implicit */int) arr_30 [i_3] [i_4] [i_10] [i_11])) : (-1129549919))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_3] [i_10] [i_11])) && (((/* implicit */_Bool) arr_13 [i_11]))))))))));
                    arr_42 [i_3] &= ((/* implicit */unsigned long long int) var_4);
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_32 |= ((/* implicit */signed char) ((short) arr_41 [i_3] [i_4] [(signed char)8] [i_10 + 1] [i_4]));
                        var_33 += ((/* implicit */_Bool) 1708229323);
                        arr_47 [6LL] [i_4] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [2] [i_4] [2] [i_4])) ? (arr_40 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_11] [i_10 + 1] [i_4] [i_3])))));
                    }
                    var_34 = ((/* implicit */short) ((((/* implicit */_Bool) 345797165U)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((short) (unsigned short)9116)))));
                }
                for (unsigned char i_13 = 1; i_13 < 7; i_13 += 1) 
                {
                    var_35 += ((/* implicit */short) ((((/* implicit */int) arr_9 [i_10 + 1])) * (((/* implicit */int) arr_9 [i_10 + 1]))));
                    arr_51 [i_10] = (((_Bool)1) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) arr_15 [i_10 + 1] [(short)2] [i_10 + 1])));
                }
                for (int i_14 = 2; i_14 < 9; i_14 += 1) 
                {
                    var_36 = ((/* implicit */int) max((var_36), (((-1073359681) / (2147483644)))));
                    /* LoopSeq 1 */
                    for (int i_15 = 0; i_15 < 10; i_15 += 2) 
                    {
                        var_37 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_10 + 1] [i_14 - 1] [(short)2] [i_15])) ? (arr_10 [i_10 + 1] [i_10 + 1] [i_10 + 1]) : (((/* implicit */int) arr_3 [i_15]))));
                        var_38 = ((/* implicit */_Bool) arr_20 [i_3] [i_3]);
                        var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-10843)) ? (var_5) : (((/* implicit */int) (_Bool)0))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_16 = 0; i_16 < 10; i_16 += 3) 
                    {
                        arr_59 [i_3] [i_10] = ((/* implicit */_Bool) 2462061347U);
                        var_40 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_11 [i_10 + 1] [i_10] [i_10]))));
                    }
                    for (short i_17 = 0; i_17 < 10; i_17 += 1) 
                    {
                        var_41 ^= ((/* implicit */int) ((long long int) (~(((/* implicit */int) (short)22725)))));
                        var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)10842))))) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (arr_25 [i_10 + 1] [i_14 - 1] [i_14])));
                        var_43 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)96))))) <= (((/* implicit */int) arr_34 [i_3] [i_4] [i_10]))));
                    }
                }
            }
            for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) /* same iter space */
            {
                var_44 = arr_61 [i_4] [i_4] [i_4] [1ULL] [i_4] [i_4];
                var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) (+(arr_56 [i_18 + 1] [i_4] [i_18 + 1] [i_4] [i_4] [i_4]))))));
                var_46 ^= arr_16 [i_3] [i_18];
                var_47 = ((/* implicit */unsigned long long int) max((var_47), (((/* implicit */unsigned long long int) var_5))));
            }
        }
        var_48 = ((/* implicit */short) (((((~(((/* implicit */int) arr_65 [i_3])))) / (((int) arr_58 [8] [8] [i_3] [i_3] [i_3])))) <= (var_5)));
    }
    for (short i_19 = 0; i_19 < 10; i_19 += 4) 
    {
        var_49 += ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)1008)) ? (1543694800) : (arr_33 [(unsigned char)6] [i_19] [(short)2])))), (((((unsigned long long int) -2)) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_41 [i_19] [i_19] [i_19] [i_19] [0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_19] [i_19])))))))))));
        /* LoopSeq 1 */
        for (signed char i_20 = 0; i_20 < 10; i_20 += 3) 
        {
            var_50 = ((/* implicit */unsigned int) (((~(arr_41 [8] [i_20] [i_20] [i_20] [i_20]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_26 [i_19] [(_Bool)1] [i_20] [i_20]), (((/* implicit */short) arr_14 [i_19]))))))));
            var_51 = (short)255;
            arr_71 [1LL] [i_20] = arr_25 [i_19] [i_19] [i_19];
        }
        arr_72 [(_Bool)1] [8ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_44 [i_19] [i_19] [(unsigned char)6] [(_Bool)1] [0LL] [i_19] [i_19]))))) ? (((((/* implicit */_Bool) 5445511877916804399ULL)) ? (((/* implicit */int) arr_44 [i_19] [i_19] [(unsigned char)2] [6] [i_19] [i_19] [i_19])) : (((/* implicit */int) (short)17505)))) : (((/* implicit */int) (unsigned short)64527))));
    }
    var_52 = ((/* implicit */signed char) var_13);
}
