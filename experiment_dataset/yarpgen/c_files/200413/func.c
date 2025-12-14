/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200413
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
    var_20 &= ((/* implicit */short) ((unsigned short) var_4));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_4 [i_1] [(short)8] |= ((/* implicit */unsigned int) ((((/* implicit */int) (!((!(arr_0 [i_0])))))) * ((((!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((arr_0 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_0]))) : (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((356091740) * (((/* implicit */int) (_Bool)1))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((arr_1 [i_0]) | (arr_2 [i_0] [i_0] [i_0]))) % (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 1676488069))))));
                arr_7 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_1] [i_1]) - (var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(_Bool)1] [i_1] [i_0]))))) : (((((/* implicit */int) var_16)) / (-1985813685)))))) ? (((((/* implicit */int) ((short) (signed char)18))) & ((((_Bool)1) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (438228854))))) : (((/* implicit */int) (((!(arr_0 [i_1]))) || (((((/* implicit */unsigned int) ((/* implicit */int) (short)32755))) == (arr_1 [i_1]))))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */signed char) ((11459735656355981915ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32756)))));
        arr_11 [(short)4] = ((/* implicit */int) ((((((/* implicit */int) (short)32741)) | (((/* implicit */int) (!(((/* implicit */_Bool) (short)32734))))))) > (((((/* implicit */_Bool) (short)-32740)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_3 [i_2] [i_2]))))));
        arr_12 [i_2] = ((/* implicit */unsigned long long int) arr_1 [i_2]);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_16 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (6007181732596559904ULL)))) ? (1718355654U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_3]))))))));
        arr_17 [i_3] [i_3] = ((/* implicit */signed char) (!((_Bool)1)));
        var_21 -= ((/* implicit */unsigned short) (!(min((arr_13 [i_3]), ((_Bool)0)))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        var_22 = ((/* implicit */short) ((arr_13 [i_4]) ? (((/* implicit */int) (!(((/* implicit */_Bool) min(((short)32755), (((/* implicit */short) (_Bool)1)))))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4] [i_4]))) > (arr_1 [i_4]))))));
        arr_21 [i_4] = ((/* implicit */int) (!(((((/* implicit */int) (!(arr_0 [i_4])))) > (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)44766)) && (((/* implicit */_Bool) arr_2 [(_Bool)1] [i_4] [(_Bool)1])))))))));
        arr_22 [(unsigned short)20] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_2 [i_4] [i_4] [i_4]) : (((/* implicit */unsigned int) arr_15 [i_4]))))) ? (((((/* implicit */_Bool) arr_14 [i_4])) ? (7342722326285732550ULL) : (((/* implicit */unsigned long long int) arr_20 [i_4])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_4])) >= (arr_15 [i_4]))))))))));
        arr_23 [i_4] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_1 [i_4]), (((/* implicit */unsigned int) (signed char)60))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (arr_19 [i_4] [i_4])))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_4] [i_4])) || (((/* implicit */_Bool) (signed char)-26)))) || (((1525008047U) != (arr_18 [(signed char)17])))))) : (((/* implicit */int) arr_14 [(_Bool)0])));
    }
    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_32 [i_5] [i_6] [0] = ((/* implicit */int) var_12);
                    var_23 = ((((/* implicit */_Bool) (signed char)-69)) ? (2015842478) : (584331839));
                    arr_33 [i_5] [i_5] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_15 [i_6]) ^ (((/* implicit */int) arr_31 [i_5] [i_5])))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_8 = 1; i_8 < 12; i_8 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_9 = 1; i_9 < 11; i_9 += 1) 
            {
                var_24 += ((/* implicit */unsigned long long int) (!(arr_31 [i_9 + 1] [i_8 - 1])));
                var_25 -= ((/* implicit */signed char) (!((!(arr_37 [i_5] [(_Bool)1])))));
                arr_38 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_8 - 1] [i_8 + 1])) ? (((/* implicit */int) arr_13 [i_8])) : (((/* implicit */int) ((arr_20 [i_5]) <= (arr_29 [i_9]))))));
                var_26 = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_3 [i_5] [i_9]))))));
            }
            for (unsigned short i_10 = 0; i_10 < 13; i_10 += 1) 
            {
                arr_42 [i_10] [i_8] [i_8] [i_5] = ((/* implicit */int) (_Bool)1);
                arr_43 [i_8] [i_8] [i_10] [(unsigned short)7] = ((/* implicit */signed char) ((unsigned long long int) arr_41 [i_8 + 1] [(_Bool)1]));
                arr_44 [i_5] [i_8] [i_5] [i_8] = ((/* implicit */int) (!(arr_31 [i_5] [i_8 - 1])));
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 13; i_11 += 3) 
                {
                    for (unsigned short i_12 = 2; i_12 < 12; i_12 += 2) 
                    {
                        {
                            var_27 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_28 [5ULL] [i_8] [5ULL]))));
                            var_28 = ((/* implicit */unsigned long long int) ((short) 2147483644));
                            var_29 = ((((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) (short)-32746)) : (arr_36 [i_8] [i_10] [i_12 - 2]))) + (((/* implicit */int) arr_40 [i_8 + 1] [i_8 - 1])));
                            arr_52 [i_12] [i_10] [i_10] [(signed char)2] [i_12] |= ((/* implicit */unsigned int) var_18);
                        }
                    } 
                } 
            }
            for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 2) 
                {
                    for (unsigned long long int i_15 = 3; i_15 < 12; i_15 += 1) 
                    {
                        {
                            arr_61 [i_8] [i_8] = ((signed char) arr_47 [i_8] [i_8 - 1] [i_13 + 1] [i_15 - 2] [i_15] [i_15 - 1]);
                            arr_62 [(_Bool)1] [i_8] [(_Bool)0] [i_8] [(unsigned short)2] [(signed char)6] = arr_15 [i_5];
                        }
                    } 
                } 
                arr_63 [i_5] [i_8] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_47 [i_5] [i_8 + 1] [i_13 + 1] [(short)7] [i_13] [i_8 + 1]))));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 13; i_16 += 2) 
                {
                    for (int i_17 = 1; i_17 < 10; i_17 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 591198983U)))) ? (arr_58 [i_5] [i_8] [i_13] [i_16] [i_17 + 1] [i_8]) : (arr_35 [i_8] [i_8])));
                            arr_70 [i_8] [i_8] [i_8] [i_8] [i_17 + 1] [i_5] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) -1627540586)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32755)))) - (((/* implicit */int) arr_65 [i_16]))));
                            arr_71 [i_5] [i_5] [i_8] [11U] [i_5] [i_5] = ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) (signed char)-43)))));
                            var_31 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_26 [i_8 - 1]))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned short i_18 = 0; i_18 < 13; i_18 += 3) 
            {
                for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                {
                    {
                        arr_78 [i_5] [(_Bool)1] [(_Bool)1] [i_8] [i_8] [(unsigned short)0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
                        var_32 = (!(((/* implicit */_Bool) ((arr_77 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8 + 1]) + (((/* implicit */int) (unsigned short)16383))))));
                        var_33 -= ((/* implicit */unsigned long long int) ((var_5) | (((((/* implicit */_Bool) var_5)) ? (arr_2 [i_8 - 1] [4] [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_5] [i_19 - 1])))))));
                        var_34 = ((/* implicit */_Bool) min((var_34), ((!((!(((/* implicit */_Bool) 2927181976U))))))));
                        arr_79 [(_Bool)1] [7U] [(short)3] [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) (signed char)18)) : (-1))) % (((/* implicit */int) ((unsigned short) arr_54 [i_19] [i_19] [i_19] [i_19])))));
                    }
                } 
            } 
        }
        arr_80 [i_5] = ((/* implicit */short) (((!(arr_54 [i_5] [i_5] [i_5] [i_5]))) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)7)))) : (((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */int) arr_67 [(unsigned short)2] [(_Bool)1] [i_5] [(short)10] [i_5])) : (((/* implicit */int) (_Bool)1))))));
        arr_81 [i_5] &= ((/* implicit */_Bool) ((arr_37 [i_5] [(unsigned short)7]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_3 [i_5] [i_5]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_5]))))) : (((/* implicit */int) (unsigned short)56955))))) : (var_5)));
    }
}
